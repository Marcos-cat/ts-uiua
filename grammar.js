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

        _function: $ => choice($.literal, $.inline_function), // TODO

        inline_function: $ =>
            seq('(', repeat(choice($._function, $._newline)), ')'),

        literal: $ => choice($.number, $.string, $.char), // TODO

        string: $ => choice($._string_literal, $.multiline_string), // TODO

        multiline_string: $ =>
            prec.right(repeat1(seq($._multiline_string_part, $._newline))),
        _multiline_string_part: $ => token(seq('$ ', /[^\n]*/)),

        _string_literal: $ => seq('"', repeat($._character), '"'),

        char: $ => seq('@', $._character),
        _character: $ => choice(/[^\\]/, $.escape),
        escape: $ =>
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
