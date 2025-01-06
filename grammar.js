const stack_primitives = '.,:◌∘?'.split('');
const noadic_primitives = ['⚂'];
const monadic_primitives = '¬±¯⌵√∿⌊⌈⁅⧻△⇡⊢⊣⇌♭¤⋯⍉⍆⍏⍖⊚⊛◴◰□⋕'.split('');
const dyadic_primitives = '=≠<>≥+-×÷◿ₙ↧↥∠ℂ≍⊟⊂⊏⊡↯↙↘↻⤸▽⌕⦷∊⊗⍤'.split('');

const noadic_builtins = ['tag', 'now', 'timezone'];
const monadic_builtins = [
    'wait',
    'recv',
    'tryrecv',
    'utf',
    'graphemes',
    'json',
    'csv',
    'xlsx',
    'binary', // Exp
    'type',
    'datetime',
    'fft', // Exp
    'repr',
];
const dyadic_builtins = [
    'base', // Exp
    'send',
    'map',
    'has',
    'get',
    'remove',
    'img',
    'gif',
    'layout', // Exp
    'gen',
    'regex',
];

const monadic_modifiers = '/∧\\∵≡⍚⊞⧅⧈⍥⊕⊜◇⋅⊙⟜⊸⤙⤚◡∩⌅°⌝⍩'.split('');
const dyadic_modifiers = '⍜⊃⊓⍢⬚⨬⍣'.split('');

module.exports = grammar({
    name: 'uiua',
    extras: $ => [/[ \t]+/, /#[^\n]*/],
    conflicts: $ => [[$.source_file]],

    rules: {
        source_file: $ =>
            seq(
                repeat($._newline),
                optional(
                    seq(
                        $._top_level,
                        repeat(seq(repeat1($._newline), $._top_level)),
                    ),
                ),
                repeat($._newline),
            ),

        _top_level: $ =>
            choice($.binding, $.import, $.module, repeat1($._function)),

        _newline: _ => token(choice('\n', '\r\n')),

        binding: $ => 'todo1', // TODO

        import: $ => 'todo2', // TODO

        module: $ => 'todo3', // TODO

        _function: $ =>
            choice(
                $.literal,
                $.inline_function,
                $.array,
                $.box_array,
                $.strand,
                $.primitive,
                $.modifier_function,
            ), // TODO

        primitive: $ =>
            choice(
                $.stack_primitive,
                $.noadic_primitive,
                $.monadic_primitive,
                $.dyadic_primitive,
            ),

        stack_primitive: _ => token(choice(...stack_primitives)),
        noadic_primitive: _ => token(...noadic_primitives),
        monadic_primitive: _ => token(choice(...monadic_primitives)),
        dyadic_primitive: _ => token(choice(...dyadic_primitives)),

        monadic_modifier: _ => token(choice(...monadic_modifiers)),
        dyadic_modifier: _ => token(choice(...dyadic_modifiers)),

        modifier_function: $ =>
            choice(
                seq($.monadic_modifier, $._function),
                seq($.dyadic_modifier, $._function, $._function),
                seq(
                    choice($.monadic_modifier, $.dyadic_modifier),
                    $.function_pack,
                ),
            ),

        function_pack: $ => seq('(', $.body, repeat1(seq('|', $.body)), ')'),

        identifier: $ => 'todo ident',

        inline_function: $ => seq('(', optional($.body), ')'),
        body: $ => repeat1(choice($._function, $._newline)),

        array: $ => seq('[', optional($.body), ']'),
        box_array: $ => seq('{', optional($.body), '}'),
        strand: $ =>
            prec.left(seq($._strand_item, repeat1(seq('_', $._strand_item)))),
        _strand_item: $ => choice($.literal, $.primitive, $.identifier),

        literal: $ => choice($.number, $.string, $.char), // TODO

        string: $ => choice($._string_literal, $.multiline_string), // TODO

        multiline_string: $ =>
            prec.right(repeat1(seq($._multiline_string_part, $._newline))),
        _multiline_string_part: _ => token(seq('$ ', /[^\n]*/)),

        _string_literal: $ => seq('"', repeat($._character), '"'),

        char: $ => seq('@', $._character),
        _character: $ => choice(/[^\\]/, $.escape),
        escape: _ =>
            seq(
                '\\',
                token.immediate(choice(/x../, /u\{[^{}]*\}/, /u.{4}/, /[^xu]/)),
            ),

        number: $ =>
            choice($.integer, $.decimal, $.fraction, $.constant, $.scientific),

        integer: _ => /[¯`]?\d+/,
        decimal: _ => /[¯`]?\d+\.\d+/,
        fraction: $ => seq($._fraction_part, '/', $._fraction_part),
        _fraction_part: $ => choice($.integer, $.constant),
        constant: _ => /[¯`]?[ηπτ∞]/,
        scientific: _ => /[¯`]?\d+(\.\d+)?[eE][`¯-]?\d+/,
    },
});
