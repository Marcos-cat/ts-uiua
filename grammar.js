const stack_prims = '.,:◌∘?'.split('');
const noadic_prims = ['⚂'];
const monadic_prims = '¬±¯⌵√∿⌊⌈⁅⧻△⇡⊢⊣⇌♭¤⋯⍉⍆⍏⍖⊚⊛◴◰□⋕'.split('');
const dyadic_prims = '=≠<>≥+-×÷◿ₙ↧↥∠ℂ≍⊂⊏⊡↯↙↘↻⤸▽⌕⦷∊⊗'.split('');

module.exports = grammar({
    name: 'uiua',
    extras: $ => [/[ \t]+/, /#[^\n]*/],

    rules: {
        source_file: $ => repeat($._top_level),

        _top_level: $ =>
            prec.right(
                choice(
                    $.binding,
                    $.import,
                    $.module,
                    $._function,
                    repeat1($._newline),
                ),
            ),

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
                $.prim,
            ), // TODO

        prim: $ =>
            choice($.stack_prim, $.noadic_prim, $.monadic_prim, $.dyadic_prim),

        stack_prim: _ => token(choice(...stack_prims)),
        noadic_prim: _ => token(...noadic_prims),
        monadic_prim: _ => token(choice(...monadic_prims)),
        dyadic_prim: _ => token(choice(...dyadic_prims)),

        identifier: $ => 'todo ident',

        inline_function: $ => seq('(', optional($._function_body), ')'),
        _function_body: $ => repeat1(choice($._function, $._newline)),

        array: $ => seq('[', optional($._function_body), ']'),
        box_array: $ => seq('{', optional($._function_body), '}'),
        strand: $ =>
            prec.left(seq($._strand_item, repeat1(seq('_', $._strand_item)))),
        _strand_item: $ => choice($.literal, $.prim, $.identifier),

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
