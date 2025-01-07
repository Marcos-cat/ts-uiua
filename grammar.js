const stack_glyphs = '.,:◌∘?'.split('');
const noadic_glyphs = ['⚂'];
const monadic_glyphs = '¬±¯⌵√∿⌊⌈⁅⧻△⇡⊢⊣⇌♭¤⋯⍉⍆⍏⍖⊚⊛◴◰□⋕'.split('');
const dyadic_glyphs = '=≠<>≥+-×÷◿ₙ↧↥∠ℂ≍⊟⊂⊏⊡↯↙↘↻⤸▽⌕⦷∊⊗⍤'.split('');

const noadic_nameds = ['tag', 'now', 'timezone'];
const monadic_nameds = [
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
const dyadic_nameds = [
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
const triadic_nameds = ['insert', 'audio'];

const monadic_glyph_modifiers = '/∧\\∵≡⍚⊞⧅⧈⍥⊕⊜◇⋅⊙⟜⊸⤙⤚◡∩⌅°⌝⍩'.split('');
const dyadic_glyph_modifiers = '⍜⊃⊓⍢⬚⨬⍣'.split('');

const monadic_named_modifiers = [
    'memo',
    'comptime',
    'quote', // Exp
    'dump',
    'spawn',
    'pool',
];
const dyadic_named_modifiers = ['path'];

const noadic_systems = [
    '&ts',
    '&args',
    '&sc',
    '&asr',
    '&b', // Exp
];
const monadic_systems = [
    '&cd',
    '&fo',
    '&fc',
    '&fmd',
    '&fde',
    '&ftr',
    '&fe',
    '&fld',
    '&fif',
    '&fras',
    '&frab',
    '&s',
    '&pf',
    '&p',
    '&epf',
    '&ep',
    '&raw',
    '&var',
    '&cl',
    '&runi',
    '&runc',
    '&runs',
    '&invk',
    '&ims',
    '&ap',
    '&tcpl',
    '&tlsl', // Exp
    '&tcpa',
    '&tcpc',
    '&tlsc',
    '&tcpsnb',
    '&tcpaddr',
    '&memfree', // Exp
    '&exit',
    '&sl',
    '&camcap',
];
const dyadic_systems = [
    '&fwa',
    '&rs',
    '&rb',
    '&ru',
    '&w',
    '&gifs',
    '&tcpsrt',
    '&tcpswt',
    '&tcpswt',
    '&ffi', // Exp
];
const triadic_systems = [
    '&memcpy', // Exp
];

const monadic_system_modifiers = ['&rl', '&ast'];

module.exports = grammar({
    name: 'uiua',
    extras: $ => [/[ \t]+/, /#[^\n\r]*/],
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
            seq(
                choice(
                    $.stack_glyph,
                    $.noadic_glyph,
                    $.monadic_glyph,
                    $.dyadic_glyph,

                    $.noadic_named,
                    $.monadic_named,
                    $.dyadic_named,
                    $.triadic_named,

                    $.noadic_system,
                    $.monadic_system,
                    $.dyadic_system,
                    $.triadic_system,
                ),
                optional($.subscript),
            ),

        stack_glyph: _ => token(choice(...stack_glyphs)),
        noadic_glyph: _ => token(choice(...noadic_glyphs)),
        monadic_glyph: _ => token(choice(...monadic_glyphs)),
        dyadic_glyph: _ => token(choice(...dyadic_glyphs)),

        noadic_named: _ => token(choice(...noadic_nameds)),
        monadic_named: _ => token(choice(...monadic_nameds)),
        dyadic_named: _ => token(choice(...dyadic_nameds)),
        triadic_named: _ => token(choice(...triadic_nameds)),

        noadic_system: _ => token(choice(...noadic_systems)),
        monadic_system: _ => token(choice(...monadic_systems)),
        dyadic_system: _ => token(choice(...dyadic_systems)),
        triadic_system: _ => token(choice(...triadic_systems)),

        monadic_glyph_modifier: _ => token(choice(...monadic_glyph_modifiers)),
        dyadic_glyph_modifier: _ => token(choice(...dyadic_glyph_modifiers)),

        monadic_named_modifier: _ => token(choice(...monadic_named_modifiers)),
        dyadic_named_modifier: _ => token(choice(...dyadic_named_modifiers)),

        monadic_system_modifier: _ =>
            token(choice(...monadic_system_modifiers)),

        monadic_modifier: $ =>
            seq(
                choice(
                    $.monadic_glyph_modifier,
                    $.monadic_named_modifier,
                    $.monadic_system_modifier,
                ),
                optional($.subscript),
            ),
        dyadic_modifier: $ =>
            seq(
                choice($.dyadic_glyph_modifier, $.dyadic_named_modifier),
                optional($.subscript),
            ),

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

        subscript: $ => /₋?[₀-₉]+/,

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
