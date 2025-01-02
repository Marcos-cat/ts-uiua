#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 57
#define LARGE_STATE_COUNT 9
#define SYMBOL_COUNT 37
#define ALIAS_COUNT 0
#define TOKEN_COUNT 18
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym__newline = 1,
  sym_binding = 2,
  sym_import = 3,
  sym_module = 4,
  anon_sym_LPAREN = 5,
  anon_sym_RPAREN = 6,
  sym__multiline_string_part = 7,
  anon_sym_DQUOTE = 8,
  anon_sym_AT = 9,
  aux_sym__character_token1 = 10,
  anon_sym_BSLASH = 11,
  aux_sym_escape_token1 = 12,
  sym_integer = 13,
  sym_decimal = 14,
  anon_sym_SLASH = 15,
  sym_constant = 16,
  sym_scientific = 17,
  sym_source_file = 18,
  sym__top_level = 19,
  sym__function = 20,
  sym_inline_function = 21,
  sym_literal = 22,
  sym_string = 23,
  sym_multiline_string = 24,
  sym__string_literal = 25,
  sym_char = 26,
  sym__character = 27,
  sym_escape = 28,
  sym_number = 29,
  sym_fraction = 30,
  sym__fraction_part = 31,
  aux_sym_source_file_repeat1 = 32,
  aux_sym__top_level_repeat1 = 33,
  aux_sym_inline_function_repeat1 = 34,
  aux_sym_multiline_string_repeat1 = 35,
  aux_sym__string_literal_repeat1 = 36,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__newline] = "_newline",
  [sym_binding] = "binding",
  [sym_import] = "import",
  [sym_module] = "module",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym__multiline_string_part] = "_multiline_string_part",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_AT] = "@",
  [aux_sym__character_token1] = "_character_token1",
  [anon_sym_BSLASH] = "\\",
  [aux_sym_escape_token1] = "escape_token1",
  [sym_integer] = "integer",
  [sym_decimal] = "decimal",
  [anon_sym_SLASH] = "/",
  [sym_constant] = "constant",
  [sym_scientific] = "scientific",
  [sym_source_file] = "source_file",
  [sym__top_level] = "_top_level",
  [sym__function] = "_function",
  [sym_inline_function] = "inline_function",
  [sym_literal] = "literal",
  [sym_string] = "string",
  [sym_multiline_string] = "multiline_string",
  [sym__string_literal] = "_string_literal",
  [sym_char] = "char",
  [sym__character] = "_character",
  [sym_escape] = "escape",
  [sym_number] = "number",
  [sym_fraction] = "fraction",
  [sym__fraction_part] = "_fraction_part",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__top_level_repeat1] = "_top_level_repeat1",
  [aux_sym_inline_function_repeat1] = "inline_function_repeat1",
  [aux_sym_multiline_string_repeat1] = "multiline_string_repeat1",
  [aux_sym__string_literal_repeat1] = "_string_literal_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__newline] = sym__newline,
  [sym_binding] = sym_binding,
  [sym_import] = sym_import,
  [sym_module] = sym_module,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym__multiline_string_part] = sym__multiline_string_part,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_AT] = anon_sym_AT,
  [aux_sym__character_token1] = aux_sym__character_token1,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [aux_sym_escape_token1] = aux_sym_escape_token1,
  [sym_integer] = sym_integer,
  [sym_decimal] = sym_decimal,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [sym_constant] = sym_constant,
  [sym_scientific] = sym_scientific,
  [sym_source_file] = sym_source_file,
  [sym__top_level] = sym__top_level,
  [sym__function] = sym__function,
  [sym_inline_function] = sym_inline_function,
  [sym_literal] = sym_literal,
  [sym_string] = sym_string,
  [sym_multiline_string] = sym_multiline_string,
  [sym__string_literal] = sym__string_literal,
  [sym_char] = sym_char,
  [sym__character] = sym__character,
  [sym_escape] = sym_escape,
  [sym_number] = sym_number,
  [sym_fraction] = sym_fraction,
  [sym__fraction_part] = sym__fraction_part,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym__top_level_repeat1] = aux_sym__top_level_repeat1,
  [aux_sym_inline_function_repeat1] = aux_sym_inline_function_repeat1,
  [aux_sym_multiline_string_repeat1] = aux_sym_multiline_string_repeat1,
  [aux_sym__string_literal_repeat1] = aux_sym__string_literal_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym_binding] = {
    .visible = true,
    .named = true,
  },
  [sym_import] = {
    .visible = true,
    .named = true,
  },
  [sym_module] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym__multiline_string_part] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__character_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_escape_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_decimal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_constant] = {
    .visible = true,
    .named = true,
  },
  [sym_scientific] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__top_level] = {
    .visible = false,
    .named = true,
  },
  [sym__function] = {
    .visible = false,
    .named = true,
  },
  [sym_inline_function] = {
    .visible = true,
    .named = true,
  },
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_multiline_string] = {
    .visible = true,
    .named = true,
  },
  [sym__string_literal] = {
    .visible = false,
    .named = true,
  },
  [sym_char] = {
    .visible = true,
    .named = true,
  },
  [sym__character] = {
    .visible = false,
    .named = true,
  },
  [sym_escape] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_fraction] = {
    .visible = true,
    .named = true,
  },
  [sym__fraction_part] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__top_level_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_inline_function_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_multiline_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 5,
  [7] = 7,
  [8] = 4,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 11,
  [26] = 9,
  [27] = 13,
  [28] = 17,
  [29] = 16,
  [30] = 24,
  [31] = 15,
  [32] = 18,
  [33] = 14,
  [34] = 19,
  [35] = 21,
  [36] = 22,
  [37] = 23,
  [38] = 20,
  [39] = 39,
  [40] = 40,
  [41] = 39,
  [42] = 42,
  [43] = 42,
  [44] = 44,
  [45] = 44,
  [46] = 23,
  [47] = 47,
  [48] = 47,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 50,
  [53] = 53,
  [54] = 51,
  [55] = 51,
  [56] = 53,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(63);
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == '\r') ADVANCE(6);
      if (lookahead == '"') ADVANCE(137);
      if (lookahead == '#') SKIP(60);
      if (lookahead == '$') ADVANCE(36);
      if (lookahead == '(') ADVANCE(86);
      if (lookahead == ')') ADVANCE(97);
      if (lookahead == '/') ADVANCE(181);
      if (lookahead == '@') ADVANCE(149);
      if (lookahead == 't') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0);
      if (lookahead == '`' ||
          lookahead == 0xaf) ADVANCE(51);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(177);
      END_STATE();
    case 1:
      if (lookahead == '\t') SKIP(15);
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead == '"') ADVANCE(138);
      if (lookahead == '#') SKIP(15);
      if (lookahead == '$') ADVANCE(1);
      if (lookahead == '(') ADVANCE(87);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == '/') ADVANCE(182);
      if (lookahead == '@') ADVANCE(150);
      if (lookahead == 't') ADVANCE(13);
      if (lookahead == '`' ||
          lookahead == 0xaf) ADVANCE(15);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(172);
      if (lookahead != 0) SKIP(15);
      END_STATE();
    case 2:
      if (lookahead == '\t') SKIP(21);
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == '\r') ADVANCE(21);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead == '"') ADVANCE(140);
      if (lookahead == '#') SKIP(21);
      if (lookahead == '$') ADVANCE(2);
      if (lookahead == '(') ADVANCE(89);
      if (lookahead == '@') ADVANCE(152);
      if (lookahead == 't') ADVANCE(19);
      if (lookahead == '`' ||
          lookahead == 0xaf) ADVANCE(21);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(173);
      if (lookahead != 0) SKIP(21);
      END_STATE();
    case 3:
      if (lookahead == '\t') SKIP(23);
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == '\r') ADVANCE(23);
      if (lookahead == ' ') ADVANCE(125);
      if (lookahead == '"') ADVANCE(142);
      if (lookahead == '#') SKIP(23);
      if (lookahead == '$') ADVANCE(3);
      if (lookahead == '(') ADVANCE(91);
      if (lookahead == ')') ADVANCE(100);
      if (lookahead == '@') ADVANCE(154);
      if (lookahead == '`' ||
          lookahead == 0xaf) ADVANCE(23);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(174);
      if (lookahead != 0) SKIP(23);
      END_STATE();
    case 4:
      if (lookahead == '\t') SKIP(29);
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == '\r') ADVANCE(29);
      if (lookahead == ' ') ADVANCE(132);
      if (lookahead == '"') ADVANCE(144);
      if (lookahead == '#') SKIP(29);
      if (lookahead == '$') ADVANCE(4);
      if (lookahead == '(') ADVANCE(93);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == '@') ADVANCE(156);
      if (lookahead == 't') ADVANCE(27);
      if (lookahead == '`' ||
          lookahead == 0xaf) ADVANCE(29);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      if (lookahead != 0) SKIP(29);
      END_STATE();
    case 5:
      if (lookahead == '\t') SKIP(31);
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == '\r') ADVANCE(31);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == '"') ADVANCE(146);
      if (lookahead == '#') SKIP(31);
      if (lookahead == '$') ADVANCE(5);
      if (lookahead == '(') ADVANCE(95);
      if (lookahead == ')') ADVANCE(102);
      if (lookahead == '/') ADVANCE(186);
      if (lookahead == '@') ADVANCE(158);
      if (lookahead == '`' ||
          lookahead == 0xaf) ADVANCE(31);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(176);
      if (lookahead != 0) SKIP(31);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(64);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == '\r') ADVANCE(6);
      if (lookahead == '"') ADVANCE(137);
      if (lookahead == '#') SKIP(23);
      if (lookahead == '$') ADVANCE(36);
      if (lookahead == '(') ADVANCE(86);
      if (lookahead == ')') ADVANCE(97);
      if (lookahead == '@') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(7);
      if (lookahead == '`' ||
          lookahead == 0xaf) ADVANCE(51);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(177);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == '\r') ADVANCE(6);
      if (lookahead == '"') ADVANCE(137);
      if (lookahead == '#') SKIP(31);
      if (lookahead == '$') ADVANCE(36);
      if (lookahead == '(') ADVANCE(86);
      if (lookahead == ')') ADVANCE(97);
      if (lookahead == '/') ADVANCE(181);
      if (lookahead == '@') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(8);
      if (lookahead == '`' ||
          lookahead == 0xaf) ADVANCE(51);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(177);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == '\r') ADVANCE(6);
      if (lookahead == '#') SKIP(32);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(9);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '"') ADVANCE(138);
      if (lookahead == '#') SKIP(15);
      if (lookahead == '$') ADVANCE(1);
      if (lookahead == '(') ADVANCE(87);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '/') ADVANCE(182);
      if (lookahead == '@') ADVANCE(150);
      if (lookahead == 't') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(15);
      if (lookahead == '`' ||
          lookahead == 0xaf) ADVANCE(15);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(172);
      if (lookahead != 0) SKIP(15);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '"') ADVANCE(138);
      if (lookahead == '#') SKIP(15);
      if (lookahead == '$') ADVANCE(1);
      if (lookahead == '(') ADVANCE(87);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == '/') ADVANCE(182);
      if (lookahead == '1') ADVANCE(66);
      if (lookahead == '2') ADVANCE(73);
      if (lookahead == '3') ADVANCE(80);
      if (lookahead == '@') ADVANCE(150);
      if (lookahead == 't') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(15);
      if (lookahead == '`' ||
          lookahead == 0xaf) ADVANCE(15);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(172);
      if (lookahead != 0) SKIP(15);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '"') ADVANCE(138);
      if (lookahead == '#') SKIP(15);
      if (lookahead == '$') ADVANCE(1);
      if (lookahead == '(') ADVANCE(87);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == '/') ADVANCE(182);
      if (lookahead == '@') ADVANCE(150);
      if (lookahead == 'd') ADVANCE(14);
      if (lookahead == 't') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(15);
      if (lookahead == '`' ||
          lookahead == 0xaf) ADVANCE(15);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(172);
      if (lookahead != 0) SKIP(15);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '"') ADVANCE(138);
      if (lookahead == '#') SKIP(15);
      if (lookahead == '$') ADVANCE(1);
      if (lookahead == '(') ADVANCE(87);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == '/') ADVANCE(182);
      if (lookahead == '@') ADVANCE(150);
      if (lookahead == 'o') ADVANCE(12);
      if (lookahead == 't') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(15);
      if (lookahead == '`' ||
          lookahead == 0xaf) ADVANCE(15);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(172);
      if (lookahead != 0) SKIP(15);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '"') ADVANCE(138);
      if (lookahead == '#') SKIP(15);
      if (lookahead == '$') ADVANCE(1);
      if (lookahead == '(') ADVANCE(87);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == '/') ADVANCE(182);
      if (lookahead == '@') ADVANCE(150);
      if (lookahead == 'o') ADVANCE(11);
      if (lookahead == 't') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(15);
      if (lookahead == '`' ||
          lookahead == 0xaf) ADVANCE(15);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(172);
      if (lookahead != 0) SKIP(15);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '"') ADVANCE(138);
      if (lookahead == '#') SKIP(15);
      if (lookahead == '$') ADVANCE(1);
      if (lookahead == '(') ADVANCE(87);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == '/') ADVANCE(182);
      if (lookahead == '@') ADVANCE(150);
      if (lookahead == 't') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(15);
      if (lookahead == '`' ||
          lookahead == 0xaf) ADVANCE(15);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(172);
      if (lookahead != 0) SKIP(15);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == '\r') ADVANCE(21);
      if (lookahead == '"') ADVANCE(140);
      if (lookahead == '#') SKIP(21);
      if (lookahead == '$') ADVANCE(2);
      if (lookahead == '(') ADVANCE(89);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == '@') ADVANCE(152);
      if (lookahead == 't') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(21);
      if (lookahead == '`' ||
          lookahead == 0xaf) ADVANCE(21);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(173);
      if (lookahead != 0) SKIP(21);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == '\r') ADVANCE(21);
      if (lookahead == '"') ADVANCE(140);
      if (lookahead == '#') SKIP(21);
      if (lookahead == '$') ADVANCE(2);
      if (lookahead == '(') ADVANCE(89);
      if (lookahead == '1') ADVANCE(68);
      if (lookahead == '2') ADVANCE(75);
      if (lookahead == '3') ADVANCE(82);
      if (lookahead == '@') ADVANCE(152);
      if (lookahead == 't') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(21);
      if (lookahead == '`' ||
          lookahead == 0xaf) ADVANCE(21);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(173);
      if (lookahead != 0) SKIP(21);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == '\r') ADVANCE(21);
      if (lookahead == '"') ADVANCE(140);
      if (lookahead == '#') SKIP(21);
      if (lookahead == '$') ADVANCE(2);
      if (lookahead == '(') ADVANCE(89);
      if (lookahead == '@') ADVANCE(152);
      if (lookahead == 'd') ADVANCE(20);
      if (lookahead == 't') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(21);
      if (lookahead == '`' ||
          lookahead == 0xaf) ADVANCE(21);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(173);
      if (lookahead != 0) SKIP(21);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == '\r') ADVANCE(21);
      if (lookahead == '"') ADVANCE(140);
      if (lookahead == '#') SKIP(21);
      if (lookahead == '$') ADVANCE(2);
      if (lookahead == '(') ADVANCE(89);
      if (lookahead == '@') ADVANCE(152);
      if (lookahead == 'o') ADVANCE(18);
      if (lookahead == 't') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(21);
      if (lookahead == '`' ||
          lookahead == 0xaf) ADVANCE(21);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(173);
      if (lookahead != 0) SKIP(21);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == '\r') ADVANCE(21);
      if (lookahead == '"') ADVANCE(140);
      if (lookahead == '#') SKIP(21);
      if (lookahead == '$') ADVANCE(2);
      if (lookahead == '(') ADVANCE(89);
      if (lookahead == '@') ADVANCE(152);
      if (lookahead == 'o') ADVANCE(17);
      if (lookahead == 't') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(21);
      if (lookahead == '`' ||
          lookahead == 0xaf) ADVANCE(21);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(173);
      if (lookahead != 0) SKIP(21);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == '\r') ADVANCE(21);
      if (lookahead == '"') ADVANCE(140);
      if (lookahead == '#') SKIP(21);
      if (lookahead == '$') ADVANCE(2);
      if (lookahead == '(') ADVANCE(89);
      if (lookahead == '@') ADVANCE(152);
      if (lookahead == 't') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(21);
      if (lookahead == '`' ||
          lookahead == 0xaf) ADVANCE(21);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(173);
      if (lookahead != 0) SKIP(21);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == '\r') ADVANCE(23);
      if (lookahead == '"') ADVANCE(142);
      if (lookahead == '#') SKIP(23);
      if (lookahead == '$') ADVANCE(3);
      if (lookahead == '(') ADVANCE(91);
      if (lookahead == ')') ADVANCE(100);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '@') ADVANCE(154);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(23);
      if (lookahead == '`' ||
          lookahead == 0xaf) ADVANCE(23);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(174);
      if (lookahead != 0) SKIP(23);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == '\r') ADVANCE(23);
      if (lookahead == '"') ADVANCE(142);
      if (lookahead == '#') SKIP(23);
      if (lookahead == '$') ADVANCE(3);
      if (lookahead == '(') ADVANCE(91);
      if (lookahead == ')') ADVANCE(100);
      if (lookahead == '@') ADVANCE(154);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(23);
      if (lookahead == '`' ||
          lookahead == 0xaf) ADVANCE(23);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(174);
      if (lookahead != 0) SKIP(23);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == '\r') ADVANCE(29);
      if (lookahead == '"') ADVANCE(144);
      if (lookahead == '#') SKIP(29);
      if (lookahead == '$') ADVANCE(4);
      if (lookahead == '(') ADVANCE(93);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == '@') ADVANCE(156);
      if (lookahead == 't') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(29);
      if (lookahead == '`' ||
          lookahead == 0xaf) ADVANCE(29);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      if (lookahead != 0) SKIP(29);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == '\r') ADVANCE(29);
      if (lookahead == '"') ADVANCE(144);
      if (lookahead == '#') SKIP(29);
      if (lookahead == '$') ADVANCE(4);
      if (lookahead == '(') ADVANCE(93);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == '1') ADVANCE(70);
      if (lookahead == '2') ADVANCE(77);
      if (lookahead == '3') ADVANCE(84);
      if (lookahead == '@') ADVANCE(156);
      if (lookahead == 't') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(29);
      if (lookahead == '`' ||
          lookahead == 0xaf) ADVANCE(29);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      if (lookahead != 0) SKIP(29);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == '\r') ADVANCE(29);
      if (lookahead == '"') ADVANCE(144);
      if (lookahead == '#') SKIP(29);
      if (lookahead == '$') ADVANCE(4);
      if (lookahead == '(') ADVANCE(93);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == '@') ADVANCE(156);
      if (lookahead == 'd') ADVANCE(28);
      if (lookahead == 't') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(29);
      if (lookahead == '`' ||
          lookahead == 0xaf) ADVANCE(29);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      if (lookahead != 0) SKIP(29);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == '\r') ADVANCE(29);
      if (lookahead == '"') ADVANCE(144);
      if (lookahead == '#') SKIP(29);
      if (lookahead == '$') ADVANCE(4);
      if (lookahead == '(') ADVANCE(93);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == '@') ADVANCE(156);
      if (lookahead == 'o') ADVANCE(26);
      if (lookahead == 't') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(29);
      if (lookahead == '`' ||
          lookahead == 0xaf) ADVANCE(29);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      if (lookahead != 0) SKIP(29);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == '\r') ADVANCE(29);
      if (lookahead == '"') ADVANCE(144);
      if (lookahead == '#') SKIP(29);
      if (lookahead == '$') ADVANCE(4);
      if (lookahead == '(') ADVANCE(93);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == '@') ADVANCE(156);
      if (lookahead == 'o') ADVANCE(25);
      if (lookahead == 't') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(29);
      if (lookahead == '`' ||
          lookahead == 0xaf) ADVANCE(29);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      if (lookahead != 0) SKIP(29);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == '\r') ADVANCE(29);
      if (lookahead == '"') ADVANCE(144);
      if (lookahead == '#') SKIP(29);
      if (lookahead == '$') ADVANCE(4);
      if (lookahead == '(') ADVANCE(93);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == '@') ADVANCE(156);
      if (lookahead == 't') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(29);
      if (lookahead == '`' ||
          lookahead == 0xaf) ADVANCE(29);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      if (lookahead != 0) SKIP(29);
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == '\r') ADVANCE(31);
      if (lookahead == '"') ADVANCE(146);
      if (lookahead == '#') SKIP(31);
      if (lookahead == '$') ADVANCE(5);
      if (lookahead == '(') ADVANCE(95);
      if (lookahead == ')') ADVANCE(102);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == '/') ADVANCE(186);
      if (lookahead == '@') ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(31);
      if (lookahead == '`' ||
          lookahead == 0xaf) ADVANCE(31);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(176);
      if (lookahead != 0) SKIP(31);
      END_STATE();
    case 31:
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == '\r') ADVANCE(31);
      if (lookahead == '"') ADVANCE(146);
      if (lookahead == '#') SKIP(31);
      if (lookahead == '$') ADVANCE(5);
      if (lookahead == '(') ADVANCE(95);
      if (lookahead == ')') ADVANCE(102);
      if (lookahead == '/') ADVANCE(186);
      if (lookahead == '@') ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(31);
      if (lookahead == '`' ||
          lookahead == 0xaf) ADVANCE(31);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(176);
      if (lookahead != 0) SKIP(31);
      END_STATE();
    case 32:
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == '\r') ADVANCE(32);
      if (lookahead == '#') SKIP(32);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(32);
      if (lookahead != 0) SKIP(32);
      END_STATE();
    case 33:
      if (lookahead == '\n') ADVANCE(49);
      if (lookahead == '{') ADVANCE(57);
      if (lookahead == '}') ADVANCE(171);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 34:
      if (lookahead == '\n') ADVANCE(49);
      if (lookahead == '{') ADVANCE(56);
      if (lookahead == '}') ADVANCE(170);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 35:
      if (lookahead == '\n') ADVANCE(49);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(168);
      if (lookahead != 0) ADVANCE(169);
      END_STATE();
    case 36:
      if (lookahead == ' ') ADVANCE(136);
      END_STATE();
    case 37:
      if (lookahead == '"') ADVANCE(137);
      if (lookahead == '#') ADVANCE(161);
      if (lookahead == '\\') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(163);
      if (lookahead != 0) ADVANCE(160);
      END_STATE();
    case 38:
      if (lookahead == '#') ADVANCE(162);
      if (lookahead == '\\') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(164);
      if (lookahead != 0) ADVANCE(160);
      END_STATE();
    case 39:
      if (lookahead == '#') SKIP(40);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(39);
      if (lookahead == '`' ||
          lookahead == 0xaf) ADVANCE(52);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      END_STATE();
    case 40:
      if (lookahead == '#') SKIP(40);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(40);
      if (lookahead == '`' ||
          lookahead == 0xaf) ADVANCE(40);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') SKIP(40);
      END_STATE();
    case 41:
      if (lookahead == '#') SKIP(42);
      if (lookahead == '/') ADVANCE(181);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(41);
      END_STATE();
    case 42:
      if (lookahead == '#') SKIP(42);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(42);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') SKIP(42);
      END_STATE();
    case 43:
      if (lookahead == '1') ADVANCE(65);
      if (lookahead == '2') ADVANCE(72);
      if (lookahead == '3') ADVANCE(79);
      END_STATE();
    case 44:
      if (lookahead == 'd') ADVANCE(46);
      END_STATE();
    case 45:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 46:
      if (lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 47:
      if (lookahead == 'u') ADVANCE(48);
      if (lookahead == 'x') ADVANCE(57);
      if (lookahead != 0) ADVANCE(168);
      END_STATE();
    case 48:
      if (lookahead == '{') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 49:
      if (lookahead == '}') ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(49);
      END_STATE();
    case 50:
      if (lookahead == '-' ||
          lookahead == '`' ||
          lookahead == 0xaf) ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(196);
      END_STATE();
    case 51:
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(177);
      END_STATE();
    case 52:
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(180);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(196);
      END_STATE();
    case 55:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(57);
      END_STATE();
    case 56:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(168);
      END_STATE();
    case 57:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(56);
      END_STATE();
    case 58:
      if (eof) ADVANCE(63);
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == '\r') ADVANCE(6);
      if (lookahead == '"') ADVANCE(137);
      if (lookahead == '#') SKIP(61);
      if (lookahead == '$') ADVANCE(36);
      if (lookahead == '(') ADVANCE(86);
      if (lookahead == '@') ADVANCE(149);
      if (lookahead == 't') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(58);
      if (lookahead == '`' ||
          lookahead == 0xaf) ADVANCE(51);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(177);
      END_STATE();
    case 59:
      if (eof) ADVANCE(63);
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == '\r') ADVANCE(6);
      if (lookahead == '"') ADVANCE(137);
      if (lookahead == '#') SKIP(62);
      if (lookahead == '$') ADVANCE(36);
      if (lookahead == '(') ADVANCE(86);
      if (lookahead == '/') ADVANCE(181);
      if (lookahead == '@') ADVANCE(149);
      if (lookahead == 't') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(59);
      if (lookahead == '`' ||
          lookahead == 0xaf) ADVANCE(51);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(177);
      END_STATE();
    case 60:
      if (eof) ADVANCE(63);
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '"') ADVANCE(138);
      if (lookahead == '#') SKIP(60);
      if (lookahead == '$') ADVANCE(1);
      if (lookahead == '(') ADVANCE(87);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == '/') ADVANCE(182);
      if (lookahead == '@') ADVANCE(150);
      if (lookahead == 't') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(60);
      if (lookahead == '`' ||
          lookahead == 0xaf) ADVANCE(15);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(172);
      if (lookahead != 0) SKIP(60);
      END_STATE();
    case 61:
      if (eof) ADVANCE(63);
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == '\r') ADVANCE(21);
      if (lookahead == '"') ADVANCE(140);
      if (lookahead == '#') SKIP(61);
      if (lookahead == '$') ADVANCE(2);
      if (lookahead == '(') ADVANCE(89);
      if (lookahead == '@') ADVANCE(152);
      if (lookahead == 't') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(61);
      if (lookahead == '`' ||
          lookahead == 0xaf) ADVANCE(21);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(173);
      if (lookahead != 0) SKIP(61);
      END_STATE();
    case 62:
      if (eof) ADVANCE(63);
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == '\r') ADVANCE(29);
      if (lookahead == '"') ADVANCE(144);
      if (lookahead == '#') SKIP(62);
      if (lookahead == '$') ADVANCE(4);
      if (lookahead == '(') ADVANCE(93);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == '@') ADVANCE(156);
      if (lookahead == 't') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(62);
      if (lookahead == '`' ||
          lookahead == 0xaf) ADVANCE(29);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      if (lookahead != 0) SKIP(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym__newline);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_binding);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_binding);
      ADVANCE_MAP(
        '\r', 15,
        '"', 138,
        '$', 1,
        '(', 87,
        ')', 98,
        '.', 15,
        '/', 182,
        '@', 150,
        't', 13,
        'E', 10,
        'e', 10,
        '`', 15,
        0xaf, 15,
        0x3b7, 190,
        0x3c0, 190,
        0x3c4, 190,
        0x221e, 190,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(172);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_binding);
      ADVANCE_MAP(
        '\r', 115,
        '"', 139,
        '#', 115,
        '$', 104,
        '(', 88,
        ')', 99,
        '.', 115,
        '/', 183,
        '@', 151,
        't', 113,
        '\t', 115,
        ' ', 115,
        'E', 109,
        'e', 109,
        '`', 115,
        0xaf, 115,
        0x3b7, 115,
        0x3c0, 115,
        0x3c4, 115,
        0x221e, 115,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(115);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_binding);
      ADVANCE_MAP(
        '\r', 21,
        '"', 140,
        '$', 2,
        '(', 89,
        '.', 21,
        '@', 152,
        't', 19,
        'E', 16,
        'e', 16,
        '`', 21,
        0xaf, 21,
        0x3b7, 191,
        0x3c0, 191,
        0x3c4, 191,
        0x221e, 191,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(173);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_binding);
      ADVANCE_MAP(
        '\r', 122,
        '"', 141,
        '#', 122,
        '$', 105,
        '(', 90,
        '.', 122,
        '@', 153,
        't', 120,
        '\t', 122,
        ' ', 122,
        'E', 116,
        'e', 116,
        '`', 122,
        0xaf, 122,
        0x3b7, 122,
        0x3c0, 122,
        0x3c4, 122,
        0x221e, 122,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(122);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_binding);
      ADVANCE_MAP(
        '\r', 29,
        '"', 144,
        '$', 4,
        '(', 93,
        '.', 29,
        '/', 184,
        '@', 156,
        't', 27,
        'E', 24,
        'e', 24,
        '`', 29,
        0xaf, 29,
        0x3b7, 193,
        0x3c0, 193,
        0x3c4, 193,
        0x221e, 193,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_binding);
      ADVANCE_MAP(
        '\r', 132,
        '"', 145,
        '#', 132,
        '$', 107,
        '(', 94,
        '.', 132,
        '/', 185,
        '@', 157,
        't', 130,
        '\t', 132,
        ' ', 132,
        'E', 126,
        'e', 126,
        '`', 132,
        0xaf, 132,
        0x3b7, 132,
        0x3c0, 132,
        0x3c4, 132,
        0x221e, 132,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_import);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_import);
      ADVANCE_MAP(
        '\r', 15,
        '"', 138,
        '$', 1,
        '(', 87,
        ')', 98,
        '.', 15,
        '/', 182,
        '@', 150,
        't', 13,
        'E', 10,
        'e', 10,
        '`', 15,
        0xaf, 15,
        0x3b7, 190,
        0x3c0, 190,
        0x3c4, 190,
        0x221e, 190,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(172);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_import);
      ADVANCE_MAP(
        '\r', 115,
        '"', 139,
        '#', 115,
        '$', 104,
        '(', 88,
        ')', 99,
        '.', 115,
        '/', 183,
        '@', 151,
        't', 113,
        '\t', 115,
        ' ', 115,
        'E', 109,
        'e', 109,
        '`', 115,
        0xaf, 115,
        0x3b7, 115,
        0x3c0, 115,
        0x3c4, 115,
        0x221e, 115,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(115);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_import);
      ADVANCE_MAP(
        '\r', 21,
        '"', 140,
        '$', 2,
        '(', 89,
        '.', 21,
        '@', 152,
        't', 19,
        'E', 16,
        'e', 16,
        '`', 21,
        0xaf, 21,
        0x3b7, 191,
        0x3c0, 191,
        0x3c4, 191,
        0x221e, 191,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(173);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_import);
      ADVANCE_MAP(
        '\r', 122,
        '"', 141,
        '#', 122,
        '$', 105,
        '(', 90,
        '.', 122,
        '@', 153,
        't', 120,
        '\t', 122,
        ' ', 122,
        'E', 116,
        'e', 116,
        '`', 122,
        0xaf, 122,
        0x3b7, 122,
        0x3c0, 122,
        0x3c4, 122,
        0x221e, 122,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(122);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_import);
      ADVANCE_MAP(
        '\r', 29,
        '"', 144,
        '$', 4,
        '(', 93,
        '.', 29,
        '/', 184,
        '@', 156,
        't', 27,
        'E', 24,
        'e', 24,
        '`', 29,
        0xaf, 29,
        0x3b7, 193,
        0x3c0, 193,
        0x3c4, 193,
        0x221e, 193,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_import);
      ADVANCE_MAP(
        '\r', 132,
        '"', 145,
        '#', 132,
        '$', 107,
        '(', 94,
        '.', 132,
        '/', 185,
        '@', 157,
        't', 130,
        '\t', 132,
        ' ', 132,
        'E', 126,
        'e', 126,
        '`', 132,
        0xaf, 132,
        0x3b7, 132,
        0x3c0, 132,
        0x3c4, 132,
        0x221e, 132,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_module);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_module);
      ADVANCE_MAP(
        '\r', 15,
        '"', 138,
        '$', 1,
        '(', 87,
        ')', 98,
        '.', 15,
        '/', 182,
        '@', 150,
        't', 13,
        'E', 10,
        'e', 10,
        '`', 15,
        0xaf, 15,
        0x3b7, 190,
        0x3c0, 190,
        0x3c4, 190,
        0x221e, 190,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(172);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_module);
      ADVANCE_MAP(
        '\r', 115,
        '"', 139,
        '#', 115,
        '$', 104,
        '(', 88,
        ')', 99,
        '.', 115,
        '/', 183,
        '@', 151,
        't', 113,
        '\t', 115,
        ' ', 115,
        'E', 109,
        'e', 109,
        '`', 115,
        0xaf, 115,
        0x3b7, 115,
        0x3c0, 115,
        0x3c4, 115,
        0x221e, 115,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(115);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_module);
      ADVANCE_MAP(
        '\r', 21,
        '"', 140,
        '$', 2,
        '(', 89,
        '.', 21,
        '@', 152,
        't', 19,
        'E', 16,
        'e', 16,
        '`', 21,
        0xaf, 21,
        0x3b7, 191,
        0x3c0, 191,
        0x3c4, 191,
        0x221e, 191,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(173);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_module);
      ADVANCE_MAP(
        '\r', 122,
        '"', 141,
        '#', 122,
        '$', 105,
        '(', 90,
        '.', 122,
        '@', 153,
        't', 120,
        '\t', 122,
        ' ', 122,
        'E', 116,
        'e', 116,
        '`', 122,
        0xaf, 122,
        0x3b7, 122,
        0x3c0, 122,
        0x3c4, 122,
        0x221e, 122,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(122);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_module);
      ADVANCE_MAP(
        '\r', 29,
        '"', 144,
        '$', 4,
        '(', 93,
        '.', 29,
        '/', 184,
        '@', 156,
        't', 27,
        'E', 24,
        'e', 24,
        '`', 29,
        0xaf, 29,
        0x3b7, 193,
        0x3c0, 193,
        0x3c4, 193,
        0x221e, 193,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_module);
      ADVANCE_MAP(
        '\r', 132,
        '"', 145,
        '#', 132,
        '$', 107,
        '(', 94,
        '.', 132,
        '/', 185,
        '@', 157,
        't', 130,
        '\t', 132,
        ' ', 132,
        'E', 126,
        'e', 126,
        '`', 132,
        0xaf, 132,
        0x3b7, 132,
        0x3c0, 132,
        0x3c4, 132,
        0x221e, 132,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      ADVANCE_MAP(
        '\r', 15,
        '"', 138,
        '$', 1,
        '(', 87,
        ')', 98,
        '/', 182,
        '@', 150,
        't', 13,
        '`', 15,
        0xaf, 15,
        0x3b7, 190,
        0x3c0, 190,
        0x3c4, 190,
        0x221e, 190,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(172);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      ADVANCE_MAP(
        '\r', 115,
        '"', 139,
        '#', 115,
        '$', 104,
        '(', 88,
        ')', 99,
        '/', 183,
        '@', 151,
        't', 113,
        '\t', 115,
        ' ', 115,
        '`', 115,
        0xaf, 115,
        0x3b7, 115,
        0x3c0, 115,
        0x3c4, 115,
        0x221e, 115,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(115);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      ADVANCE_MAP(
        '\r', 21,
        '"', 140,
        '$', 2,
        '(', 89,
        '@', 152,
        't', 19,
        '`', 21,
        0xaf, 21,
        0x3b7, 191,
        0x3c0, 191,
        0x3c4, 191,
        0x221e, 191,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(173);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      ADVANCE_MAP(
        '\r', 122,
        '"', 141,
        '#', 122,
        '$', 105,
        '(', 90,
        '@', 153,
        't', 120,
        '\t', 122,
        ' ', 122,
        '`', 122,
        0xaf, 122,
        0x3b7, 122,
        0x3c0, 122,
        0x3c4, 122,
        0x221e, 122,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(122);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      ADVANCE_MAP(
        '\r', 23,
        '"', 142,
        '$', 3,
        '(', 91,
        ')', 100,
        '@', 154,
        '`', 23,
        0xaf, 23,
        0x3b7, 192,
        0x3c0, 192,
        0x3c4, 192,
        0x221e, 192,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(174);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      ADVANCE_MAP(
        '\r', 125,
        '"', 143,
        '#', 125,
        '$', 106,
        '(', 92,
        ')', 101,
        '@', 155,
        '\t', 125,
        ' ', 125,
        '`', 125,
        0xaf, 125,
        0x3b7, 125,
        0x3c0, 125,
        0x3c4, 125,
        0x221e, 125,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(125);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      ADVANCE_MAP(
        '\r', 29,
        '"', 144,
        '$', 4,
        '(', 93,
        '/', 184,
        '@', 156,
        't', 27,
        '`', 29,
        0xaf, 29,
        0x3b7, 193,
        0x3c0, 193,
        0x3c4, 193,
        0x221e, 193,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      ADVANCE_MAP(
        '\r', 132,
        '"', 145,
        '#', 132,
        '$', 107,
        '(', 94,
        '/', 185,
        '@', 157,
        't', 130,
        '\t', 132,
        ' ', 132,
        '`', 132,
        0xaf, 132,
        0x3b7, 132,
        0x3c0, 132,
        0x3c4, 132,
        0x221e, 132,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      ADVANCE_MAP(
        '\r', 31,
        '"', 146,
        '$', 5,
        '(', 95,
        ')', 102,
        '/', 186,
        '@', 158,
        '`', 31,
        0xaf, 31,
        0x3b7, 194,
        0x3c0, 194,
        0x3c4, 194,
        0x221e, 194,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(176);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      ADVANCE_MAP(
        '\r', 135,
        '"', 147,
        '#', 135,
        '$', 108,
        '(', 96,
        ')', 103,
        '/', 187,
        '@', 159,
        '\t', 135,
        ' ', 135,
        '`', 135,
        0xaf, 135,
        0x3b7, 135,
        0x3c0, 135,
        0x3c4, 135,
        0x221e, 135,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(135);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      ADVANCE_MAP(
        '\r', 15,
        '"', 138,
        '$', 1,
        '(', 87,
        ')', 98,
        '/', 182,
        '@', 150,
        't', 13,
        '`', 15,
        0xaf, 15,
        0x3b7, 190,
        0x3c0, 190,
        0x3c4, 190,
        0x221e, 190,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(172);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      ADVANCE_MAP(
        '\r', 115,
        '"', 139,
        '#', 115,
        '$', 104,
        '(', 88,
        ')', 99,
        '/', 183,
        '@', 151,
        't', 113,
        '\t', 115,
        ' ', 115,
        '`', 115,
        0xaf, 115,
        0x3b7, 115,
        0x3c0, 115,
        0x3c4, 115,
        0x221e, 115,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(115);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      ADVANCE_MAP(
        '\r', 23,
        '"', 142,
        '$', 3,
        '(', 91,
        ')', 100,
        '@', 154,
        '`', 23,
        0xaf, 23,
        0x3b7, 192,
        0x3c0, 192,
        0x3c4, 192,
        0x221e, 192,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(174);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      ADVANCE_MAP(
        '\r', 125,
        '"', 143,
        '#', 125,
        '$', 106,
        '(', 92,
        ')', 101,
        '@', 155,
        '\t', 125,
        ' ', 125,
        '`', 125,
        0xaf, 125,
        0x3b7, 125,
        0x3c0, 125,
        0x3c4, 125,
        0x221e, 125,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(125);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      ADVANCE_MAP(
        '\r', 31,
        '"', 146,
        '$', 5,
        '(', 95,
        ')', 102,
        '/', 186,
        '@', 158,
        '`', 31,
        0xaf, 31,
        0x3b7, 194,
        0x3c0, 194,
        0x3c4, 194,
        0x221e, 194,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(176);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      ADVANCE_MAP(
        '\r', 135,
        '"', 147,
        '#', 135,
        '$', 108,
        '(', 96,
        ')', 103,
        '/', 187,
        '@', 159,
        '\t', 135,
        ' ', 135,
        '`', 135,
        0xaf, 135,
        0x3b7, 135,
        0x3c0, 135,
        0x3c4, 135,
        0x221e, 135,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(135);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\t', 115,
        '\r', 115,
        ' ', 115,
        '"', 139,
        '#', 115,
        '$', 104,
        '(', 88,
        ')', 99,
        '/', 183,
        '@', 151,
        't', 113,
        '`', 115,
        0xaf, 115,
        0x3b7, 115,
        0x3c0, 115,
        0x3c4, 115,
        0x221e, 115,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(115);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\t', 122,
        '\r', 122,
        ' ', 122,
        '"', 141,
        '#', 122,
        '$', 105,
        '(', 90,
        '@', 153,
        't', 120,
        '`', 122,
        0xaf, 122,
        0x3b7, 122,
        0x3c0, 122,
        0x3c4, 122,
        0x221e, 122,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(122);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\t', 125,
        '\r', 125,
        ' ', 125,
        '"', 143,
        '#', 125,
        '$', 106,
        '(', 92,
        ')', 101,
        '@', 155,
        '`', 125,
        0xaf, 125,
        0x3b7, 125,
        0x3c0, 125,
        0x3c4, 125,
        0x221e, 125,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(125);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\t', 132,
        '\r', 132,
        ' ', 132,
        '"', 145,
        '#', 132,
        '$', 107,
        '(', 94,
        '/', 185,
        '@', 157,
        't', 130,
        '`', 132,
        0xaf, 132,
        0x3b7, 132,
        0x3c0, 132,
        0x3c4, 132,
        0x221e, 132,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\t', 135,
        '\r', 135,
        ' ', 135,
        '"', 147,
        '#', 135,
        '$', 108,
        '(', 96,
        ')', 103,
        '/', 187,
        '@', 159,
        '`', 135,
        0xaf, 135,
        0x3b7, 135,
        0x3c0, 135,
        0x3c4, 135,
        0x221e, 135,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(135);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 115,
        '"', 139,
        '#', 115,
        '$', 104,
        '(', 88,
        ')', 99,
        '-', 115,
        '/', 183,
        '@', 151,
        't', 113,
        '\t', 115,
        ' ', 115,
        '`', 115,
        0xaf, 115,
        0x3b7, 115,
        0x3c0, 115,
        0x3c4, 115,
        0x221e, 115,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(115);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 115,
        '"', 139,
        '#', 115,
        '$', 104,
        '(', 88,
        ')', 99,
        '.', 115,
        '/', 183,
        '@', 151,
        't', 113,
        '\t', 115,
        ' ', 115,
        'E', 109,
        'e', 109,
        '`', 115,
        0xaf, 115,
        0x3b7, 115,
        0x3c0, 115,
        0x3c4, 115,
        0x221e, 115,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(115);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 115,
        '"', 139,
        '#', 115,
        '$', 104,
        '(', 88,
        ')', 99,
        '/', 183,
        '1', 67,
        '2', 74,
        '3', 81,
        '@', 151,
        't', 113,
        '\t', 115,
        ' ', 115,
        '`', 115,
        0xaf, 115,
        0x3b7, 115,
        0x3c0, 115,
        0x3c4, 115,
        0x221e, 115,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(115);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 115,
        '"', 139,
        '#', 115,
        '$', 104,
        '(', 88,
        ')', 99,
        '/', 183,
        '@', 151,
        'd', 114,
        't', 113,
        '\t', 115,
        ' ', 115,
        '`', 115,
        0xaf, 115,
        0x3b7, 115,
        0x3c0, 115,
        0x3c4, 115,
        0x221e, 115,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(115);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 115,
        '"', 139,
        '#', 115,
        '$', 104,
        '(', 88,
        ')', 99,
        '/', 183,
        '@', 151,
        'o', 112,
        't', 113,
        '\t', 115,
        ' ', 115,
        '`', 115,
        0xaf, 115,
        0x3b7, 115,
        0x3c0, 115,
        0x3c4, 115,
        0x221e, 115,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(115);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 115,
        '"', 139,
        '#', 115,
        '$', 104,
        '(', 88,
        ')', 99,
        '/', 183,
        '@', 151,
        'o', 111,
        't', 113,
        '\t', 115,
        ' ', 115,
        '`', 115,
        0xaf, 115,
        0x3b7, 115,
        0x3c0, 115,
        0x3c4, 115,
        0x221e, 115,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(115);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 115,
        '"', 139,
        '#', 115,
        '$', 104,
        '(', 88,
        ')', 99,
        '/', 183,
        '@', 151,
        't', 113,
        '\t', 115,
        ' ', 115,
        '`', 115,
        0xaf, 115,
        0x3b7, 115,
        0x3c0, 115,
        0x3c4, 115,
        0x221e, 115,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 122,
        '"', 141,
        '#', 122,
        '$', 105,
        '(', 90,
        '-', 122,
        '@', 153,
        't', 120,
        '\t', 122,
        ' ', 122,
        '`', 122,
        0xaf, 122,
        0x3b7, 122,
        0x3c0, 122,
        0x3c4, 122,
        0x221e, 122,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(122);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 122,
        '"', 141,
        '#', 122,
        '$', 105,
        '(', 90,
        '.', 122,
        '@', 153,
        't', 120,
        '\t', 122,
        ' ', 122,
        'E', 116,
        'e', 116,
        '`', 122,
        0xaf, 122,
        0x3b7, 122,
        0x3c0, 122,
        0x3c4, 122,
        0x221e, 122,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(122);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 122,
        '"', 141,
        '#', 122,
        '$', 105,
        '(', 90,
        '1', 69,
        '2', 76,
        '3', 83,
        '@', 153,
        't', 120,
        '\t', 122,
        ' ', 122,
        '`', 122,
        0xaf, 122,
        0x3b7, 122,
        0x3c0, 122,
        0x3c4, 122,
        0x221e, 122,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(122);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 122,
        '"', 141,
        '#', 122,
        '$', 105,
        '(', 90,
        '@', 153,
        'd', 121,
        't', 120,
        '\t', 122,
        ' ', 122,
        '`', 122,
        0xaf, 122,
        0x3b7, 122,
        0x3c0, 122,
        0x3c4, 122,
        0x221e, 122,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(122);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 122,
        '"', 141,
        '#', 122,
        '$', 105,
        '(', 90,
        '@', 153,
        'o', 119,
        't', 120,
        '\t', 122,
        ' ', 122,
        '`', 122,
        0xaf, 122,
        0x3b7, 122,
        0x3c0, 122,
        0x3c4, 122,
        0x221e, 122,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(122);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 122,
        '"', 141,
        '#', 122,
        '$', 105,
        '(', 90,
        '@', 153,
        'o', 118,
        't', 120,
        '\t', 122,
        ' ', 122,
        '`', 122,
        0xaf, 122,
        0x3b7, 122,
        0x3c0, 122,
        0x3c4, 122,
        0x221e, 122,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(122);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 122,
        '"', 141,
        '#', 122,
        '$', 105,
        '(', 90,
        '@', 153,
        't', 120,
        '\t', 122,
        ' ', 122,
        '`', 122,
        0xaf, 122,
        0x3b7, 122,
        0x3c0, 122,
        0x3c4, 122,
        0x221e, 122,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(122);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 125,
        '"', 143,
        '#', 125,
        '$', 106,
        '(', 92,
        ')', 101,
        '-', 125,
        '@', 155,
        '\t', 125,
        ' ', 125,
        '`', 125,
        0xaf, 125,
        0x3b7, 125,
        0x3c0, 125,
        0x3c4, 125,
        0x221e, 125,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(125);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 125,
        '"', 143,
        '#', 125,
        '$', 106,
        '(', 92,
        ')', 101,
        '.', 125,
        '@', 155,
        '\t', 125,
        ' ', 125,
        'E', 123,
        'e', 123,
        '`', 125,
        0xaf, 125,
        0x3b7, 125,
        0x3c0, 125,
        0x3c4, 125,
        0x221e, 125,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(125);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 125,
        '"', 143,
        '#', 125,
        '$', 106,
        '(', 92,
        ')', 101,
        '@', 155,
        '\t', 125,
        ' ', 125,
        '`', 125,
        0xaf, 125,
        0x3b7, 125,
        0x3c0, 125,
        0x3c4, 125,
        0x221e, 125,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(125);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 132,
        '"', 145,
        '#', 132,
        '$', 107,
        '(', 94,
        '-', 132,
        '/', 185,
        '@', 157,
        't', 130,
        '\t', 132,
        ' ', 132,
        '`', 132,
        0xaf, 132,
        0x3b7, 132,
        0x3c0, 132,
        0x3c4, 132,
        0x221e, 132,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 132,
        '"', 145,
        '#', 132,
        '$', 107,
        '(', 94,
        '.', 132,
        '/', 185,
        '@', 157,
        't', 130,
        '\t', 132,
        ' ', 132,
        'E', 126,
        'e', 126,
        '`', 132,
        0xaf, 132,
        0x3b7, 132,
        0x3c0, 132,
        0x3c4, 132,
        0x221e, 132,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 132,
        '"', 145,
        '#', 132,
        '$', 107,
        '(', 94,
        '/', 185,
        '1', 71,
        '2', 78,
        '3', 85,
        '@', 157,
        't', 130,
        '\t', 132,
        ' ', 132,
        '`', 132,
        0xaf, 132,
        0x3b7, 132,
        0x3c0, 132,
        0x3c4, 132,
        0x221e, 132,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 132,
        '"', 145,
        '#', 132,
        '$', 107,
        '(', 94,
        '/', 185,
        '@', 157,
        'd', 131,
        't', 130,
        '\t', 132,
        ' ', 132,
        '`', 132,
        0xaf, 132,
        0x3b7, 132,
        0x3c0, 132,
        0x3c4, 132,
        0x221e, 132,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 132,
        '"', 145,
        '#', 132,
        '$', 107,
        '(', 94,
        '/', 185,
        '@', 157,
        'o', 129,
        't', 130,
        '\t', 132,
        ' ', 132,
        '`', 132,
        0xaf, 132,
        0x3b7, 132,
        0x3c0, 132,
        0x3c4, 132,
        0x221e, 132,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 132,
        '"', 145,
        '#', 132,
        '$', 107,
        '(', 94,
        '/', 185,
        '@', 157,
        'o', 128,
        't', 130,
        '\t', 132,
        ' ', 132,
        '`', 132,
        0xaf, 132,
        0x3b7, 132,
        0x3c0, 132,
        0x3c4, 132,
        0x221e, 132,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 132,
        '"', 145,
        '#', 132,
        '$', 107,
        '(', 94,
        '/', 185,
        '@', 157,
        't', 130,
        '\t', 132,
        ' ', 132,
        '`', 132,
        0xaf, 132,
        0x3b7, 132,
        0x3c0, 132,
        0x3c4, 132,
        0x221e, 132,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 135,
        '"', 147,
        '#', 135,
        '$', 108,
        '(', 96,
        ')', 103,
        '-', 135,
        '/', 187,
        '@', 159,
        '\t', 135,
        ' ', 135,
        '`', 135,
        0xaf, 135,
        0x3b7, 135,
        0x3c0, 135,
        0x3c4, 135,
        0x221e, 135,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(135);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 135,
        '"', 147,
        '#', 135,
        '$', 108,
        '(', 96,
        ')', 103,
        '.', 135,
        '/', 187,
        '@', 159,
        '\t', 135,
        ' ', 135,
        'E', 133,
        'e', 133,
        '`', 135,
        0xaf, 135,
        0x3b7, 135,
        0x3c0, 135,
        0x3c4, 135,
        0x221e, 135,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(135);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 135,
        '"', 147,
        '#', 135,
        '$', 108,
        '(', 96,
        ')', 103,
        '/', 187,
        '@', 159,
        '\t', 135,
        ' ', 135,
        '`', 135,
        0xaf, 135,
        0x3b7, 135,
        0x3c0, 135,
        0x3c4, 135,
        0x221e, 135,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(135);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__multiline_string_part);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(136);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      ADVANCE_MAP(
        '\r', 15,
        '"', 138,
        '$', 1,
        '(', 87,
        ')', 98,
        '/', 182,
        '@', 150,
        't', 13,
        '`', 15,
        0xaf, 15,
        0x3b7, 190,
        0x3c0, 190,
        0x3c4, 190,
        0x221e, 190,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(172);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      ADVANCE_MAP(
        '\r', 115,
        '"', 139,
        '#', 115,
        '$', 104,
        '(', 88,
        ')', 99,
        '/', 183,
        '@', 151,
        't', 113,
        '\t', 115,
        ' ', 115,
        '`', 115,
        0xaf, 115,
        0x3b7, 115,
        0x3c0, 115,
        0x3c4, 115,
        0x221e, 115,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(115);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      ADVANCE_MAP(
        '\r', 21,
        '"', 140,
        '$', 2,
        '(', 89,
        '@', 152,
        't', 19,
        '`', 21,
        0xaf, 21,
        0x3b7, 191,
        0x3c0, 191,
        0x3c4, 191,
        0x221e, 191,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(173);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      ADVANCE_MAP(
        '\r', 122,
        '"', 141,
        '#', 122,
        '$', 105,
        '(', 90,
        '@', 153,
        't', 120,
        '\t', 122,
        ' ', 122,
        '`', 122,
        0xaf, 122,
        0x3b7, 122,
        0x3c0, 122,
        0x3c4, 122,
        0x221e, 122,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(122);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      ADVANCE_MAP(
        '\r', 23,
        '"', 142,
        '$', 3,
        '(', 91,
        ')', 100,
        '@', 154,
        '`', 23,
        0xaf, 23,
        0x3b7, 192,
        0x3c0, 192,
        0x3c4, 192,
        0x221e, 192,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(174);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      ADVANCE_MAP(
        '\r', 125,
        '"', 143,
        '#', 125,
        '$', 106,
        '(', 92,
        ')', 101,
        '@', 155,
        '\t', 125,
        ' ', 125,
        '`', 125,
        0xaf, 125,
        0x3b7, 125,
        0x3c0, 125,
        0x3c4, 125,
        0x221e, 125,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(125);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      ADVANCE_MAP(
        '\r', 29,
        '"', 144,
        '$', 4,
        '(', 93,
        '/', 184,
        '@', 156,
        't', 27,
        '`', 29,
        0xaf, 29,
        0x3b7, 193,
        0x3c0, 193,
        0x3c4, 193,
        0x221e, 193,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      ADVANCE_MAP(
        '\r', 132,
        '"', 145,
        '#', 132,
        '$', 107,
        '(', 94,
        '/', 185,
        '@', 157,
        't', 130,
        '\t', 132,
        ' ', 132,
        '`', 132,
        0xaf, 132,
        0x3b7, 132,
        0x3c0, 132,
        0x3c4, 132,
        0x221e, 132,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      ADVANCE_MAP(
        '\r', 31,
        '"', 146,
        '$', 5,
        '(', 95,
        ')', 102,
        '/', 186,
        '@', 158,
        '`', 31,
        0xaf, 31,
        0x3b7, 194,
        0x3c0, 194,
        0x3c4, 194,
        0x221e, 194,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(176);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      ADVANCE_MAP(
        '\r', 135,
        '"', 147,
        '#', 135,
        '$', 108,
        '(', 96,
        ')', 103,
        '/', 187,
        '@', 159,
        '\t', 135,
        ' ', 135,
        '`', 135,
        0xaf, 135,
        0x3b7, 135,
        0x3c0, 135,
        0x3c4, 135,
        0x221e, 135,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(135);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(148);
      if (lookahead == '#') ADVANCE(161);
      if (lookahead == '\\') ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(161);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_AT);
      ADVANCE_MAP(
        '\r', 15,
        '"', 138,
        '$', 1,
        '(', 87,
        ')', 98,
        '/', 182,
        '@', 150,
        't', 13,
        '`', 15,
        0xaf, 15,
        0x3b7, 190,
        0x3c0, 190,
        0x3c4, 190,
        0x221e, 190,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(172);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_AT);
      ADVANCE_MAP(
        '\r', 115,
        '"', 139,
        '#', 115,
        '$', 104,
        '(', 88,
        ')', 99,
        '/', 183,
        '@', 151,
        't', 113,
        '\t', 115,
        ' ', 115,
        '`', 115,
        0xaf, 115,
        0x3b7, 115,
        0x3c0, 115,
        0x3c4, 115,
        0x221e, 115,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(115);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_AT);
      ADVANCE_MAP(
        '\r', 21,
        '"', 140,
        '$', 2,
        '(', 89,
        '@', 152,
        't', 19,
        '`', 21,
        0xaf, 21,
        0x3b7, 191,
        0x3c0, 191,
        0x3c4, 191,
        0x221e, 191,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(173);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_AT);
      ADVANCE_MAP(
        '\r', 122,
        '"', 141,
        '#', 122,
        '$', 105,
        '(', 90,
        '@', 153,
        't', 120,
        '\t', 122,
        ' ', 122,
        '`', 122,
        0xaf, 122,
        0x3b7, 122,
        0x3c0, 122,
        0x3c4, 122,
        0x221e, 122,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(122);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_AT);
      ADVANCE_MAP(
        '\r', 23,
        '"', 142,
        '$', 3,
        '(', 91,
        ')', 100,
        '@', 154,
        '`', 23,
        0xaf, 23,
        0x3b7, 192,
        0x3c0, 192,
        0x3c4, 192,
        0x221e, 192,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(174);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_AT);
      ADVANCE_MAP(
        '\r', 125,
        '"', 143,
        '#', 125,
        '$', 106,
        '(', 92,
        ')', 101,
        '@', 155,
        '\t', 125,
        ' ', 125,
        '`', 125,
        0xaf, 125,
        0x3b7, 125,
        0x3c0, 125,
        0x3c4, 125,
        0x221e, 125,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(125);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_AT);
      ADVANCE_MAP(
        '\r', 29,
        '"', 144,
        '$', 4,
        '(', 93,
        '/', 184,
        '@', 156,
        't', 27,
        '`', 29,
        0xaf, 29,
        0x3b7, 193,
        0x3c0, 193,
        0x3c4, 193,
        0x221e, 193,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_AT);
      ADVANCE_MAP(
        '\r', 132,
        '"', 145,
        '#', 132,
        '$', 107,
        '(', 94,
        '/', 185,
        '@', 157,
        't', 130,
        '\t', 132,
        ' ', 132,
        '`', 132,
        0xaf, 132,
        0x3b7, 132,
        0x3c0, 132,
        0x3c4, 132,
        0x221e, 132,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_AT);
      ADVANCE_MAP(
        '\r', 31,
        '"', 146,
        '$', 5,
        '(', 95,
        ')', 102,
        '/', 186,
        '@', 158,
        '`', 31,
        0xaf, 31,
        0x3b7, 194,
        0x3c0, 194,
        0x3c4, 194,
        0x221e, 194,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(176);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_AT);
      ADVANCE_MAP(
        '\r', 135,
        '"', 147,
        '#', 135,
        '$', 108,
        '(', 96,
        ')', 103,
        '/', 187,
        '@', 159,
        '\t', 135,
        ' ', 135,
        '`', 135,
        0xaf, 135,
        0x3b7, 135,
        0x3c0, 135,
        0x3c4, 135,
        0x221e, 135,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(135);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym__character_token1);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym__character_token1);
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '"') ADVANCE(148);
      if (lookahead == '#') ADVANCE(161);
      if (lookahead == '\\') ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(161);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym__character_token1);
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '#') ADVANCE(162);
      if (lookahead == '\\') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(162);
      if (lookahead != 0) ADVANCE(162);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym__character_token1);
      if (lookahead == '"') ADVANCE(137);
      if (lookahead == '#') ADVANCE(161);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(163);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(160);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym__character_token1);
      if (lookahead == '#') ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(160);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '"') ADVANCE(148);
      if (lookahead == '#') ADVANCE(161);
      if (lookahead == '\\') ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(161);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '#') ADVANCE(162);
      if (lookahead == '\\') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(162);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_escape_token1);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_escape_token1);
      if (lookahead == '}') ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(49);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_escape_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(168);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_escape_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(56);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_integer);
      ADVANCE_MAP(
        '\r', 15,
        '"', 138,
        '$', 1,
        '(', 87,
        ')', 98,
        '.', 15,
        '/', 182,
        '@', 150,
        't', 13,
        'E', 10,
        'e', 10,
        '`', 15,
        0xaf, 15,
        0x3b7, 190,
        0x3c0, 190,
        0x3c4, 190,
        0x221e, 190,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(172);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_integer);
      ADVANCE_MAP(
        '\r', 21,
        '"', 140,
        '$', 2,
        '(', 89,
        '.', 21,
        '@', 152,
        't', 19,
        'E', 16,
        'e', 16,
        '`', 21,
        0xaf, 21,
        0x3b7, 191,
        0x3c0, 191,
        0x3c4, 191,
        0x221e, 191,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(173);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_integer);
      ADVANCE_MAP(
        '\r', 23,
        '"', 142,
        '$', 3,
        '(', 91,
        ')', 100,
        '.', 23,
        '@', 154,
        'E', 22,
        'e', 22,
        '`', 23,
        0xaf, 23,
        0x3b7, 192,
        0x3c0, 192,
        0x3c4, 192,
        0x221e, 192,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(174);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_integer);
      ADVANCE_MAP(
        '\r', 29,
        '"', 144,
        '$', 4,
        '(', 93,
        '.', 29,
        '/', 184,
        '@', 156,
        't', 27,
        'E', 24,
        'e', 24,
        '`', 29,
        0xaf, 29,
        0x3b7, 193,
        0x3c0, 193,
        0x3c4, 193,
        0x221e, 193,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_integer);
      ADVANCE_MAP(
        '\r', 31,
        '"', 146,
        '$', 5,
        '(', 95,
        ')', 102,
        '.', 31,
        '/', 186,
        '@', 158,
        'E', 30,
        'e', 30,
        '`', 31,
        0xaf, 31,
        0x3b7, 194,
        0x3c0, 194,
        0x3c4, 194,
        0x221e, 194,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(176);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(53);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(177);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '`' ||
          lookahead == 0xaf) ADVANCE(40);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(178);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_decimal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(180);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_SLASH);
      ADVANCE_MAP(
        '\r', 15,
        '"', 138,
        '$', 1,
        '(', 87,
        ')', 98,
        '/', 182,
        '@', 150,
        't', 13,
        '`', 15,
        0xaf, 15,
        0x3b7, 190,
        0x3c0, 190,
        0x3c4, 190,
        0x221e, 190,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(172);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_SLASH);
      ADVANCE_MAP(
        '\r', 115,
        '"', 139,
        '#', 115,
        '$', 104,
        '(', 88,
        ')', 99,
        '/', 183,
        '@', 151,
        't', 113,
        '\t', 115,
        ' ', 115,
        '`', 115,
        0xaf, 115,
        0x3b7, 115,
        0x3c0, 115,
        0x3c4, 115,
        0x221e, 115,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(115);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_SLASH);
      ADVANCE_MAP(
        '\r', 29,
        '"', 144,
        '$', 4,
        '(', 93,
        '/', 184,
        '@', 156,
        't', 27,
        '`', 29,
        0xaf, 29,
        0x3b7, 193,
        0x3c0, 193,
        0x3c4, 193,
        0x221e, 193,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_SLASH);
      ADVANCE_MAP(
        '\r', 132,
        '"', 145,
        '#', 132,
        '$', 107,
        '(', 94,
        '/', 185,
        '@', 157,
        't', 130,
        '\t', 132,
        ' ', 132,
        '`', 132,
        0xaf, 132,
        0x3b7, 132,
        0x3c0, 132,
        0x3c4, 132,
        0x221e, 132,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_SLASH);
      ADVANCE_MAP(
        '\r', 31,
        '"', 146,
        '$', 5,
        '(', 95,
        ')', 102,
        '/', 186,
        '@', 158,
        '`', 31,
        0xaf, 31,
        0x3b7, 194,
        0x3c0, 194,
        0x3c4, 194,
        0x221e, 194,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(176);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_SLASH);
      ADVANCE_MAP(
        '\r', 135,
        '"', 147,
        '#', 135,
        '$', 108,
        '(', 96,
        ')', 103,
        '/', 187,
        '@', 159,
        '\t', 135,
        ' ', 135,
        '`', 135,
        0xaf, 135,
        0x3b7, 135,
        0x3c0, 135,
        0x3c4, 135,
        0x221e, 135,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(135);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(188);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_constant);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_constant);
      ADVANCE_MAP(
        '\r', 15,
        '"', 138,
        '$', 1,
        '(', 87,
        ')', 98,
        '/', 182,
        '@', 150,
        't', 13,
        '`', 15,
        0xaf, 15,
        0x3b7, 190,
        0x3c0, 190,
        0x3c4, 190,
        0x221e, 190,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(172);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_constant);
      ADVANCE_MAP(
        '\r', 21,
        '"', 140,
        '$', 2,
        '(', 89,
        '@', 152,
        't', 19,
        '`', 21,
        0xaf, 21,
        0x3b7, 191,
        0x3c0, 191,
        0x3c4, 191,
        0x221e, 191,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(173);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_constant);
      ADVANCE_MAP(
        '\r', 23,
        '"', 142,
        '$', 3,
        '(', 91,
        ')', 100,
        '@', 154,
        '`', 23,
        0xaf, 23,
        0x3b7, 192,
        0x3c0, 192,
        0x3c4, 192,
        0x221e, 192,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(174);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_constant);
      ADVANCE_MAP(
        '\r', 29,
        '"', 144,
        '$', 4,
        '(', 93,
        '/', 184,
        '@', 156,
        't', 27,
        '`', 29,
        0xaf, 29,
        0x3b7, 193,
        0x3c0, 193,
        0x3c4, 193,
        0x221e, 193,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_constant);
      ADVANCE_MAP(
        '\r', 31,
        '"', 146,
        '$', 5,
        '(', 95,
        ')', 102,
        '/', 186,
        '@', 158,
        '`', 31,
        0xaf, 31,
        0x3b7, 194,
        0x3c0, 194,
        0x3c4, 194,
        0x221e, 194,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(176);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_constant);
      if (lookahead == '`' ||
          lookahead == 0xaf) ADVANCE(40);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(178);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_scientific);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(196);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 58},
  [2] = {.lex_state = 58},
  [3] = {.lex_state = 58},
  [4] = {.lex_state = 7},
  [5] = {.lex_state = 7},
  [6] = {.lex_state = 7},
  [7] = {.lex_state = 7},
  [8] = {.lex_state = 7},
  [9] = {.lex_state = 58},
  [10] = {.lex_state = 58},
  [11] = {.lex_state = 59},
  [12] = {.lex_state = 58},
  [13] = {.lex_state = 58},
  [14] = {.lex_state = 58},
  [15] = {.lex_state = 58},
  [16] = {.lex_state = 58},
  [17] = {.lex_state = 58},
  [18] = {.lex_state = 58},
  [19] = {.lex_state = 58},
  [20] = {.lex_state = 58},
  [21] = {.lex_state = 58},
  [22] = {.lex_state = 58},
  [23] = {.lex_state = 58},
  [24] = {.lex_state = 58},
  [25] = {.lex_state = 8},
  [26] = {.lex_state = 7},
  [27] = {.lex_state = 7},
  [28] = {.lex_state = 7},
  [29] = {.lex_state = 7},
  [30] = {.lex_state = 7},
  [31] = {.lex_state = 7},
  [32] = {.lex_state = 7},
  [33] = {.lex_state = 7},
  [34] = {.lex_state = 7},
  [35] = {.lex_state = 7},
  [36] = {.lex_state = 7},
  [37] = {.lex_state = 7},
  [38] = {.lex_state = 7},
  [39] = {.lex_state = 37},
  [40] = {.lex_state = 37},
  [41] = {.lex_state = 37},
  [42] = {.lex_state = 37},
  [43] = {.lex_state = 37},
  [44] = {.lex_state = 38},
  [45] = {.lex_state = 38},
  [46] = {.lex_state = 37},
  [47] = {.lex_state = 39},
  [48] = {.lex_state = 39},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 9},
  [51] = {.lex_state = 47},
  [52] = {.lex_state = 9},
  [53] = {.lex_state = 41},
  [54] = {.lex_state = 47},
  [55] = {.lex_state = 47},
  [56] = {.lex_state = 41},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
    [sym_binding] = ACTIONS(1),
    [sym_import] = ACTIONS(1),
    [sym_module] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym__multiline_string_part] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_decimal] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [sym_constant] = ACTIONS(1),
    [sym_scientific] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(49),
    [sym__top_level] = STATE(3),
    [sym__function] = STATE(3),
    [sym_inline_function] = STATE(3),
    [sym_literal] = STATE(3),
    [sym_string] = STATE(16),
    [sym_multiline_string] = STATE(20),
    [sym__string_literal] = STATE(20),
    [sym_char] = STATE(16),
    [sym_number] = STATE(16),
    [sym_fraction] = STATE(17),
    [sym__fraction_part] = STATE(53),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym__top_level_repeat1] = STATE(12),
    [aux_sym_multiline_string_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym__newline] = ACTIONS(5),
    [sym_binding] = ACTIONS(7),
    [sym_import] = ACTIONS(7),
    [sym_module] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [sym__multiline_string_part] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(15),
    [sym_integer] = ACTIONS(17),
    [sym_decimal] = ACTIONS(19),
    [sym_constant] = ACTIONS(17),
    [sym_scientific] = ACTIONS(19),
  },
  [2] = {
    [sym__top_level] = STATE(2),
    [sym__function] = STATE(2),
    [sym_inline_function] = STATE(2),
    [sym_literal] = STATE(2),
    [sym_string] = STATE(16),
    [sym_multiline_string] = STATE(20),
    [sym__string_literal] = STATE(20),
    [sym_char] = STATE(16),
    [sym_number] = STATE(16),
    [sym_fraction] = STATE(17),
    [sym__fraction_part] = STATE(53),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym__top_level_repeat1] = STATE(12),
    [aux_sym_multiline_string_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(21),
    [sym__newline] = ACTIONS(23),
    [sym_binding] = ACTIONS(26),
    [sym_import] = ACTIONS(26),
    [sym_module] = ACTIONS(26),
    [anon_sym_LPAREN] = ACTIONS(29),
    [sym__multiline_string_part] = ACTIONS(32),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_AT] = ACTIONS(38),
    [sym_integer] = ACTIONS(41),
    [sym_decimal] = ACTIONS(44),
    [sym_constant] = ACTIONS(41),
    [sym_scientific] = ACTIONS(44),
  },
  [3] = {
    [sym__top_level] = STATE(2),
    [sym__function] = STATE(2),
    [sym_inline_function] = STATE(2),
    [sym_literal] = STATE(2),
    [sym_string] = STATE(16),
    [sym_multiline_string] = STATE(20),
    [sym__string_literal] = STATE(20),
    [sym_char] = STATE(16),
    [sym_number] = STATE(16),
    [sym_fraction] = STATE(17),
    [sym__fraction_part] = STATE(53),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym__top_level_repeat1] = STATE(12),
    [aux_sym_multiline_string_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(47),
    [sym__newline] = ACTIONS(5),
    [sym_binding] = ACTIONS(49),
    [sym_import] = ACTIONS(49),
    [sym_module] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(9),
    [sym__multiline_string_part] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(15),
    [sym_integer] = ACTIONS(17),
    [sym_decimal] = ACTIONS(19),
    [sym_constant] = ACTIONS(17),
    [sym_scientific] = ACTIONS(19),
  },
  [4] = {
    [sym__function] = STATE(7),
    [sym_inline_function] = STATE(7),
    [sym_literal] = STATE(7),
    [sym_string] = STATE(29),
    [sym_multiline_string] = STATE(38),
    [sym__string_literal] = STATE(38),
    [sym_char] = STATE(29),
    [sym_number] = STATE(29),
    [sym_fraction] = STATE(28),
    [sym__fraction_part] = STATE(56),
    [aux_sym_inline_function_repeat1] = STATE(7),
    [aux_sym_multiline_string_repeat1] = STATE(27),
    [sym__newline] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_RPAREN] = ACTIONS(55),
    [sym__multiline_string_part] = ACTIONS(57),
    [anon_sym_DQUOTE] = ACTIONS(59),
    [anon_sym_AT] = ACTIONS(61),
    [sym_integer] = ACTIONS(63),
    [sym_decimal] = ACTIONS(65),
    [sym_constant] = ACTIONS(63),
    [sym_scientific] = ACTIONS(65),
  },
  [5] = {
    [sym__function] = STATE(4),
    [sym_inline_function] = STATE(4),
    [sym_literal] = STATE(4),
    [sym_string] = STATE(29),
    [sym_multiline_string] = STATE(38),
    [sym__string_literal] = STATE(38),
    [sym_char] = STATE(29),
    [sym_number] = STATE(29),
    [sym_fraction] = STATE(28),
    [sym__fraction_part] = STATE(56),
    [aux_sym_inline_function_repeat1] = STATE(4),
    [aux_sym_multiline_string_repeat1] = STATE(27),
    [sym__newline] = ACTIONS(67),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_RPAREN] = ACTIONS(69),
    [sym__multiline_string_part] = ACTIONS(57),
    [anon_sym_DQUOTE] = ACTIONS(59),
    [anon_sym_AT] = ACTIONS(61),
    [sym_integer] = ACTIONS(63),
    [sym_decimal] = ACTIONS(65),
    [sym_constant] = ACTIONS(63),
    [sym_scientific] = ACTIONS(65),
  },
  [6] = {
    [sym__function] = STATE(8),
    [sym_inline_function] = STATE(8),
    [sym_literal] = STATE(8),
    [sym_string] = STATE(29),
    [sym_multiline_string] = STATE(38),
    [sym__string_literal] = STATE(38),
    [sym_char] = STATE(29),
    [sym_number] = STATE(29),
    [sym_fraction] = STATE(28),
    [sym__fraction_part] = STATE(56),
    [aux_sym_inline_function_repeat1] = STATE(8),
    [aux_sym_multiline_string_repeat1] = STATE(27),
    [sym__newline] = ACTIONS(71),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_RPAREN] = ACTIONS(73),
    [sym__multiline_string_part] = ACTIONS(57),
    [anon_sym_DQUOTE] = ACTIONS(59),
    [anon_sym_AT] = ACTIONS(61),
    [sym_integer] = ACTIONS(63),
    [sym_decimal] = ACTIONS(65),
    [sym_constant] = ACTIONS(63),
    [sym_scientific] = ACTIONS(65),
  },
  [7] = {
    [sym__function] = STATE(7),
    [sym_inline_function] = STATE(7),
    [sym_literal] = STATE(7),
    [sym_string] = STATE(29),
    [sym_multiline_string] = STATE(38),
    [sym__string_literal] = STATE(38),
    [sym_char] = STATE(29),
    [sym_number] = STATE(29),
    [sym_fraction] = STATE(28),
    [sym__fraction_part] = STATE(56),
    [aux_sym_inline_function_repeat1] = STATE(7),
    [aux_sym_multiline_string_repeat1] = STATE(27),
    [sym__newline] = ACTIONS(75),
    [anon_sym_LPAREN] = ACTIONS(78),
    [anon_sym_RPAREN] = ACTIONS(81),
    [sym__multiline_string_part] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(86),
    [anon_sym_AT] = ACTIONS(89),
    [sym_integer] = ACTIONS(92),
    [sym_decimal] = ACTIONS(95),
    [sym_constant] = ACTIONS(92),
    [sym_scientific] = ACTIONS(95),
  },
  [8] = {
    [sym__function] = STATE(7),
    [sym_inline_function] = STATE(7),
    [sym_literal] = STATE(7),
    [sym_string] = STATE(29),
    [sym_multiline_string] = STATE(38),
    [sym__string_literal] = STATE(38),
    [sym_char] = STATE(29),
    [sym_number] = STATE(29),
    [sym_fraction] = STATE(28),
    [sym__fraction_part] = STATE(56),
    [aux_sym_inline_function_repeat1] = STATE(7),
    [aux_sym_multiline_string_repeat1] = STATE(27),
    [sym__newline] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_RPAREN] = ACTIONS(98),
    [sym__multiline_string_part] = ACTIONS(57),
    [anon_sym_DQUOTE] = ACTIONS(59),
    [anon_sym_AT] = ACTIONS(61),
    [sym_integer] = ACTIONS(63),
    [sym_decimal] = ACTIONS(65),
    [sym_constant] = ACTIONS(63),
    [sym_scientific] = ACTIONS(65),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(100), 1,
      ts_builtin_sym_end,
    ACTIONS(104), 1,
      sym__multiline_string_part,
    STATE(9), 1,
      aux_sym_multiline_string_repeat1,
    ACTIONS(102), 11,
      sym__newline,
      sym_binding,
      sym_import,
      sym_module,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [23] = 4,
    ACTIONS(107), 1,
      ts_builtin_sym_end,
    ACTIONS(109), 1,
      sym__newline,
    STATE(10), 1,
      aux_sym__top_level_repeat1,
    ACTIONS(112), 11,
      sym_binding,
      sym_import,
      sym_module,
      anon_sym_LPAREN,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [46] = 3,
    ACTIONS(114), 1,
      ts_builtin_sym_end,
    ACTIONS(118), 1,
      anon_sym_SLASH,
    ACTIONS(116), 12,
      sym__newline,
      sym_binding,
      sym_import,
      sym_module,
      anon_sym_LPAREN,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [67] = 4,
    ACTIONS(120), 1,
      ts_builtin_sym_end,
    ACTIONS(122), 1,
      sym__newline,
    STATE(10), 1,
      aux_sym__top_level_repeat1,
    ACTIONS(124), 11,
      sym_binding,
      sym_import,
      sym_module,
      anon_sym_LPAREN,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [90] = 4,
    ACTIONS(11), 1,
      sym__multiline_string_part,
    ACTIONS(126), 1,
      ts_builtin_sym_end,
    STATE(9), 1,
      aux_sym_multiline_string_repeat1,
    ACTIONS(128), 11,
      sym__newline,
      sym_binding,
      sym_import,
      sym_module,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [113] = 2,
    ACTIONS(130), 1,
      ts_builtin_sym_end,
    ACTIONS(132), 12,
      sym__newline,
      sym_binding,
      sym_import,
      sym_module,
      anon_sym_LPAREN,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [131] = 2,
    ACTIONS(134), 1,
      ts_builtin_sym_end,
    ACTIONS(136), 12,
      sym__newline,
      sym_binding,
      sym_import,
      sym_module,
      anon_sym_LPAREN,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [149] = 2,
    ACTIONS(138), 1,
      ts_builtin_sym_end,
    ACTIONS(140), 12,
      sym__newline,
      sym_binding,
      sym_import,
      sym_module,
      anon_sym_LPAREN,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [167] = 2,
    ACTIONS(114), 1,
      ts_builtin_sym_end,
    ACTIONS(116), 12,
      sym__newline,
      sym_binding,
      sym_import,
      sym_module,
      anon_sym_LPAREN,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [185] = 2,
    ACTIONS(100), 1,
      ts_builtin_sym_end,
    ACTIONS(102), 12,
      sym__newline,
      sym_binding,
      sym_import,
      sym_module,
      anon_sym_LPAREN,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [203] = 2,
    ACTIONS(142), 1,
      ts_builtin_sym_end,
    ACTIONS(144), 12,
      sym__newline,
      sym_binding,
      sym_import,
      sym_module,
      anon_sym_LPAREN,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [221] = 2,
    ACTIONS(146), 1,
      ts_builtin_sym_end,
    ACTIONS(148), 12,
      sym__newline,
      sym_binding,
      sym_import,
      sym_module,
      anon_sym_LPAREN,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [239] = 2,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
    ACTIONS(152), 12,
      sym__newline,
      sym_binding,
      sym_import,
      sym_module,
      anon_sym_LPAREN,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [257] = 2,
    ACTIONS(154), 1,
      ts_builtin_sym_end,
    ACTIONS(156), 12,
      sym__newline,
      sym_binding,
      sym_import,
      sym_module,
      anon_sym_LPAREN,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [275] = 2,
    ACTIONS(158), 1,
      ts_builtin_sym_end,
    ACTIONS(160), 12,
      sym__newline,
      sym_binding,
      sym_import,
      sym_module,
      anon_sym_LPAREN,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [293] = 2,
    ACTIONS(162), 1,
      ts_builtin_sym_end,
    ACTIONS(164), 12,
      sym__newline,
      sym_binding,
      sym_import,
      sym_module,
      anon_sym_LPAREN,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [311] = 2,
    ACTIONS(118), 1,
      anon_sym_SLASH,
    ACTIONS(116), 10,
      sym__newline,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [327] = 3,
    ACTIONS(166), 1,
      sym__multiline_string_part,
    STATE(26), 1,
      aux_sym_multiline_string_repeat1,
    ACTIONS(102), 9,
      sym__newline,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [345] = 3,
    ACTIONS(57), 1,
      sym__multiline_string_part,
    STATE(26), 1,
      aux_sym_multiline_string_repeat1,
    ACTIONS(128), 9,
      sym__newline,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [363] = 1,
    ACTIONS(116), 10,
      sym__newline,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [376] = 1,
    ACTIONS(140), 10,
      sym__newline,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [389] = 1,
    ACTIONS(164), 10,
      sym__newline,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [402] = 1,
    ACTIONS(136), 10,
      sym__newline,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [415] = 1,
    ACTIONS(102), 10,
      sym__newline,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [428] = 1,
    ACTIONS(132), 10,
      sym__newline,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [441] = 1,
    ACTIONS(144), 10,
      sym__newline,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [454] = 1,
    ACTIONS(152), 10,
      sym__newline,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [467] = 1,
    ACTIONS(156), 10,
      sym__newline,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [480] = 1,
    ACTIONS(160), 10,
      sym__newline,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [493] = 1,
    ACTIONS(148), 10,
      sym__newline,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [506] = 4,
    ACTIONS(169), 1,
      anon_sym_DQUOTE,
    ACTIONS(171), 1,
      aux_sym__character_token1,
    ACTIONS(173), 1,
      anon_sym_BSLASH,
    STATE(43), 3,
      sym__character,
      sym_escape,
      aux_sym__string_literal_repeat1,
  [521] = 4,
    ACTIONS(175), 1,
      anon_sym_DQUOTE,
    ACTIONS(177), 1,
      aux_sym__character_token1,
    ACTIONS(180), 1,
      anon_sym_BSLASH,
    STATE(40), 3,
      sym__character,
      sym_escape,
      aux_sym__string_literal_repeat1,
  [536] = 4,
    ACTIONS(173), 1,
      anon_sym_BSLASH,
    ACTIONS(183), 1,
      anon_sym_DQUOTE,
    ACTIONS(185), 1,
      aux_sym__character_token1,
    STATE(42), 3,
      sym__character,
      sym_escape,
      aux_sym__string_literal_repeat1,
  [551] = 4,
    ACTIONS(173), 1,
      anon_sym_BSLASH,
    ACTIONS(187), 1,
      anon_sym_DQUOTE,
    ACTIONS(189), 1,
      aux_sym__character_token1,
    STATE(40), 3,
      sym__character,
      sym_escape,
      aux_sym__string_literal_repeat1,
  [566] = 4,
    ACTIONS(173), 1,
      anon_sym_BSLASH,
    ACTIONS(189), 1,
      aux_sym__character_token1,
    ACTIONS(191), 1,
      anon_sym_DQUOTE,
    STATE(40), 3,
      sym__character,
      sym_escape,
      aux_sym__string_literal_repeat1,
  [581] = 3,
    ACTIONS(193), 1,
      aux_sym__character_token1,
    ACTIONS(195), 1,
      anon_sym_BSLASH,
    STATE(15), 2,
      sym__character,
      sym_escape,
  [592] = 3,
    ACTIONS(197), 1,
      aux_sym__character_token1,
    ACTIONS(199), 1,
      anon_sym_BSLASH,
    STATE(31), 2,
      sym__character,
      sym_escape,
  [603] = 1,
    ACTIONS(160), 3,
      anon_sym_DQUOTE,
      aux_sym__character_token1,
      anon_sym_BSLASH,
  [609] = 2,
    STATE(22), 1,
      sym__fraction_part,
    ACTIONS(201), 2,
      sym_integer,
      sym_constant,
  [617] = 2,
    STATE(36), 1,
      sym__fraction_part,
    ACTIONS(203), 2,
      sym_integer,
      sym_constant,
  [625] = 1,
    ACTIONS(205), 1,
      ts_builtin_sym_end,
  [629] = 1,
    ACTIONS(207), 1,
      sym__newline,
  [633] = 1,
    ACTIONS(209), 1,
      aux_sym_escape_token1,
  [637] = 1,
    ACTIONS(211), 1,
      sym__newline,
  [641] = 1,
    ACTIONS(213), 1,
      anon_sym_SLASH,
  [645] = 1,
    ACTIONS(215), 1,
      aux_sym_escape_token1,
  [649] = 1,
    ACTIONS(217), 1,
      aux_sym_escape_token1,
  [653] = 1,
    ACTIONS(219), 1,
      anon_sym_SLASH,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(9)] = 0,
  [SMALL_STATE(10)] = 23,
  [SMALL_STATE(11)] = 46,
  [SMALL_STATE(12)] = 67,
  [SMALL_STATE(13)] = 90,
  [SMALL_STATE(14)] = 113,
  [SMALL_STATE(15)] = 131,
  [SMALL_STATE(16)] = 149,
  [SMALL_STATE(17)] = 167,
  [SMALL_STATE(18)] = 185,
  [SMALL_STATE(19)] = 203,
  [SMALL_STATE(20)] = 221,
  [SMALL_STATE(21)] = 239,
  [SMALL_STATE(22)] = 257,
  [SMALL_STATE(23)] = 275,
  [SMALL_STATE(24)] = 293,
  [SMALL_STATE(25)] = 311,
  [SMALL_STATE(26)] = 327,
  [SMALL_STATE(27)] = 345,
  [SMALL_STATE(28)] = 363,
  [SMALL_STATE(29)] = 376,
  [SMALL_STATE(30)] = 389,
  [SMALL_STATE(31)] = 402,
  [SMALL_STATE(32)] = 415,
  [SMALL_STATE(33)] = 428,
  [SMALL_STATE(34)] = 441,
  [SMALL_STATE(35)] = 454,
  [SMALL_STATE(36)] = 467,
  [SMALL_STATE(37)] = 480,
  [SMALL_STATE(38)] = 493,
  [SMALL_STATE(39)] = 506,
  [SMALL_STATE(40)] = 521,
  [SMALL_STATE(41)] = 536,
  [SMALL_STATE(42)] = 551,
  [SMALL_STATE(43)] = 566,
  [SMALL_STATE(44)] = 581,
  [SMALL_STATE(45)] = 592,
  [SMALL_STATE(46)] = 603,
  [SMALL_STATE(47)] = 609,
  [SMALL_STATE(48)] = 617,
  [SMALL_STATE(49)] = 625,
  [SMALL_STATE(50)] = 629,
  [SMALL_STATE(51)] = 633,
  [SMALL_STATE(52)] = 637,
  [SMALL_STATE(53)] = 641,
  [SMALL_STATE(54)] = 645,
  [SMALL_STATE(55)] = 649,
  [SMALL_STATE(56)] = 653,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_function_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_function_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_inline_function_repeat1, 2, 0, 0),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_function_repeat1, 2, 0, 0), SHIFT_REPEAT(52),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_function_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_function_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_function_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_function_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multiline_string_repeat1, 2, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2, 0, 0),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__top_level_repeat1, 2, 0, 0),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__top_level_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__top_level_repeat1, 2, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__fraction_part, 1, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__top_level, 1, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__top_level, 1, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 1, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 1, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal, 2, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_literal, 2, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 2, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char, 2, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_function, 3, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_function, 3, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal, 3, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_literal, 3, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fraction, 3, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fraction, 3, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape, 2, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape, 2, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_function, 2, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_function, 2, 0, 0),
  [166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2, 0, 0), SHIFT_REPEAT(52),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__string_literal_repeat1, 2, 0, 0),
  [177] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__string_literal_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [180] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__string_literal_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [205] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_uiua(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
