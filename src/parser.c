#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 165
#define LARGE_STATE_COUNT 31
#define SYMBOL_COUNT 53
#define ALIAS_COUNT 0
#define TOKEN_COUNT 28
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym__newline = 1,
  sym_binding = 2,
  sym_import = 3,
  sym_module = 4,
  sym_stack_prim = 5,
  sym_noadic_prim = 6,
  sym_monadic_prim = 7,
  sym_dyadic_prim = 8,
  sym_identifier = 9,
  anon_sym_LPAREN = 10,
  anon_sym_RPAREN = 11,
  anon_sym_LBRACK = 12,
  anon_sym_RBRACK = 13,
  anon_sym_LBRACE = 14,
  anon_sym_RBRACE = 15,
  anon_sym__ = 16,
  sym__multiline_string_part = 17,
  anon_sym_DQUOTE = 18,
  anon_sym_AT = 19,
  aux_sym__character_token1 = 20,
  anon_sym_BSLASH = 21,
  aux_sym_escape_token1 = 22,
  sym_integer = 23,
  sym_decimal = 24,
  anon_sym_SLASH = 25,
  sym_constant = 26,
  sym_scientific = 27,
  sym_source_file = 28,
  sym__top_level = 29,
  sym__function = 30,
  sym_prim = 31,
  sym_inline_function = 32,
  aux_sym__function_body = 33,
  sym_array = 34,
  sym_box_array = 35,
  sym_strand = 36,
  sym__strand_item = 37,
  sym_literal = 38,
  sym_string = 39,
  sym_multiline_string = 40,
  sym__string_literal = 41,
  sym_char = 42,
  sym__character = 43,
  sym_escape = 44,
  sym_number = 45,
  sym_fraction = 46,
  sym__fraction_part = 47,
  aux_sym_source_file_repeat1 = 48,
  aux_sym__top_level_repeat1 = 49,
  aux_sym_strand_repeat1 = 50,
  aux_sym_multiline_string_repeat1 = 51,
  aux_sym__string_literal_repeat1 = 52,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__newline] = "_newline",
  [sym_binding] = "binding",
  [sym_import] = "import",
  [sym_module] = "module",
  [sym_stack_prim] = "stack_prim",
  [sym_noadic_prim] = "noadic_prim",
  [sym_monadic_prim] = "monadic_prim",
  [sym_dyadic_prim] = "dyadic_prim",
  [sym_identifier] = "identifier",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym__] = "_",
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
  [sym_prim] = "prim",
  [sym_inline_function] = "inline_function",
  [aux_sym__function_body] = "_function_body",
  [sym_array] = "array",
  [sym_box_array] = "box_array",
  [sym_strand] = "strand",
  [sym__strand_item] = "_strand_item",
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
  [aux_sym_strand_repeat1] = "strand_repeat1",
  [aux_sym_multiline_string_repeat1] = "multiline_string_repeat1",
  [aux_sym__string_literal_repeat1] = "_string_literal_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__newline] = sym__newline,
  [sym_binding] = sym_binding,
  [sym_import] = sym_import,
  [sym_module] = sym_module,
  [sym_stack_prim] = sym_stack_prim,
  [sym_noadic_prim] = sym_noadic_prim,
  [sym_monadic_prim] = sym_monadic_prim,
  [sym_dyadic_prim] = sym_dyadic_prim,
  [sym_identifier] = sym_identifier,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym__] = anon_sym__,
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
  [sym_prim] = sym_prim,
  [sym_inline_function] = sym_inline_function,
  [aux_sym__function_body] = aux_sym__function_body,
  [sym_array] = sym_array,
  [sym_box_array] = sym_box_array,
  [sym_strand] = sym_strand,
  [sym__strand_item] = sym__strand_item,
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
  [aux_sym_strand_repeat1] = aux_sym_strand_repeat1,
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
  [sym_stack_prim] = {
    .visible = true,
    .named = true,
  },
  [sym_noadic_prim] = {
    .visible = true,
    .named = true,
  },
  [sym_monadic_prim] = {
    .visible = true,
    .named = true,
  },
  [sym_dyadic_prim] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
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
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__] = {
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
  [sym_prim] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_function] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__function_body] = {
    .visible = false,
    .named = false,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym_box_array] = {
    .visible = true,
    .named = true,
  },
  [sym_strand] = {
    .visible = true,
    .named = true,
  },
  [sym__strand_item] = {
    .visible = false,
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
  [aux_sym_strand_repeat1] = {
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
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 10,
  [12] = 8,
  [13] = 9,
  [14] = 5,
  [15] = 4,
  [16] = 6,
  [17] = 7,
  [18] = 8,
  [19] = 9,
  [20] = 5,
  [21] = 4,
  [22] = 6,
  [23] = 7,
  [24] = 8,
  [25] = 9,
  [26] = 5,
  [27] = 4,
  [28] = 6,
  [29] = 7,
  [30] = 10,
  [31] = 31,
  [32] = 31,
  [33] = 31,
  [34] = 31,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 38,
  [61] = 39,
  [62] = 37,
  [63] = 37,
  [64] = 35,
  [65] = 35,
  [66] = 36,
  [67] = 38,
  [68] = 39,
  [69] = 35,
  [70] = 36,
  [71] = 36,
  [72] = 37,
  [73] = 38,
  [74] = 39,
  [75] = 45,
  [76] = 50,
  [77] = 47,
  [78] = 40,
  [79] = 46,
  [80] = 43,
  [81] = 43,
  [82] = 46,
  [83] = 50,
  [84] = 47,
  [85] = 40,
  [86] = 44,
  [87] = 51,
  [88] = 52,
  [89] = 42,
  [90] = 41,
  [91] = 42,
  [92] = 45,
  [93] = 51,
  [94] = 46,
  [95] = 44,
  [96] = 52,
  [97] = 51,
  [98] = 52,
  [99] = 43,
  [100] = 41,
  [101] = 41,
  [102] = 48,
  [103] = 48,
  [104] = 48,
  [105] = 42,
  [106] = 50,
  [107] = 47,
  [108] = 40,
  [109] = 45,
  [110] = 44,
  [111] = 59,
  [112] = 57,
  [113] = 58,
  [114] = 57,
  [115] = 58,
  [116] = 54,
  [117] = 55,
  [118] = 56,
  [119] = 54,
  [120] = 55,
  [121] = 56,
  [122] = 54,
  [123] = 55,
  [124] = 56,
  [125] = 59,
  [126] = 59,
  [127] = 57,
  [128] = 58,
  [129] = 129,
  [130] = 130,
  [131] = 129,
  [132] = 130,
  [133] = 133,
  [134] = 129,
  [135] = 130,
  [136] = 129,
  [137] = 130,
  [138] = 138,
  [139] = 138,
  [140] = 138,
  [141] = 138,
  [142] = 142,
  [143] = 142,
  [144] = 142,
  [145] = 44,
  [146] = 142,
  [147] = 147,
  [148] = 147,
  [149] = 147,
  [150] = 147,
  [151] = 151,
  [152] = 152,
  [153] = 151,
  [154] = 152,
  [155] = 155,
  [156] = 156,
  [157] = 152,
  [158] = 152,
  [159] = 151,
  [160] = 151,
  [161] = 152,
  [162] = 156,
  [163] = 156,
  [164] = 156,
};

static TSCharacterRange sym_monadic_prim_character_set_1[] = {
  {0xa4, 0xa4}, {0xac, 0xac}, {0xaf, 0xaf}, {0xb1, 0xb1}, {0x2045, 0x2045}, {0x21cc, 0x21cc}, {0x21e1, 0x21e1}, {0x221a, 0x221a},
  {0x223f, 0x223f}, {0x229a, 0x229b}, {0x22a2, 0x22a3}, {0x22d5, 0x22d5}, {0x22ef, 0x22ef}, {0x2308, 0x2308}, {0x230a, 0x230a}, {0x2335, 0x2335},
  {0x2346, 0x2346}, {0x2349, 0x2349}, {0x234f, 0x234f}, {0x2356, 0x2356}, {0x25a1, 0x25a1}, {0x25b3, 0x25b3}, {0x25f0, 0x25f0}, {0x25f4, 0x25f4},
  {0x266d, 0x266d}, {0x29fb, 0x29fb},
};

static TSCharacterRange sym_dyadic_prim_character_set_1[] = {
  {'+', '+'}, {'-', '-'}, {'<', '>'}, {0xd7, 0xd7}, {0xf7, 0xf7}, {0x2099, 0x2099}, {0x2102, 0x2102}, {0x2198, 0x2199},
  {0x21a5, 0x21a5}, {0x21a7, 0x21a7}, {0x21af, 0x21af}, {0x21bb, 0x21bb}, {0x220a, 0x220a}, {0x2220, 0x2220}, {0x224d, 0x224d}, {0x2260, 0x2260},
  {0x2265, 0x2265}, {0x2282, 0x2282}, {0x228f, 0x228f}, {0x2297, 0x2297}, {0x22a1, 0x22a1}, {0x2315, 0x2315}, {0x25bd, 0x25bd}, {0x25ff, 0x25ff},
  {0x2938, 0x2938}, {0x29b7, 0x29b7},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(225);
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(29);
      if (lookahead == '"') ADVANCE(711);
      if (lookahead == '#') SKIP(221);
      if (lookahead == '$') ADVANCE(174);
      if (lookahead == '(') ADVANCE(400);
      if (lookahead == ')') ADVANCE(427);
      if (lookahead == '/') ADVANCE(800);
      if (lookahead == '@') ADVANCE(741);
      if (lookahead == '[') ADVANCE(436);
      if (lookahead == ']') ADVANCE(463);
      if (lookahead == '_') ADVANCE(508);
      if (lookahead == '`') ADVANCE(211);
      if (lookahead == 't') ADVANCE(202);
      if (lookahead == '{') ADVANCE(472);
      if (lookahead == '}') ADVANCE(499);
      if (lookahead == 0xaf) ADVANCE(341);
      if (lookahead == 0x2682) ADVANCE(283);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(812);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(796);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(312);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(342);
      END_STATE();
    case 1:
      if (lookahead == '\t') SKIP(48);
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(48);
      if (lookahead == ' ') ADVANCE(565);
      if (lookahead == '"') ADVANCE(712);
      if (lookahead == '#') SKIP(48);
      if (lookahead == '$') ADVANCE(1);
      if (lookahead == '(') ADVANCE(401);
      if (lookahead == ')') ADVANCE(428);
      if (lookahead == '/') ADVANCE(801);
      if (lookahead == '@') ADVANCE(742);
      if (lookahead == '[') ADVANCE(437);
      if (lookahead == ']') ADVANCE(464);
      if (lookahead == '_') ADVANCE(509);
      if (lookahead == '`') ADVANCE(48);
      if (lookahead == 't') ADVANCE(46);
      if (lookahead == '{') ADVANCE(473);
      if (lookahead == '}') ADVANCE(500);
      if (lookahead == 0xaf) ADVANCE(313);
      if (lookahead == 0x2682) ADVANCE(284);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(813);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(782);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(313);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(343);
      if (lookahead != 0) SKIP(48);
      END_STATE();
    case 2:
      if (lookahead == '\t') SKIP(48);
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(48);
      if (lookahead == ' ') ADVANCE(44);
      if (lookahead == '"') ADVANCE(712);
      if (lookahead == '#') SKIP(48);
      if (lookahead == '$') ADVANCE(1);
      if (lookahead == '(') ADVANCE(401);
      if (lookahead == ')') ADVANCE(428);
      if (lookahead == '/') ADVANCE(801);
      if (lookahead == '1') ADVANCE(228);
      if (lookahead == '2') ADVANCE(237);
      if (lookahead == '3') ADVANCE(246);
      if (lookahead == '@') ADVANCE(742);
      if (lookahead == '[') ADVANCE(437);
      if (lookahead == ']') ADVANCE(464);
      if (lookahead == '_') ADVANCE(509);
      if (lookahead == '`') ADVANCE(48);
      if (lookahead == 't') ADVANCE(46);
      if (lookahead == '{') ADVANCE(473);
      if (lookahead == '}') ADVANCE(500);
      if (lookahead == 0xaf) ADVANCE(313);
      if (lookahead == 0x2682) ADVANCE(284);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(813);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(782);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(313);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(343);
      if (lookahead != 0) SKIP(48);
      END_STATE();
    case 3:
      if (lookahead == '\t') SKIP(58);
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(58);
      if (lookahead == ' ') ADVANCE(576);
      if (lookahead == '"') ADVANCE(714);
      if (lookahead == '#') SKIP(58);
      if (lookahead == '$') ADVANCE(3);
      if (lookahead == '(') ADVANCE(403);
      if (lookahead == '@') ADVANCE(744);
      if (lookahead == '[') ADVANCE(439);
      if (lookahead == '`') ADVANCE(58);
      if (lookahead == 't') ADVANCE(56);
      if (lookahead == '{') ADVANCE(475);
      if (lookahead == 0xaf) ADVANCE(315);
      if (lookahead == 0x2682) ADVANCE(286);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(814);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(783);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(315);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(345);
      if (lookahead != 0) SKIP(58);
      END_STATE();
    case 4:
      if (lookahead == '\t') SKIP(58);
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(58);
      if (lookahead == ' ') ADVANCE(54);
      if (lookahead == '"') ADVANCE(714);
      if (lookahead == '#') SKIP(58);
      if (lookahead == '$') ADVANCE(3);
      if (lookahead == '(') ADVANCE(403);
      if (lookahead == '1') ADVANCE(230);
      if (lookahead == '2') ADVANCE(239);
      if (lookahead == '3') ADVANCE(248);
      if (lookahead == '@') ADVANCE(744);
      if (lookahead == '[') ADVANCE(439);
      if (lookahead == '`') ADVANCE(58);
      if (lookahead == 't') ADVANCE(56);
      if (lookahead == '{') ADVANCE(475);
      if (lookahead == 0xaf) ADVANCE(315);
      if (lookahead == 0x2682) ADVANCE(286);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(814);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(783);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(315);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(345);
      if (lookahead != 0) SKIP(58);
      END_STATE();
    case 5:
      if (lookahead == '\t') SKIP(68);
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(68);
      if (lookahead == ' ') ADVANCE(587);
      if (lookahead == '"') ADVANCE(716);
      if (lookahead == '#') SKIP(68);
      if (lookahead == '$') ADVANCE(5);
      if (lookahead == '(') ADVANCE(405);
      if (lookahead == '@') ADVANCE(746);
      if (lookahead == '[') ADVANCE(441);
      if (lookahead == '`') ADVANCE(68);
      if (lookahead == 't') ADVANCE(66);
      if (lookahead == '{') ADVANCE(477);
      if (lookahead == '}') ADVANCE(502);
      if (lookahead == 0xaf) ADVANCE(317);
      if (lookahead == 0x2682) ADVANCE(288);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(815);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(784);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(317);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(347);
      if (lookahead != 0) SKIP(68);
      END_STATE();
    case 6:
      if (lookahead == '\t') SKIP(68);
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(68);
      if (lookahead == ' ') ADVANCE(64);
      if (lookahead == '"') ADVANCE(716);
      if (lookahead == '#') SKIP(68);
      if (lookahead == '$') ADVANCE(5);
      if (lookahead == '(') ADVANCE(405);
      if (lookahead == '@') ADVANCE(746);
      if (lookahead == '[') ADVANCE(441);
      if (lookahead == '`') ADVANCE(68);
      if (lookahead == 't') ADVANCE(66);
      if (lookahead == '{') ADVANCE(477);
      if (lookahead == '}') ADVANCE(502);
      if (lookahead == 0xaf) ADVANCE(317);
      if (lookahead == 0x2682) ADVANCE(288);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(815);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(784);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(317);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(347);
      if (lookahead != 0) SKIP(68);
      END_STATE();
    case 7:
      if (lookahead == '\t') SKIP(78);
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(78);
      if (lookahead == ' ') ADVANCE(598);
      if (lookahead == '"') ADVANCE(718);
      if (lookahead == '#') SKIP(78);
      if (lookahead == '$') ADVANCE(7);
      if (lookahead == '(') ADVANCE(407);
      if (lookahead == '@') ADVANCE(748);
      if (lookahead == '[') ADVANCE(443);
      if (lookahead == ']') ADVANCE(466);
      if (lookahead == '`') ADVANCE(78);
      if (lookahead == 't') ADVANCE(76);
      if (lookahead == '{') ADVANCE(479);
      if (lookahead == 0xaf) ADVANCE(319);
      if (lookahead == 0x2682) ADVANCE(290);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(816);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(785);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(319);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(349);
      if (lookahead != 0) SKIP(78);
      END_STATE();
    case 8:
      if (lookahead == '\t') SKIP(78);
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(78);
      if (lookahead == ' ') ADVANCE(74);
      if (lookahead == '"') ADVANCE(718);
      if (lookahead == '#') SKIP(78);
      if (lookahead == '$') ADVANCE(7);
      if (lookahead == '(') ADVANCE(407);
      if (lookahead == '@') ADVANCE(748);
      if (lookahead == '[') ADVANCE(443);
      if (lookahead == ']') ADVANCE(466);
      if (lookahead == '`') ADVANCE(78);
      if (lookahead == 't') ADVANCE(76);
      if (lookahead == '{') ADVANCE(479);
      if (lookahead == 0xaf) ADVANCE(319);
      if (lookahead == 0x2682) ADVANCE(290);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(816);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(785);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(319);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(349);
      if (lookahead != 0) SKIP(78);
      END_STATE();
    case 9:
      if (lookahead == '\t') SKIP(88);
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(88);
      if (lookahead == ' ') ADVANCE(609);
      if (lookahead == '"') ADVANCE(720);
      if (lookahead == '#') SKIP(88);
      if (lookahead == '$') ADVANCE(9);
      if (lookahead == '(') ADVANCE(409);
      if (lookahead == ')') ADVANCE(430);
      if (lookahead == '@') ADVANCE(750);
      if (lookahead == '[') ADVANCE(445);
      if (lookahead == '`') ADVANCE(88);
      if (lookahead == 't') ADVANCE(86);
      if (lookahead == '{') ADVANCE(481);
      if (lookahead == 0xaf) ADVANCE(321);
      if (lookahead == 0x2682) ADVANCE(292);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(817);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(786);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(321);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(351);
      if (lookahead != 0) SKIP(88);
      END_STATE();
    case 10:
      if (lookahead == '\t') SKIP(88);
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(88);
      if (lookahead == ' ') ADVANCE(84);
      if (lookahead == '"') ADVANCE(720);
      if (lookahead == '#') SKIP(88);
      if (lookahead == '$') ADVANCE(9);
      if (lookahead == '(') ADVANCE(409);
      if (lookahead == ')') ADVANCE(430);
      if (lookahead == '@') ADVANCE(750);
      if (lookahead == '[') ADVANCE(445);
      if (lookahead == '`') ADVANCE(88);
      if (lookahead == 't') ADVANCE(86);
      if (lookahead == '{') ADVANCE(481);
      if (lookahead == 0xaf) ADVANCE(321);
      if (lookahead == 0x2682) ADVANCE(292);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(817);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(786);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(321);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(351);
      if (lookahead != 0) SKIP(88);
      END_STATE();
    case 11:
      if (lookahead == '\t') SKIP(187);
      if (lookahead == ' ') ADVANCE(708);
      if (lookahead == '"') ADVANCE(738);
      if (lookahead == '#') SKIP(187);
      if (lookahead == '$') ADVANCE(11);
      if (lookahead == '@') ADVANCE(768);
      if (lookahead == '`') ADVANCE(187);
      if (lookahead == 't') ADVANCE(185);
      if (lookahead == 0xaf) ADVANCE(339);
      if (lookahead == 0x2682) ADVANCE(310);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(826);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(795);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(339);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(369);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') SKIP(187);
      END_STATE();
    case 12:
      if (lookahead == '\t') SKIP(187);
      if (lookahead == ' ') ADVANCE(183);
      if (lookahead == '"') ADVANCE(738);
      if (lookahead == '#') SKIP(187);
      if (lookahead == '$') ADVANCE(11);
      if (lookahead == '@') ADVANCE(768);
      if (lookahead == '`') ADVANCE(187);
      if (lookahead == 't') ADVANCE(185);
      if (lookahead == 0xaf) ADVANCE(339);
      if (lookahead == 0x2682) ADVANCE(310);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(826);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(795);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(339);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(369);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') SKIP(187);
      END_STATE();
    case 13:
      if (lookahead == '\t') SKIP(98);
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(98);
      if (lookahead == ' ') ADVANCE(620);
      if (lookahead == '"') ADVANCE(722);
      if (lookahead == '#') SKIP(98);
      if (lookahead == '$') ADVANCE(13);
      if (lookahead == '(') ADVANCE(411);
      if (lookahead == '@') ADVANCE(752);
      if (lookahead == '[') ADVANCE(447);
      if (lookahead == '_') ADVANCE(511);
      if (lookahead == '`') ADVANCE(98);
      if (lookahead == 't') ADVANCE(96);
      if (lookahead == '{') ADVANCE(483);
      if (lookahead == 0xaf) ADVANCE(323);
      if (lookahead == 0x2682) ADVANCE(294);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(818);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(787);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(323);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(353);
      if (lookahead != 0) SKIP(98);
      END_STATE();
    case 14:
      if (lookahead == '\t') SKIP(98);
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(98);
      if (lookahead == ' ') ADVANCE(94);
      if (lookahead == '"') ADVANCE(722);
      if (lookahead == '#') SKIP(98);
      if (lookahead == '$') ADVANCE(13);
      if (lookahead == '(') ADVANCE(411);
      if (lookahead == '1') ADVANCE(232);
      if (lookahead == '2') ADVANCE(241);
      if (lookahead == '3') ADVANCE(250);
      if (lookahead == '@') ADVANCE(752);
      if (lookahead == '[') ADVANCE(447);
      if (lookahead == '_') ADVANCE(511);
      if (lookahead == '`') ADVANCE(98);
      if (lookahead == 't') ADVANCE(96);
      if (lookahead == '{') ADVANCE(483);
      if (lookahead == 0xaf) ADVANCE(323);
      if (lookahead == 0x2682) ADVANCE(294);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(818);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(787);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(323);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(353);
      if (lookahead != 0) SKIP(98);
      END_STATE();
    case 15:
      if (lookahead == '\t') SKIP(108);
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(108);
      if (lookahead == ' ') ADVANCE(631);
      if (lookahead == '"') ADVANCE(724);
      if (lookahead == '#') SKIP(108);
      if (lookahead == '$') ADVANCE(15);
      if (lookahead == '(') ADVANCE(413);
      if (lookahead == '/') ADVANCE(803);
      if (lookahead == '@') ADVANCE(754);
      if (lookahead == '[') ADVANCE(449);
      if (lookahead == '_') ADVANCE(513);
      if (lookahead == '`') ADVANCE(108);
      if (lookahead == 't') ADVANCE(106);
      if (lookahead == '{') ADVANCE(485);
      if (lookahead == 0xaf) ADVANCE(325);
      if (lookahead == 0x2682) ADVANCE(296);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(819);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(788);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(325);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(355);
      if (lookahead != 0) SKIP(108);
      END_STATE();
    case 16:
      if (lookahead == '\t') SKIP(108);
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(108);
      if (lookahead == ' ') ADVANCE(104);
      if (lookahead == '"') ADVANCE(724);
      if (lookahead == '#') SKIP(108);
      if (lookahead == '$') ADVANCE(15);
      if (lookahead == '(') ADVANCE(413);
      if (lookahead == '/') ADVANCE(803);
      if (lookahead == '1') ADVANCE(234);
      if (lookahead == '2') ADVANCE(243);
      if (lookahead == '3') ADVANCE(252);
      if (lookahead == '@') ADVANCE(754);
      if (lookahead == '[') ADVANCE(449);
      if (lookahead == '_') ADVANCE(513);
      if (lookahead == '`') ADVANCE(108);
      if (lookahead == 't') ADVANCE(106);
      if (lookahead == '{') ADVANCE(485);
      if (lookahead == 0xaf) ADVANCE(325);
      if (lookahead == 0x2682) ADVANCE(296);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(819);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(788);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(325);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(355);
      if (lookahead != 0) SKIP(108);
      END_STATE();
    case 17:
      if (lookahead == '\t') SKIP(118);
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(118);
      if (lookahead == ' ') ADVANCE(642);
      if (lookahead == '"') ADVANCE(726);
      if (lookahead == '#') SKIP(118);
      if (lookahead == '$') ADVANCE(17);
      if (lookahead == '(') ADVANCE(415);
      if (lookahead == '/') ADVANCE(805);
      if (lookahead == '@') ADVANCE(756);
      if (lookahead == '[') ADVANCE(451);
      if (lookahead == ']') ADVANCE(468);
      if (lookahead == '_') ADVANCE(515);
      if (lookahead == '`') ADVANCE(118);
      if (lookahead == 't') ADVANCE(116);
      if (lookahead == '{') ADVANCE(487);
      if (lookahead == 0xaf) ADVANCE(327);
      if (lookahead == 0x2682) ADVANCE(298);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(820);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(789);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(327);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(357);
      if (lookahead != 0) SKIP(118);
      END_STATE();
    case 18:
      if (lookahead == '\t') SKIP(118);
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(118);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead == '"') ADVANCE(726);
      if (lookahead == '#') SKIP(118);
      if (lookahead == '$') ADVANCE(17);
      if (lookahead == '(') ADVANCE(415);
      if (lookahead == '/') ADVANCE(805);
      if (lookahead == '@') ADVANCE(756);
      if (lookahead == '[') ADVANCE(451);
      if (lookahead == ']') ADVANCE(468);
      if (lookahead == '_') ADVANCE(515);
      if (lookahead == '`') ADVANCE(118);
      if (lookahead == 't') ADVANCE(116);
      if (lookahead == '{') ADVANCE(487);
      if (lookahead == 0xaf) ADVANCE(327);
      if (lookahead == 0x2682) ADVANCE(298);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(820);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(789);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(327);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(357);
      if (lookahead != 0) SKIP(118);
      END_STATE();
    case 19:
      if (lookahead == '\t') SKIP(128);
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(128);
      if (lookahead == ' ') ADVANCE(653);
      if (lookahead == '"') ADVANCE(728);
      if (lookahead == '#') SKIP(128);
      if (lookahead == '$') ADVANCE(19);
      if (lookahead == '(') ADVANCE(417);
      if (lookahead == '@') ADVANCE(758);
      if (lookahead == '[') ADVANCE(453);
      if (lookahead == ']') ADVANCE(470);
      if (lookahead == '_') ADVANCE(517);
      if (lookahead == '`') ADVANCE(128);
      if (lookahead == 't') ADVANCE(126);
      if (lookahead == '{') ADVANCE(489);
      if (lookahead == 0xaf) ADVANCE(329);
      if (lookahead == 0x2682) ADVANCE(300);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(821);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(790);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(329);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(359);
      if (lookahead != 0) SKIP(128);
      END_STATE();
    case 20:
      if (lookahead == '\t') SKIP(128);
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(128);
      if (lookahead == ' ') ADVANCE(124);
      if (lookahead == '"') ADVANCE(728);
      if (lookahead == '#') SKIP(128);
      if (lookahead == '$') ADVANCE(19);
      if (lookahead == '(') ADVANCE(417);
      if (lookahead == '@') ADVANCE(758);
      if (lookahead == '[') ADVANCE(453);
      if (lookahead == ']') ADVANCE(470);
      if (lookahead == '_') ADVANCE(517);
      if (lookahead == '`') ADVANCE(128);
      if (lookahead == 't') ADVANCE(126);
      if (lookahead == '{') ADVANCE(489);
      if (lookahead == 0xaf) ADVANCE(329);
      if (lookahead == 0x2682) ADVANCE(300);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(821);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(790);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(329);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(359);
      if (lookahead != 0) SKIP(128);
      END_STATE();
    case 21:
      if (lookahead == '\t') SKIP(138);
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(138);
      if (lookahead == ' ') ADVANCE(664);
      if (lookahead == '"') ADVANCE(730);
      if (lookahead == '#') SKIP(138);
      if (lookahead == '$') ADVANCE(21);
      if (lookahead == '(') ADVANCE(419);
      if (lookahead == ')') ADVANCE(432);
      if (lookahead == '@') ADVANCE(760);
      if (lookahead == '[') ADVANCE(455);
      if (lookahead == '_') ADVANCE(519);
      if (lookahead == '`') ADVANCE(138);
      if (lookahead == 't') ADVANCE(136);
      if (lookahead == '{') ADVANCE(491);
      if (lookahead == 0xaf) ADVANCE(331);
      if (lookahead == 0x2682) ADVANCE(302);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(822);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(791);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(331);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(361);
      if (lookahead != 0) SKIP(138);
      END_STATE();
    case 22:
      if (lookahead == '\t') SKIP(138);
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(138);
      if (lookahead == ' ') ADVANCE(134);
      if (lookahead == '"') ADVANCE(730);
      if (lookahead == '#') SKIP(138);
      if (lookahead == '$') ADVANCE(21);
      if (lookahead == '(') ADVANCE(419);
      if (lookahead == ')') ADVANCE(432);
      if (lookahead == '@') ADVANCE(760);
      if (lookahead == '[') ADVANCE(455);
      if (lookahead == '_') ADVANCE(519);
      if (lookahead == '`') ADVANCE(138);
      if (lookahead == 't') ADVANCE(136);
      if (lookahead == '{') ADVANCE(491);
      if (lookahead == 0xaf) ADVANCE(331);
      if (lookahead == 0x2682) ADVANCE(302);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(822);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(791);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(331);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(361);
      if (lookahead != 0) SKIP(138);
      END_STATE();
    case 23:
      if (lookahead == '\t') SKIP(148);
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(148);
      if (lookahead == ' ') ADVANCE(675);
      if (lookahead == '"') ADVANCE(732);
      if (lookahead == '#') SKIP(148);
      if (lookahead == '$') ADVANCE(23);
      if (lookahead == '(') ADVANCE(421);
      if (lookahead == '/') ADVANCE(807);
      if (lookahead == '@') ADVANCE(762);
      if (lookahead == '[') ADVANCE(457);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == '`') ADVANCE(148);
      if (lookahead == 't') ADVANCE(146);
      if (lookahead == '{') ADVANCE(493);
      if (lookahead == '}') ADVANCE(504);
      if (lookahead == 0xaf) ADVANCE(333);
      if (lookahead == 0x2682) ADVANCE(304);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(823);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(792);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(333);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(363);
      if (lookahead != 0) SKIP(148);
      END_STATE();
    case 24:
      if (lookahead == '\t') SKIP(148);
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(148);
      if (lookahead == ' ') ADVANCE(144);
      if (lookahead == '"') ADVANCE(732);
      if (lookahead == '#') SKIP(148);
      if (lookahead == '$') ADVANCE(23);
      if (lookahead == '(') ADVANCE(421);
      if (lookahead == '/') ADVANCE(807);
      if (lookahead == '@') ADVANCE(762);
      if (lookahead == '[') ADVANCE(457);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == '`') ADVANCE(148);
      if (lookahead == 't') ADVANCE(146);
      if (lookahead == '{') ADVANCE(493);
      if (lookahead == '}') ADVANCE(504);
      if (lookahead == 0xaf) ADVANCE(333);
      if (lookahead == 0x2682) ADVANCE(304);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(823);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(792);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(333);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(363);
      if (lookahead != 0) SKIP(148);
      END_STATE();
    case 25:
      if (lookahead == '\t') SKIP(158);
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(158);
      if (lookahead == ' ') ADVANCE(686);
      if (lookahead == '"') ADVANCE(734);
      if (lookahead == '#') SKIP(158);
      if (lookahead == '$') ADVANCE(25);
      if (lookahead == '(') ADVANCE(423);
      if (lookahead == '@') ADVANCE(764);
      if (lookahead == '[') ADVANCE(459);
      if (lookahead == '_') ADVANCE(523);
      if (lookahead == '`') ADVANCE(158);
      if (lookahead == 't') ADVANCE(156);
      if (lookahead == '{') ADVANCE(495);
      if (lookahead == '}') ADVANCE(506);
      if (lookahead == 0xaf) ADVANCE(335);
      if (lookahead == 0x2682) ADVANCE(306);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(824);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(793);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(335);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(365);
      if (lookahead != 0) SKIP(158);
      END_STATE();
    case 26:
      if (lookahead == '\t') SKIP(158);
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(158);
      if (lookahead == ' ') ADVANCE(154);
      if (lookahead == '"') ADVANCE(734);
      if (lookahead == '#') SKIP(158);
      if (lookahead == '$') ADVANCE(25);
      if (lookahead == '(') ADVANCE(423);
      if (lookahead == '@') ADVANCE(764);
      if (lookahead == '[') ADVANCE(459);
      if (lookahead == '_') ADVANCE(523);
      if (lookahead == '`') ADVANCE(158);
      if (lookahead == 't') ADVANCE(156);
      if (lookahead == '{') ADVANCE(495);
      if (lookahead == '}') ADVANCE(506);
      if (lookahead == 0xaf) ADVANCE(335);
      if (lookahead == 0x2682) ADVANCE(306);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(824);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(793);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(335);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(365);
      if (lookahead != 0) SKIP(158);
      END_STATE();
    case 27:
      if (lookahead == '\t') SKIP(168);
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(168);
      if (lookahead == ' ') ADVANCE(697);
      if (lookahead == '"') ADVANCE(736);
      if (lookahead == '#') SKIP(168);
      if (lookahead == '$') ADVANCE(27);
      if (lookahead == '(') ADVANCE(425);
      if (lookahead == ')') ADVANCE(434);
      if (lookahead == '/') ADVANCE(809);
      if (lookahead == '@') ADVANCE(766);
      if (lookahead == '[') ADVANCE(461);
      if (lookahead == '_') ADVANCE(525);
      if (lookahead == '`') ADVANCE(168);
      if (lookahead == 't') ADVANCE(166);
      if (lookahead == '{') ADVANCE(497);
      if (lookahead == 0xaf) ADVANCE(337);
      if (lookahead == 0x2682) ADVANCE(308);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(825);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(794);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(337);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(367);
      if (lookahead != 0) SKIP(168);
      END_STATE();
    case 28:
      if (lookahead == '\t') SKIP(168);
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(168);
      if (lookahead == ' ') ADVANCE(164);
      if (lookahead == '"') ADVANCE(736);
      if (lookahead == '#') SKIP(168);
      if (lookahead == '$') ADVANCE(27);
      if (lookahead == '(') ADVANCE(425);
      if (lookahead == ')') ADVANCE(434);
      if (lookahead == '/') ADVANCE(809);
      if (lookahead == '@') ADVANCE(766);
      if (lookahead == '[') ADVANCE(461);
      if (lookahead == '_') ADVANCE(525);
      if (lookahead == '`') ADVANCE(168);
      if (lookahead == 't') ADVANCE(166);
      if (lookahead == '{') ADVANCE(497);
      if (lookahead == 0xaf) ADVANCE(337);
      if (lookahead == 0x2682) ADVANCE(308);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(825);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(794);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(337);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(367);
      if (lookahead != 0) SKIP(168);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(226);
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(29);
      if (lookahead == '"') ADVANCE(711);
      if (lookahead == '#') SKIP(68);
      if (lookahead == '$') ADVANCE(174);
      if (lookahead == '(') ADVANCE(400);
      if (lookahead == '@') ADVANCE(741);
      if (lookahead == '[') ADVANCE(436);
      if (lookahead == '`') ADVANCE(211);
      if (lookahead == 't') ADVANCE(205);
      if (lookahead == '{') ADVANCE(472);
      if (lookahead == '}') ADVANCE(499);
      if (lookahead == 0xaf) ADVANCE(341);
      if (lookahead == 0x2682) ADVANCE(283);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(30);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(812);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(796);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(312);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(342);
      END_STATE();
    case 31:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(29);
      if (lookahead == '"') ADVANCE(711);
      if (lookahead == '#') SKIP(78);
      if (lookahead == '$') ADVANCE(174);
      if (lookahead == '(') ADVANCE(400);
      if (lookahead == '@') ADVANCE(741);
      if (lookahead == '[') ADVANCE(436);
      if (lookahead == ']') ADVANCE(463);
      if (lookahead == '`') ADVANCE(211);
      if (lookahead == 't') ADVANCE(205);
      if (lookahead == '{') ADVANCE(472);
      if (lookahead == 0xaf) ADVANCE(341);
      if (lookahead == 0x2682) ADVANCE(283);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(31);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(812);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(796);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(312);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(342);
      END_STATE();
    case 32:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(29);
      if (lookahead == '"') ADVANCE(711);
      if (lookahead == '#') SKIP(88);
      if (lookahead == '$') ADVANCE(174);
      if (lookahead == '(') ADVANCE(400);
      if (lookahead == ')') ADVANCE(427);
      if (lookahead == '@') ADVANCE(741);
      if (lookahead == '[') ADVANCE(436);
      if (lookahead == '`') ADVANCE(211);
      if (lookahead == 't') ADVANCE(205);
      if (lookahead == '{') ADVANCE(472);
      if (lookahead == 0xaf) ADVANCE(341);
      if (lookahead == 0x2682) ADVANCE(283);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(32);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(812);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(796);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(312);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(342);
      END_STATE();
    case 33:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(29);
      if (lookahead == '"') ADVANCE(711);
      if (lookahead == '#') SKIP(118);
      if (lookahead == '$') ADVANCE(174);
      if (lookahead == '(') ADVANCE(400);
      if (lookahead == '/') ADVANCE(800);
      if (lookahead == '@') ADVANCE(741);
      if (lookahead == '[') ADVANCE(436);
      if (lookahead == ']') ADVANCE(463);
      if (lookahead == '_') ADVANCE(508);
      if (lookahead == '`') ADVANCE(211);
      if (lookahead == 't') ADVANCE(205);
      if (lookahead == '{') ADVANCE(472);
      if (lookahead == 0xaf) ADVANCE(341);
      if (lookahead == 0x2682) ADVANCE(283);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(33);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(812);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(796);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(312);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(342);
      END_STATE();
    case 34:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(29);
      if (lookahead == '"') ADVANCE(711);
      if (lookahead == '#') SKIP(128);
      if (lookahead == '$') ADVANCE(174);
      if (lookahead == '(') ADVANCE(400);
      if (lookahead == '@') ADVANCE(741);
      if (lookahead == '[') ADVANCE(436);
      if (lookahead == ']') ADVANCE(463);
      if (lookahead == '_') ADVANCE(508);
      if (lookahead == '`') ADVANCE(211);
      if (lookahead == 't') ADVANCE(205);
      if (lookahead == '{') ADVANCE(472);
      if (lookahead == 0xaf) ADVANCE(341);
      if (lookahead == 0x2682) ADVANCE(283);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(34);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(812);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(796);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(312);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(342);
      END_STATE();
    case 35:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(29);
      if (lookahead == '"') ADVANCE(711);
      if (lookahead == '#') SKIP(138);
      if (lookahead == '$') ADVANCE(174);
      if (lookahead == '(') ADVANCE(400);
      if (lookahead == ')') ADVANCE(427);
      if (lookahead == '@') ADVANCE(741);
      if (lookahead == '[') ADVANCE(436);
      if (lookahead == '_') ADVANCE(508);
      if (lookahead == '`') ADVANCE(211);
      if (lookahead == 't') ADVANCE(205);
      if (lookahead == '{') ADVANCE(472);
      if (lookahead == 0xaf) ADVANCE(341);
      if (lookahead == 0x2682) ADVANCE(283);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(35);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(812);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(796);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(312);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(342);
      END_STATE();
    case 36:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(29);
      if (lookahead == '"') ADVANCE(711);
      if (lookahead == '#') SKIP(148);
      if (lookahead == '$') ADVANCE(174);
      if (lookahead == '(') ADVANCE(400);
      if (lookahead == '/') ADVANCE(800);
      if (lookahead == '@') ADVANCE(741);
      if (lookahead == '[') ADVANCE(436);
      if (lookahead == '_') ADVANCE(508);
      if (lookahead == '`') ADVANCE(211);
      if (lookahead == 't') ADVANCE(205);
      if (lookahead == '{') ADVANCE(472);
      if (lookahead == '}') ADVANCE(499);
      if (lookahead == 0xaf) ADVANCE(341);
      if (lookahead == 0x2682) ADVANCE(283);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(36);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(812);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(796);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(312);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(342);
      END_STATE();
    case 37:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(29);
      if (lookahead == '"') ADVANCE(711);
      if (lookahead == '#') SKIP(158);
      if (lookahead == '$') ADVANCE(174);
      if (lookahead == '(') ADVANCE(400);
      if (lookahead == '@') ADVANCE(741);
      if (lookahead == '[') ADVANCE(436);
      if (lookahead == '_') ADVANCE(508);
      if (lookahead == '`') ADVANCE(211);
      if (lookahead == 't') ADVANCE(205);
      if (lookahead == '{') ADVANCE(472);
      if (lookahead == '}') ADVANCE(499);
      if (lookahead == 0xaf) ADVANCE(341);
      if (lookahead == 0x2682) ADVANCE(283);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(37);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(812);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(796);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(312);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(342);
      END_STATE();
    case 38:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(29);
      if (lookahead == '"') ADVANCE(711);
      if (lookahead == '#') SKIP(168);
      if (lookahead == '$') ADVANCE(174);
      if (lookahead == '(') ADVANCE(400);
      if (lookahead == ')') ADVANCE(427);
      if (lookahead == '/') ADVANCE(800);
      if (lookahead == '@') ADVANCE(741);
      if (lookahead == '[') ADVANCE(436);
      if (lookahead == '_') ADVANCE(508);
      if (lookahead == '`') ADVANCE(211);
      if (lookahead == 't') ADVANCE(205);
      if (lookahead == '{') ADVANCE(472);
      if (lookahead == 0xaf) ADVANCE(341);
      if (lookahead == 0x2682) ADVANCE(283);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(38);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(812);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(796);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(312);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(342);
      END_STATE();
    case 39:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(29);
      if (lookahead == '#') SKIP(170);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(39);
      END_STATE();
    case 40:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(48);
      if (lookahead == '"') ADVANCE(712);
      if (lookahead == '#') SKIP(48);
      if (lookahead == '$') ADVANCE(1);
      if (lookahead == '(') ADVANCE(401);
      if (lookahead == ')') ADVANCE(428);
      if (lookahead == '-') ADVANCE(343);
      if (lookahead == '/') ADVANCE(801);
      if (lookahead == '@') ADVANCE(742);
      if (lookahead == '[') ADVANCE(437);
      if (lookahead == ']') ADVANCE(464);
      if (lookahead == '_') ADVANCE(509);
      if (lookahead == '`') ADVANCE(48);
      if (lookahead == 't') ADVANCE(46);
      if (lookahead == '{') ADVANCE(473);
      if (lookahead == '}') ADVANCE(500);
      if (lookahead == 0xaf) ADVANCE(313);
      if (lookahead == 0x2682) ADVANCE(284);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(48);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(813);
      if ((',' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(782);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(313);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(343);
      if (lookahead != 0) SKIP(48);
      END_STATE();
    case 41:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(48);
      if (lookahead == '"') ADVANCE(712);
      if (lookahead == '#') SKIP(48);
      if (lookahead == '$') ADVANCE(1);
      if (lookahead == '(') ADVANCE(401);
      if (lookahead == ')') ADVANCE(428);
      if (lookahead == '/') ADVANCE(801);
      if (lookahead == '@') ADVANCE(742);
      if (lookahead == '[') ADVANCE(437);
      if (lookahead == ']') ADVANCE(464);
      if (lookahead == '_') ADVANCE(509);
      if (lookahead == '`') ADVANCE(48);
      if (lookahead == 'd') ADVANCE(43);
      if (lookahead == 't') ADVANCE(46);
      if (lookahead == '{') ADVANCE(473);
      if (lookahead == '}') ADVANCE(500);
      if (lookahead == 0xaf) ADVANCE(313);
      if (lookahead == 0x2682) ADVANCE(284);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(48);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(813);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(782);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(313);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(343);
      if (lookahead != 0) SKIP(48);
      END_STATE();
    case 42:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(48);
      if (lookahead == '"') ADVANCE(712);
      if (lookahead == '#') SKIP(48);
      if (lookahead == '$') ADVANCE(1);
      if (lookahead == '(') ADVANCE(401);
      if (lookahead == ')') ADVANCE(428);
      if (lookahead == '/') ADVANCE(801);
      if (lookahead == '@') ADVANCE(742);
      if (lookahead == '[') ADVANCE(437);
      if (lookahead == ']') ADVANCE(464);
      if (lookahead == '_') ADVANCE(509);
      if (lookahead == '`') ADVANCE(48);
      if (lookahead == 'd') ADVANCE(47);
      if (lookahead == 't') ADVANCE(46);
      if (lookahead == '{') ADVANCE(473);
      if (lookahead == '}') ADVANCE(500);
      if (lookahead == 0xaf) ADVANCE(313);
      if (lookahead == 0x2682) ADVANCE(284);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(48);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(813);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(782);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(313);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(343);
      if (lookahead != 0) SKIP(48);
      END_STATE();
    case 43:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(48);
      if (lookahead == '"') ADVANCE(712);
      if (lookahead == '#') SKIP(48);
      if (lookahead == '$') ADVANCE(1);
      if (lookahead == '(') ADVANCE(401);
      if (lookahead == ')') ADVANCE(428);
      if (lookahead == '/') ADVANCE(801);
      if (lookahead == '@') ADVANCE(742);
      if (lookahead == '[') ADVANCE(437);
      if (lookahead == ']') ADVANCE(464);
      if (lookahead == '_') ADVANCE(509);
      if (lookahead == '`') ADVANCE(48);
      if (lookahead == 'e') ADVANCE(45);
      if (lookahead == 't') ADVANCE(46);
      if (lookahead == '{') ADVANCE(473);
      if (lookahead == '}') ADVANCE(500);
      if (lookahead == 0xaf) ADVANCE(313);
      if (lookahead == 0x2682) ADVANCE(284);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(48);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(813);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(782);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(313);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(343);
      if (lookahead != 0) SKIP(48);
      END_STATE();
    case 44:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(48);
      if (lookahead == '"') ADVANCE(712);
      if (lookahead == '#') SKIP(48);
      if (lookahead == '$') ADVANCE(1);
      if (lookahead == '(') ADVANCE(401);
      if (lookahead == ')') ADVANCE(428);
      if (lookahead == '/') ADVANCE(801);
      if (lookahead == '@') ADVANCE(742);
      if (lookahead == '[') ADVANCE(437);
      if (lookahead == ']') ADVANCE(464);
      if (lookahead == '_') ADVANCE(509);
      if (lookahead == '`') ADVANCE(48);
      if (lookahead == 'i') ADVANCE(41);
      if (lookahead == 't') ADVANCE(46);
      if (lookahead == '{') ADVANCE(473);
      if (lookahead == '}') ADVANCE(500);
      if (lookahead == 0xaf) ADVANCE(313);
      if (lookahead == 0x2682) ADVANCE(284);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(48);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(813);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(782);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(313);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(343);
      if (lookahead != 0) SKIP(48);
      END_STATE();
    case 45:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(48);
      if (lookahead == '"') ADVANCE(712);
      if (lookahead == '#') SKIP(48);
      if (lookahead == '$') ADVANCE(1);
      if (lookahead == '(') ADVANCE(401);
      if (lookahead == ')') ADVANCE(428);
      if (lookahead == '/') ADVANCE(801);
      if (lookahead == '@') ADVANCE(742);
      if (lookahead == '[') ADVANCE(437);
      if (lookahead == ']') ADVANCE(464);
      if (lookahead == '_') ADVANCE(509);
      if (lookahead == '`') ADVANCE(48);
      if (lookahead == 'n') ADVANCE(49);
      if (lookahead == 't') ADVANCE(46);
      if (lookahead == '{') ADVANCE(473);
      if (lookahead == '}') ADVANCE(500);
      if (lookahead == 0xaf) ADVANCE(313);
      if (lookahead == 0x2682) ADVANCE(284);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(48);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(813);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(782);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(313);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(343);
      if (lookahead != 0) SKIP(48);
      END_STATE();
    case 46:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(48);
      if (lookahead == '"') ADVANCE(712);
      if (lookahead == '#') SKIP(48);
      if (lookahead == '$') ADVANCE(1);
      if (lookahead == '(') ADVANCE(401);
      if (lookahead == ')') ADVANCE(428);
      if (lookahead == '/') ADVANCE(801);
      if (lookahead == '@') ADVANCE(742);
      if (lookahead == '[') ADVANCE(437);
      if (lookahead == ']') ADVANCE(464);
      if (lookahead == '_') ADVANCE(509);
      if (lookahead == '`') ADVANCE(48);
      if (lookahead == 'o') ADVANCE(42);
      if (lookahead == 't') ADVANCE(46);
      if (lookahead == '{') ADVANCE(473);
      if (lookahead == '}') ADVANCE(500);
      if (lookahead == 0xaf) ADVANCE(313);
      if (lookahead == 0x2682) ADVANCE(284);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(48);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(813);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(782);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(313);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(343);
      if (lookahead != 0) SKIP(48);
      END_STATE();
    case 47:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(48);
      if (lookahead == '"') ADVANCE(712);
      if (lookahead == '#') SKIP(48);
      if (lookahead == '$') ADVANCE(1);
      if (lookahead == '(') ADVANCE(401);
      if (lookahead == ')') ADVANCE(428);
      if (lookahead == '/') ADVANCE(801);
      if (lookahead == '@') ADVANCE(742);
      if (lookahead == '[') ADVANCE(437);
      if (lookahead == ']') ADVANCE(464);
      if (lookahead == '_') ADVANCE(509);
      if (lookahead == '`') ADVANCE(48);
      if (lookahead == 'o') ADVANCE(2);
      if (lookahead == 't') ADVANCE(46);
      if (lookahead == '{') ADVANCE(473);
      if (lookahead == '}') ADVANCE(500);
      if (lookahead == 0xaf) ADVANCE(313);
      if (lookahead == 0x2682) ADVANCE(284);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(48);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(813);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(782);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(313);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(343);
      if (lookahead != 0) SKIP(48);
      END_STATE();
    case 48:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(48);
      if (lookahead == '"') ADVANCE(712);
      if (lookahead == '#') SKIP(48);
      if (lookahead == '$') ADVANCE(1);
      if (lookahead == '(') ADVANCE(401);
      if (lookahead == ')') ADVANCE(428);
      if (lookahead == '/') ADVANCE(801);
      if (lookahead == '@') ADVANCE(742);
      if (lookahead == '[') ADVANCE(437);
      if (lookahead == ']') ADVANCE(464);
      if (lookahead == '_') ADVANCE(509);
      if (lookahead == '`') ADVANCE(48);
      if (lookahead == 't') ADVANCE(46);
      if (lookahead == '{') ADVANCE(473);
      if (lookahead == '}') ADVANCE(500);
      if (lookahead == 0xaf) ADVANCE(313);
      if (lookahead == 0x2682) ADVANCE(284);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(48);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(813);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(782);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(313);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(343);
      if (lookahead != 0) SKIP(48);
      END_STATE();
    case 49:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(48);
      if (lookahead == '"') ADVANCE(712);
      if (lookahead == '#') SKIP(48);
      if (lookahead == '$') ADVANCE(1);
      if (lookahead == '(') ADVANCE(401);
      if (lookahead == ')') ADVANCE(428);
      if (lookahead == '/') ADVANCE(801);
      if (lookahead == '@') ADVANCE(742);
      if (lookahead == '[') ADVANCE(437);
      if (lookahead == ']') ADVANCE(464);
      if (lookahead == '_') ADVANCE(509);
      if (lookahead == '`') ADVANCE(48);
      if (lookahead == 't') ADVANCE(372);
      if (lookahead == '{') ADVANCE(473);
      if (lookahead == '}') ADVANCE(500);
      if (lookahead == 0xaf) ADVANCE(313);
      if (lookahead == 0x2682) ADVANCE(284);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(48);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(813);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(782);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(313);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(343);
      if (lookahead != 0) SKIP(48);
      END_STATE();
    case 50:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(58);
      if (lookahead == '"') ADVANCE(714);
      if (lookahead == '#') SKIP(58);
      if (lookahead == '$') ADVANCE(3);
      if (lookahead == '(') ADVANCE(403);
      if (lookahead == '-') ADVANCE(345);
      if (lookahead == '@') ADVANCE(744);
      if (lookahead == '[') ADVANCE(439);
      if (lookahead == '`') ADVANCE(58);
      if (lookahead == 't') ADVANCE(56);
      if (lookahead == '{') ADVANCE(475);
      if (lookahead == 0xaf) ADVANCE(315);
      if (lookahead == 0x2682) ADVANCE(286);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(58);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(814);
      if ((',' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(783);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(315);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(345);
      if (lookahead != 0) SKIP(58);
      END_STATE();
    case 51:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(58);
      if (lookahead == '"') ADVANCE(714);
      if (lookahead == '#') SKIP(58);
      if (lookahead == '$') ADVANCE(3);
      if (lookahead == '(') ADVANCE(403);
      if (lookahead == '@') ADVANCE(744);
      if (lookahead == '[') ADVANCE(439);
      if (lookahead == '`') ADVANCE(58);
      if (lookahead == 'd') ADVANCE(53);
      if (lookahead == 't') ADVANCE(56);
      if (lookahead == '{') ADVANCE(475);
      if (lookahead == 0xaf) ADVANCE(315);
      if (lookahead == 0x2682) ADVANCE(286);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(58);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(814);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(783);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(315);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(345);
      if (lookahead != 0) SKIP(58);
      END_STATE();
    case 52:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(58);
      if (lookahead == '"') ADVANCE(714);
      if (lookahead == '#') SKIP(58);
      if (lookahead == '$') ADVANCE(3);
      if (lookahead == '(') ADVANCE(403);
      if (lookahead == '@') ADVANCE(744);
      if (lookahead == '[') ADVANCE(439);
      if (lookahead == '`') ADVANCE(58);
      if (lookahead == 'd') ADVANCE(57);
      if (lookahead == 't') ADVANCE(56);
      if (lookahead == '{') ADVANCE(475);
      if (lookahead == 0xaf) ADVANCE(315);
      if (lookahead == 0x2682) ADVANCE(286);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(58);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(814);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(783);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(315);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(345);
      if (lookahead != 0) SKIP(58);
      END_STATE();
    case 53:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(58);
      if (lookahead == '"') ADVANCE(714);
      if (lookahead == '#') SKIP(58);
      if (lookahead == '$') ADVANCE(3);
      if (lookahead == '(') ADVANCE(403);
      if (lookahead == '@') ADVANCE(744);
      if (lookahead == '[') ADVANCE(439);
      if (lookahead == '`') ADVANCE(58);
      if (lookahead == 'e') ADVANCE(55);
      if (lookahead == 't') ADVANCE(56);
      if (lookahead == '{') ADVANCE(475);
      if (lookahead == 0xaf) ADVANCE(315);
      if (lookahead == 0x2682) ADVANCE(286);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(58);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(814);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(783);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(315);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(345);
      if (lookahead != 0) SKIP(58);
      END_STATE();
    case 54:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(58);
      if (lookahead == '"') ADVANCE(714);
      if (lookahead == '#') SKIP(58);
      if (lookahead == '$') ADVANCE(3);
      if (lookahead == '(') ADVANCE(403);
      if (lookahead == '@') ADVANCE(744);
      if (lookahead == '[') ADVANCE(439);
      if (lookahead == '`') ADVANCE(58);
      if (lookahead == 'i') ADVANCE(51);
      if (lookahead == 't') ADVANCE(56);
      if (lookahead == '{') ADVANCE(475);
      if (lookahead == 0xaf) ADVANCE(315);
      if (lookahead == 0x2682) ADVANCE(286);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(58);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(814);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(783);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(315);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(345);
      if (lookahead != 0) SKIP(58);
      END_STATE();
    case 55:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(58);
      if (lookahead == '"') ADVANCE(714);
      if (lookahead == '#') SKIP(58);
      if (lookahead == '$') ADVANCE(3);
      if (lookahead == '(') ADVANCE(403);
      if (lookahead == '@') ADVANCE(744);
      if (lookahead == '[') ADVANCE(439);
      if (lookahead == '`') ADVANCE(58);
      if (lookahead == 'n') ADVANCE(59);
      if (lookahead == 't') ADVANCE(56);
      if (lookahead == '{') ADVANCE(475);
      if (lookahead == 0xaf) ADVANCE(315);
      if (lookahead == 0x2682) ADVANCE(286);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(58);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(814);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(783);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(315);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(345);
      if (lookahead != 0) SKIP(58);
      END_STATE();
    case 56:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(58);
      if (lookahead == '"') ADVANCE(714);
      if (lookahead == '#') SKIP(58);
      if (lookahead == '$') ADVANCE(3);
      if (lookahead == '(') ADVANCE(403);
      if (lookahead == '@') ADVANCE(744);
      if (lookahead == '[') ADVANCE(439);
      if (lookahead == '`') ADVANCE(58);
      if (lookahead == 'o') ADVANCE(52);
      if (lookahead == 't') ADVANCE(56);
      if (lookahead == '{') ADVANCE(475);
      if (lookahead == 0xaf) ADVANCE(315);
      if (lookahead == 0x2682) ADVANCE(286);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(58);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(814);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(783);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(315);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(345);
      if (lookahead != 0) SKIP(58);
      END_STATE();
    case 57:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(58);
      if (lookahead == '"') ADVANCE(714);
      if (lookahead == '#') SKIP(58);
      if (lookahead == '$') ADVANCE(3);
      if (lookahead == '(') ADVANCE(403);
      if (lookahead == '@') ADVANCE(744);
      if (lookahead == '[') ADVANCE(439);
      if (lookahead == '`') ADVANCE(58);
      if (lookahead == 'o') ADVANCE(4);
      if (lookahead == 't') ADVANCE(56);
      if (lookahead == '{') ADVANCE(475);
      if (lookahead == 0xaf) ADVANCE(315);
      if (lookahead == 0x2682) ADVANCE(286);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(58);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(814);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(783);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(315);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(345);
      if (lookahead != 0) SKIP(58);
      END_STATE();
    case 58:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(58);
      if (lookahead == '"') ADVANCE(714);
      if (lookahead == '#') SKIP(58);
      if (lookahead == '$') ADVANCE(3);
      if (lookahead == '(') ADVANCE(403);
      if (lookahead == '@') ADVANCE(744);
      if (lookahead == '[') ADVANCE(439);
      if (lookahead == '`') ADVANCE(58);
      if (lookahead == 't') ADVANCE(56);
      if (lookahead == '{') ADVANCE(475);
      if (lookahead == 0xaf) ADVANCE(315);
      if (lookahead == 0x2682) ADVANCE(286);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(58);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(814);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(783);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(315);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(345);
      if (lookahead != 0) SKIP(58);
      END_STATE();
    case 59:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(58);
      if (lookahead == '"') ADVANCE(714);
      if (lookahead == '#') SKIP(58);
      if (lookahead == '$') ADVANCE(3);
      if (lookahead == '(') ADVANCE(403);
      if (lookahead == '@') ADVANCE(744);
      if (lookahead == '[') ADVANCE(439);
      if (lookahead == '`') ADVANCE(58);
      if (lookahead == 't') ADVANCE(374);
      if (lookahead == '{') ADVANCE(475);
      if (lookahead == 0xaf) ADVANCE(315);
      if (lookahead == 0x2682) ADVANCE(286);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(58);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(814);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(783);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(315);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(345);
      if (lookahead != 0) SKIP(58);
      END_STATE();
    case 60:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(68);
      if (lookahead == '"') ADVANCE(716);
      if (lookahead == '#') SKIP(68);
      if (lookahead == '$') ADVANCE(5);
      if (lookahead == '(') ADVANCE(405);
      if (lookahead == '-') ADVANCE(347);
      if (lookahead == '@') ADVANCE(746);
      if (lookahead == '[') ADVANCE(441);
      if (lookahead == '`') ADVANCE(68);
      if (lookahead == 't') ADVANCE(66);
      if (lookahead == '{') ADVANCE(477);
      if (lookahead == '}') ADVANCE(502);
      if (lookahead == 0xaf) ADVANCE(317);
      if (lookahead == 0x2682) ADVANCE(288);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(68);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(815);
      if ((',' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(784);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(317);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(347);
      if (lookahead != 0) SKIP(68);
      END_STATE();
    case 61:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(68);
      if (lookahead == '"') ADVANCE(716);
      if (lookahead == '#') SKIP(68);
      if (lookahead == '$') ADVANCE(5);
      if (lookahead == '(') ADVANCE(405);
      if (lookahead == '@') ADVANCE(746);
      if (lookahead == '[') ADVANCE(441);
      if (lookahead == '`') ADVANCE(68);
      if (lookahead == 'd') ADVANCE(63);
      if (lookahead == 't') ADVANCE(66);
      if (lookahead == '{') ADVANCE(477);
      if (lookahead == '}') ADVANCE(502);
      if (lookahead == 0xaf) ADVANCE(317);
      if (lookahead == 0x2682) ADVANCE(288);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(68);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(815);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(784);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(317);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(347);
      if (lookahead != 0) SKIP(68);
      END_STATE();
    case 62:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(68);
      if (lookahead == '"') ADVANCE(716);
      if (lookahead == '#') SKIP(68);
      if (lookahead == '$') ADVANCE(5);
      if (lookahead == '(') ADVANCE(405);
      if (lookahead == '@') ADVANCE(746);
      if (lookahead == '[') ADVANCE(441);
      if (lookahead == '`') ADVANCE(68);
      if (lookahead == 'd') ADVANCE(67);
      if (lookahead == 't') ADVANCE(66);
      if (lookahead == '{') ADVANCE(477);
      if (lookahead == '}') ADVANCE(502);
      if (lookahead == 0xaf) ADVANCE(317);
      if (lookahead == 0x2682) ADVANCE(288);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(68);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(815);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(784);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(317);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(347);
      if (lookahead != 0) SKIP(68);
      END_STATE();
    case 63:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(68);
      if (lookahead == '"') ADVANCE(716);
      if (lookahead == '#') SKIP(68);
      if (lookahead == '$') ADVANCE(5);
      if (lookahead == '(') ADVANCE(405);
      if (lookahead == '@') ADVANCE(746);
      if (lookahead == '[') ADVANCE(441);
      if (lookahead == '`') ADVANCE(68);
      if (lookahead == 'e') ADVANCE(65);
      if (lookahead == 't') ADVANCE(66);
      if (lookahead == '{') ADVANCE(477);
      if (lookahead == '}') ADVANCE(502);
      if (lookahead == 0xaf) ADVANCE(317);
      if (lookahead == 0x2682) ADVANCE(288);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(68);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(815);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(784);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(317);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(347);
      if (lookahead != 0) SKIP(68);
      END_STATE();
    case 64:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(68);
      if (lookahead == '"') ADVANCE(716);
      if (lookahead == '#') SKIP(68);
      if (lookahead == '$') ADVANCE(5);
      if (lookahead == '(') ADVANCE(405);
      if (lookahead == '@') ADVANCE(746);
      if (lookahead == '[') ADVANCE(441);
      if (lookahead == '`') ADVANCE(68);
      if (lookahead == 'i') ADVANCE(61);
      if (lookahead == 't') ADVANCE(66);
      if (lookahead == '{') ADVANCE(477);
      if (lookahead == '}') ADVANCE(502);
      if (lookahead == 0xaf) ADVANCE(317);
      if (lookahead == 0x2682) ADVANCE(288);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(68);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(815);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(784);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(317);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(347);
      if (lookahead != 0) SKIP(68);
      END_STATE();
    case 65:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(68);
      if (lookahead == '"') ADVANCE(716);
      if (lookahead == '#') SKIP(68);
      if (lookahead == '$') ADVANCE(5);
      if (lookahead == '(') ADVANCE(405);
      if (lookahead == '@') ADVANCE(746);
      if (lookahead == '[') ADVANCE(441);
      if (lookahead == '`') ADVANCE(68);
      if (lookahead == 'n') ADVANCE(69);
      if (lookahead == 't') ADVANCE(66);
      if (lookahead == '{') ADVANCE(477);
      if (lookahead == '}') ADVANCE(502);
      if (lookahead == 0xaf) ADVANCE(317);
      if (lookahead == 0x2682) ADVANCE(288);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(68);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(815);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(784);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(317);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(347);
      if (lookahead != 0) SKIP(68);
      END_STATE();
    case 66:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(68);
      if (lookahead == '"') ADVANCE(716);
      if (lookahead == '#') SKIP(68);
      if (lookahead == '$') ADVANCE(5);
      if (lookahead == '(') ADVANCE(405);
      if (lookahead == '@') ADVANCE(746);
      if (lookahead == '[') ADVANCE(441);
      if (lookahead == '`') ADVANCE(68);
      if (lookahead == 'o') ADVANCE(62);
      if (lookahead == 't') ADVANCE(66);
      if (lookahead == '{') ADVANCE(477);
      if (lookahead == '}') ADVANCE(502);
      if (lookahead == 0xaf) ADVANCE(317);
      if (lookahead == 0x2682) ADVANCE(288);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(68);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(815);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(784);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(317);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(347);
      if (lookahead != 0) SKIP(68);
      END_STATE();
    case 67:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(68);
      if (lookahead == '"') ADVANCE(716);
      if (lookahead == '#') SKIP(68);
      if (lookahead == '$') ADVANCE(5);
      if (lookahead == '(') ADVANCE(405);
      if (lookahead == '@') ADVANCE(746);
      if (lookahead == '[') ADVANCE(441);
      if (lookahead == '`') ADVANCE(68);
      if (lookahead == 'o') ADVANCE(6);
      if (lookahead == 't') ADVANCE(66);
      if (lookahead == '{') ADVANCE(477);
      if (lookahead == '}') ADVANCE(502);
      if (lookahead == 0xaf) ADVANCE(317);
      if (lookahead == 0x2682) ADVANCE(288);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(68);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(815);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(784);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(317);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(347);
      if (lookahead != 0) SKIP(68);
      END_STATE();
    case 68:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(68);
      if (lookahead == '"') ADVANCE(716);
      if (lookahead == '#') SKIP(68);
      if (lookahead == '$') ADVANCE(5);
      if (lookahead == '(') ADVANCE(405);
      if (lookahead == '@') ADVANCE(746);
      if (lookahead == '[') ADVANCE(441);
      if (lookahead == '`') ADVANCE(68);
      if (lookahead == 't') ADVANCE(66);
      if (lookahead == '{') ADVANCE(477);
      if (lookahead == '}') ADVANCE(502);
      if (lookahead == 0xaf) ADVANCE(317);
      if (lookahead == 0x2682) ADVANCE(288);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(68);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(815);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(784);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(317);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(347);
      if (lookahead != 0) SKIP(68);
      END_STATE();
    case 69:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(68);
      if (lookahead == '"') ADVANCE(716);
      if (lookahead == '#') SKIP(68);
      if (lookahead == '$') ADVANCE(5);
      if (lookahead == '(') ADVANCE(405);
      if (lookahead == '@') ADVANCE(746);
      if (lookahead == '[') ADVANCE(441);
      if (lookahead == '`') ADVANCE(68);
      if (lookahead == 't') ADVANCE(376);
      if (lookahead == '{') ADVANCE(477);
      if (lookahead == '}') ADVANCE(502);
      if (lookahead == 0xaf) ADVANCE(317);
      if (lookahead == 0x2682) ADVANCE(288);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(68);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(815);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(784);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(317);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(347);
      if (lookahead != 0) SKIP(68);
      END_STATE();
    case 70:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(78);
      if (lookahead == '"') ADVANCE(718);
      if (lookahead == '#') SKIP(78);
      if (lookahead == '$') ADVANCE(7);
      if (lookahead == '(') ADVANCE(407);
      if (lookahead == '-') ADVANCE(349);
      if (lookahead == '@') ADVANCE(748);
      if (lookahead == '[') ADVANCE(443);
      if (lookahead == ']') ADVANCE(466);
      if (lookahead == '`') ADVANCE(78);
      if (lookahead == 't') ADVANCE(76);
      if (lookahead == '{') ADVANCE(479);
      if (lookahead == 0xaf) ADVANCE(319);
      if (lookahead == 0x2682) ADVANCE(290);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(78);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(816);
      if ((',' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(785);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(319);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(349);
      if (lookahead != 0) SKIP(78);
      END_STATE();
    case 71:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(78);
      if (lookahead == '"') ADVANCE(718);
      if (lookahead == '#') SKIP(78);
      if (lookahead == '$') ADVANCE(7);
      if (lookahead == '(') ADVANCE(407);
      if (lookahead == '@') ADVANCE(748);
      if (lookahead == '[') ADVANCE(443);
      if (lookahead == ']') ADVANCE(466);
      if (lookahead == '`') ADVANCE(78);
      if (lookahead == 'd') ADVANCE(73);
      if (lookahead == 't') ADVANCE(76);
      if (lookahead == '{') ADVANCE(479);
      if (lookahead == 0xaf) ADVANCE(319);
      if (lookahead == 0x2682) ADVANCE(290);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(78);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(816);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(785);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(319);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(349);
      if (lookahead != 0) SKIP(78);
      END_STATE();
    case 72:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(78);
      if (lookahead == '"') ADVANCE(718);
      if (lookahead == '#') SKIP(78);
      if (lookahead == '$') ADVANCE(7);
      if (lookahead == '(') ADVANCE(407);
      if (lookahead == '@') ADVANCE(748);
      if (lookahead == '[') ADVANCE(443);
      if (lookahead == ']') ADVANCE(466);
      if (lookahead == '`') ADVANCE(78);
      if (lookahead == 'd') ADVANCE(77);
      if (lookahead == 't') ADVANCE(76);
      if (lookahead == '{') ADVANCE(479);
      if (lookahead == 0xaf) ADVANCE(319);
      if (lookahead == 0x2682) ADVANCE(290);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(78);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(816);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(785);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(319);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(349);
      if (lookahead != 0) SKIP(78);
      END_STATE();
    case 73:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(78);
      if (lookahead == '"') ADVANCE(718);
      if (lookahead == '#') SKIP(78);
      if (lookahead == '$') ADVANCE(7);
      if (lookahead == '(') ADVANCE(407);
      if (lookahead == '@') ADVANCE(748);
      if (lookahead == '[') ADVANCE(443);
      if (lookahead == ']') ADVANCE(466);
      if (lookahead == '`') ADVANCE(78);
      if (lookahead == 'e') ADVANCE(75);
      if (lookahead == 't') ADVANCE(76);
      if (lookahead == '{') ADVANCE(479);
      if (lookahead == 0xaf) ADVANCE(319);
      if (lookahead == 0x2682) ADVANCE(290);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(78);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(816);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(785);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(319);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(349);
      if (lookahead != 0) SKIP(78);
      END_STATE();
    case 74:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(78);
      if (lookahead == '"') ADVANCE(718);
      if (lookahead == '#') SKIP(78);
      if (lookahead == '$') ADVANCE(7);
      if (lookahead == '(') ADVANCE(407);
      if (lookahead == '@') ADVANCE(748);
      if (lookahead == '[') ADVANCE(443);
      if (lookahead == ']') ADVANCE(466);
      if (lookahead == '`') ADVANCE(78);
      if (lookahead == 'i') ADVANCE(71);
      if (lookahead == 't') ADVANCE(76);
      if (lookahead == '{') ADVANCE(479);
      if (lookahead == 0xaf) ADVANCE(319);
      if (lookahead == 0x2682) ADVANCE(290);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(78);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(816);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(785);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(319);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(349);
      if (lookahead != 0) SKIP(78);
      END_STATE();
    case 75:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(78);
      if (lookahead == '"') ADVANCE(718);
      if (lookahead == '#') SKIP(78);
      if (lookahead == '$') ADVANCE(7);
      if (lookahead == '(') ADVANCE(407);
      if (lookahead == '@') ADVANCE(748);
      if (lookahead == '[') ADVANCE(443);
      if (lookahead == ']') ADVANCE(466);
      if (lookahead == '`') ADVANCE(78);
      if (lookahead == 'n') ADVANCE(79);
      if (lookahead == 't') ADVANCE(76);
      if (lookahead == '{') ADVANCE(479);
      if (lookahead == 0xaf) ADVANCE(319);
      if (lookahead == 0x2682) ADVANCE(290);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(78);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(816);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(785);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(319);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(349);
      if (lookahead != 0) SKIP(78);
      END_STATE();
    case 76:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(78);
      if (lookahead == '"') ADVANCE(718);
      if (lookahead == '#') SKIP(78);
      if (lookahead == '$') ADVANCE(7);
      if (lookahead == '(') ADVANCE(407);
      if (lookahead == '@') ADVANCE(748);
      if (lookahead == '[') ADVANCE(443);
      if (lookahead == ']') ADVANCE(466);
      if (lookahead == '`') ADVANCE(78);
      if (lookahead == 'o') ADVANCE(72);
      if (lookahead == 't') ADVANCE(76);
      if (lookahead == '{') ADVANCE(479);
      if (lookahead == 0xaf) ADVANCE(319);
      if (lookahead == 0x2682) ADVANCE(290);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(78);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(816);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(785);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(319);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(349);
      if (lookahead != 0) SKIP(78);
      END_STATE();
    case 77:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(78);
      if (lookahead == '"') ADVANCE(718);
      if (lookahead == '#') SKIP(78);
      if (lookahead == '$') ADVANCE(7);
      if (lookahead == '(') ADVANCE(407);
      if (lookahead == '@') ADVANCE(748);
      if (lookahead == '[') ADVANCE(443);
      if (lookahead == ']') ADVANCE(466);
      if (lookahead == '`') ADVANCE(78);
      if (lookahead == 'o') ADVANCE(8);
      if (lookahead == 't') ADVANCE(76);
      if (lookahead == '{') ADVANCE(479);
      if (lookahead == 0xaf) ADVANCE(319);
      if (lookahead == 0x2682) ADVANCE(290);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(78);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(816);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(785);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(319);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(349);
      if (lookahead != 0) SKIP(78);
      END_STATE();
    case 78:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(78);
      if (lookahead == '"') ADVANCE(718);
      if (lookahead == '#') SKIP(78);
      if (lookahead == '$') ADVANCE(7);
      if (lookahead == '(') ADVANCE(407);
      if (lookahead == '@') ADVANCE(748);
      if (lookahead == '[') ADVANCE(443);
      if (lookahead == ']') ADVANCE(466);
      if (lookahead == '`') ADVANCE(78);
      if (lookahead == 't') ADVANCE(76);
      if (lookahead == '{') ADVANCE(479);
      if (lookahead == 0xaf) ADVANCE(319);
      if (lookahead == 0x2682) ADVANCE(290);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(78);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(816);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(785);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(319);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(349);
      if (lookahead != 0) SKIP(78);
      END_STATE();
    case 79:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(78);
      if (lookahead == '"') ADVANCE(718);
      if (lookahead == '#') SKIP(78);
      if (lookahead == '$') ADVANCE(7);
      if (lookahead == '(') ADVANCE(407);
      if (lookahead == '@') ADVANCE(748);
      if (lookahead == '[') ADVANCE(443);
      if (lookahead == ']') ADVANCE(466);
      if (lookahead == '`') ADVANCE(78);
      if (lookahead == 't') ADVANCE(378);
      if (lookahead == '{') ADVANCE(479);
      if (lookahead == 0xaf) ADVANCE(319);
      if (lookahead == 0x2682) ADVANCE(290);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(78);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(816);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(785);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(319);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(349);
      if (lookahead != 0) SKIP(78);
      END_STATE();
    case 80:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(88);
      if (lookahead == '"') ADVANCE(720);
      if (lookahead == '#') SKIP(88);
      if (lookahead == '$') ADVANCE(9);
      if (lookahead == '(') ADVANCE(409);
      if (lookahead == ')') ADVANCE(430);
      if (lookahead == '-') ADVANCE(351);
      if (lookahead == '@') ADVANCE(750);
      if (lookahead == '[') ADVANCE(445);
      if (lookahead == '`') ADVANCE(88);
      if (lookahead == 't') ADVANCE(86);
      if (lookahead == '{') ADVANCE(481);
      if (lookahead == 0xaf) ADVANCE(321);
      if (lookahead == 0x2682) ADVANCE(292);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(88);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(817);
      if ((',' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(786);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(321);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(351);
      if (lookahead != 0) SKIP(88);
      END_STATE();
    case 81:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(88);
      if (lookahead == '"') ADVANCE(720);
      if (lookahead == '#') SKIP(88);
      if (lookahead == '$') ADVANCE(9);
      if (lookahead == '(') ADVANCE(409);
      if (lookahead == ')') ADVANCE(430);
      if (lookahead == '@') ADVANCE(750);
      if (lookahead == '[') ADVANCE(445);
      if (lookahead == '`') ADVANCE(88);
      if (lookahead == 'd') ADVANCE(83);
      if (lookahead == 't') ADVANCE(86);
      if (lookahead == '{') ADVANCE(481);
      if (lookahead == 0xaf) ADVANCE(321);
      if (lookahead == 0x2682) ADVANCE(292);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(88);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(817);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(786);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(321);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(351);
      if (lookahead != 0) SKIP(88);
      END_STATE();
    case 82:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(88);
      if (lookahead == '"') ADVANCE(720);
      if (lookahead == '#') SKIP(88);
      if (lookahead == '$') ADVANCE(9);
      if (lookahead == '(') ADVANCE(409);
      if (lookahead == ')') ADVANCE(430);
      if (lookahead == '@') ADVANCE(750);
      if (lookahead == '[') ADVANCE(445);
      if (lookahead == '`') ADVANCE(88);
      if (lookahead == 'd') ADVANCE(87);
      if (lookahead == 't') ADVANCE(86);
      if (lookahead == '{') ADVANCE(481);
      if (lookahead == 0xaf) ADVANCE(321);
      if (lookahead == 0x2682) ADVANCE(292);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(88);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(817);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(786);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(321);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(351);
      if (lookahead != 0) SKIP(88);
      END_STATE();
    case 83:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(88);
      if (lookahead == '"') ADVANCE(720);
      if (lookahead == '#') SKIP(88);
      if (lookahead == '$') ADVANCE(9);
      if (lookahead == '(') ADVANCE(409);
      if (lookahead == ')') ADVANCE(430);
      if (lookahead == '@') ADVANCE(750);
      if (lookahead == '[') ADVANCE(445);
      if (lookahead == '`') ADVANCE(88);
      if (lookahead == 'e') ADVANCE(85);
      if (lookahead == 't') ADVANCE(86);
      if (lookahead == '{') ADVANCE(481);
      if (lookahead == 0xaf) ADVANCE(321);
      if (lookahead == 0x2682) ADVANCE(292);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(88);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(817);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(786);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(321);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(351);
      if (lookahead != 0) SKIP(88);
      END_STATE();
    case 84:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(88);
      if (lookahead == '"') ADVANCE(720);
      if (lookahead == '#') SKIP(88);
      if (lookahead == '$') ADVANCE(9);
      if (lookahead == '(') ADVANCE(409);
      if (lookahead == ')') ADVANCE(430);
      if (lookahead == '@') ADVANCE(750);
      if (lookahead == '[') ADVANCE(445);
      if (lookahead == '`') ADVANCE(88);
      if (lookahead == 'i') ADVANCE(81);
      if (lookahead == 't') ADVANCE(86);
      if (lookahead == '{') ADVANCE(481);
      if (lookahead == 0xaf) ADVANCE(321);
      if (lookahead == 0x2682) ADVANCE(292);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(88);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(817);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(786);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(321);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(351);
      if (lookahead != 0) SKIP(88);
      END_STATE();
    case 85:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(88);
      if (lookahead == '"') ADVANCE(720);
      if (lookahead == '#') SKIP(88);
      if (lookahead == '$') ADVANCE(9);
      if (lookahead == '(') ADVANCE(409);
      if (lookahead == ')') ADVANCE(430);
      if (lookahead == '@') ADVANCE(750);
      if (lookahead == '[') ADVANCE(445);
      if (lookahead == '`') ADVANCE(88);
      if (lookahead == 'n') ADVANCE(89);
      if (lookahead == 't') ADVANCE(86);
      if (lookahead == '{') ADVANCE(481);
      if (lookahead == 0xaf) ADVANCE(321);
      if (lookahead == 0x2682) ADVANCE(292);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(88);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(817);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(786);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(321);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(351);
      if (lookahead != 0) SKIP(88);
      END_STATE();
    case 86:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(88);
      if (lookahead == '"') ADVANCE(720);
      if (lookahead == '#') SKIP(88);
      if (lookahead == '$') ADVANCE(9);
      if (lookahead == '(') ADVANCE(409);
      if (lookahead == ')') ADVANCE(430);
      if (lookahead == '@') ADVANCE(750);
      if (lookahead == '[') ADVANCE(445);
      if (lookahead == '`') ADVANCE(88);
      if (lookahead == 'o') ADVANCE(82);
      if (lookahead == 't') ADVANCE(86);
      if (lookahead == '{') ADVANCE(481);
      if (lookahead == 0xaf) ADVANCE(321);
      if (lookahead == 0x2682) ADVANCE(292);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(88);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(817);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(786);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(321);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(351);
      if (lookahead != 0) SKIP(88);
      END_STATE();
    case 87:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(88);
      if (lookahead == '"') ADVANCE(720);
      if (lookahead == '#') SKIP(88);
      if (lookahead == '$') ADVANCE(9);
      if (lookahead == '(') ADVANCE(409);
      if (lookahead == ')') ADVANCE(430);
      if (lookahead == '@') ADVANCE(750);
      if (lookahead == '[') ADVANCE(445);
      if (lookahead == '`') ADVANCE(88);
      if (lookahead == 'o') ADVANCE(10);
      if (lookahead == 't') ADVANCE(86);
      if (lookahead == '{') ADVANCE(481);
      if (lookahead == 0xaf) ADVANCE(321);
      if (lookahead == 0x2682) ADVANCE(292);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(88);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(817);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(786);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(321);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(351);
      if (lookahead != 0) SKIP(88);
      END_STATE();
    case 88:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(88);
      if (lookahead == '"') ADVANCE(720);
      if (lookahead == '#') SKIP(88);
      if (lookahead == '$') ADVANCE(9);
      if (lookahead == '(') ADVANCE(409);
      if (lookahead == ')') ADVANCE(430);
      if (lookahead == '@') ADVANCE(750);
      if (lookahead == '[') ADVANCE(445);
      if (lookahead == '`') ADVANCE(88);
      if (lookahead == 't') ADVANCE(86);
      if (lookahead == '{') ADVANCE(481);
      if (lookahead == 0xaf) ADVANCE(321);
      if (lookahead == 0x2682) ADVANCE(292);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(88);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(817);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(786);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(321);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(351);
      if (lookahead != 0) SKIP(88);
      END_STATE();
    case 89:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(88);
      if (lookahead == '"') ADVANCE(720);
      if (lookahead == '#') SKIP(88);
      if (lookahead == '$') ADVANCE(9);
      if (lookahead == '(') ADVANCE(409);
      if (lookahead == ')') ADVANCE(430);
      if (lookahead == '@') ADVANCE(750);
      if (lookahead == '[') ADVANCE(445);
      if (lookahead == '`') ADVANCE(88);
      if (lookahead == 't') ADVANCE(380);
      if (lookahead == '{') ADVANCE(481);
      if (lookahead == 0xaf) ADVANCE(321);
      if (lookahead == 0x2682) ADVANCE(292);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(88);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(817);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(786);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(321);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(351);
      if (lookahead != 0) SKIP(88);
      END_STATE();
    case 90:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(98);
      if (lookahead == '"') ADVANCE(722);
      if (lookahead == '#') SKIP(98);
      if (lookahead == '$') ADVANCE(13);
      if (lookahead == '(') ADVANCE(411);
      if (lookahead == '-') ADVANCE(353);
      if (lookahead == '@') ADVANCE(752);
      if (lookahead == '[') ADVANCE(447);
      if (lookahead == '_') ADVANCE(511);
      if (lookahead == '`') ADVANCE(98);
      if (lookahead == 't') ADVANCE(96);
      if (lookahead == '{') ADVANCE(483);
      if (lookahead == 0xaf) ADVANCE(323);
      if (lookahead == 0x2682) ADVANCE(294);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(98);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(818);
      if ((',' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(787);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(323);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(353);
      if (lookahead != 0) SKIP(98);
      END_STATE();
    case 91:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(98);
      if (lookahead == '"') ADVANCE(722);
      if (lookahead == '#') SKIP(98);
      if (lookahead == '$') ADVANCE(13);
      if (lookahead == '(') ADVANCE(411);
      if (lookahead == '@') ADVANCE(752);
      if (lookahead == '[') ADVANCE(447);
      if (lookahead == '_') ADVANCE(511);
      if (lookahead == '`') ADVANCE(98);
      if (lookahead == 'd') ADVANCE(93);
      if (lookahead == 't') ADVANCE(96);
      if (lookahead == '{') ADVANCE(483);
      if (lookahead == 0xaf) ADVANCE(323);
      if (lookahead == 0x2682) ADVANCE(294);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(98);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(818);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(787);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(323);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(353);
      if (lookahead != 0) SKIP(98);
      END_STATE();
    case 92:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(98);
      if (lookahead == '"') ADVANCE(722);
      if (lookahead == '#') SKIP(98);
      if (lookahead == '$') ADVANCE(13);
      if (lookahead == '(') ADVANCE(411);
      if (lookahead == '@') ADVANCE(752);
      if (lookahead == '[') ADVANCE(447);
      if (lookahead == '_') ADVANCE(511);
      if (lookahead == '`') ADVANCE(98);
      if (lookahead == 'd') ADVANCE(97);
      if (lookahead == 't') ADVANCE(96);
      if (lookahead == '{') ADVANCE(483);
      if (lookahead == 0xaf) ADVANCE(323);
      if (lookahead == 0x2682) ADVANCE(294);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(98);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(818);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(787);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(323);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(353);
      if (lookahead != 0) SKIP(98);
      END_STATE();
    case 93:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(98);
      if (lookahead == '"') ADVANCE(722);
      if (lookahead == '#') SKIP(98);
      if (lookahead == '$') ADVANCE(13);
      if (lookahead == '(') ADVANCE(411);
      if (lookahead == '@') ADVANCE(752);
      if (lookahead == '[') ADVANCE(447);
      if (lookahead == '_') ADVANCE(511);
      if (lookahead == '`') ADVANCE(98);
      if (lookahead == 'e') ADVANCE(95);
      if (lookahead == 't') ADVANCE(96);
      if (lookahead == '{') ADVANCE(483);
      if (lookahead == 0xaf) ADVANCE(323);
      if (lookahead == 0x2682) ADVANCE(294);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(98);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(818);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(787);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(323);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(353);
      if (lookahead != 0) SKIP(98);
      END_STATE();
    case 94:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(98);
      if (lookahead == '"') ADVANCE(722);
      if (lookahead == '#') SKIP(98);
      if (lookahead == '$') ADVANCE(13);
      if (lookahead == '(') ADVANCE(411);
      if (lookahead == '@') ADVANCE(752);
      if (lookahead == '[') ADVANCE(447);
      if (lookahead == '_') ADVANCE(511);
      if (lookahead == '`') ADVANCE(98);
      if (lookahead == 'i') ADVANCE(91);
      if (lookahead == 't') ADVANCE(96);
      if (lookahead == '{') ADVANCE(483);
      if (lookahead == 0xaf) ADVANCE(323);
      if (lookahead == 0x2682) ADVANCE(294);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(98);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(818);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(787);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(323);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(353);
      if (lookahead != 0) SKIP(98);
      END_STATE();
    case 95:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(98);
      if (lookahead == '"') ADVANCE(722);
      if (lookahead == '#') SKIP(98);
      if (lookahead == '$') ADVANCE(13);
      if (lookahead == '(') ADVANCE(411);
      if (lookahead == '@') ADVANCE(752);
      if (lookahead == '[') ADVANCE(447);
      if (lookahead == '_') ADVANCE(511);
      if (lookahead == '`') ADVANCE(98);
      if (lookahead == 'n') ADVANCE(99);
      if (lookahead == 't') ADVANCE(96);
      if (lookahead == '{') ADVANCE(483);
      if (lookahead == 0xaf) ADVANCE(323);
      if (lookahead == 0x2682) ADVANCE(294);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(98);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(818);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(787);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(323);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(353);
      if (lookahead != 0) SKIP(98);
      END_STATE();
    case 96:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(98);
      if (lookahead == '"') ADVANCE(722);
      if (lookahead == '#') SKIP(98);
      if (lookahead == '$') ADVANCE(13);
      if (lookahead == '(') ADVANCE(411);
      if (lookahead == '@') ADVANCE(752);
      if (lookahead == '[') ADVANCE(447);
      if (lookahead == '_') ADVANCE(511);
      if (lookahead == '`') ADVANCE(98);
      if (lookahead == 'o') ADVANCE(92);
      if (lookahead == 't') ADVANCE(96);
      if (lookahead == '{') ADVANCE(483);
      if (lookahead == 0xaf) ADVANCE(323);
      if (lookahead == 0x2682) ADVANCE(294);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(98);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(818);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(787);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(323);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(353);
      if (lookahead != 0) SKIP(98);
      END_STATE();
    case 97:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(98);
      if (lookahead == '"') ADVANCE(722);
      if (lookahead == '#') SKIP(98);
      if (lookahead == '$') ADVANCE(13);
      if (lookahead == '(') ADVANCE(411);
      if (lookahead == '@') ADVANCE(752);
      if (lookahead == '[') ADVANCE(447);
      if (lookahead == '_') ADVANCE(511);
      if (lookahead == '`') ADVANCE(98);
      if (lookahead == 'o') ADVANCE(14);
      if (lookahead == 't') ADVANCE(96);
      if (lookahead == '{') ADVANCE(483);
      if (lookahead == 0xaf) ADVANCE(323);
      if (lookahead == 0x2682) ADVANCE(294);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(98);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(818);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(787);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(323);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(353);
      if (lookahead != 0) SKIP(98);
      END_STATE();
    case 98:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(98);
      if (lookahead == '"') ADVANCE(722);
      if (lookahead == '#') SKIP(98);
      if (lookahead == '$') ADVANCE(13);
      if (lookahead == '(') ADVANCE(411);
      if (lookahead == '@') ADVANCE(752);
      if (lookahead == '[') ADVANCE(447);
      if (lookahead == '_') ADVANCE(511);
      if (lookahead == '`') ADVANCE(98);
      if (lookahead == 't') ADVANCE(96);
      if (lookahead == '{') ADVANCE(483);
      if (lookahead == 0xaf) ADVANCE(323);
      if (lookahead == 0x2682) ADVANCE(294);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(98);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(818);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(787);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(323);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(353);
      if (lookahead != 0) SKIP(98);
      END_STATE();
    case 99:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(98);
      if (lookahead == '"') ADVANCE(722);
      if (lookahead == '#') SKIP(98);
      if (lookahead == '$') ADVANCE(13);
      if (lookahead == '(') ADVANCE(411);
      if (lookahead == '@') ADVANCE(752);
      if (lookahead == '[') ADVANCE(447);
      if (lookahead == '_') ADVANCE(511);
      if (lookahead == '`') ADVANCE(98);
      if (lookahead == 't') ADVANCE(382);
      if (lookahead == '{') ADVANCE(483);
      if (lookahead == 0xaf) ADVANCE(323);
      if (lookahead == 0x2682) ADVANCE(294);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(98);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(818);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(787);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(323);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(353);
      if (lookahead != 0) SKIP(98);
      END_STATE();
    case 100:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(108);
      if (lookahead == '"') ADVANCE(724);
      if (lookahead == '#') SKIP(108);
      if (lookahead == '$') ADVANCE(15);
      if (lookahead == '(') ADVANCE(413);
      if (lookahead == '-') ADVANCE(355);
      if (lookahead == '/') ADVANCE(803);
      if (lookahead == '@') ADVANCE(754);
      if (lookahead == '[') ADVANCE(449);
      if (lookahead == '_') ADVANCE(513);
      if (lookahead == '`') ADVANCE(108);
      if (lookahead == 't') ADVANCE(106);
      if (lookahead == '{') ADVANCE(485);
      if (lookahead == 0xaf) ADVANCE(325);
      if (lookahead == 0x2682) ADVANCE(296);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(108);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(819);
      if ((',' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(788);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(325);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(355);
      if (lookahead != 0) SKIP(108);
      END_STATE();
    case 101:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(108);
      if (lookahead == '"') ADVANCE(724);
      if (lookahead == '#') SKIP(108);
      if (lookahead == '$') ADVANCE(15);
      if (lookahead == '(') ADVANCE(413);
      if (lookahead == '/') ADVANCE(803);
      if (lookahead == '@') ADVANCE(754);
      if (lookahead == '[') ADVANCE(449);
      if (lookahead == '_') ADVANCE(513);
      if (lookahead == '`') ADVANCE(108);
      if (lookahead == 'd') ADVANCE(103);
      if (lookahead == 't') ADVANCE(106);
      if (lookahead == '{') ADVANCE(485);
      if (lookahead == 0xaf) ADVANCE(325);
      if (lookahead == 0x2682) ADVANCE(296);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(108);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(819);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(788);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(325);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(355);
      if (lookahead != 0) SKIP(108);
      END_STATE();
    case 102:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(108);
      if (lookahead == '"') ADVANCE(724);
      if (lookahead == '#') SKIP(108);
      if (lookahead == '$') ADVANCE(15);
      if (lookahead == '(') ADVANCE(413);
      if (lookahead == '/') ADVANCE(803);
      if (lookahead == '@') ADVANCE(754);
      if (lookahead == '[') ADVANCE(449);
      if (lookahead == '_') ADVANCE(513);
      if (lookahead == '`') ADVANCE(108);
      if (lookahead == 'd') ADVANCE(107);
      if (lookahead == 't') ADVANCE(106);
      if (lookahead == '{') ADVANCE(485);
      if (lookahead == 0xaf) ADVANCE(325);
      if (lookahead == 0x2682) ADVANCE(296);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(108);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(819);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(788);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(325);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(355);
      if (lookahead != 0) SKIP(108);
      END_STATE();
    case 103:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(108);
      if (lookahead == '"') ADVANCE(724);
      if (lookahead == '#') SKIP(108);
      if (lookahead == '$') ADVANCE(15);
      if (lookahead == '(') ADVANCE(413);
      if (lookahead == '/') ADVANCE(803);
      if (lookahead == '@') ADVANCE(754);
      if (lookahead == '[') ADVANCE(449);
      if (lookahead == '_') ADVANCE(513);
      if (lookahead == '`') ADVANCE(108);
      if (lookahead == 'e') ADVANCE(105);
      if (lookahead == 't') ADVANCE(106);
      if (lookahead == '{') ADVANCE(485);
      if (lookahead == 0xaf) ADVANCE(325);
      if (lookahead == 0x2682) ADVANCE(296);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(108);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(819);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(788);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(325);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(355);
      if (lookahead != 0) SKIP(108);
      END_STATE();
    case 104:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(108);
      if (lookahead == '"') ADVANCE(724);
      if (lookahead == '#') SKIP(108);
      if (lookahead == '$') ADVANCE(15);
      if (lookahead == '(') ADVANCE(413);
      if (lookahead == '/') ADVANCE(803);
      if (lookahead == '@') ADVANCE(754);
      if (lookahead == '[') ADVANCE(449);
      if (lookahead == '_') ADVANCE(513);
      if (lookahead == '`') ADVANCE(108);
      if (lookahead == 'i') ADVANCE(101);
      if (lookahead == 't') ADVANCE(106);
      if (lookahead == '{') ADVANCE(485);
      if (lookahead == 0xaf) ADVANCE(325);
      if (lookahead == 0x2682) ADVANCE(296);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(108);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(819);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(788);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(325);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(355);
      if (lookahead != 0) SKIP(108);
      END_STATE();
    case 105:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(108);
      if (lookahead == '"') ADVANCE(724);
      if (lookahead == '#') SKIP(108);
      if (lookahead == '$') ADVANCE(15);
      if (lookahead == '(') ADVANCE(413);
      if (lookahead == '/') ADVANCE(803);
      if (lookahead == '@') ADVANCE(754);
      if (lookahead == '[') ADVANCE(449);
      if (lookahead == '_') ADVANCE(513);
      if (lookahead == '`') ADVANCE(108);
      if (lookahead == 'n') ADVANCE(109);
      if (lookahead == 't') ADVANCE(106);
      if (lookahead == '{') ADVANCE(485);
      if (lookahead == 0xaf) ADVANCE(325);
      if (lookahead == 0x2682) ADVANCE(296);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(108);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(819);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(788);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(325);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(355);
      if (lookahead != 0) SKIP(108);
      END_STATE();
    case 106:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(108);
      if (lookahead == '"') ADVANCE(724);
      if (lookahead == '#') SKIP(108);
      if (lookahead == '$') ADVANCE(15);
      if (lookahead == '(') ADVANCE(413);
      if (lookahead == '/') ADVANCE(803);
      if (lookahead == '@') ADVANCE(754);
      if (lookahead == '[') ADVANCE(449);
      if (lookahead == '_') ADVANCE(513);
      if (lookahead == '`') ADVANCE(108);
      if (lookahead == 'o') ADVANCE(102);
      if (lookahead == 't') ADVANCE(106);
      if (lookahead == '{') ADVANCE(485);
      if (lookahead == 0xaf) ADVANCE(325);
      if (lookahead == 0x2682) ADVANCE(296);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(108);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(819);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(788);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(325);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(355);
      if (lookahead != 0) SKIP(108);
      END_STATE();
    case 107:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(108);
      if (lookahead == '"') ADVANCE(724);
      if (lookahead == '#') SKIP(108);
      if (lookahead == '$') ADVANCE(15);
      if (lookahead == '(') ADVANCE(413);
      if (lookahead == '/') ADVANCE(803);
      if (lookahead == '@') ADVANCE(754);
      if (lookahead == '[') ADVANCE(449);
      if (lookahead == '_') ADVANCE(513);
      if (lookahead == '`') ADVANCE(108);
      if (lookahead == 'o') ADVANCE(16);
      if (lookahead == 't') ADVANCE(106);
      if (lookahead == '{') ADVANCE(485);
      if (lookahead == 0xaf) ADVANCE(325);
      if (lookahead == 0x2682) ADVANCE(296);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(108);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(819);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(788);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(325);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(355);
      if (lookahead != 0) SKIP(108);
      END_STATE();
    case 108:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(108);
      if (lookahead == '"') ADVANCE(724);
      if (lookahead == '#') SKIP(108);
      if (lookahead == '$') ADVANCE(15);
      if (lookahead == '(') ADVANCE(413);
      if (lookahead == '/') ADVANCE(803);
      if (lookahead == '@') ADVANCE(754);
      if (lookahead == '[') ADVANCE(449);
      if (lookahead == '_') ADVANCE(513);
      if (lookahead == '`') ADVANCE(108);
      if (lookahead == 't') ADVANCE(106);
      if (lookahead == '{') ADVANCE(485);
      if (lookahead == 0xaf) ADVANCE(325);
      if (lookahead == 0x2682) ADVANCE(296);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(108);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(819);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(788);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(325);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(355);
      if (lookahead != 0) SKIP(108);
      END_STATE();
    case 109:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(108);
      if (lookahead == '"') ADVANCE(724);
      if (lookahead == '#') SKIP(108);
      if (lookahead == '$') ADVANCE(15);
      if (lookahead == '(') ADVANCE(413);
      if (lookahead == '/') ADVANCE(803);
      if (lookahead == '@') ADVANCE(754);
      if (lookahead == '[') ADVANCE(449);
      if (lookahead == '_') ADVANCE(513);
      if (lookahead == '`') ADVANCE(108);
      if (lookahead == 't') ADVANCE(384);
      if (lookahead == '{') ADVANCE(485);
      if (lookahead == 0xaf) ADVANCE(325);
      if (lookahead == 0x2682) ADVANCE(296);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(108);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(819);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(788);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(325);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(355);
      if (lookahead != 0) SKIP(108);
      END_STATE();
    case 110:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(118);
      if (lookahead == '"') ADVANCE(726);
      if (lookahead == '#') SKIP(118);
      if (lookahead == '$') ADVANCE(17);
      if (lookahead == '(') ADVANCE(415);
      if (lookahead == '-') ADVANCE(357);
      if (lookahead == '/') ADVANCE(805);
      if (lookahead == '@') ADVANCE(756);
      if (lookahead == '[') ADVANCE(451);
      if (lookahead == ']') ADVANCE(468);
      if (lookahead == '_') ADVANCE(515);
      if (lookahead == '`') ADVANCE(118);
      if (lookahead == 't') ADVANCE(116);
      if (lookahead == '{') ADVANCE(487);
      if (lookahead == 0xaf) ADVANCE(327);
      if (lookahead == 0x2682) ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(118);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(820);
      if ((',' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(789);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(327);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(357);
      if (lookahead != 0) SKIP(118);
      END_STATE();
    case 111:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(118);
      if (lookahead == '"') ADVANCE(726);
      if (lookahead == '#') SKIP(118);
      if (lookahead == '$') ADVANCE(17);
      if (lookahead == '(') ADVANCE(415);
      if (lookahead == '/') ADVANCE(805);
      if (lookahead == '@') ADVANCE(756);
      if (lookahead == '[') ADVANCE(451);
      if (lookahead == ']') ADVANCE(468);
      if (lookahead == '_') ADVANCE(515);
      if (lookahead == '`') ADVANCE(118);
      if (lookahead == 'd') ADVANCE(113);
      if (lookahead == 't') ADVANCE(116);
      if (lookahead == '{') ADVANCE(487);
      if (lookahead == 0xaf) ADVANCE(327);
      if (lookahead == 0x2682) ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(118);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(820);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(789);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(327);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(357);
      if (lookahead != 0) SKIP(118);
      END_STATE();
    case 112:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(118);
      if (lookahead == '"') ADVANCE(726);
      if (lookahead == '#') SKIP(118);
      if (lookahead == '$') ADVANCE(17);
      if (lookahead == '(') ADVANCE(415);
      if (lookahead == '/') ADVANCE(805);
      if (lookahead == '@') ADVANCE(756);
      if (lookahead == '[') ADVANCE(451);
      if (lookahead == ']') ADVANCE(468);
      if (lookahead == '_') ADVANCE(515);
      if (lookahead == '`') ADVANCE(118);
      if (lookahead == 'd') ADVANCE(117);
      if (lookahead == 't') ADVANCE(116);
      if (lookahead == '{') ADVANCE(487);
      if (lookahead == 0xaf) ADVANCE(327);
      if (lookahead == 0x2682) ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(118);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(820);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(789);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(327);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(357);
      if (lookahead != 0) SKIP(118);
      END_STATE();
    case 113:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(118);
      if (lookahead == '"') ADVANCE(726);
      if (lookahead == '#') SKIP(118);
      if (lookahead == '$') ADVANCE(17);
      if (lookahead == '(') ADVANCE(415);
      if (lookahead == '/') ADVANCE(805);
      if (lookahead == '@') ADVANCE(756);
      if (lookahead == '[') ADVANCE(451);
      if (lookahead == ']') ADVANCE(468);
      if (lookahead == '_') ADVANCE(515);
      if (lookahead == '`') ADVANCE(118);
      if (lookahead == 'e') ADVANCE(115);
      if (lookahead == 't') ADVANCE(116);
      if (lookahead == '{') ADVANCE(487);
      if (lookahead == 0xaf) ADVANCE(327);
      if (lookahead == 0x2682) ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(118);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(820);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(789);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(327);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(357);
      if (lookahead != 0) SKIP(118);
      END_STATE();
    case 114:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(118);
      if (lookahead == '"') ADVANCE(726);
      if (lookahead == '#') SKIP(118);
      if (lookahead == '$') ADVANCE(17);
      if (lookahead == '(') ADVANCE(415);
      if (lookahead == '/') ADVANCE(805);
      if (lookahead == '@') ADVANCE(756);
      if (lookahead == '[') ADVANCE(451);
      if (lookahead == ']') ADVANCE(468);
      if (lookahead == '_') ADVANCE(515);
      if (lookahead == '`') ADVANCE(118);
      if (lookahead == 'i') ADVANCE(111);
      if (lookahead == 't') ADVANCE(116);
      if (lookahead == '{') ADVANCE(487);
      if (lookahead == 0xaf) ADVANCE(327);
      if (lookahead == 0x2682) ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(118);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(820);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(789);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(327);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(357);
      if (lookahead != 0) SKIP(118);
      END_STATE();
    case 115:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(118);
      if (lookahead == '"') ADVANCE(726);
      if (lookahead == '#') SKIP(118);
      if (lookahead == '$') ADVANCE(17);
      if (lookahead == '(') ADVANCE(415);
      if (lookahead == '/') ADVANCE(805);
      if (lookahead == '@') ADVANCE(756);
      if (lookahead == '[') ADVANCE(451);
      if (lookahead == ']') ADVANCE(468);
      if (lookahead == '_') ADVANCE(515);
      if (lookahead == '`') ADVANCE(118);
      if (lookahead == 'n') ADVANCE(119);
      if (lookahead == 't') ADVANCE(116);
      if (lookahead == '{') ADVANCE(487);
      if (lookahead == 0xaf) ADVANCE(327);
      if (lookahead == 0x2682) ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(118);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(820);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(789);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(327);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(357);
      if (lookahead != 0) SKIP(118);
      END_STATE();
    case 116:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(118);
      if (lookahead == '"') ADVANCE(726);
      if (lookahead == '#') SKIP(118);
      if (lookahead == '$') ADVANCE(17);
      if (lookahead == '(') ADVANCE(415);
      if (lookahead == '/') ADVANCE(805);
      if (lookahead == '@') ADVANCE(756);
      if (lookahead == '[') ADVANCE(451);
      if (lookahead == ']') ADVANCE(468);
      if (lookahead == '_') ADVANCE(515);
      if (lookahead == '`') ADVANCE(118);
      if (lookahead == 'o') ADVANCE(112);
      if (lookahead == 't') ADVANCE(116);
      if (lookahead == '{') ADVANCE(487);
      if (lookahead == 0xaf) ADVANCE(327);
      if (lookahead == 0x2682) ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(118);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(820);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(789);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(327);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(357);
      if (lookahead != 0) SKIP(118);
      END_STATE();
    case 117:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(118);
      if (lookahead == '"') ADVANCE(726);
      if (lookahead == '#') SKIP(118);
      if (lookahead == '$') ADVANCE(17);
      if (lookahead == '(') ADVANCE(415);
      if (lookahead == '/') ADVANCE(805);
      if (lookahead == '@') ADVANCE(756);
      if (lookahead == '[') ADVANCE(451);
      if (lookahead == ']') ADVANCE(468);
      if (lookahead == '_') ADVANCE(515);
      if (lookahead == '`') ADVANCE(118);
      if (lookahead == 'o') ADVANCE(18);
      if (lookahead == 't') ADVANCE(116);
      if (lookahead == '{') ADVANCE(487);
      if (lookahead == 0xaf) ADVANCE(327);
      if (lookahead == 0x2682) ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(118);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(820);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(789);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(327);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(357);
      if (lookahead != 0) SKIP(118);
      END_STATE();
    case 118:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(118);
      if (lookahead == '"') ADVANCE(726);
      if (lookahead == '#') SKIP(118);
      if (lookahead == '$') ADVANCE(17);
      if (lookahead == '(') ADVANCE(415);
      if (lookahead == '/') ADVANCE(805);
      if (lookahead == '@') ADVANCE(756);
      if (lookahead == '[') ADVANCE(451);
      if (lookahead == ']') ADVANCE(468);
      if (lookahead == '_') ADVANCE(515);
      if (lookahead == '`') ADVANCE(118);
      if (lookahead == 't') ADVANCE(116);
      if (lookahead == '{') ADVANCE(487);
      if (lookahead == 0xaf) ADVANCE(327);
      if (lookahead == 0x2682) ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(118);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(820);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(789);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(327);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(357);
      if (lookahead != 0) SKIP(118);
      END_STATE();
    case 119:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(118);
      if (lookahead == '"') ADVANCE(726);
      if (lookahead == '#') SKIP(118);
      if (lookahead == '$') ADVANCE(17);
      if (lookahead == '(') ADVANCE(415);
      if (lookahead == '/') ADVANCE(805);
      if (lookahead == '@') ADVANCE(756);
      if (lookahead == '[') ADVANCE(451);
      if (lookahead == ']') ADVANCE(468);
      if (lookahead == '_') ADVANCE(515);
      if (lookahead == '`') ADVANCE(118);
      if (lookahead == 't') ADVANCE(386);
      if (lookahead == '{') ADVANCE(487);
      if (lookahead == 0xaf) ADVANCE(327);
      if (lookahead == 0x2682) ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(118);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(820);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(789);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(327);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(357);
      if (lookahead != 0) SKIP(118);
      END_STATE();
    case 120:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(128);
      if (lookahead == '"') ADVANCE(728);
      if (lookahead == '#') SKIP(128);
      if (lookahead == '$') ADVANCE(19);
      if (lookahead == '(') ADVANCE(417);
      if (lookahead == '-') ADVANCE(359);
      if (lookahead == '@') ADVANCE(758);
      if (lookahead == '[') ADVANCE(453);
      if (lookahead == ']') ADVANCE(470);
      if (lookahead == '_') ADVANCE(517);
      if (lookahead == '`') ADVANCE(128);
      if (lookahead == 't') ADVANCE(126);
      if (lookahead == '{') ADVANCE(489);
      if (lookahead == 0xaf) ADVANCE(329);
      if (lookahead == 0x2682) ADVANCE(300);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(128);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(821);
      if ((',' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(790);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(329);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(359);
      if (lookahead != 0) SKIP(128);
      END_STATE();
    case 121:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(128);
      if (lookahead == '"') ADVANCE(728);
      if (lookahead == '#') SKIP(128);
      if (lookahead == '$') ADVANCE(19);
      if (lookahead == '(') ADVANCE(417);
      if (lookahead == '@') ADVANCE(758);
      if (lookahead == '[') ADVANCE(453);
      if (lookahead == ']') ADVANCE(470);
      if (lookahead == '_') ADVANCE(517);
      if (lookahead == '`') ADVANCE(128);
      if (lookahead == 'd') ADVANCE(123);
      if (lookahead == 't') ADVANCE(126);
      if (lookahead == '{') ADVANCE(489);
      if (lookahead == 0xaf) ADVANCE(329);
      if (lookahead == 0x2682) ADVANCE(300);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(128);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(821);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(790);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(329);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(359);
      if (lookahead != 0) SKIP(128);
      END_STATE();
    case 122:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(128);
      if (lookahead == '"') ADVANCE(728);
      if (lookahead == '#') SKIP(128);
      if (lookahead == '$') ADVANCE(19);
      if (lookahead == '(') ADVANCE(417);
      if (lookahead == '@') ADVANCE(758);
      if (lookahead == '[') ADVANCE(453);
      if (lookahead == ']') ADVANCE(470);
      if (lookahead == '_') ADVANCE(517);
      if (lookahead == '`') ADVANCE(128);
      if (lookahead == 'd') ADVANCE(127);
      if (lookahead == 't') ADVANCE(126);
      if (lookahead == '{') ADVANCE(489);
      if (lookahead == 0xaf) ADVANCE(329);
      if (lookahead == 0x2682) ADVANCE(300);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(128);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(821);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(790);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(329);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(359);
      if (lookahead != 0) SKIP(128);
      END_STATE();
    case 123:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(128);
      if (lookahead == '"') ADVANCE(728);
      if (lookahead == '#') SKIP(128);
      if (lookahead == '$') ADVANCE(19);
      if (lookahead == '(') ADVANCE(417);
      if (lookahead == '@') ADVANCE(758);
      if (lookahead == '[') ADVANCE(453);
      if (lookahead == ']') ADVANCE(470);
      if (lookahead == '_') ADVANCE(517);
      if (lookahead == '`') ADVANCE(128);
      if (lookahead == 'e') ADVANCE(125);
      if (lookahead == 't') ADVANCE(126);
      if (lookahead == '{') ADVANCE(489);
      if (lookahead == 0xaf) ADVANCE(329);
      if (lookahead == 0x2682) ADVANCE(300);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(128);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(821);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(790);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(329);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(359);
      if (lookahead != 0) SKIP(128);
      END_STATE();
    case 124:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(128);
      if (lookahead == '"') ADVANCE(728);
      if (lookahead == '#') SKIP(128);
      if (lookahead == '$') ADVANCE(19);
      if (lookahead == '(') ADVANCE(417);
      if (lookahead == '@') ADVANCE(758);
      if (lookahead == '[') ADVANCE(453);
      if (lookahead == ']') ADVANCE(470);
      if (lookahead == '_') ADVANCE(517);
      if (lookahead == '`') ADVANCE(128);
      if (lookahead == 'i') ADVANCE(121);
      if (lookahead == 't') ADVANCE(126);
      if (lookahead == '{') ADVANCE(489);
      if (lookahead == 0xaf) ADVANCE(329);
      if (lookahead == 0x2682) ADVANCE(300);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(128);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(821);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(790);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(329);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(359);
      if (lookahead != 0) SKIP(128);
      END_STATE();
    case 125:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(128);
      if (lookahead == '"') ADVANCE(728);
      if (lookahead == '#') SKIP(128);
      if (lookahead == '$') ADVANCE(19);
      if (lookahead == '(') ADVANCE(417);
      if (lookahead == '@') ADVANCE(758);
      if (lookahead == '[') ADVANCE(453);
      if (lookahead == ']') ADVANCE(470);
      if (lookahead == '_') ADVANCE(517);
      if (lookahead == '`') ADVANCE(128);
      if (lookahead == 'n') ADVANCE(129);
      if (lookahead == 't') ADVANCE(126);
      if (lookahead == '{') ADVANCE(489);
      if (lookahead == 0xaf) ADVANCE(329);
      if (lookahead == 0x2682) ADVANCE(300);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(128);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(821);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(790);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(329);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(359);
      if (lookahead != 0) SKIP(128);
      END_STATE();
    case 126:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(128);
      if (lookahead == '"') ADVANCE(728);
      if (lookahead == '#') SKIP(128);
      if (lookahead == '$') ADVANCE(19);
      if (lookahead == '(') ADVANCE(417);
      if (lookahead == '@') ADVANCE(758);
      if (lookahead == '[') ADVANCE(453);
      if (lookahead == ']') ADVANCE(470);
      if (lookahead == '_') ADVANCE(517);
      if (lookahead == '`') ADVANCE(128);
      if (lookahead == 'o') ADVANCE(122);
      if (lookahead == 't') ADVANCE(126);
      if (lookahead == '{') ADVANCE(489);
      if (lookahead == 0xaf) ADVANCE(329);
      if (lookahead == 0x2682) ADVANCE(300);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(128);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(821);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(790);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(329);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(359);
      if (lookahead != 0) SKIP(128);
      END_STATE();
    case 127:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(128);
      if (lookahead == '"') ADVANCE(728);
      if (lookahead == '#') SKIP(128);
      if (lookahead == '$') ADVANCE(19);
      if (lookahead == '(') ADVANCE(417);
      if (lookahead == '@') ADVANCE(758);
      if (lookahead == '[') ADVANCE(453);
      if (lookahead == ']') ADVANCE(470);
      if (lookahead == '_') ADVANCE(517);
      if (lookahead == '`') ADVANCE(128);
      if (lookahead == 'o') ADVANCE(20);
      if (lookahead == 't') ADVANCE(126);
      if (lookahead == '{') ADVANCE(489);
      if (lookahead == 0xaf) ADVANCE(329);
      if (lookahead == 0x2682) ADVANCE(300);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(128);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(821);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(790);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(329);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(359);
      if (lookahead != 0) SKIP(128);
      END_STATE();
    case 128:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(128);
      if (lookahead == '"') ADVANCE(728);
      if (lookahead == '#') SKIP(128);
      if (lookahead == '$') ADVANCE(19);
      if (lookahead == '(') ADVANCE(417);
      if (lookahead == '@') ADVANCE(758);
      if (lookahead == '[') ADVANCE(453);
      if (lookahead == ']') ADVANCE(470);
      if (lookahead == '_') ADVANCE(517);
      if (lookahead == '`') ADVANCE(128);
      if (lookahead == 't') ADVANCE(126);
      if (lookahead == '{') ADVANCE(489);
      if (lookahead == 0xaf) ADVANCE(329);
      if (lookahead == 0x2682) ADVANCE(300);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(128);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(821);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(790);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(329);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(359);
      if (lookahead != 0) SKIP(128);
      END_STATE();
    case 129:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(128);
      if (lookahead == '"') ADVANCE(728);
      if (lookahead == '#') SKIP(128);
      if (lookahead == '$') ADVANCE(19);
      if (lookahead == '(') ADVANCE(417);
      if (lookahead == '@') ADVANCE(758);
      if (lookahead == '[') ADVANCE(453);
      if (lookahead == ']') ADVANCE(470);
      if (lookahead == '_') ADVANCE(517);
      if (lookahead == '`') ADVANCE(128);
      if (lookahead == 't') ADVANCE(388);
      if (lookahead == '{') ADVANCE(489);
      if (lookahead == 0xaf) ADVANCE(329);
      if (lookahead == 0x2682) ADVANCE(300);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(128);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(821);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(790);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(329);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(359);
      if (lookahead != 0) SKIP(128);
      END_STATE();
    case 130:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(138);
      if (lookahead == '"') ADVANCE(730);
      if (lookahead == '#') SKIP(138);
      if (lookahead == '$') ADVANCE(21);
      if (lookahead == '(') ADVANCE(419);
      if (lookahead == ')') ADVANCE(432);
      if (lookahead == '-') ADVANCE(361);
      if (lookahead == '@') ADVANCE(760);
      if (lookahead == '[') ADVANCE(455);
      if (lookahead == '_') ADVANCE(519);
      if (lookahead == '`') ADVANCE(138);
      if (lookahead == 't') ADVANCE(136);
      if (lookahead == '{') ADVANCE(491);
      if (lookahead == 0xaf) ADVANCE(331);
      if (lookahead == 0x2682) ADVANCE(302);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(138);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(822);
      if ((',' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(791);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(331);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(361);
      if (lookahead != 0) SKIP(138);
      END_STATE();
    case 131:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(138);
      if (lookahead == '"') ADVANCE(730);
      if (lookahead == '#') SKIP(138);
      if (lookahead == '$') ADVANCE(21);
      if (lookahead == '(') ADVANCE(419);
      if (lookahead == ')') ADVANCE(432);
      if (lookahead == '@') ADVANCE(760);
      if (lookahead == '[') ADVANCE(455);
      if (lookahead == '_') ADVANCE(519);
      if (lookahead == '`') ADVANCE(138);
      if (lookahead == 'd') ADVANCE(133);
      if (lookahead == 't') ADVANCE(136);
      if (lookahead == '{') ADVANCE(491);
      if (lookahead == 0xaf) ADVANCE(331);
      if (lookahead == 0x2682) ADVANCE(302);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(138);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(822);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(791);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(331);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(361);
      if (lookahead != 0) SKIP(138);
      END_STATE();
    case 132:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(138);
      if (lookahead == '"') ADVANCE(730);
      if (lookahead == '#') SKIP(138);
      if (lookahead == '$') ADVANCE(21);
      if (lookahead == '(') ADVANCE(419);
      if (lookahead == ')') ADVANCE(432);
      if (lookahead == '@') ADVANCE(760);
      if (lookahead == '[') ADVANCE(455);
      if (lookahead == '_') ADVANCE(519);
      if (lookahead == '`') ADVANCE(138);
      if (lookahead == 'd') ADVANCE(137);
      if (lookahead == 't') ADVANCE(136);
      if (lookahead == '{') ADVANCE(491);
      if (lookahead == 0xaf) ADVANCE(331);
      if (lookahead == 0x2682) ADVANCE(302);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(138);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(822);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(791);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(331);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(361);
      if (lookahead != 0) SKIP(138);
      END_STATE();
    case 133:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(138);
      if (lookahead == '"') ADVANCE(730);
      if (lookahead == '#') SKIP(138);
      if (lookahead == '$') ADVANCE(21);
      if (lookahead == '(') ADVANCE(419);
      if (lookahead == ')') ADVANCE(432);
      if (lookahead == '@') ADVANCE(760);
      if (lookahead == '[') ADVANCE(455);
      if (lookahead == '_') ADVANCE(519);
      if (lookahead == '`') ADVANCE(138);
      if (lookahead == 'e') ADVANCE(135);
      if (lookahead == 't') ADVANCE(136);
      if (lookahead == '{') ADVANCE(491);
      if (lookahead == 0xaf) ADVANCE(331);
      if (lookahead == 0x2682) ADVANCE(302);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(138);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(822);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(791);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(331);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(361);
      if (lookahead != 0) SKIP(138);
      END_STATE();
    case 134:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(138);
      if (lookahead == '"') ADVANCE(730);
      if (lookahead == '#') SKIP(138);
      if (lookahead == '$') ADVANCE(21);
      if (lookahead == '(') ADVANCE(419);
      if (lookahead == ')') ADVANCE(432);
      if (lookahead == '@') ADVANCE(760);
      if (lookahead == '[') ADVANCE(455);
      if (lookahead == '_') ADVANCE(519);
      if (lookahead == '`') ADVANCE(138);
      if (lookahead == 'i') ADVANCE(131);
      if (lookahead == 't') ADVANCE(136);
      if (lookahead == '{') ADVANCE(491);
      if (lookahead == 0xaf) ADVANCE(331);
      if (lookahead == 0x2682) ADVANCE(302);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(138);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(822);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(791);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(331);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(361);
      if (lookahead != 0) SKIP(138);
      END_STATE();
    case 135:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(138);
      if (lookahead == '"') ADVANCE(730);
      if (lookahead == '#') SKIP(138);
      if (lookahead == '$') ADVANCE(21);
      if (lookahead == '(') ADVANCE(419);
      if (lookahead == ')') ADVANCE(432);
      if (lookahead == '@') ADVANCE(760);
      if (lookahead == '[') ADVANCE(455);
      if (lookahead == '_') ADVANCE(519);
      if (lookahead == '`') ADVANCE(138);
      if (lookahead == 'n') ADVANCE(139);
      if (lookahead == 't') ADVANCE(136);
      if (lookahead == '{') ADVANCE(491);
      if (lookahead == 0xaf) ADVANCE(331);
      if (lookahead == 0x2682) ADVANCE(302);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(138);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(822);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(791);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(331);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(361);
      if (lookahead != 0) SKIP(138);
      END_STATE();
    case 136:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(138);
      if (lookahead == '"') ADVANCE(730);
      if (lookahead == '#') SKIP(138);
      if (lookahead == '$') ADVANCE(21);
      if (lookahead == '(') ADVANCE(419);
      if (lookahead == ')') ADVANCE(432);
      if (lookahead == '@') ADVANCE(760);
      if (lookahead == '[') ADVANCE(455);
      if (lookahead == '_') ADVANCE(519);
      if (lookahead == '`') ADVANCE(138);
      if (lookahead == 'o') ADVANCE(132);
      if (lookahead == 't') ADVANCE(136);
      if (lookahead == '{') ADVANCE(491);
      if (lookahead == 0xaf) ADVANCE(331);
      if (lookahead == 0x2682) ADVANCE(302);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(138);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(822);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(791);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(331);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(361);
      if (lookahead != 0) SKIP(138);
      END_STATE();
    case 137:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(138);
      if (lookahead == '"') ADVANCE(730);
      if (lookahead == '#') SKIP(138);
      if (lookahead == '$') ADVANCE(21);
      if (lookahead == '(') ADVANCE(419);
      if (lookahead == ')') ADVANCE(432);
      if (lookahead == '@') ADVANCE(760);
      if (lookahead == '[') ADVANCE(455);
      if (lookahead == '_') ADVANCE(519);
      if (lookahead == '`') ADVANCE(138);
      if (lookahead == 'o') ADVANCE(22);
      if (lookahead == 't') ADVANCE(136);
      if (lookahead == '{') ADVANCE(491);
      if (lookahead == 0xaf) ADVANCE(331);
      if (lookahead == 0x2682) ADVANCE(302);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(138);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(822);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(791);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(331);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(361);
      if (lookahead != 0) SKIP(138);
      END_STATE();
    case 138:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(138);
      if (lookahead == '"') ADVANCE(730);
      if (lookahead == '#') SKIP(138);
      if (lookahead == '$') ADVANCE(21);
      if (lookahead == '(') ADVANCE(419);
      if (lookahead == ')') ADVANCE(432);
      if (lookahead == '@') ADVANCE(760);
      if (lookahead == '[') ADVANCE(455);
      if (lookahead == '_') ADVANCE(519);
      if (lookahead == '`') ADVANCE(138);
      if (lookahead == 't') ADVANCE(136);
      if (lookahead == '{') ADVANCE(491);
      if (lookahead == 0xaf) ADVANCE(331);
      if (lookahead == 0x2682) ADVANCE(302);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(138);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(822);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(791);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(331);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(361);
      if (lookahead != 0) SKIP(138);
      END_STATE();
    case 139:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(138);
      if (lookahead == '"') ADVANCE(730);
      if (lookahead == '#') SKIP(138);
      if (lookahead == '$') ADVANCE(21);
      if (lookahead == '(') ADVANCE(419);
      if (lookahead == ')') ADVANCE(432);
      if (lookahead == '@') ADVANCE(760);
      if (lookahead == '[') ADVANCE(455);
      if (lookahead == '_') ADVANCE(519);
      if (lookahead == '`') ADVANCE(138);
      if (lookahead == 't') ADVANCE(390);
      if (lookahead == '{') ADVANCE(491);
      if (lookahead == 0xaf) ADVANCE(331);
      if (lookahead == 0x2682) ADVANCE(302);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(138);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(822);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(791);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(331);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(361);
      if (lookahead != 0) SKIP(138);
      END_STATE();
    case 140:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(148);
      if (lookahead == '"') ADVANCE(732);
      if (lookahead == '#') SKIP(148);
      if (lookahead == '$') ADVANCE(23);
      if (lookahead == '(') ADVANCE(421);
      if (lookahead == '-') ADVANCE(363);
      if (lookahead == '/') ADVANCE(807);
      if (lookahead == '@') ADVANCE(762);
      if (lookahead == '[') ADVANCE(457);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == '`') ADVANCE(148);
      if (lookahead == 't') ADVANCE(146);
      if (lookahead == '{') ADVANCE(493);
      if (lookahead == '}') ADVANCE(504);
      if (lookahead == 0xaf) ADVANCE(333);
      if (lookahead == 0x2682) ADVANCE(304);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(148);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(823);
      if ((',' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(792);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(333);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(363);
      if (lookahead != 0) SKIP(148);
      END_STATE();
    case 141:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(148);
      if (lookahead == '"') ADVANCE(732);
      if (lookahead == '#') SKIP(148);
      if (lookahead == '$') ADVANCE(23);
      if (lookahead == '(') ADVANCE(421);
      if (lookahead == '/') ADVANCE(807);
      if (lookahead == '@') ADVANCE(762);
      if (lookahead == '[') ADVANCE(457);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == '`') ADVANCE(148);
      if (lookahead == 'd') ADVANCE(143);
      if (lookahead == 't') ADVANCE(146);
      if (lookahead == '{') ADVANCE(493);
      if (lookahead == '}') ADVANCE(504);
      if (lookahead == 0xaf) ADVANCE(333);
      if (lookahead == 0x2682) ADVANCE(304);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(148);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(823);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(792);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(333);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(363);
      if (lookahead != 0) SKIP(148);
      END_STATE();
    case 142:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(148);
      if (lookahead == '"') ADVANCE(732);
      if (lookahead == '#') SKIP(148);
      if (lookahead == '$') ADVANCE(23);
      if (lookahead == '(') ADVANCE(421);
      if (lookahead == '/') ADVANCE(807);
      if (lookahead == '@') ADVANCE(762);
      if (lookahead == '[') ADVANCE(457);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == '`') ADVANCE(148);
      if (lookahead == 'd') ADVANCE(147);
      if (lookahead == 't') ADVANCE(146);
      if (lookahead == '{') ADVANCE(493);
      if (lookahead == '}') ADVANCE(504);
      if (lookahead == 0xaf) ADVANCE(333);
      if (lookahead == 0x2682) ADVANCE(304);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(148);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(823);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(792);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(333);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(363);
      if (lookahead != 0) SKIP(148);
      END_STATE();
    case 143:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(148);
      if (lookahead == '"') ADVANCE(732);
      if (lookahead == '#') SKIP(148);
      if (lookahead == '$') ADVANCE(23);
      if (lookahead == '(') ADVANCE(421);
      if (lookahead == '/') ADVANCE(807);
      if (lookahead == '@') ADVANCE(762);
      if (lookahead == '[') ADVANCE(457);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == '`') ADVANCE(148);
      if (lookahead == 'e') ADVANCE(145);
      if (lookahead == 't') ADVANCE(146);
      if (lookahead == '{') ADVANCE(493);
      if (lookahead == '}') ADVANCE(504);
      if (lookahead == 0xaf) ADVANCE(333);
      if (lookahead == 0x2682) ADVANCE(304);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(148);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(823);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(792);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(333);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(363);
      if (lookahead != 0) SKIP(148);
      END_STATE();
    case 144:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(148);
      if (lookahead == '"') ADVANCE(732);
      if (lookahead == '#') SKIP(148);
      if (lookahead == '$') ADVANCE(23);
      if (lookahead == '(') ADVANCE(421);
      if (lookahead == '/') ADVANCE(807);
      if (lookahead == '@') ADVANCE(762);
      if (lookahead == '[') ADVANCE(457);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == '`') ADVANCE(148);
      if (lookahead == 'i') ADVANCE(141);
      if (lookahead == 't') ADVANCE(146);
      if (lookahead == '{') ADVANCE(493);
      if (lookahead == '}') ADVANCE(504);
      if (lookahead == 0xaf) ADVANCE(333);
      if (lookahead == 0x2682) ADVANCE(304);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(148);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(823);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(792);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(333);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(363);
      if (lookahead != 0) SKIP(148);
      END_STATE();
    case 145:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(148);
      if (lookahead == '"') ADVANCE(732);
      if (lookahead == '#') SKIP(148);
      if (lookahead == '$') ADVANCE(23);
      if (lookahead == '(') ADVANCE(421);
      if (lookahead == '/') ADVANCE(807);
      if (lookahead == '@') ADVANCE(762);
      if (lookahead == '[') ADVANCE(457);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == '`') ADVANCE(148);
      if (lookahead == 'n') ADVANCE(149);
      if (lookahead == 't') ADVANCE(146);
      if (lookahead == '{') ADVANCE(493);
      if (lookahead == '}') ADVANCE(504);
      if (lookahead == 0xaf) ADVANCE(333);
      if (lookahead == 0x2682) ADVANCE(304);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(148);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(823);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(792);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(333);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(363);
      if (lookahead != 0) SKIP(148);
      END_STATE();
    case 146:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(148);
      if (lookahead == '"') ADVANCE(732);
      if (lookahead == '#') SKIP(148);
      if (lookahead == '$') ADVANCE(23);
      if (lookahead == '(') ADVANCE(421);
      if (lookahead == '/') ADVANCE(807);
      if (lookahead == '@') ADVANCE(762);
      if (lookahead == '[') ADVANCE(457);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == '`') ADVANCE(148);
      if (lookahead == 'o') ADVANCE(142);
      if (lookahead == 't') ADVANCE(146);
      if (lookahead == '{') ADVANCE(493);
      if (lookahead == '}') ADVANCE(504);
      if (lookahead == 0xaf) ADVANCE(333);
      if (lookahead == 0x2682) ADVANCE(304);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(148);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(823);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(792);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(333);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(363);
      if (lookahead != 0) SKIP(148);
      END_STATE();
    case 147:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(148);
      if (lookahead == '"') ADVANCE(732);
      if (lookahead == '#') SKIP(148);
      if (lookahead == '$') ADVANCE(23);
      if (lookahead == '(') ADVANCE(421);
      if (lookahead == '/') ADVANCE(807);
      if (lookahead == '@') ADVANCE(762);
      if (lookahead == '[') ADVANCE(457);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == '`') ADVANCE(148);
      if (lookahead == 'o') ADVANCE(24);
      if (lookahead == 't') ADVANCE(146);
      if (lookahead == '{') ADVANCE(493);
      if (lookahead == '}') ADVANCE(504);
      if (lookahead == 0xaf) ADVANCE(333);
      if (lookahead == 0x2682) ADVANCE(304);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(148);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(823);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(792);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(333);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(363);
      if (lookahead != 0) SKIP(148);
      END_STATE();
    case 148:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(148);
      if (lookahead == '"') ADVANCE(732);
      if (lookahead == '#') SKIP(148);
      if (lookahead == '$') ADVANCE(23);
      if (lookahead == '(') ADVANCE(421);
      if (lookahead == '/') ADVANCE(807);
      if (lookahead == '@') ADVANCE(762);
      if (lookahead == '[') ADVANCE(457);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == '`') ADVANCE(148);
      if (lookahead == 't') ADVANCE(146);
      if (lookahead == '{') ADVANCE(493);
      if (lookahead == '}') ADVANCE(504);
      if (lookahead == 0xaf) ADVANCE(333);
      if (lookahead == 0x2682) ADVANCE(304);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(148);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(823);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(792);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(333);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(363);
      if (lookahead != 0) SKIP(148);
      END_STATE();
    case 149:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(148);
      if (lookahead == '"') ADVANCE(732);
      if (lookahead == '#') SKIP(148);
      if (lookahead == '$') ADVANCE(23);
      if (lookahead == '(') ADVANCE(421);
      if (lookahead == '/') ADVANCE(807);
      if (lookahead == '@') ADVANCE(762);
      if (lookahead == '[') ADVANCE(457);
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == '`') ADVANCE(148);
      if (lookahead == 't') ADVANCE(392);
      if (lookahead == '{') ADVANCE(493);
      if (lookahead == '}') ADVANCE(504);
      if (lookahead == 0xaf) ADVANCE(333);
      if (lookahead == 0x2682) ADVANCE(304);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(148);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(823);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(792);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(333);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(363);
      if (lookahead != 0) SKIP(148);
      END_STATE();
    case 150:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(158);
      if (lookahead == '"') ADVANCE(734);
      if (lookahead == '#') SKIP(158);
      if (lookahead == '$') ADVANCE(25);
      if (lookahead == '(') ADVANCE(423);
      if (lookahead == '-') ADVANCE(365);
      if (lookahead == '@') ADVANCE(764);
      if (lookahead == '[') ADVANCE(459);
      if (lookahead == '_') ADVANCE(523);
      if (lookahead == '`') ADVANCE(158);
      if (lookahead == 't') ADVANCE(156);
      if (lookahead == '{') ADVANCE(495);
      if (lookahead == '}') ADVANCE(506);
      if (lookahead == 0xaf) ADVANCE(335);
      if (lookahead == 0x2682) ADVANCE(306);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(158);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(824);
      if ((',' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(793);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(335);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(365);
      if (lookahead != 0) SKIP(158);
      END_STATE();
    case 151:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(158);
      if (lookahead == '"') ADVANCE(734);
      if (lookahead == '#') SKIP(158);
      if (lookahead == '$') ADVANCE(25);
      if (lookahead == '(') ADVANCE(423);
      if (lookahead == '@') ADVANCE(764);
      if (lookahead == '[') ADVANCE(459);
      if (lookahead == '_') ADVANCE(523);
      if (lookahead == '`') ADVANCE(158);
      if (lookahead == 'd') ADVANCE(153);
      if (lookahead == 't') ADVANCE(156);
      if (lookahead == '{') ADVANCE(495);
      if (lookahead == '}') ADVANCE(506);
      if (lookahead == 0xaf) ADVANCE(335);
      if (lookahead == 0x2682) ADVANCE(306);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(158);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(824);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(793);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(335);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(365);
      if (lookahead != 0) SKIP(158);
      END_STATE();
    case 152:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(158);
      if (lookahead == '"') ADVANCE(734);
      if (lookahead == '#') SKIP(158);
      if (lookahead == '$') ADVANCE(25);
      if (lookahead == '(') ADVANCE(423);
      if (lookahead == '@') ADVANCE(764);
      if (lookahead == '[') ADVANCE(459);
      if (lookahead == '_') ADVANCE(523);
      if (lookahead == '`') ADVANCE(158);
      if (lookahead == 'd') ADVANCE(157);
      if (lookahead == 't') ADVANCE(156);
      if (lookahead == '{') ADVANCE(495);
      if (lookahead == '}') ADVANCE(506);
      if (lookahead == 0xaf) ADVANCE(335);
      if (lookahead == 0x2682) ADVANCE(306);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(158);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(824);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(793);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(335);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(365);
      if (lookahead != 0) SKIP(158);
      END_STATE();
    case 153:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(158);
      if (lookahead == '"') ADVANCE(734);
      if (lookahead == '#') SKIP(158);
      if (lookahead == '$') ADVANCE(25);
      if (lookahead == '(') ADVANCE(423);
      if (lookahead == '@') ADVANCE(764);
      if (lookahead == '[') ADVANCE(459);
      if (lookahead == '_') ADVANCE(523);
      if (lookahead == '`') ADVANCE(158);
      if (lookahead == 'e') ADVANCE(155);
      if (lookahead == 't') ADVANCE(156);
      if (lookahead == '{') ADVANCE(495);
      if (lookahead == '}') ADVANCE(506);
      if (lookahead == 0xaf) ADVANCE(335);
      if (lookahead == 0x2682) ADVANCE(306);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(158);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(824);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(793);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(335);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(365);
      if (lookahead != 0) SKIP(158);
      END_STATE();
    case 154:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(158);
      if (lookahead == '"') ADVANCE(734);
      if (lookahead == '#') SKIP(158);
      if (lookahead == '$') ADVANCE(25);
      if (lookahead == '(') ADVANCE(423);
      if (lookahead == '@') ADVANCE(764);
      if (lookahead == '[') ADVANCE(459);
      if (lookahead == '_') ADVANCE(523);
      if (lookahead == '`') ADVANCE(158);
      if (lookahead == 'i') ADVANCE(151);
      if (lookahead == 't') ADVANCE(156);
      if (lookahead == '{') ADVANCE(495);
      if (lookahead == '}') ADVANCE(506);
      if (lookahead == 0xaf) ADVANCE(335);
      if (lookahead == 0x2682) ADVANCE(306);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(158);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(824);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(793);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(335);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(365);
      if (lookahead != 0) SKIP(158);
      END_STATE();
    case 155:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(158);
      if (lookahead == '"') ADVANCE(734);
      if (lookahead == '#') SKIP(158);
      if (lookahead == '$') ADVANCE(25);
      if (lookahead == '(') ADVANCE(423);
      if (lookahead == '@') ADVANCE(764);
      if (lookahead == '[') ADVANCE(459);
      if (lookahead == '_') ADVANCE(523);
      if (lookahead == '`') ADVANCE(158);
      if (lookahead == 'n') ADVANCE(159);
      if (lookahead == 't') ADVANCE(156);
      if (lookahead == '{') ADVANCE(495);
      if (lookahead == '}') ADVANCE(506);
      if (lookahead == 0xaf) ADVANCE(335);
      if (lookahead == 0x2682) ADVANCE(306);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(158);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(824);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(793);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(335);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(365);
      if (lookahead != 0) SKIP(158);
      END_STATE();
    case 156:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(158);
      if (lookahead == '"') ADVANCE(734);
      if (lookahead == '#') SKIP(158);
      if (lookahead == '$') ADVANCE(25);
      if (lookahead == '(') ADVANCE(423);
      if (lookahead == '@') ADVANCE(764);
      if (lookahead == '[') ADVANCE(459);
      if (lookahead == '_') ADVANCE(523);
      if (lookahead == '`') ADVANCE(158);
      if (lookahead == 'o') ADVANCE(152);
      if (lookahead == 't') ADVANCE(156);
      if (lookahead == '{') ADVANCE(495);
      if (lookahead == '}') ADVANCE(506);
      if (lookahead == 0xaf) ADVANCE(335);
      if (lookahead == 0x2682) ADVANCE(306);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(158);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(824);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(793);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(335);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(365);
      if (lookahead != 0) SKIP(158);
      END_STATE();
    case 157:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(158);
      if (lookahead == '"') ADVANCE(734);
      if (lookahead == '#') SKIP(158);
      if (lookahead == '$') ADVANCE(25);
      if (lookahead == '(') ADVANCE(423);
      if (lookahead == '@') ADVANCE(764);
      if (lookahead == '[') ADVANCE(459);
      if (lookahead == '_') ADVANCE(523);
      if (lookahead == '`') ADVANCE(158);
      if (lookahead == 'o') ADVANCE(26);
      if (lookahead == 't') ADVANCE(156);
      if (lookahead == '{') ADVANCE(495);
      if (lookahead == '}') ADVANCE(506);
      if (lookahead == 0xaf) ADVANCE(335);
      if (lookahead == 0x2682) ADVANCE(306);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(158);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(824);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(793);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(335);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(365);
      if (lookahead != 0) SKIP(158);
      END_STATE();
    case 158:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(158);
      if (lookahead == '"') ADVANCE(734);
      if (lookahead == '#') SKIP(158);
      if (lookahead == '$') ADVANCE(25);
      if (lookahead == '(') ADVANCE(423);
      if (lookahead == '@') ADVANCE(764);
      if (lookahead == '[') ADVANCE(459);
      if (lookahead == '_') ADVANCE(523);
      if (lookahead == '`') ADVANCE(158);
      if (lookahead == 't') ADVANCE(156);
      if (lookahead == '{') ADVANCE(495);
      if (lookahead == '}') ADVANCE(506);
      if (lookahead == 0xaf) ADVANCE(335);
      if (lookahead == 0x2682) ADVANCE(306);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(158);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(824);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(793);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(335);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(365);
      if (lookahead != 0) SKIP(158);
      END_STATE();
    case 159:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(158);
      if (lookahead == '"') ADVANCE(734);
      if (lookahead == '#') SKIP(158);
      if (lookahead == '$') ADVANCE(25);
      if (lookahead == '(') ADVANCE(423);
      if (lookahead == '@') ADVANCE(764);
      if (lookahead == '[') ADVANCE(459);
      if (lookahead == '_') ADVANCE(523);
      if (lookahead == '`') ADVANCE(158);
      if (lookahead == 't') ADVANCE(394);
      if (lookahead == '{') ADVANCE(495);
      if (lookahead == '}') ADVANCE(506);
      if (lookahead == 0xaf) ADVANCE(335);
      if (lookahead == 0x2682) ADVANCE(306);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(158);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(824);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(793);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(335);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(365);
      if (lookahead != 0) SKIP(158);
      END_STATE();
    case 160:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(168);
      if (lookahead == '"') ADVANCE(736);
      if (lookahead == '#') SKIP(168);
      if (lookahead == '$') ADVANCE(27);
      if (lookahead == '(') ADVANCE(425);
      if (lookahead == ')') ADVANCE(434);
      if (lookahead == '-') ADVANCE(367);
      if (lookahead == '/') ADVANCE(809);
      if (lookahead == '@') ADVANCE(766);
      if (lookahead == '[') ADVANCE(461);
      if (lookahead == '_') ADVANCE(525);
      if (lookahead == '`') ADVANCE(168);
      if (lookahead == 't') ADVANCE(166);
      if (lookahead == '{') ADVANCE(497);
      if (lookahead == 0xaf) ADVANCE(337);
      if (lookahead == 0x2682) ADVANCE(308);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(168);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(825);
      if ((',' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(794);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(337);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(367);
      if (lookahead != 0) SKIP(168);
      END_STATE();
    case 161:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(168);
      if (lookahead == '"') ADVANCE(736);
      if (lookahead == '#') SKIP(168);
      if (lookahead == '$') ADVANCE(27);
      if (lookahead == '(') ADVANCE(425);
      if (lookahead == ')') ADVANCE(434);
      if (lookahead == '/') ADVANCE(809);
      if (lookahead == '@') ADVANCE(766);
      if (lookahead == '[') ADVANCE(461);
      if (lookahead == '_') ADVANCE(525);
      if (lookahead == '`') ADVANCE(168);
      if (lookahead == 'd') ADVANCE(163);
      if (lookahead == 't') ADVANCE(166);
      if (lookahead == '{') ADVANCE(497);
      if (lookahead == 0xaf) ADVANCE(337);
      if (lookahead == 0x2682) ADVANCE(308);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(168);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(825);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(794);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(337);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(367);
      if (lookahead != 0) SKIP(168);
      END_STATE();
    case 162:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(168);
      if (lookahead == '"') ADVANCE(736);
      if (lookahead == '#') SKIP(168);
      if (lookahead == '$') ADVANCE(27);
      if (lookahead == '(') ADVANCE(425);
      if (lookahead == ')') ADVANCE(434);
      if (lookahead == '/') ADVANCE(809);
      if (lookahead == '@') ADVANCE(766);
      if (lookahead == '[') ADVANCE(461);
      if (lookahead == '_') ADVANCE(525);
      if (lookahead == '`') ADVANCE(168);
      if (lookahead == 'd') ADVANCE(167);
      if (lookahead == 't') ADVANCE(166);
      if (lookahead == '{') ADVANCE(497);
      if (lookahead == 0xaf) ADVANCE(337);
      if (lookahead == 0x2682) ADVANCE(308);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(168);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(825);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(794);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(337);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(367);
      if (lookahead != 0) SKIP(168);
      END_STATE();
    case 163:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(168);
      if (lookahead == '"') ADVANCE(736);
      if (lookahead == '#') SKIP(168);
      if (lookahead == '$') ADVANCE(27);
      if (lookahead == '(') ADVANCE(425);
      if (lookahead == ')') ADVANCE(434);
      if (lookahead == '/') ADVANCE(809);
      if (lookahead == '@') ADVANCE(766);
      if (lookahead == '[') ADVANCE(461);
      if (lookahead == '_') ADVANCE(525);
      if (lookahead == '`') ADVANCE(168);
      if (lookahead == 'e') ADVANCE(165);
      if (lookahead == 't') ADVANCE(166);
      if (lookahead == '{') ADVANCE(497);
      if (lookahead == 0xaf) ADVANCE(337);
      if (lookahead == 0x2682) ADVANCE(308);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(168);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(825);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(794);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(337);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(367);
      if (lookahead != 0) SKIP(168);
      END_STATE();
    case 164:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(168);
      if (lookahead == '"') ADVANCE(736);
      if (lookahead == '#') SKIP(168);
      if (lookahead == '$') ADVANCE(27);
      if (lookahead == '(') ADVANCE(425);
      if (lookahead == ')') ADVANCE(434);
      if (lookahead == '/') ADVANCE(809);
      if (lookahead == '@') ADVANCE(766);
      if (lookahead == '[') ADVANCE(461);
      if (lookahead == '_') ADVANCE(525);
      if (lookahead == '`') ADVANCE(168);
      if (lookahead == 'i') ADVANCE(161);
      if (lookahead == 't') ADVANCE(166);
      if (lookahead == '{') ADVANCE(497);
      if (lookahead == 0xaf) ADVANCE(337);
      if (lookahead == 0x2682) ADVANCE(308);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(168);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(825);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(794);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(337);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(367);
      if (lookahead != 0) SKIP(168);
      END_STATE();
    case 165:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(168);
      if (lookahead == '"') ADVANCE(736);
      if (lookahead == '#') SKIP(168);
      if (lookahead == '$') ADVANCE(27);
      if (lookahead == '(') ADVANCE(425);
      if (lookahead == ')') ADVANCE(434);
      if (lookahead == '/') ADVANCE(809);
      if (lookahead == '@') ADVANCE(766);
      if (lookahead == '[') ADVANCE(461);
      if (lookahead == '_') ADVANCE(525);
      if (lookahead == '`') ADVANCE(168);
      if (lookahead == 'n') ADVANCE(169);
      if (lookahead == 't') ADVANCE(166);
      if (lookahead == '{') ADVANCE(497);
      if (lookahead == 0xaf) ADVANCE(337);
      if (lookahead == 0x2682) ADVANCE(308);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(168);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(825);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(794);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(337);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(367);
      if (lookahead != 0) SKIP(168);
      END_STATE();
    case 166:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(168);
      if (lookahead == '"') ADVANCE(736);
      if (lookahead == '#') SKIP(168);
      if (lookahead == '$') ADVANCE(27);
      if (lookahead == '(') ADVANCE(425);
      if (lookahead == ')') ADVANCE(434);
      if (lookahead == '/') ADVANCE(809);
      if (lookahead == '@') ADVANCE(766);
      if (lookahead == '[') ADVANCE(461);
      if (lookahead == '_') ADVANCE(525);
      if (lookahead == '`') ADVANCE(168);
      if (lookahead == 'o') ADVANCE(162);
      if (lookahead == 't') ADVANCE(166);
      if (lookahead == '{') ADVANCE(497);
      if (lookahead == 0xaf) ADVANCE(337);
      if (lookahead == 0x2682) ADVANCE(308);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(168);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(825);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(794);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(337);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(367);
      if (lookahead != 0) SKIP(168);
      END_STATE();
    case 167:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(168);
      if (lookahead == '"') ADVANCE(736);
      if (lookahead == '#') SKIP(168);
      if (lookahead == '$') ADVANCE(27);
      if (lookahead == '(') ADVANCE(425);
      if (lookahead == ')') ADVANCE(434);
      if (lookahead == '/') ADVANCE(809);
      if (lookahead == '@') ADVANCE(766);
      if (lookahead == '[') ADVANCE(461);
      if (lookahead == '_') ADVANCE(525);
      if (lookahead == '`') ADVANCE(168);
      if (lookahead == 'o') ADVANCE(28);
      if (lookahead == 't') ADVANCE(166);
      if (lookahead == '{') ADVANCE(497);
      if (lookahead == 0xaf) ADVANCE(337);
      if (lookahead == 0x2682) ADVANCE(308);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(168);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(825);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(794);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(337);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(367);
      if (lookahead != 0) SKIP(168);
      END_STATE();
    case 168:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(168);
      if (lookahead == '"') ADVANCE(736);
      if (lookahead == '#') SKIP(168);
      if (lookahead == '$') ADVANCE(27);
      if (lookahead == '(') ADVANCE(425);
      if (lookahead == ')') ADVANCE(434);
      if (lookahead == '/') ADVANCE(809);
      if (lookahead == '@') ADVANCE(766);
      if (lookahead == '[') ADVANCE(461);
      if (lookahead == '_') ADVANCE(525);
      if (lookahead == '`') ADVANCE(168);
      if (lookahead == 't') ADVANCE(166);
      if (lookahead == '{') ADVANCE(497);
      if (lookahead == 0xaf) ADVANCE(337);
      if (lookahead == 0x2682) ADVANCE(308);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(168);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(825);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(794);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(337);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(367);
      if (lookahead != 0) SKIP(168);
      END_STATE();
    case 169:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(168);
      if (lookahead == '"') ADVANCE(736);
      if (lookahead == '#') SKIP(168);
      if (lookahead == '$') ADVANCE(27);
      if (lookahead == '(') ADVANCE(425);
      if (lookahead == ')') ADVANCE(434);
      if (lookahead == '/') ADVANCE(809);
      if (lookahead == '@') ADVANCE(766);
      if (lookahead == '[') ADVANCE(461);
      if (lookahead == '_') ADVANCE(525);
      if (lookahead == '`') ADVANCE(168);
      if (lookahead == 't') ADVANCE(396);
      if (lookahead == '{') ADVANCE(497);
      if (lookahead == 0xaf) ADVANCE(337);
      if (lookahead == 0x2682) ADVANCE(308);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(168);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(825);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(794);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(337);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(367);
      if (lookahead != 0) SKIP(168);
      END_STATE();
    case 170:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(170);
      if (lookahead == '#') SKIP(170);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(170);
      if (lookahead != 0) SKIP(170);
      END_STATE();
    case 171:
      if (lookahead == '\n') ADVANCE(209);
      if (lookahead == '{') ADVANCE(217);
      if (lookahead == '}') ADVANCE(781);
      if (lookahead != 0) ADVANCE(172);
      END_STATE();
    case 172:
      if (lookahead == '\n') ADVANCE(209);
      if (lookahead == '{') ADVANCE(216);
      if (lookahead == '}') ADVANCE(780);
      if (lookahead != 0) ADVANCE(173);
      END_STATE();
    case 173:
      if (lookahead == '\n') ADVANCE(209);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(778);
      if (lookahead != 0) ADVANCE(779);
      END_STATE();
    case 174:
      if (lookahead == ' ') ADVANCE(710);
      END_STATE();
    case 175:
      if (lookahead == ' ') ADVANCE(200);
      END_STATE();
    case 176:
      if (lookahead == ' ') ADVANCE(200);
      if (lookahead == '1') ADVANCE(227);
      if (lookahead == '2') ADVANCE(236);
      if (lookahead == '3') ADVANCE(245);
      END_STATE();
    case 177:
      if (lookahead == '"') ADVANCE(711);
      if (lookahead == '#') SKIP(187);
      if (lookahead == '$') ADVANCE(174);
      if (lookahead == '@') ADVANCE(741);
      if (lookahead == '`') ADVANCE(211);
      if (lookahead == 't') ADVANCE(205);
      if (lookahead == 0xaf) ADVANCE(341);
      if (lookahead == 0x2682) ADVANCE(283);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(177);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(812);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(796);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(312);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(342);
      END_STATE();
    case 178:
      if (lookahead == '"') ADVANCE(711);
      if (lookahead == '#') ADVANCE(771);
      if (lookahead == '\\') ADVANCE(775);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(773);
      if (lookahead != 0) ADVANCE(770);
      END_STATE();
    case 179:
      if (lookahead == '"') ADVANCE(738);
      if (lookahead == '#') SKIP(187);
      if (lookahead == '$') ADVANCE(11);
      if (lookahead == '-') ADVANCE(369);
      if (lookahead == '@') ADVANCE(768);
      if (lookahead == '`') ADVANCE(187);
      if (lookahead == 't') ADVANCE(185);
      if (lookahead == 0xaf) ADVANCE(339);
      if (lookahead == 0x2682) ADVANCE(310);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(187);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(826);
      if ((',' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(795);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(339);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(369);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') SKIP(187);
      END_STATE();
    case 180:
      if (lookahead == '"') ADVANCE(738);
      if (lookahead == '#') SKIP(187);
      if (lookahead == '$') ADVANCE(11);
      if (lookahead == '@') ADVANCE(768);
      if (lookahead == '`') ADVANCE(187);
      if (lookahead == 'd') ADVANCE(182);
      if (lookahead == 't') ADVANCE(185);
      if (lookahead == 0xaf) ADVANCE(339);
      if (lookahead == 0x2682) ADVANCE(310);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(187);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(826);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(795);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(339);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(369);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') SKIP(187);
      END_STATE();
    case 181:
      if (lookahead == '"') ADVANCE(738);
      if (lookahead == '#') SKIP(187);
      if (lookahead == '$') ADVANCE(11);
      if (lookahead == '@') ADVANCE(768);
      if (lookahead == '`') ADVANCE(187);
      if (lookahead == 'd') ADVANCE(186);
      if (lookahead == 't') ADVANCE(185);
      if (lookahead == 0xaf) ADVANCE(339);
      if (lookahead == 0x2682) ADVANCE(310);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(187);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(826);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(795);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(339);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(369);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') SKIP(187);
      END_STATE();
    case 182:
      if (lookahead == '"') ADVANCE(738);
      if (lookahead == '#') SKIP(187);
      if (lookahead == '$') ADVANCE(11);
      if (lookahead == '@') ADVANCE(768);
      if (lookahead == '`') ADVANCE(187);
      if (lookahead == 'e') ADVANCE(184);
      if (lookahead == 't') ADVANCE(185);
      if (lookahead == 0xaf) ADVANCE(339);
      if (lookahead == 0x2682) ADVANCE(310);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(187);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(826);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(795);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(339);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(369);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') SKIP(187);
      END_STATE();
    case 183:
      if (lookahead == '"') ADVANCE(738);
      if (lookahead == '#') SKIP(187);
      if (lookahead == '$') ADVANCE(11);
      if (lookahead == '@') ADVANCE(768);
      if (lookahead == '`') ADVANCE(187);
      if (lookahead == 'i') ADVANCE(180);
      if (lookahead == 't') ADVANCE(185);
      if (lookahead == 0xaf) ADVANCE(339);
      if (lookahead == 0x2682) ADVANCE(310);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(187);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(826);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(795);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(339);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(369);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') SKIP(187);
      END_STATE();
    case 184:
      if (lookahead == '"') ADVANCE(738);
      if (lookahead == '#') SKIP(187);
      if (lookahead == '$') ADVANCE(11);
      if (lookahead == '@') ADVANCE(768);
      if (lookahead == '`') ADVANCE(187);
      if (lookahead == 'n') ADVANCE(188);
      if (lookahead == 't') ADVANCE(185);
      if (lookahead == 0xaf) ADVANCE(339);
      if (lookahead == 0x2682) ADVANCE(310);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(187);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(826);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(795);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(339);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(369);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') SKIP(187);
      END_STATE();
    case 185:
      if (lookahead == '"') ADVANCE(738);
      if (lookahead == '#') SKIP(187);
      if (lookahead == '$') ADVANCE(11);
      if (lookahead == '@') ADVANCE(768);
      if (lookahead == '`') ADVANCE(187);
      if (lookahead == 'o') ADVANCE(181);
      if (lookahead == 't') ADVANCE(185);
      if (lookahead == 0xaf) ADVANCE(339);
      if (lookahead == 0x2682) ADVANCE(310);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(187);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(826);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(795);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(339);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(369);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') SKIP(187);
      END_STATE();
    case 186:
      if (lookahead == '"') ADVANCE(738);
      if (lookahead == '#') SKIP(187);
      if (lookahead == '$') ADVANCE(11);
      if (lookahead == '@') ADVANCE(768);
      if (lookahead == '`') ADVANCE(187);
      if (lookahead == 'o') ADVANCE(12);
      if (lookahead == 't') ADVANCE(185);
      if (lookahead == 0xaf) ADVANCE(339);
      if (lookahead == 0x2682) ADVANCE(310);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(187);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(826);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(795);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(339);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(369);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') SKIP(187);
      END_STATE();
    case 187:
      if (lookahead == '"') ADVANCE(738);
      if (lookahead == '#') SKIP(187);
      if (lookahead == '$') ADVANCE(11);
      if (lookahead == '@') ADVANCE(768);
      if (lookahead == '`') ADVANCE(187);
      if (lookahead == 't') ADVANCE(185);
      if (lookahead == 0xaf) ADVANCE(339);
      if (lookahead == 0x2682) ADVANCE(310);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(187);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(826);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(795);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(339);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(369);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') SKIP(187);
      END_STATE();
    case 188:
      if (lookahead == '"') ADVANCE(738);
      if (lookahead == '#') SKIP(187);
      if (lookahead == '$') ADVANCE(11);
      if (lookahead == '@') ADVANCE(768);
      if (lookahead == '`') ADVANCE(187);
      if (lookahead == 't') ADVANCE(398);
      if (lookahead == 0xaf) ADVANCE(339);
      if (lookahead == 0x2682) ADVANCE(310);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(187);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(826);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(795);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(339);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(369);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') SKIP(187);
      END_STATE();
    case 189:
      if (lookahead == '#') ADVANCE(772);
      if (lookahead == '\\') ADVANCE(775);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(774);
      if (lookahead != 0) ADVANCE(770);
      END_STATE();
    case 190:
      if (lookahead == '#') SKIP(191);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(190);
      if (lookahead == '`' ||
          lookahead == 0xaf) ADVANCE(212);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(812);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(798);
      END_STATE();
    case 191:
      if (lookahead == '#') SKIP(191);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(191);
      if (lookahead == '`' ||
          lookahead == 0xaf) ADVANCE(191);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(827);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(797);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') SKIP(191);
      END_STATE();
    case 192:
      if (lookahead == '#') SKIP(193);
      if (lookahead == '_') ADVANCE(508);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(192);
      END_STATE();
    case 193:
      if (lookahead == '#') SKIP(193);
      if (lookahead == '_') ADVANCE(527);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(193);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') SKIP(193);
      END_STATE();
    case 194:
      if (lookahead == '#') SKIP(195);
      if (lookahead == '/') ADVANCE(800);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(194);
      END_STATE();
    case 195:
      if (lookahead == '#') SKIP(195);
      if (lookahead == '/') ADVANCE(811);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(195);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') SKIP(195);
      END_STATE();
    case 196:
      if (lookahead == 'd') ADVANCE(199);
      END_STATE();
    case 197:
      if (lookahead == 'd') ADVANCE(203);
      END_STATE();
    case 198:
      if (lookahead == 'd') ADVANCE(204);
      END_STATE();
    case 199:
      if (lookahead == 'e') ADVANCE(201);
      END_STATE();
    case 200:
      if (lookahead == 'i') ADVANCE(196);
      END_STATE();
    case 201:
      if (lookahead == 'n') ADVANCE(206);
      END_STATE();
    case 202:
      if (lookahead == 'o') ADVANCE(197);
      END_STATE();
    case 203:
      if (lookahead == 'o') ADVANCE(176);
      END_STATE();
    case 204:
      if (lookahead == 'o') ADVANCE(175);
      END_STATE();
    case 205:
      if (lookahead == 'o') ADVANCE(198);
      END_STATE();
    case 206:
      if (lookahead == 't') ADVANCE(371);
      END_STATE();
    case 207:
      if (lookahead == 'u') ADVANCE(208);
      if (lookahead == 'x') ADVANCE(217);
      if (lookahead != 0) ADVANCE(778);
      END_STATE();
    case 208:
      if (lookahead == '{') ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
      END_STATE();
    case 209:
      if (lookahead == '}') ADVANCE(778);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(209);
      END_STATE();
    case 210:
      if (lookahead == '-' ||
          lookahead == '`' ||
          lookahead == 0xaf) ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(828);
      END_STATE();
    case 211:
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(812);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(796);
      END_STATE();
    case 212:
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(812);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(798);
      END_STATE();
    case 213:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(799);
      END_STATE();
    case 214:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(828);
      END_STATE();
    case 215:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(217);
      END_STATE();
    case 216:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(778);
      END_STATE();
    case 217:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(216);
      END_STATE();
    case 218:
      if (eof) ADVANCE(225);
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(29);
      if (lookahead == '"') ADVANCE(711);
      if (lookahead == '#') SKIP(222);
      if (lookahead == '$') ADVANCE(174);
      if (lookahead == '(') ADVANCE(400);
      if (lookahead == '@') ADVANCE(741);
      if (lookahead == '[') ADVANCE(436);
      if (lookahead == '`') ADVANCE(211);
      if (lookahead == 't') ADVANCE(202);
      if (lookahead == '{') ADVANCE(472);
      if (lookahead == 0xaf) ADVANCE(341);
      if (lookahead == 0x2682) ADVANCE(283);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(218);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(812);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(796);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(312);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(342);
      END_STATE();
    case 219:
      if (eof) ADVANCE(225);
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(29);
      if (lookahead == '"') ADVANCE(711);
      if (lookahead == '#') SKIP(223);
      if (lookahead == '$') ADVANCE(174);
      if (lookahead == '(') ADVANCE(400);
      if (lookahead == '@') ADVANCE(741);
      if (lookahead == '[') ADVANCE(436);
      if (lookahead == '_') ADVANCE(508);
      if (lookahead == '`') ADVANCE(211);
      if (lookahead == 't') ADVANCE(202);
      if (lookahead == '{') ADVANCE(472);
      if (lookahead == 0xaf) ADVANCE(341);
      if (lookahead == 0x2682) ADVANCE(283);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(219);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(812);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(796);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(312);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(342);
      END_STATE();
    case 220:
      if (eof) ADVANCE(225);
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(29);
      if (lookahead == '"') ADVANCE(711);
      if (lookahead == '#') SKIP(224);
      if (lookahead == '$') ADVANCE(174);
      if (lookahead == '(') ADVANCE(400);
      if (lookahead == '/') ADVANCE(800);
      if (lookahead == '@') ADVANCE(741);
      if (lookahead == '[') ADVANCE(436);
      if (lookahead == '_') ADVANCE(508);
      if (lookahead == '`') ADVANCE(211);
      if (lookahead == 't') ADVANCE(202);
      if (lookahead == '{') ADVANCE(472);
      if (lookahead == 0xaf) ADVANCE(341);
      if (lookahead == 0x2682) ADVANCE(283);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(220);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(812);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(796);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(312);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(342);
      END_STATE();
    case 221:
      if (eof) ADVANCE(225);
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(48);
      if (lookahead == '"') ADVANCE(712);
      if (lookahead == '#') SKIP(221);
      if (lookahead == '$') ADVANCE(1);
      if (lookahead == '(') ADVANCE(401);
      if (lookahead == ')') ADVANCE(428);
      if (lookahead == '/') ADVANCE(801);
      if (lookahead == '@') ADVANCE(742);
      if (lookahead == '[') ADVANCE(437);
      if (lookahead == ']') ADVANCE(464);
      if (lookahead == '_') ADVANCE(509);
      if (lookahead == '`') ADVANCE(48);
      if (lookahead == 't') ADVANCE(46);
      if (lookahead == '{') ADVANCE(473);
      if (lookahead == '}') ADVANCE(500);
      if (lookahead == 0xaf) ADVANCE(313);
      if (lookahead == 0x2682) ADVANCE(284);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(221);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(813);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(782);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(313);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(343);
      if (lookahead != 0) SKIP(221);
      END_STATE();
    case 222:
      if (eof) ADVANCE(225);
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(58);
      if (lookahead == '"') ADVANCE(714);
      if (lookahead == '#') SKIP(222);
      if (lookahead == '$') ADVANCE(3);
      if (lookahead == '(') ADVANCE(403);
      if (lookahead == '@') ADVANCE(744);
      if (lookahead == '[') ADVANCE(439);
      if (lookahead == '`') ADVANCE(58);
      if (lookahead == 't') ADVANCE(56);
      if (lookahead == '{') ADVANCE(475);
      if (lookahead == 0xaf) ADVANCE(315);
      if (lookahead == 0x2682) ADVANCE(286);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(222);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(814);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(783);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(315);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(345);
      if (lookahead != 0) SKIP(222);
      END_STATE();
    case 223:
      if (eof) ADVANCE(225);
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(98);
      if (lookahead == '"') ADVANCE(722);
      if (lookahead == '#') SKIP(223);
      if (lookahead == '$') ADVANCE(13);
      if (lookahead == '(') ADVANCE(411);
      if (lookahead == '@') ADVANCE(752);
      if (lookahead == '[') ADVANCE(447);
      if (lookahead == '_') ADVANCE(511);
      if (lookahead == '`') ADVANCE(98);
      if (lookahead == 't') ADVANCE(96);
      if (lookahead == '{') ADVANCE(483);
      if (lookahead == 0xaf) ADVANCE(323);
      if (lookahead == 0x2682) ADVANCE(294);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(223);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(818);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(787);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(323);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(353);
      if (lookahead != 0) SKIP(223);
      END_STATE();
    case 224:
      if (eof) ADVANCE(225);
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(108);
      if (lookahead == '"') ADVANCE(724);
      if (lookahead == '#') SKIP(224);
      if (lookahead == '$') ADVANCE(15);
      if (lookahead == '(') ADVANCE(413);
      if (lookahead == '/') ADVANCE(803);
      if (lookahead == '@') ADVANCE(754);
      if (lookahead == '[') ADVANCE(449);
      if (lookahead == '_') ADVANCE(513);
      if (lookahead == '`') ADVANCE(108);
      if (lookahead == 't') ADVANCE(106);
      if (lookahead == '{') ADVANCE(485);
      if (lookahead == 0xaf) ADVANCE(325);
      if (lookahead == 0x2682) ADVANCE(296);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(224);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(819);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == 0x2218 ||
          lookahead == 0x25cc) ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(788);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(325);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(355);
      if (lookahead != 0) SKIP(224);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym__newline);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_binding);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_binding);
      ADVANCE_MAP(
        '\r', 48,
        '"', 712,
        '$', 1,
        '(', 401,
        ')', 428,
        '.', 255,
        '/', 801,
        '@', 742,
        '[', 437,
        ']', 464,
        '_', 509,
        '`', 48,
        't', 46,
        '{', 473,
        '}', 500,
        0xaf, 313,
        0x2682, 284,
        'E', 40,
        'e', 40,
        0x3b7, 813,
        0x3c0, 813,
        0x3c4, 813,
        0x221e, 813,
        ',', 255,
        ':', 255,
        '?', 255,
        0x2218, 255,
        0x25cc, 255,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(782);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(313);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(343);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_binding);
      ADVANCE_MAP(
        '\r', 565,
        '"', 713,
        '#', 565,
        '$', 528,
        '(', 402,
        ')', 429,
        '.', 256,
        '/', 802,
        '@', 743,
        '[', 438,
        ']', 465,
        '_', 510,
        '`', 565,
        't', 563,
        '{', 474,
        '}', 501,
        0xaf, 314,
        0x2682, 285,
        '\t', 565,
        ' ', 565,
        'E', 556,
        'e', 556,
        0x3b7, 565,
        0x3c0, 565,
        0x3c4, 565,
        0x221e, 565,
        ',', 256,
        ':', 256,
        '?', 256,
        0x2218, 256,
        0x25cc, 256,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(557);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(314);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(565);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_binding);
      ADVANCE_MAP(
        '\r', 58,
        '"', 714,
        '$', 3,
        '(', 403,
        '.', 257,
        '@', 744,
        '[', 439,
        '`', 58,
        't', 56,
        '{', 475,
        0xaf, 315,
        0x2682, 286,
        'E', 50,
        'e', 50,
        0x3b7, 814,
        0x3c0, 814,
        0x3c4, 814,
        0x221e, 814,
        ',', 257,
        ':', 257,
        '?', 257,
        0x2218, 257,
        0x25cc, 257,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(783);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(315);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(345);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_binding);
      ADVANCE_MAP(
        '\r', 576,
        '"', 715,
        '#', 576,
        '$', 530,
        '(', 404,
        '.', 258,
        '@', 745,
        '[', 440,
        '`', 576,
        't', 574,
        '{', 476,
        0xaf, 316,
        0x2682, 287,
        '\t', 576,
        ' ', 576,
        'E', 567,
        'e', 567,
        0x3b7, 576,
        0x3c0, 576,
        0x3c4, 576,
        0x221e, 576,
        ',', 258,
        ':', 258,
        '?', 258,
        0x2218, 258,
        0x25cc, 258,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(568);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(316);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(576);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_binding);
      ADVANCE_MAP(
        '\r', 98,
        '"', 722,
        '$', 13,
        '(', 411,
        '.', 265,
        '@', 752,
        '[', 447,
        '_', 511,
        '`', 98,
        't', 96,
        '{', 483,
        0xaf, 323,
        0x2682, 294,
        'E', 90,
        'e', 90,
        0x3b7, 818,
        0x3c0, 818,
        0x3c4, 818,
        0x221e, 818,
        ',', 265,
        ':', 265,
        '?', 265,
        0x2218, 265,
        0x25cc, 265,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(787);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(323);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(353);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_binding);
      ADVANCE_MAP(
        '\r', 620,
        '"', 723,
        '#', 620,
        '$', 540,
        '(', 412,
        '.', 266,
        '@', 753,
        '[', 448,
        '_', 512,
        '`', 620,
        't', 618,
        '{', 484,
        0xaf, 324,
        0x2682, 295,
        '\t', 620,
        ' ', 620,
        'E', 611,
        'e', 611,
        0x3b7, 620,
        0x3c0, 620,
        0x3c4, 620,
        0x221e, 620,
        ',', 266,
        ':', 266,
        '?', 266,
        0x2218, 266,
        0x25cc, 266,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(612);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(324);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(620);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_binding);
      ADVANCE_MAP(
        '\r', 108,
        '"', 724,
        '$', 15,
        '(', 413,
        '.', 267,
        '/', 803,
        '@', 754,
        '[', 449,
        '_', 513,
        '`', 108,
        't', 106,
        '{', 485,
        0xaf, 325,
        0x2682, 296,
        'E', 100,
        'e', 100,
        0x3b7, 819,
        0x3c0, 819,
        0x3c4, 819,
        0x221e, 819,
        ',', 267,
        ':', 267,
        '?', 267,
        0x2218, 267,
        0x25cc, 267,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(788);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(325);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(355);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_binding);
      ADVANCE_MAP(
        '\r', 631,
        '"', 725,
        '#', 631,
        '$', 542,
        '(', 414,
        '.', 268,
        '/', 804,
        '@', 755,
        '[', 450,
        '_', 514,
        '`', 631,
        't', 629,
        '{', 486,
        0xaf, 326,
        0x2682, 297,
        '\t', 631,
        ' ', 631,
        'E', 622,
        'e', 622,
        0x3b7, 631,
        0x3c0, 631,
        0x3c4, 631,
        0x221e, 631,
        ',', 268,
        ':', 268,
        '?', 268,
        0x2218, 268,
        0x25cc, 268,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(623);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(326);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(631);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_import);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_import);
      ADVANCE_MAP(
        '\r', 48,
        '"', 712,
        '$', 1,
        '(', 401,
        ')', 428,
        '.', 255,
        '/', 801,
        '@', 742,
        '[', 437,
        ']', 464,
        '_', 509,
        '`', 48,
        't', 46,
        '{', 473,
        '}', 500,
        0xaf, 313,
        0x2682, 284,
        'E', 40,
        'e', 40,
        0x3b7, 813,
        0x3c0, 813,
        0x3c4, 813,
        0x221e, 813,
        ',', 255,
        ':', 255,
        '?', 255,
        0x2218, 255,
        0x25cc, 255,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(782);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(313);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(343);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_import);
      ADVANCE_MAP(
        '\r', 565,
        '"', 713,
        '#', 565,
        '$', 528,
        '(', 402,
        ')', 429,
        '.', 256,
        '/', 802,
        '@', 743,
        '[', 438,
        ']', 465,
        '_', 510,
        '`', 565,
        't', 563,
        '{', 474,
        '}', 501,
        0xaf, 314,
        0x2682, 285,
        '\t', 565,
        ' ', 565,
        'E', 556,
        'e', 556,
        0x3b7, 565,
        0x3c0, 565,
        0x3c4, 565,
        0x221e, 565,
        ',', 256,
        ':', 256,
        '?', 256,
        0x2218, 256,
        0x25cc, 256,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(557);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(314);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(565);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_import);
      ADVANCE_MAP(
        '\r', 58,
        '"', 714,
        '$', 3,
        '(', 403,
        '.', 257,
        '@', 744,
        '[', 439,
        '`', 58,
        't', 56,
        '{', 475,
        0xaf, 315,
        0x2682, 286,
        'E', 50,
        'e', 50,
        0x3b7, 814,
        0x3c0, 814,
        0x3c4, 814,
        0x221e, 814,
        ',', 257,
        ':', 257,
        '?', 257,
        0x2218, 257,
        0x25cc, 257,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(783);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(315);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(345);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_import);
      ADVANCE_MAP(
        '\r', 576,
        '"', 715,
        '#', 576,
        '$', 530,
        '(', 404,
        '.', 258,
        '@', 745,
        '[', 440,
        '`', 576,
        't', 574,
        '{', 476,
        0xaf, 316,
        0x2682, 287,
        '\t', 576,
        ' ', 576,
        'E', 567,
        'e', 567,
        0x3b7, 576,
        0x3c0, 576,
        0x3c4, 576,
        0x221e, 576,
        ',', 258,
        ':', 258,
        '?', 258,
        0x2218, 258,
        0x25cc, 258,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(568);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(316);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(576);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_import);
      ADVANCE_MAP(
        '\r', 98,
        '"', 722,
        '$', 13,
        '(', 411,
        '.', 265,
        '@', 752,
        '[', 447,
        '_', 511,
        '`', 98,
        't', 96,
        '{', 483,
        0xaf, 323,
        0x2682, 294,
        'E', 90,
        'e', 90,
        0x3b7, 818,
        0x3c0, 818,
        0x3c4, 818,
        0x221e, 818,
        ',', 265,
        ':', 265,
        '?', 265,
        0x2218, 265,
        0x25cc, 265,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(787);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(323);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(353);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_import);
      ADVANCE_MAP(
        '\r', 620,
        '"', 723,
        '#', 620,
        '$', 540,
        '(', 412,
        '.', 266,
        '@', 753,
        '[', 448,
        '_', 512,
        '`', 620,
        't', 618,
        '{', 484,
        0xaf, 324,
        0x2682, 295,
        '\t', 620,
        ' ', 620,
        'E', 611,
        'e', 611,
        0x3b7, 620,
        0x3c0, 620,
        0x3c4, 620,
        0x221e, 620,
        ',', 266,
        ':', 266,
        '?', 266,
        0x2218, 266,
        0x25cc, 266,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(612);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(324);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(620);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_import);
      ADVANCE_MAP(
        '\r', 108,
        '"', 724,
        '$', 15,
        '(', 413,
        '.', 267,
        '/', 803,
        '@', 754,
        '[', 449,
        '_', 513,
        '`', 108,
        't', 106,
        '{', 485,
        0xaf, 325,
        0x2682, 296,
        'E', 100,
        'e', 100,
        0x3b7, 819,
        0x3c0, 819,
        0x3c4, 819,
        0x221e, 819,
        ',', 267,
        ':', 267,
        '?', 267,
        0x2218, 267,
        0x25cc, 267,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(788);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(325);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(355);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_import);
      ADVANCE_MAP(
        '\r', 631,
        '"', 725,
        '#', 631,
        '$', 542,
        '(', 414,
        '.', 268,
        '/', 804,
        '@', 755,
        '[', 450,
        '_', 514,
        '`', 631,
        't', 629,
        '{', 486,
        0xaf, 326,
        0x2682, 297,
        '\t', 631,
        ' ', 631,
        'E', 622,
        'e', 622,
        0x3b7, 631,
        0x3c0, 631,
        0x3c4, 631,
        0x221e, 631,
        ',', 268,
        ':', 268,
        '?', 268,
        0x2218, 268,
        0x25cc, 268,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(623);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(326);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(631);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_module);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_module);
      ADVANCE_MAP(
        '\r', 48,
        '"', 712,
        '$', 1,
        '(', 401,
        ')', 428,
        '.', 255,
        '/', 801,
        '@', 742,
        '[', 437,
        ']', 464,
        '_', 509,
        '`', 48,
        't', 46,
        '{', 473,
        '}', 500,
        0xaf, 313,
        0x2682, 284,
        'E', 40,
        'e', 40,
        0x3b7, 813,
        0x3c0, 813,
        0x3c4, 813,
        0x221e, 813,
        ',', 255,
        ':', 255,
        '?', 255,
        0x2218, 255,
        0x25cc, 255,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(782);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(313);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(343);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_module);
      ADVANCE_MAP(
        '\r', 565,
        '"', 713,
        '#', 565,
        '$', 528,
        '(', 402,
        ')', 429,
        '.', 256,
        '/', 802,
        '@', 743,
        '[', 438,
        ']', 465,
        '_', 510,
        '`', 565,
        't', 563,
        '{', 474,
        '}', 501,
        0xaf, 314,
        0x2682, 285,
        '\t', 565,
        ' ', 565,
        'E', 556,
        'e', 556,
        0x3b7, 565,
        0x3c0, 565,
        0x3c4, 565,
        0x221e, 565,
        ',', 256,
        ':', 256,
        '?', 256,
        0x2218, 256,
        0x25cc, 256,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(557);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(314);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(565);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_module);
      ADVANCE_MAP(
        '\r', 58,
        '"', 714,
        '$', 3,
        '(', 403,
        '.', 257,
        '@', 744,
        '[', 439,
        '`', 58,
        't', 56,
        '{', 475,
        0xaf, 315,
        0x2682, 286,
        'E', 50,
        'e', 50,
        0x3b7, 814,
        0x3c0, 814,
        0x3c4, 814,
        0x221e, 814,
        ',', 257,
        ':', 257,
        '?', 257,
        0x2218, 257,
        0x25cc, 257,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(783);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(315);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(345);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_module);
      ADVANCE_MAP(
        '\r', 576,
        '"', 715,
        '#', 576,
        '$', 530,
        '(', 404,
        '.', 258,
        '@', 745,
        '[', 440,
        '`', 576,
        't', 574,
        '{', 476,
        0xaf, 316,
        0x2682, 287,
        '\t', 576,
        ' ', 576,
        'E', 567,
        'e', 567,
        0x3b7, 576,
        0x3c0, 576,
        0x3c4, 576,
        0x221e, 576,
        ',', 258,
        ':', 258,
        '?', 258,
        0x2218, 258,
        0x25cc, 258,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(568);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(316);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(576);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_module);
      ADVANCE_MAP(
        '\r', 98,
        '"', 722,
        '$', 13,
        '(', 411,
        '.', 265,
        '@', 752,
        '[', 447,
        '_', 511,
        '`', 98,
        't', 96,
        '{', 483,
        0xaf, 323,
        0x2682, 294,
        'E', 90,
        'e', 90,
        0x3b7, 818,
        0x3c0, 818,
        0x3c4, 818,
        0x221e, 818,
        ',', 265,
        ':', 265,
        '?', 265,
        0x2218, 265,
        0x25cc, 265,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(787);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(323);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(353);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_module);
      ADVANCE_MAP(
        '\r', 620,
        '"', 723,
        '#', 620,
        '$', 540,
        '(', 412,
        '.', 266,
        '@', 753,
        '[', 448,
        '_', 512,
        '`', 620,
        't', 618,
        '{', 484,
        0xaf, 324,
        0x2682, 295,
        '\t', 620,
        ' ', 620,
        'E', 611,
        'e', 611,
        0x3b7, 620,
        0x3c0, 620,
        0x3c4, 620,
        0x221e, 620,
        ',', 266,
        ':', 266,
        '?', 266,
        0x2218, 266,
        0x25cc, 266,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(612);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(324);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(620);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_module);
      ADVANCE_MAP(
        '\r', 108,
        '"', 724,
        '$', 15,
        '(', 413,
        '.', 267,
        '/', 803,
        '@', 754,
        '[', 449,
        '_', 513,
        '`', 108,
        't', 106,
        '{', 485,
        0xaf, 325,
        0x2682, 296,
        'E', 100,
        'e', 100,
        0x3b7, 819,
        0x3c0, 819,
        0x3c4, 819,
        0x221e, 819,
        ',', 267,
        ':', 267,
        '?', 267,
        0x2218, 267,
        0x25cc, 267,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(788);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(325);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(355);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_module);
      ADVANCE_MAP(
        '\r', 631,
        '"', 725,
        '#', 631,
        '$', 542,
        '(', 414,
        '.', 268,
        '/', 804,
        '@', 755,
        '[', 450,
        '_', 514,
        '`', 631,
        't', 629,
        '{', 486,
        0xaf, 326,
        0x2682, 297,
        '\t', 631,
        ' ', 631,
        'E', 622,
        'e', 622,
        0x3b7, 631,
        0x3c0, 631,
        0x3c4, 631,
        0x221e, 631,
        ',', 268,
        ':', 268,
        '?', 268,
        0x2218, 268,
        0x25cc, 268,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(623);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(326);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(631);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_stack_prim);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_stack_prim);
      ADVANCE_MAP(
        '\r', 48,
        '"', 712,
        '$', 1,
        '(', 401,
        ')', 428,
        '/', 801,
        '@', 742,
        '[', 437,
        ']', 464,
        '_', 509,
        '`', 48,
        't', 46,
        '{', 473,
        '}', 500,
        0xaf, 313,
        0x2682, 284,
        0x3b7, 813,
        0x3c0, 813,
        0x3c4, 813,
        0x221e, 813,
        ',', 255,
        '.', 255,
        ':', 255,
        '?', 255,
        0x2218, 255,
        0x25cc, 255,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(782);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(313);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(343);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_stack_prim);
      ADVANCE_MAP(
        '\r', 565,
        '"', 713,
        '#', 565,
        '$', 528,
        '(', 402,
        ')', 429,
        '/', 802,
        '@', 743,
        '[', 438,
        ']', 465,
        '_', 510,
        '`', 565,
        't', 563,
        '{', 474,
        '}', 501,
        0xaf, 314,
        0x2682, 285,
        '\t', 565,
        ' ', 565,
        0x3b7, 565,
        0x3c0, 565,
        0x3c4, 565,
        0x221e, 565,
        ',', 256,
        '.', 256,
        ':', 256,
        '?', 256,
        0x2218, 256,
        0x25cc, 256,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(557);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(314);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(565);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_stack_prim);
      ADVANCE_MAP(
        '\r', 58,
        '"', 714,
        '$', 3,
        '(', 403,
        '@', 744,
        '[', 439,
        '`', 58,
        't', 56,
        '{', 475,
        0xaf, 315,
        0x2682, 286,
        0x3b7, 814,
        0x3c0, 814,
        0x3c4, 814,
        0x221e, 814,
        ',', 257,
        '.', 257,
        ':', 257,
        '?', 257,
        0x2218, 257,
        0x25cc, 257,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(783);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(315);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(345);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_stack_prim);
      ADVANCE_MAP(
        '\r', 576,
        '"', 715,
        '#', 576,
        '$', 530,
        '(', 404,
        '@', 745,
        '[', 440,
        '`', 576,
        't', 574,
        '{', 476,
        0xaf, 316,
        0x2682, 287,
        '\t', 576,
        ' ', 576,
        0x3b7, 576,
        0x3c0, 576,
        0x3c4, 576,
        0x221e, 576,
        ',', 258,
        '.', 258,
        ':', 258,
        '?', 258,
        0x2218, 258,
        0x25cc, 258,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(568);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(316);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(576);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_stack_prim);
      ADVANCE_MAP(
        '\r', 68,
        '"', 716,
        '$', 5,
        '(', 405,
        '@', 746,
        '[', 441,
        '`', 68,
        't', 66,
        '{', 477,
        '}', 502,
        0xaf, 317,
        0x2682, 288,
        0x3b7, 815,
        0x3c0, 815,
        0x3c4, 815,
        0x221e, 815,
        ',', 259,
        '.', 259,
        ':', 259,
        '?', 259,
        0x2218, 259,
        0x25cc, 259,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(784);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(317);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(347);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_stack_prim);
      ADVANCE_MAP(
        '\r', 587,
        '"', 717,
        '#', 587,
        '$', 532,
        '(', 406,
        '@', 747,
        '[', 442,
        '`', 587,
        't', 585,
        '{', 478,
        '}', 503,
        0xaf, 318,
        0x2682, 289,
        '\t', 587,
        ' ', 587,
        0x3b7, 587,
        0x3c0, 587,
        0x3c4, 587,
        0x221e, 587,
        ',', 260,
        '.', 260,
        ':', 260,
        '?', 260,
        0x2218, 260,
        0x25cc, 260,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(579);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(318);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(587);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_stack_prim);
      ADVANCE_MAP(
        '\r', 78,
        '"', 718,
        '$', 7,
        '(', 407,
        '@', 748,
        '[', 443,
        ']', 466,
        '`', 78,
        't', 76,
        '{', 479,
        0xaf, 319,
        0x2682, 290,
        0x3b7, 816,
        0x3c0, 816,
        0x3c4, 816,
        0x221e, 816,
        ',', 261,
        '.', 261,
        ':', 261,
        '?', 261,
        0x2218, 261,
        0x25cc, 261,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(785);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(319);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(349);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_stack_prim);
      ADVANCE_MAP(
        '\r', 598,
        '"', 719,
        '#', 598,
        '$', 534,
        '(', 408,
        '@', 749,
        '[', 444,
        ']', 467,
        '`', 598,
        't', 596,
        '{', 480,
        0xaf, 320,
        0x2682, 291,
        '\t', 598,
        ' ', 598,
        0x3b7, 598,
        0x3c0, 598,
        0x3c4, 598,
        0x221e, 598,
        ',', 262,
        '.', 262,
        ':', 262,
        '?', 262,
        0x2218, 262,
        0x25cc, 262,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(590);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(320);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(598);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_stack_prim);
      ADVANCE_MAP(
        '\r', 88,
        '"', 720,
        '$', 9,
        '(', 409,
        ')', 430,
        '@', 750,
        '[', 445,
        '`', 88,
        't', 86,
        '{', 481,
        0xaf, 321,
        0x2682, 292,
        0x3b7, 817,
        0x3c0, 817,
        0x3c4, 817,
        0x221e, 817,
        ',', 263,
        '.', 263,
        ':', 263,
        '?', 263,
        0x2218, 263,
        0x25cc, 263,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(786);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(321);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(351);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_stack_prim);
      ADVANCE_MAP(
        '\r', 609,
        '"', 721,
        '#', 609,
        '$', 536,
        '(', 410,
        ')', 431,
        '@', 751,
        '[', 446,
        '`', 609,
        't', 607,
        '{', 482,
        0xaf, 322,
        0x2682, 293,
        '\t', 609,
        ' ', 609,
        0x3b7, 609,
        0x3c0, 609,
        0x3c4, 609,
        0x221e, 609,
        ',', 264,
        '.', 264,
        ':', 264,
        '?', 264,
        0x2218, 264,
        0x25cc, 264,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(601);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(322);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(609);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_stack_prim);
      ADVANCE_MAP(
        '\r', 98,
        '"', 722,
        '$', 13,
        '(', 411,
        '@', 752,
        '[', 447,
        '_', 511,
        '`', 98,
        't', 96,
        '{', 483,
        0xaf, 323,
        0x2682, 294,
        0x3b7, 818,
        0x3c0, 818,
        0x3c4, 818,
        0x221e, 818,
        ',', 265,
        '.', 265,
        ':', 265,
        '?', 265,
        0x2218, 265,
        0x25cc, 265,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(787);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(323);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(353);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_stack_prim);
      ADVANCE_MAP(
        '\r', 620,
        '"', 723,
        '#', 620,
        '$', 540,
        '(', 412,
        '@', 753,
        '[', 448,
        '_', 512,
        '`', 620,
        't', 618,
        '{', 484,
        0xaf, 324,
        0x2682, 295,
        '\t', 620,
        ' ', 620,
        0x3b7, 620,
        0x3c0, 620,
        0x3c4, 620,
        0x221e, 620,
        ',', 266,
        '.', 266,
        ':', 266,
        '?', 266,
        0x2218, 266,
        0x25cc, 266,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(612);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(324);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(620);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_stack_prim);
      ADVANCE_MAP(
        '\r', 108,
        '"', 724,
        '$', 15,
        '(', 413,
        '/', 803,
        '@', 754,
        '[', 449,
        '_', 513,
        '`', 108,
        't', 106,
        '{', 485,
        0xaf, 325,
        0x2682, 296,
        0x3b7, 819,
        0x3c0, 819,
        0x3c4, 819,
        0x221e, 819,
        ',', 267,
        '.', 267,
        ':', 267,
        '?', 267,
        0x2218, 267,
        0x25cc, 267,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(788);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(325);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(355);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_stack_prim);
      ADVANCE_MAP(
        '\r', 631,
        '"', 725,
        '#', 631,
        '$', 542,
        '(', 414,
        '/', 804,
        '@', 755,
        '[', 450,
        '_', 514,
        '`', 631,
        't', 629,
        '{', 486,
        0xaf, 326,
        0x2682, 297,
        '\t', 631,
        ' ', 631,
        0x3b7, 631,
        0x3c0, 631,
        0x3c4, 631,
        0x221e, 631,
        ',', 268,
        '.', 268,
        ':', 268,
        '?', 268,
        0x2218, 268,
        0x25cc, 268,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(623);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(326);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(631);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_stack_prim);
      ADVANCE_MAP(
        '\r', 118,
        '"', 726,
        '$', 17,
        '(', 415,
        '/', 805,
        '@', 756,
        '[', 451,
        ']', 468,
        '_', 515,
        '`', 118,
        't', 116,
        '{', 487,
        0xaf, 327,
        0x2682, 298,
        0x3b7, 820,
        0x3c0, 820,
        0x3c4, 820,
        0x221e, 820,
        ',', 269,
        '.', 269,
        ':', 269,
        '?', 269,
        0x2218, 269,
        0x25cc, 269,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(789);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(327);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(357);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_stack_prim);
      ADVANCE_MAP(
        '\r', 642,
        '"', 727,
        '#', 642,
        '$', 544,
        '(', 416,
        '/', 806,
        '@', 757,
        '[', 452,
        ']', 469,
        '_', 516,
        '`', 642,
        't', 640,
        '{', 488,
        0xaf, 328,
        0x2682, 299,
        '\t', 642,
        ' ', 642,
        0x3b7, 642,
        0x3c0, 642,
        0x3c4, 642,
        0x221e, 642,
        ',', 270,
        '.', 270,
        ':', 270,
        '?', 270,
        0x2218, 270,
        0x25cc, 270,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(634);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(328);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(642);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_stack_prim);
      ADVANCE_MAP(
        '\r', 128,
        '"', 728,
        '$', 19,
        '(', 417,
        '@', 758,
        '[', 453,
        ']', 470,
        '_', 517,
        '`', 128,
        't', 126,
        '{', 489,
        0xaf, 329,
        0x2682, 300,
        0x3b7, 821,
        0x3c0, 821,
        0x3c4, 821,
        0x221e, 821,
        ',', 271,
        '.', 271,
        ':', 271,
        '?', 271,
        0x2218, 271,
        0x25cc, 271,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(790);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(329);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(359);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_stack_prim);
      ADVANCE_MAP(
        '\r', 653,
        '"', 729,
        '#', 653,
        '$', 546,
        '(', 418,
        '@', 759,
        '[', 454,
        ']', 471,
        '_', 518,
        '`', 653,
        't', 651,
        '{', 490,
        0xaf, 330,
        0x2682, 301,
        '\t', 653,
        ' ', 653,
        0x3b7, 653,
        0x3c0, 653,
        0x3c4, 653,
        0x221e, 653,
        ',', 272,
        '.', 272,
        ':', 272,
        '?', 272,
        0x2218, 272,
        0x25cc, 272,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(645);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(330);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(653);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_stack_prim);
      ADVANCE_MAP(
        '\r', 138,
        '"', 730,
        '$', 21,
        '(', 419,
        ')', 432,
        '@', 760,
        '[', 455,
        '_', 519,
        '`', 138,
        't', 136,
        '{', 491,
        0xaf, 331,
        0x2682, 302,
        0x3b7, 822,
        0x3c0, 822,
        0x3c4, 822,
        0x221e, 822,
        ',', 273,
        '.', 273,
        ':', 273,
        '?', 273,
        0x2218, 273,
        0x25cc, 273,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(791);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(331);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(361);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_stack_prim);
      ADVANCE_MAP(
        '\r', 664,
        '"', 731,
        '#', 664,
        '$', 548,
        '(', 420,
        ')', 433,
        '@', 761,
        '[', 456,
        '_', 520,
        '`', 664,
        't', 662,
        '{', 492,
        0xaf, 332,
        0x2682, 303,
        '\t', 664,
        ' ', 664,
        0x3b7, 664,
        0x3c0, 664,
        0x3c4, 664,
        0x221e, 664,
        ',', 274,
        '.', 274,
        ':', 274,
        '?', 274,
        0x2218, 274,
        0x25cc, 274,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(656);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(332);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_stack_prim);
      ADVANCE_MAP(
        '\r', 148,
        '"', 732,
        '$', 23,
        '(', 421,
        '/', 807,
        '@', 762,
        '[', 457,
        '_', 521,
        '`', 148,
        't', 146,
        '{', 493,
        '}', 504,
        0xaf, 333,
        0x2682, 304,
        0x3b7, 823,
        0x3c0, 823,
        0x3c4, 823,
        0x221e, 823,
        ',', 275,
        '.', 275,
        ':', 275,
        '?', 275,
        0x2218, 275,
        0x25cc, 275,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(792);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(333);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(363);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_stack_prim);
      ADVANCE_MAP(
        '\r', 675,
        '"', 733,
        '#', 675,
        '$', 550,
        '(', 422,
        '/', 808,
        '@', 763,
        '[', 458,
        '_', 522,
        '`', 675,
        't', 673,
        '{', 494,
        '}', 505,
        0xaf, 334,
        0x2682, 305,
        '\t', 675,
        ' ', 675,
        0x3b7, 675,
        0x3c0, 675,
        0x3c4, 675,
        0x221e, 675,
        ',', 276,
        '.', 276,
        ':', 276,
        '?', 276,
        0x2218, 276,
        0x25cc, 276,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(667);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(334);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(675);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_stack_prim);
      ADVANCE_MAP(
        '\r', 158,
        '"', 734,
        '$', 25,
        '(', 423,
        '@', 764,
        '[', 459,
        '_', 523,
        '`', 158,
        't', 156,
        '{', 495,
        '}', 506,
        0xaf, 335,
        0x2682, 306,
        0x3b7, 824,
        0x3c0, 824,
        0x3c4, 824,
        0x221e, 824,
        ',', 277,
        '.', 277,
        ':', 277,
        '?', 277,
        0x2218, 277,
        0x25cc, 277,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(793);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(335);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(365);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_stack_prim);
      ADVANCE_MAP(
        '\r', 686,
        '"', 735,
        '#', 686,
        '$', 552,
        '(', 424,
        '@', 765,
        '[', 460,
        '_', 524,
        '`', 686,
        't', 684,
        '{', 496,
        '}', 507,
        0xaf, 336,
        0x2682, 307,
        '\t', 686,
        ' ', 686,
        0x3b7, 686,
        0x3c0, 686,
        0x3c4, 686,
        0x221e, 686,
        ',', 278,
        '.', 278,
        ':', 278,
        '?', 278,
        0x2218, 278,
        0x25cc, 278,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(678);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(336);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(686);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_stack_prim);
      ADVANCE_MAP(
        '\r', 168,
        '"', 736,
        '$', 27,
        '(', 425,
        ')', 434,
        '/', 809,
        '@', 766,
        '[', 461,
        '_', 525,
        '`', 168,
        't', 166,
        '{', 497,
        0xaf, 337,
        0x2682, 308,
        0x3b7, 825,
        0x3c0, 825,
        0x3c4, 825,
        0x221e, 825,
        ',', 279,
        '.', 279,
        ':', 279,
        '?', 279,
        0x2218, 279,
        0x25cc, 279,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(794);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(337);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(367);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_stack_prim);
      ADVANCE_MAP(
        '\r', 697,
        '"', 737,
        '#', 697,
        '$', 554,
        '(', 426,
        ')', 435,
        '/', 810,
        '@', 767,
        '[', 462,
        '_', 526,
        '`', 697,
        't', 695,
        '{', 498,
        0xaf, 338,
        0x2682, 309,
        '\t', 697,
        ' ', 697,
        0x3b7, 697,
        0x3c0, 697,
        0x3c4, 697,
        0x221e, 697,
        ',', 280,
        '.', 280,
        ':', 280,
        '?', 280,
        0x2218, 280,
        0x25cc, 280,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(689);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(338);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(697);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_stack_prim);
      ADVANCE_MAP(
        '"', 738,
        '$', 11,
        '@', 768,
        '`', 187,
        't', 185,
        0xaf, 339,
        0x2682, 310,
        0x3b7, 826,
        0x3c0, 826,
        0x3c4, 826,
        0x221e, 826,
        ',', 281,
        '.', 281,
        ':', 281,
        '?', 281,
        0x2218, 281,
        0x25cc, 281,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(795);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(339);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(369);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_stack_prim);
      ADVANCE_MAP(
        '"', 739,
        '#', 708,
        '$', 538,
        '@', 769,
        '`', 708,
        't', 706,
        0xaf, 340,
        0x2682, 311,
        '\t', 708,
        ' ', 708,
        0x3b7, 708,
        0x3c0, 708,
        0x3c4, 708,
        0x221e, 708,
        ',', 282,
        '.', 282,
        ':', 282,
        '?', 282,
        0x2218, 282,
        0x25cc, 282,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(700);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(340);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(708);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_noadic_prim);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_noadic_prim);
      ADVANCE_MAP(
        '\r', 48,
        '"', 712,
        '$', 1,
        '(', 401,
        ')', 428,
        '/', 801,
        '@', 742,
        '[', 437,
        ']', 464,
        '_', 509,
        '`', 48,
        't', 46,
        '{', 473,
        '}', 500,
        0xaf, 313,
        0x2682, 284,
        0x3b7, 813,
        0x3c0, 813,
        0x3c4, 813,
        0x221e, 813,
        ',', 255,
        '.', 255,
        ':', 255,
        '?', 255,
        0x2218, 255,
        0x25cc, 255,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(782);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(313);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(343);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_noadic_prim);
      ADVANCE_MAP(
        '\r', 565,
        '"', 713,
        '#', 565,
        '$', 528,
        '(', 402,
        ')', 429,
        '/', 802,
        '@', 743,
        '[', 438,
        ']', 465,
        '_', 510,
        '`', 565,
        't', 563,
        '{', 474,
        '}', 501,
        0xaf, 314,
        0x2682, 285,
        '\t', 565,
        ' ', 565,
        0x3b7, 565,
        0x3c0, 565,
        0x3c4, 565,
        0x221e, 565,
        ',', 256,
        '.', 256,
        ':', 256,
        '?', 256,
        0x2218, 256,
        0x25cc, 256,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(557);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(314);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(565);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_noadic_prim);
      ADVANCE_MAP(
        '\r', 58,
        '"', 714,
        '$', 3,
        '(', 403,
        '@', 744,
        '[', 439,
        '`', 58,
        't', 56,
        '{', 475,
        0xaf, 315,
        0x2682, 286,
        0x3b7, 814,
        0x3c0, 814,
        0x3c4, 814,
        0x221e, 814,
        ',', 257,
        '.', 257,
        ':', 257,
        '?', 257,
        0x2218, 257,
        0x25cc, 257,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(783);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(315);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(345);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_noadic_prim);
      ADVANCE_MAP(
        '\r', 576,
        '"', 715,
        '#', 576,
        '$', 530,
        '(', 404,
        '@', 745,
        '[', 440,
        '`', 576,
        't', 574,
        '{', 476,
        0xaf, 316,
        0x2682, 287,
        '\t', 576,
        ' ', 576,
        0x3b7, 576,
        0x3c0, 576,
        0x3c4, 576,
        0x221e, 576,
        ',', 258,
        '.', 258,
        ':', 258,
        '?', 258,
        0x2218, 258,
        0x25cc, 258,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(568);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(316);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(576);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_noadic_prim);
      ADVANCE_MAP(
        '\r', 68,
        '"', 716,
        '$', 5,
        '(', 405,
        '@', 746,
        '[', 441,
        '`', 68,
        't', 66,
        '{', 477,
        '}', 502,
        0xaf, 317,
        0x2682, 288,
        0x3b7, 815,
        0x3c0, 815,
        0x3c4, 815,
        0x221e, 815,
        ',', 259,
        '.', 259,
        ':', 259,
        '?', 259,
        0x2218, 259,
        0x25cc, 259,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(784);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(317);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(347);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_noadic_prim);
      ADVANCE_MAP(
        '\r', 587,
        '"', 717,
        '#', 587,
        '$', 532,
        '(', 406,
        '@', 747,
        '[', 442,
        '`', 587,
        't', 585,
        '{', 478,
        '}', 503,
        0xaf, 318,
        0x2682, 289,
        '\t', 587,
        ' ', 587,
        0x3b7, 587,
        0x3c0, 587,
        0x3c4, 587,
        0x221e, 587,
        ',', 260,
        '.', 260,
        ':', 260,
        '?', 260,
        0x2218, 260,
        0x25cc, 260,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(579);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(318);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(587);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_noadic_prim);
      ADVANCE_MAP(
        '\r', 78,
        '"', 718,
        '$', 7,
        '(', 407,
        '@', 748,
        '[', 443,
        ']', 466,
        '`', 78,
        't', 76,
        '{', 479,
        0xaf, 319,
        0x2682, 290,
        0x3b7, 816,
        0x3c0, 816,
        0x3c4, 816,
        0x221e, 816,
        ',', 261,
        '.', 261,
        ':', 261,
        '?', 261,
        0x2218, 261,
        0x25cc, 261,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(785);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(319);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(349);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_noadic_prim);
      ADVANCE_MAP(
        '\r', 598,
        '"', 719,
        '#', 598,
        '$', 534,
        '(', 408,
        '@', 749,
        '[', 444,
        ']', 467,
        '`', 598,
        't', 596,
        '{', 480,
        0xaf, 320,
        0x2682, 291,
        '\t', 598,
        ' ', 598,
        0x3b7, 598,
        0x3c0, 598,
        0x3c4, 598,
        0x221e, 598,
        ',', 262,
        '.', 262,
        ':', 262,
        '?', 262,
        0x2218, 262,
        0x25cc, 262,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(590);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(320);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(598);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_noadic_prim);
      ADVANCE_MAP(
        '\r', 88,
        '"', 720,
        '$', 9,
        '(', 409,
        ')', 430,
        '@', 750,
        '[', 445,
        '`', 88,
        't', 86,
        '{', 481,
        0xaf, 321,
        0x2682, 292,
        0x3b7, 817,
        0x3c0, 817,
        0x3c4, 817,
        0x221e, 817,
        ',', 263,
        '.', 263,
        ':', 263,
        '?', 263,
        0x2218, 263,
        0x25cc, 263,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(786);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(321);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(351);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_noadic_prim);
      ADVANCE_MAP(
        '\r', 609,
        '"', 721,
        '#', 609,
        '$', 536,
        '(', 410,
        ')', 431,
        '@', 751,
        '[', 446,
        '`', 609,
        't', 607,
        '{', 482,
        0xaf, 322,
        0x2682, 293,
        '\t', 609,
        ' ', 609,
        0x3b7, 609,
        0x3c0, 609,
        0x3c4, 609,
        0x221e, 609,
        ',', 264,
        '.', 264,
        ':', 264,
        '?', 264,
        0x2218, 264,
        0x25cc, 264,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(601);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(322);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(609);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_noadic_prim);
      ADVANCE_MAP(
        '\r', 98,
        '"', 722,
        '$', 13,
        '(', 411,
        '@', 752,
        '[', 447,
        '_', 511,
        '`', 98,
        't', 96,
        '{', 483,
        0xaf, 323,
        0x2682, 294,
        0x3b7, 818,
        0x3c0, 818,
        0x3c4, 818,
        0x221e, 818,
        ',', 265,
        '.', 265,
        ':', 265,
        '?', 265,
        0x2218, 265,
        0x25cc, 265,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(787);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(323);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(353);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_noadic_prim);
      ADVANCE_MAP(
        '\r', 620,
        '"', 723,
        '#', 620,
        '$', 540,
        '(', 412,
        '@', 753,
        '[', 448,
        '_', 512,
        '`', 620,
        't', 618,
        '{', 484,
        0xaf, 324,
        0x2682, 295,
        '\t', 620,
        ' ', 620,
        0x3b7, 620,
        0x3c0, 620,
        0x3c4, 620,
        0x221e, 620,
        ',', 266,
        '.', 266,
        ':', 266,
        '?', 266,
        0x2218, 266,
        0x25cc, 266,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(612);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(324);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(620);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_noadic_prim);
      ADVANCE_MAP(
        '\r', 108,
        '"', 724,
        '$', 15,
        '(', 413,
        '/', 803,
        '@', 754,
        '[', 449,
        '_', 513,
        '`', 108,
        't', 106,
        '{', 485,
        0xaf, 325,
        0x2682, 296,
        0x3b7, 819,
        0x3c0, 819,
        0x3c4, 819,
        0x221e, 819,
        ',', 267,
        '.', 267,
        ':', 267,
        '?', 267,
        0x2218, 267,
        0x25cc, 267,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(788);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(325);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(355);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_noadic_prim);
      ADVANCE_MAP(
        '\r', 631,
        '"', 725,
        '#', 631,
        '$', 542,
        '(', 414,
        '/', 804,
        '@', 755,
        '[', 450,
        '_', 514,
        '`', 631,
        't', 629,
        '{', 486,
        0xaf, 326,
        0x2682, 297,
        '\t', 631,
        ' ', 631,
        0x3b7, 631,
        0x3c0, 631,
        0x3c4, 631,
        0x221e, 631,
        ',', 268,
        '.', 268,
        ':', 268,
        '?', 268,
        0x2218, 268,
        0x25cc, 268,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(623);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(326);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(631);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_noadic_prim);
      ADVANCE_MAP(
        '\r', 118,
        '"', 726,
        '$', 17,
        '(', 415,
        '/', 805,
        '@', 756,
        '[', 451,
        ']', 468,
        '_', 515,
        '`', 118,
        't', 116,
        '{', 487,
        0xaf, 327,
        0x2682, 298,
        0x3b7, 820,
        0x3c0, 820,
        0x3c4, 820,
        0x221e, 820,
        ',', 269,
        '.', 269,
        ':', 269,
        '?', 269,
        0x2218, 269,
        0x25cc, 269,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(789);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(327);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(357);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_noadic_prim);
      ADVANCE_MAP(
        '\r', 642,
        '"', 727,
        '#', 642,
        '$', 544,
        '(', 416,
        '/', 806,
        '@', 757,
        '[', 452,
        ']', 469,
        '_', 516,
        '`', 642,
        't', 640,
        '{', 488,
        0xaf, 328,
        0x2682, 299,
        '\t', 642,
        ' ', 642,
        0x3b7, 642,
        0x3c0, 642,
        0x3c4, 642,
        0x221e, 642,
        ',', 270,
        '.', 270,
        ':', 270,
        '?', 270,
        0x2218, 270,
        0x25cc, 270,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(634);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(328);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(642);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_noadic_prim);
      ADVANCE_MAP(
        '\r', 128,
        '"', 728,
        '$', 19,
        '(', 417,
        '@', 758,
        '[', 453,
        ']', 470,
        '_', 517,
        '`', 128,
        't', 126,
        '{', 489,
        0xaf, 329,
        0x2682, 300,
        0x3b7, 821,
        0x3c0, 821,
        0x3c4, 821,
        0x221e, 821,
        ',', 271,
        '.', 271,
        ':', 271,
        '?', 271,
        0x2218, 271,
        0x25cc, 271,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(790);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(329);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(359);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_noadic_prim);
      ADVANCE_MAP(
        '\r', 653,
        '"', 729,
        '#', 653,
        '$', 546,
        '(', 418,
        '@', 759,
        '[', 454,
        ']', 471,
        '_', 518,
        '`', 653,
        't', 651,
        '{', 490,
        0xaf, 330,
        0x2682, 301,
        '\t', 653,
        ' ', 653,
        0x3b7, 653,
        0x3c0, 653,
        0x3c4, 653,
        0x221e, 653,
        ',', 272,
        '.', 272,
        ':', 272,
        '?', 272,
        0x2218, 272,
        0x25cc, 272,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(645);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(330);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(653);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_noadic_prim);
      ADVANCE_MAP(
        '\r', 138,
        '"', 730,
        '$', 21,
        '(', 419,
        ')', 432,
        '@', 760,
        '[', 455,
        '_', 519,
        '`', 138,
        't', 136,
        '{', 491,
        0xaf, 331,
        0x2682, 302,
        0x3b7, 822,
        0x3c0, 822,
        0x3c4, 822,
        0x221e, 822,
        ',', 273,
        '.', 273,
        ':', 273,
        '?', 273,
        0x2218, 273,
        0x25cc, 273,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(791);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(331);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(361);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_noadic_prim);
      ADVANCE_MAP(
        '\r', 664,
        '"', 731,
        '#', 664,
        '$', 548,
        '(', 420,
        ')', 433,
        '@', 761,
        '[', 456,
        '_', 520,
        '`', 664,
        't', 662,
        '{', 492,
        0xaf, 332,
        0x2682, 303,
        '\t', 664,
        ' ', 664,
        0x3b7, 664,
        0x3c0, 664,
        0x3c4, 664,
        0x221e, 664,
        ',', 274,
        '.', 274,
        ':', 274,
        '?', 274,
        0x2218, 274,
        0x25cc, 274,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(656);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(332);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_noadic_prim);
      ADVANCE_MAP(
        '\r', 148,
        '"', 732,
        '$', 23,
        '(', 421,
        '/', 807,
        '@', 762,
        '[', 457,
        '_', 521,
        '`', 148,
        't', 146,
        '{', 493,
        '}', 504,
        0xaf, 333,
        0x2682, 304,
        0x3b7, 823,
        0x3c0, 823,
        0x3c4, 823,
        0x221e, 823,
        ',', 275,
        '.', 275,
        ':', 275,
        '?', 275,
        0x2218, 275,
        0x25cc, 275,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(792);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(333);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(363);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_noadic_prim);
      ADVANCE_MAP(
        '\r', 675,
        '"', 733,
        '#', 675,
        '$', 550,
        '(', 422,
        '/', 808,
        '@', 763,
        '[', 458,
        '_', 522,
        '`', 675,
        't', 673,
        '{', 494,
        '}', 505,
        0xaf, 334,
        0x2682, 305,
        '\t', 675,
        ' ', 675,
        0x3b7, 675,
        0x3c0, 675,
        0x3c4, 675,
        0x221e, 675,
        ',', 276,
        '.', 276,
        ':', 276,
        '?', 276,
        0x2218, 276,
        0x25cc, 276,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(667);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(334);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(675);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_noadic_prim);
      ADVANCE_MAP(
        '\r', 158,
        '"', 734,
        '$', 25,
        '(', 423,
        '@', 764,
        '[', 459,
        '_', 523,
        '`', 158,
        't', 156,
        '{', 495,
        '}', 506,
        0xaf, 335,
        0x2682, 306,
        0x3b7, 824,
        0x3c0, 824,
        0x3c4, 824,
        0x221e, 824,
        ',', 277,
        '.', 277,
        ':', 277,
        '?', 277,
        0x2218, 277,
        0x25cc, 277,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(793);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(335);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(365);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_noadic_prim);
      ADVANCE_MAP(
        '\r', 686,
        '"', 735,
        '#', 686,
        '$', 552,
        '(', 424,
        '@', 765,
        '[', 460,
        '_', 524,
        '`', 686,
        't', 684,
        '{', 496,
        '}', 507,
        0xaf, 336,
        0x2682, 307,
        '\t', 686,
        ' ', 686,
        0x3b7, 686,
        0x3c0, 686,
        0x3c4, 686,
        0x221e, 686,
        ',', 278,
        '.', 278,
        ':', 278,
        '?', 278,
        0x2218, 278,
        0x25cc, 278,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(678);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(336);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(686);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_noadic_prim);
      ADVANCE_MAP(
        '\r', 168,
        '"', 736,
        '$', 27,
        '(', 425,
        ')', 434,
        '/', 809,
        '@', 766,
        '[', 461,
        '_', 525,
        '`', 168,
        't', 166,
        '{', 497,
        0xaf, 337,
        0x2682, 308,
        0x3b7, 825,
        0x3c0, 825,
        0x3c4, 825,
        0x221e, 825,
        ',', 279,
        '.', 279,
        ':', 279,
        '?', 279,
        0x2218, 279,
        0x25cc, 279,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(794);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(337);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(367);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_noadic_prim);
      ADVANCE_MAP(
        '\r', 697,
        '"', 737,
        '#', 697,
        '$', 554,
        '(', 426,
        ')', 435,
        '/', 810,
        '@', 767,
        '[', 462,
        '_', 526,
        '`', 697,
        't', 695,
        '{', 498,
        0xaf, 338,
        0x2682, 309,
        '\t', 697,
        ' ', 697,
        0x3b7, 697,
        0x3c0, 697,
        0x3c4, 697,
        0x221e, 697,
        ',', 280,
        '.', 280,
        ':', 280,
        '?', 280,
        0x2218, 280,
        0x25cc, 280,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(689);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(338);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(697);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_noadic_prim);
      ADVANCE_MAP(
        '"', 738,
        '$', 11,
        '@', 768,
        '`', 187,
        't', 185,
        0xaf, 339,
        0x2682, 310,
        0x3b7, 826,
        0x3c0, 826,
        0x3c4, 826,
        0x221e, 826,
        ',', 281,
        '.', 281,
        ':', 281,
        '?', 281,
        0x2218, 281,
        0x25cc, 281,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(795);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(339);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(369);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_noadic_prim);
      ADVANCE_MAP(
        '"', 739,
        '#', 708,
        '$', 538,
        '@', 769,
        '`', 708,
        't', 706,
        0xaf, 340,
        0x2682, 311,
        '\t', 708,
        ' ', 708,
        0x3b7, 708,
        0x3c0, 708,
        0x3c4, 708,
        0x221e, 708,
        ',', 282,
        '.', 282,
        ':', 282,
        '?', 282,
        0x2218, 282,
        0x25cc, 282,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(700);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(340);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(708);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_monadic_prim);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_monadic_prim);
      ADVANCE_MAP(
        '\r', 48,
        '"', 712,
        '$', 1,
        '(', 401,
        ')', 428,
        '/', 801,
        '@', 742,
        '[', 437,
        ']', 464,
        '_', 509,
        '`', 48,
        't', 46,
        '{', 473,
        '}', 500,
        0xaf, 313,
        0x2682, 284,
        0x3b7, 813,
        0x3c0, 813,
        0x3c4, 813,
        0x221e, 813,
        ',', 255,
        '.', 255,
        ':', 255,
        '?', 255,
        0x2218, 255,
        0x25cc, 255,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(782);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(313);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(343);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_monadic_prim);
      ADVANCE_MAP(
        '\r', 565,
        '"', 713,
        '#', 565,
        '$', 528,
        '(', 402,
        ')', 429,
        '/', 802,
        '@', 743,
        '[', 438,
        ']', 465,
        '_', 510,
        '`', 565,
        't', 563,
        '{', 474,
        '}', 501,
        0xaf, 314,
        0x2682, 285,
        '\t', 565,
        ' ', 565,
        0x3b7, 565,
        0x3c0, 565,
        0x3c4, 565,
        0x221e, 565,
        ',', 256,
        '.', 256,
        ':', 256,
        '?', 256,
        0x2218, 256,
        0x25cc, 256,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(557);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(314);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(565);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_monadic_prim);
      ADVANCE_MAP(
        '\r', 58,
        '"', 714,
        '$', 3,
        '(', 403,
        '@', 744,
        '[', 439,
        '`', 58,
        't', 56,
        '{', 475,
        0xaf, 315,
        0x2682, 286,
        0x3b7, 814,
        0x3c0, 814,
        0x3c4, 814,
        0x221e, 814,
        ',', 257,
        '.', 257,
        ':', 257,
        '?', 257,
        0x2218, 257,
        0x25cc, 257,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(783);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(315);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(345);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_monadic_prim);
      ADVANCE_MAP(
        '\r', 576,
        '"', 715,
        '#', 576,
        '$', 530,
        '(', 404,
        '@', 745,
        '[', 440,
        '`', 576,
        't', 574,
        '{', 476,
        0xaf, 316,
        0x2682, 287,
        '\t', 576,
        ' ', 576,
        0x3b7, 576,
        0x3c0, 576,
        0x3c4, 576,
        0x221e, 576,
        ',', 258,
        '.', 258,
        ':', 258,
        '?', 258,
        0x2218, 258,
        0x25cc, 258,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(568);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(316);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(576);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_monadic_prim);
      ADVANCE_MAP(
        '\r', 68,
        '"', 716,
        '$', 5,
        '(', 405,
        '@', 746,
        '[', 441,
        '`', 68,
        't', 66,
        '{', 477,
        '}', 502,
        0xaf, 317,
        0x2682, 288,
        0x3b7, 815,
        0x3c0, 815,
        0x3c4, 815,
        0x221e, 815,
        ',', 259,
        '.', 259,
        ':', 259,
        '?', 259,
        0x2218, 259,
        0x25cc, 259,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(784);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(317);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(347);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_monadic_prim);
      ADVANCE_MAP(
        '\r', 587,
        '"', 717,
        '#', 587,
        '$', 532,
        '(', 406,
        '@', 747,
        '[', 442,
        '`', 587,
        't', 585,
        '{', 478,
        '}', 503,
        0xaf, 318,
        0x2682, 289,
        '\t', 587,
        ' ', 587,
        0x3b7, 587,
        0x3c0, 587,
        0x3c4, 587,
        0x221e, 587,
        ',', 260,
        '.', 260,
        ':', 260,
        '?', 260,
        0x2218, 260,
        0x25cc, 260,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(579);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(318);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(587);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_monadic_prim);
      ADVANCE_MAP(
        '\r', 78,
        '"', 718,
        '$', 7,
        '(', 407,
        '@', 748,
        '[', 443,
        ']', 466,
        '`', 78,
        't', 76,
        '{', 479,
        0xaf, 319,
        0x2682, 290,
        0x3b7, 816,
        0x3c0, 816,
        0x3c4, 816,
        0x221e, 816,
        ',', 261,
        '.', 261,
        ':', 261,
        '?', 261,
        0x2218, 261,
        0x25cc, 261,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(785);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(319);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(349);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_monadic_prim);
      ADVANCE_MAP(
        '\r', 598,
        '"', 719,
        '#', 598,
        '$', 534,
        '(', 408,
        '@', 749,
        '[', 444,
        ']', 467,
        '`', 598,
        't', 596,
        '{', 480,
        0xaf, 320,
        0x2682, 291,
        '\t', 598,
        ' ', 598,
        0x3b7, 598,
        0x3c0, 598,
        0x3c4, 598,
        0x221e, 598,
        ',', 262,
        '.', 262,
        ':', 262,
        '?', 262,
        0x2218, 262,
        0x25cc, 262,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(590);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(320);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(598);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_monadic_prim);
      ADVANCE_MAP(
        '\r', 88,
        '"', 720,
        '$', 9,
        '(', 409,
        ')', 430,
        '@', 750,
        '[', 445,
        '`', 88,
        't', 86,
        '{', 481,
        0xaf, 321,
        0x2682, 292,
        0x3b7, 817,
        0x3c0, 817,
        0x3c4, 817,
        0x221e, 817,
        ',', 263,
        '.', 263,
        ':', 263,
        '?', 263,
        0x2218, 263,
        0x25cc, 263,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(786);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(321);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(351);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_monadic_prim);
      ADVANCE_MAP(
        '\r', 609,
        '"', 721,
        '#', 609,
        '$', 536,
        '(', 410,
        ')', 431,
        '@', 751,
        '[', 446,
        '`', 609,
        't', 607,
        '{', 482,
        0xaf, 322,
        0x2682, 293,
        '\t', 609,
        ' ', 609,
        0x3b7, 609,
        0x3c0, 609,
        0x3c4, 609,
        0x221e, 609,
        ',', 264,
        '.', 264,
        ':', 264,
        '?', 264,
        0x2218, 264,
        0x25cc, 264,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(601);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(322);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(609);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_monadic_prim);
      ADVANCE_MAP(
        '\r', 98,
        '"', 722,
        '$', 13,
        '(', 411,
        '@', 752,
        '[', 447,
        '_', 511,
        '`', 98,
        't', 96,
        '{', 483,
        0xaf, 323,
        0x2682, 294,
        0x3b7, 818,
        0x3c0, 818,
        0x3c4, 818,
        0x221e, 818,
        ',', 265,
        '.', 265,
        ':', 265,
        '?', 265,
        0x2218, 265,
        0x25cc, 265,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(787);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(323);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(353);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_monadic_prim);
      ADVANCE_MAP(
        '\r', 620,
        '"', 723,
        '#', 620,
        '$', 540,
        '(', 412,
        '@', 753,
        '[', 448,
        '_', 512,
        '`', 620,
        't', 618,
        '{', 484,
        0xaf, 324,
        0x2682, 295,
        '\t', 620,
        ' ', 620,
        0x3b7, 620,
        0x3c0, 620,
        0x3c4, 620,
        0x221e, 620,
        ',', 266,
        '.', 266,
        ':', 266,
        '?', 266,
        0x2218, 266,
        0x25cc, 266,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(612);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(324);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(620);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_monadic_prim);
      ADVANCE_MAP(
        '\r', 108,
        '"', 724,
        '$', 15,
        '(', 413,
        '/', 803,
        '@', 754,
        '[', 449,
        '_', 513,
        '`', 108,
        't', 106,
        '{', 485,
        0xaf, 325,
        0x2682, 296,
        0x3b7, 819,
        0x3c0, 819,
        0x3c4, 819,
        0x221e, 819,
        ',', 267,
        '.', 267,
        ':', 267,
        '?', 267,
        0x2218, 267,
        0x25cc, 267,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(788);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(325);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(355);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_monadic_prim);
      ADVANCE_MAP(
        '\r', 631,
        '"', 725,
        '#', 631,
        '$', 542,
        '(', 414,
        '/', 804,
        '@', 755,
        '[', 450,
        '_', 514,
        '`', 631,
        't', 629,
        '{', 486,
        0xaf, 326,
        0x2682, 297,
        '\t', 631,
        ' ', 631,
        0x3b7, 631,
        0x3c0, 631,
        0x3c4, 631,
        0x221e, 631,
        ',', 268,
        '.', 268,
        ':', 268,
        '?', 268,
        0x2218, 268,
        0x25cc, 268,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(623);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(326);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(631);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_monadic_prim);
      ADVANCE_MAP(
        '\r', 118,
        '"', 726,
        '$', 17,
        '(', 415,
        '/', 805,
        '@', 756,
        '[', 451,
        ']', 468,
        '_', 515,
        '`', 118,
        't', 116,
        '{', 487,
        0xaf, 327,
        0x2682, 298,
        0x3b7, 820,
        0x3c0, 820,
        0x3c4, 820,
        0x221e, 820,
        ',', 269,
        '.', 269,
        ':', 269,
        '?', 269,
        0x2218, 269,
        0x25cc, 269,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(789);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(327);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(357);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_monadic_prim);
      ADVANCE_MAP(
        '\r', 642,
        '"', 727,
        '#', 642,
        '$', 544,
        '(', 416,
        '/', 806,
        '@', 757,
        '[', 452,
        ']', 469,
        '_', 516,
        '`', 642,
        't', 640,
        '{', 488,
        0xaf, 328,
        0x2682, 299,
        '\t', 642,
        ' ', 642,
        0x3b7, 642,
        0x3c0, 642,
        0x3c4, 642,
        0x221e, 642,
        ',', 270,
        '.', 270,
        ':', 270,
        '?', 270,
        0x2218, 270,
        0x25cc, 270,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(634);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(328);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(642);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_monadic_prim);
      ADVANCE_MAP(
        '\r', 128,
        '"', 728,
        '$', 19,
        '(', 417,
        '@', 758,
        '[', 453,
        ']', 470,
        '_', 517,
        '`', 128,
        't', 126,
        '{', 489,
        0xaf, 329,
        0x2682, 300,
        0x3b7, 821,
        0x3c0, 821,
        0x3c4, 821,
        0x221e, 821,
        ',', 271,
        '.', 271,
        ':', 271,
        '?', 271,
        0x2218, 271,
        0x25cc, 271,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(790);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(329);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(359);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_monadic_prim);
      ADVANCE_MAP(
        '\r', 653,
        '"', 729,
        '#', 653,
        '$', 546,
        '(', 418,
        '@', 759,
        '[', 454,
        ']', 471,
        '_', 518,
        '`', 653,
        't', 651,
        '{', 490,
        0xaf, 330,
        0x2682, 301,
        '\t', 653,
        ' ', 653,
        0x3b7, 653,
        0x3c0, 653,
        0x3c4, 653,
        0x221e, 653,
        ',', 272,
        '.', 272,
        ':', 272,
        '?', 272,
        0x2218, 272,
        0x25cc, 272,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(645);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(330);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(653);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_monadic_prim);
      ADVANCE_MAP(
        '\r', 138,
        '"', 730,
        '$', 21,
        '(', 419,
        ')', 432,
        '@', 760,
        '[', 455,
        '_', 519,
        '`', 138,
        't', 136,
        '{', 491,
        0xaf, 331,
        0x2682, 302,
        0x3b7, 822,
        0x3c0, 822,
        0x3c4, 822,
        0x221e, 822,
        ',', 273,
        '.', 273,
        ':', 273,
        '?', 273,
        0x2218, 273,
        0x25cc, 273,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(791);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(331);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(361);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_monadic_prim);
      ADVANCE_MAP(
        '\r', 664,
        '"', 731,
        '#', 664,
        '$', 548,
        '(', 420,
        ')', 433,
        '@', 761,
        '[', 456,
        '_', 520,
        '`', 664,
        't', 662,
        '{', 492,
        0xaf, 332,
        0x2682, 303,
        '\t', 664,
        ' ', 664,
        0x3b7, 664,
        0x3c0, 664,
        0x3c4, 664,
        0x221e, 664,
        ',', 274,
        '.', 274,
        ':', 274,
        '?', 274,
        0x2218, 274,
        0x25cc, 274,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(656);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(332);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_monadic_prim);
      ADVANCE_MAP(
        '\r', 148,
        '"', 732,
        '$', 23,
        '(', 421,
        '/', 807,
        '@', 762,
        '[', 457,
        '_', 521,
        '`', 148,
        't', 146,
        '{', 493,
        '}', 504,
        0xaf, 333,
        0x2682, 304,
        0x3b7, 823,
        0x3c0, 823,
        0x3c4, 823,
        0x221e, 823,
        ',', 275,
        '.', 275,
        ':', 275,
        '?', 275,
        0x2218, 275,
        0x25cc, 275,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(792);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(333);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(363);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_monadic_prim);
      ADVANCE_MAP(
        '\r', 675,
        '"', 733,
        '#', 675,
        '$', 550,
        '(', 422,
        '/', 808,
        '@', 763,
        '[', 458,
        '_', 522,
        '`', 675,
        't', 673,
        '{', 494,
        '}', 505,
        0xaf, 334,
        0x2682, 305,
        '\t', 675,
        ' ', 675,
        0x3b7, 675,
        0x3c0, 675,
        0x3c4, 675,
        0x221e, 675,
        ',', 276,
        '.', 276,
        ':', 276,
        '?', 276,
        0x2218, 276,
        0x25cc, 276,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(667);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(334);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(675);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_monadic_prim);
      ADVANCE_MAP(
        '\r', 158,
        '"', 734,
        '$', 25,
        '(', 423,
        '@', 764,
        '[', 459,
        '_', 523,
        '`', 158,
        't', 156,
        '{', 495,
        '}', 506,
        0xaf, 335,
        0x2682, 306,
        0x3b7, 824,
        0x3c0, 824,
        0x3c4, 824,
        0x221e, 824,
        ',', 277,
        '.', 277,
        ':', 277,
        '?', 277,
        0x2218, 277,
        0x25cc, 277,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(793);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(335);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(365);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_monadic_prim);
      ADVANCE_MAP(
        '\r', 686,
        '"', 735,
        '#', 686,
        '$', 552,
        '(', 424,
        '@', 765,
        '[', 460,
        '_', 524,
        '`', 686,
        't', 684,
        '{', 496,
        '}', 507,
        0xaf, 336,
        0x2682, 307,
        '\t', 686,
        ' ', 686,
        0x3b7, 686,
        0x3c0, 686,
        0x3c4, 686,
        0x221e, 686,
        ',', 278,
        '.', 278,
        ':', 278,
        '?', 278,
        0x2218, 278,
        0x25cc, 278,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(678);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(336);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(686);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_monadic_prim);
      ADVANCE_MAP(
        '\r', 168,
        '"', 736,
        '$', 27,
        '(', 425,
        ')', 434,
        '/', 809,
        '@', 766,
        '[', 461,
        '_', 525,
        '`', 168,
        't', 166,
        '{', 497,
        0xaf, 337,
        0x2682, 308,
        0x3b7, 825,
        0x3c0, 825,
        0x3c4, 825,
        0x221e, 825,
        ',', 279,
        '.', 279,
        ':', 279,
        '?', 279,
        0x2218, 279,
        0x25cc, 279,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(794);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(337);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(367);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_monadic_prim);
      ADVANCE_MAP(
        '\r', 697,
        '"', 737,
        '#', 697,
        '$', 554,
        '(', 426,
        ')', 435,
        '/', 810,
        '@', 767,
        '[', 462,
        '_', 526,
        '`', 697,
        't', 695,
        '{', 498,
        0xaf, 338,
        0x2682, 309,
        '\t', 697,
        ' ', 697,
        0x3b7, 697,
        0x3c0, 697,
        0x3c4, 697,
        0x221e, 697,
        ',', 280,
        '.', 280,
        ':', 280,
        '?', 280,
        0x2218, 280,
        0x25cc, 280,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(689);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(338);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(697);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_monadic_prim);
      ADVANCE_MAP(
        '"', 738,
        '$', 11,
        '@', 768,
        '`', 187,
        't', 185,
        0xaf, 339,
        0x2682, 310,
        0x3b7, 826,
        0x3c0, 826,
        0x3c4, 826,
        0x221e, 826,
        ',', 281,
        '.', 281,
        ':', 281,
        '?', 281,
        0x2218, 281,
        0x25cc, 281,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(795);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(339);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(369);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_monadic_prim);
      ADVANCE_MAP(
        '"', 739,
        '#', 708,
        '$', 538,
        '@', 769,
        '`', 708,
        't', 706,
        0xaf, 340,
        0x2682, 311,
        '\t', 708,
        ' ', 708,
        0x3b7, 708,
        0x3c0, 708,
        0x3c4, 708,
        0x221e, 708,
        ',', 282,
        '.', 282,
        ':', 282,
        '?', 282,
        0x2218, 282,
        0x25cc, 282,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(700);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(340);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(708);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_monadic_prim);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(812);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(796);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_dyadic_prim);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_dyadic_prim);
      ADVANCE_MAP(
        '\r', 48,
        '"', 712,
        '$', 1,
        '(', 401,
        ')', 428,
        '/', 801,
        '@', 742,
        '[', 437,
        ']', 464,
        '_', 509,
        '`', 48,
        't', 46,
        '{', 473,
        '}', 500,
        0xaf, 313,
        0x2682, 284,
        0x3b7, 813,
        0x3c0, 813,
        0x3c4, 813,
        0x221e, 813,
        ',', 255,
        '.', 255,
        ':', 255,
        '?', 255,
        0x2218, 255,
        0x25cc, 255,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(782);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(313);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(343);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_dyadic_prim);
      ADVANCE_MAP(
        '\r', 565,
        '"', 713,
        '#', 565,
        '$', 528,
        '(', 402,
        ')', 429,
        '/', 802,
        '@', 743,
        '[', 438,
        ']', 465,
        '_', 510,
        '`', 565,
        't', 563,
        '{', 474,
        '}', 501,
        0xaf, 314,
        0x2682, 285,
        '\t', 565,
        ' ', 565,
        0x3b7, 565,
        0x3c0, 565,
        0x3c4, 565,
        0x221e, 565,
        ',', 256,
        '.', 256,
        ':', 256,
        '?', 256,
        0x2218, 256,
        0x25cc, 256,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(557);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(314);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(565);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_dyadic_prim);
      ADVANCE_MAP(
        '\r', 58,
        '"', 714,
        '$', 3,
        '(', 403,
        '@', 744,
        '[', 439,
        '`', 58,
        't', 56,
        '{', 475,
        0xaf, 315,
        0x2682, 286,
        0x3b7, 814,
        0x3c0, 814,
        0x3c4, 814,
        0x221e, 814,
        ',', 257,
        '.', 257,
        ':', 257,
        '?', 257,
        0x2218, 257,
        0x25cc, 257,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(783);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(315);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(345);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_dyadic_prim);
      ADVANCE_MAP(
        '\r', 576,
        '"', 715,
        '#', 576,
        '$', 530,
        '(', 404,
        '@', 745,
        '[', 440,
        '`', 576,
        't', 574,
        '{', 476,
        0xaf, 316,
        0x2682, 287,
        '\t', 576,
        ' ', 576,
        0x3b7, 576,
        0x3c0, 576,
        0x3c4, 576,
        0x221e, 576,
        ',', 258,
        '.', 258,
        ':', 258,
        '?', 258,
        0x2218, 258,
        0x25cc, 258,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(568);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(316);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(576);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_dyadic_prim);
      ADVANCE_MAP(
        '\r', 68,
        '"', 716,
        '$', 5,
        '(', 405,
        '@', 746,
        '[', 441,
        '`', 68,
        't', 66,
        '{', 477,
        '}', 502,
        0xaf, 317,
        0x2682, 288,
        0x3b7, 815,
        0x3c0, 815,
        0x3c4, 815,
        0x221e, 815,
        ',', 259,
        '.', 259,
        ':', 259,
        '?', 259,
        0x2218, 259,
        0x25cc, 259,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(784);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(317);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(347);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_dyadic_prim);
      ADVANCE_MAP(
        '\r', 587,
        '"', 717,
        '#', 587,
        '$', 532,
        '(', 406,
        '@', 747,
        '[', 442,
        '`', 587,
        't', 585,
        '{', 478,
        '}', 503,
        0xaf, 318,
        0x2682, 289,
        '\t', 587,
        ' ', 587,
        0x3b7, 587,
        0x3c0, 587,
        0x3c4, 587,
        0x221e, 587,
        ',', 260,
        '.', 260,
        ':', 260,
        '?', 260,
        0x2218, 260,
        0x25cc, 260,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(579);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(318);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(587);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_dyadic_prim);
      ADVANCE_MAP(
        '\r', 78,
        '"', 718,
        '$', 7,
        '(', 407,
        '@', 748,
        '[', 443,
        ']', 466,
        '`', 78,
        't', 76,
        '{', 479,
        0xaf, 319,
        0x2682, 290,
        0x3b7, 816,
        0x3c0, 816,
        0x3c4, 816,
        0x221e, 816,
        ',', 261,
        '.', 261,
        ':', 261,
        '?', 261,
        0x2218, 261,
        0x25cc, 261,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(785);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(319);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(349);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_dyadic_prim);
      ADVANCE_MAP(
        '\r', 598,
        '"', 719,
        '#', 598,
        '$', 534,
        '(', 408,
        '@', 749,
        '[', 444,
        ']', 467,
        '`', 598,
        't', 596,
        '{', 480,
        0xaf, 320,
        0x2682, 291,
        '\t', 598,
        ' ', 598,
        0x3b7, 598,
        0x3c0, 598,
        0x3c4, 598,
        0x221e, 598,
        ',', 262,
        '.', 262,
        ':', 262,
        '?', 262,
        0x2218, 262,
        0x25cc, 262,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(590);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(320);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(598);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_dyadic_prim);
      ADVANCE_MAP(
        '\r', 88,
        '"', 720,
        '$', 9,
        '(', 409,
        ')', 430,
        '@', 750,
        '[', 445,
        '`', 88,
        't', 86,
        '{', 481,
        0xaf, 321,
        0x2682, 292,
        0x3b7, 817,
        0x3c0, 817,
        0x3c4, 817,
        0x221e, 817,
        ',', 263,
        '.', 263,
        ':', 263,
        '?', 263,
        0x2218, 263,
        0x25cc, 263,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(786);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(321);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(351);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_dyadic_prim);
      ADVANCE_MAP(
        '\r', 609,
        '"', 721,
        '#', 609,
        '$', 536,
        '(', 410,
        ')', 431,
        '@', 751,
        '[', 446,
        '`', 609,
        't', 607,
        '{', 482,
        0xaf, 322,
        0x2682, 293,
        '\t', 609,
        ' ', 609,
        0x3b7, 609,
        0x3c0, 609,
        0x3c4, 609,
        0x221e, 609,
        ',', 264,
        '.', 264,
        ':', 264,
        '?', 264,
        0x2218, 264,
        0x25cc, 264,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(601);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(322);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(609);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_dyadic_prim);
      ADVANCE_MAP(
        '\r', 98,
        '"', 722,
        '$', 13,
        '(', 411,
        '@', 752,
        '[', 447,
        '_', 511,
        '`', 98,
        't', 96,
        '{', 483,
        0xaf, 323,
        0x2682, 294,
        0x3b7, 818,
        0x3c0, 818,
        0x3c4, 818,
        0x221e, 818,
        ',', 265,
        '.', 265,
        ':', 265,
        '?', 265,
        0x2218, 265,
        0x25cc, 265,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(787);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(323);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(353);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_dyadic_prim);
      ADVANCE_MAP(
        '\r', 620,
        '"', 723,
        '#', 620,
        '$', 540,
        '(', 412,
        '@', 753,
        '[', 448,
        '_', 512,
        '`', 620,
        't', 618,
        '{', 484,
        0xaf, 324,
        0x2682, 295,
        '\t', 620,
        ' ', 620,
        0x3b7, 620,
        0x3c0, 620,
        0x3c4, 620,
        0x221e, 620,
        ',', 266,
        '.', 266,
        ':', 266,
        '?', 266,
        0x2218, 266,
        0x25cc, 266,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(612);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(324);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(620);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_dyadic_prim);
      ADVANCE_MAP(
        '\r', 108,
        '"', 724,
        '$', 15,
        '(', 413,
        '/', 803,
        '@', 754,
        '[', 449,
        '_', 513,
        '`', 108,
        't', 106,
        '{', 485,
        0xaf, 325,
        0x2682, 296,
        0x3b7, 819,
        0x3c0, 819,
        0x3c4, 819,
        0x221e, 819,
        ',', 267,
        '.', 267,
        ':', 267,
        '?', 267,
        0x2218, 267,
        0x25cc, 267,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(788);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(325);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(355);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_dyadic_prim);
      ADVANCE_MAP(
        '\r', 631,
        '"', 725,
        '#', 631,
        '$', 542,
        '(', 414,
        '/', 804,
        '@', 755,
        '[', 450,
        '_', 514,
        '`', 631,
        't', 629,
        '{', 486,
        0xaf, 326,
        0x2682, 297,
        '\t', 631,
        ' ', 631,
        0x3b7, 631,
        0x3c0, 631,
        0x3c4, 631,
        0x221e, 631,
        ',', 268,
        '.', 268,
        ':', 268,
        '?', 268,
        0x2218, 268,
        0x25cc, 268,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(623);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(326);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(631);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_dyadic_prim);
      ADVANCE_MAP(
        '\r', 118,
        '"', 726,
        '$', 17,
        '(', 415,
        '/', 805,
        '@', 756,
        '[', 451,
        ']', 468,
        '_', 515,
        '`', 118,
        't', 116,
        '{', 487,
        0xaf, 327,
        0x2682, 298,
        0x3b7, 820,
        0x3c0, 820,
        0x3c4, 820,
        0x221e, 820,
        ',', 269,
        '.', 269,
        ':', 269,
        '?', 269,
        0x2218, 269,
        0x25cc, 269,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(789);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(327);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(357);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_dyadic_prim);
      ADVANCE_MAP(
        '\r', 642,
        '"', 727,
        '#', 642,
        '$', 544,
        '(', 416,
        '/', 806,
        '@', 757,
        '[', 452,
        ']', 469,
        '_', 516,
        '`', 642,
        't', 640,
        '{', 488,
        0xaf, 328,
        0x2682, 299,
        '\t', 642,
        ' ', 642,
        0x3b7, 642,
        0x3c0, 642,
        0x3c4, 642,
        0x221e, 642,
        ',', 270,
        '.', 270,
        ':', 270,
        '?', 270,
        0x2218, 270,
        0x25cc, 270,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(634);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(328);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(642);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_dyadic_prim);
      ADVANCE_MAP(
        '\r', 128,
        '"', 728,
        '$', 19,
        '(', 417,
        '@', 758,
        '[', 453,
        ']', 470,
        '_', 517,
        '`', 128,
        't', 126,
        '{', 489,
        0xaf, 329,
        0x2682, 300,
        0x3b7, 821,
        0x3c0, 821,
        0x3c4, 821,
        0x221e, 821,
        ',', 271,
        '.', 271,
        ':', 271,
        '?', 271,
        0x2218, 271,
        0x25cc, 271,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(790);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(329);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(359);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_dyadic_prim);
      ADVANCE_MAP(
        '\r', 653,
        '"', 729,
        '#', 653,
        '$', 546,
        '(', 418,
        '@', 759,
        '[', 454,
        ']', 471,
        '_', 518,
        '`', 653,
        't', 651,
        '{', 490,
        0xaf, 330,
        0x2682, 301,
        '\t', 653,
        ' ', 653,
        0x3b7, 653,
        0x3c0, 653,
        0x3c4, 653,
        0x221e, 653,
        ',', 272,
        '.', 272,
        ':', 272,
        '?', 272,
        0x2218, 272,
        0x25cc, 272,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(645);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(330);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(653);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_dyadic_prim);
      ADVANCE_MAP(
        '\r', 138,
        '"', 730,
        '$', 21,
        '(', 419,
        ')', 432,
        '@', 760,
        '[', 455,
        '_', 519,
        '`', 138,
        't', 136,
        '{', 491,
        0xaf, 331,
        0x2682, 302,
        0x3b7, 822,
        0x3c0, 822,
        0x3c4, 822,
        0x221e, 822,
        ',', 273,
        '.', 273,
        ':', 273,
        '?', 273,
        0x2218, 273,
        0x25cc, 273,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(791);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(331);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(361);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_dyadic_prim);
      ADVANCE_MAP(
        '\r', 664,
        '"', 731,
        '#', 664,
        '$', 548,
        '(', 420,
        ')', 433,
        '@', 761,
        '[', 456,
        '_', 520,
        '`', 664,
        't', 662,
        '{', 492,
        0xaf, 332,
        0x2682, 303,
        '\t', 664,
        ' ', 664,
        0x3b7, 664,
        0x3c0, 664,
        0x3c4, 664,
        0x221e, 664,
        ',', 274,
        '.', 274,
        ':', 274,
        '?', 274,
        0x2218, 274,
        0x25cc, 274,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(656);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(332);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_dyadic_prim);
      ADVANCE_MAP(
        '\r', 148,
        '"', 732,
        '$', 23,
        '(', 421,
        '/', 807,
        '@', 762,
        '[', 457,
        '_', 521,
        '`', 148,
        't', 146,
        '{', 493,
        '}', 504,
        0xaf, 333,
        0x2682, 304,
        0x3b7, 823,
        0x3c0, 823,
        0x3c4, 823,
        0x221e, 823,
        ',', 275,
        '.', 275,
        ':', 275,
        '?', 275,
        0x2218, 275,
        0x25cc, 275,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(792);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(333);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(363);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_dyadic_prim);
      ADVANCE_MAP(
        '\r', 675,
        '"', 733,
        '#', 675,
        '$', 550,
        '(', 422,
        '/', 808,
        '@', 763,
        '[', 458,
        '_', 522,
        '`', 675,
        't', 673,
        '{', 494,
        '}', 505,
        0xaf, 334,
        0x2682, 305,
        '\t', 675,
        ' ', 675,
        0x3b7, 675,
        0x3c0, 675,
        0x3c4, 675,
        0x221e, 675,
        ',', 276,
        '.', 276,
        ':', 276,
        '?', 276,
        0x2218, 276,
        0x25cc, 276,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(667);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(334);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(675);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_dyadic_prim);
      ADVANCE_MAP(
        '\r', 158,
        '"', 734,
        '$', 25,
        '(', 423,
        '@', 764,
        '[', 459,
        '_', 523,
        '`', 158,
        't', 156,
        '{', 495,
        '}', 506,
        0xaf, 335,
        0x2682, 306,
        0x3b7, 824,
        0x3c0, 824,
        0x3c4, 824,
        0x221e, 824,
        ',', 277,
        '.', 277,
        ':', 277,
        '?', 277,
        0x2218, 277,
        0x25cc, 277,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(793);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(335);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(365);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_dyadic_prim);
      ADVANCE_MAP(
        '\r', 686,
        '"', 735,
        '#', 686,
        '$', 552,
        '(', 424,
        '@', 765,
        '[', 460,
        '_', 524,
        '`', 686,
        't', 684,
        '{', 496,
        '}', 507,
        0xaf, 336,
        0x2682, 307,
        '\t', 686,
        ' ', 686,
        0x3b7, 686,
        0x3c0, 686,
        0x3c4, 686,
        0x221e, 686,
        ',', 278,
        '.', 278,
        ':', 278,
        '?', 278,
        0x2218, 278,
        0x25cc, 278,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(678);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(336);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(686);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_dyadic_prim);
      ADVANCE_MAP(
        '\r', 168,
        '"', 736,
        '$', 27,
        '(', 425,
        ')', 434,
        '/', 809,
        '@', 766,
        '[', 461,
        '_', 525,
        '`', 168,
        't', 166,
        '{', 497,
        0xaf, 337,
        0x2682, 308,
        0x3b7, 825,
        0x3c0, 825,
        0x3c4, 825,
        0x221e, 825,
        ',', 279,
        '.', 279,
        ':', 279,
        '?', 279,
        0x2218, 279,
        0x25cc, 279,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(794);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(337);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(367);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_dyadic_prim);
      ADVANCE_MAP(
        '\r', 697,
        '"', 737,
        '#', 697,
        '$', 554,
        '(', 426,
        ')', 435,
        '/', 810,
        '@', 767,
        '[', 462,
        '_', 526,
        '`', 697,
        't', 695,
        '{', 498,
        0xaf, 338,
        0x2682, 309,
        '\t', 697,
        ' ', 697,
        0x3b7, 697,
        0x3c0, 697,
        0x3c4, 697,
        0x221e, 697,
        ',', 280,
        '.', 280,
        ':', 280,
        '?', 280,
        0x2218, 280,
        0x25cc, 280,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(689);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(338);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(697);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_dyadic_prim);
      ADVANCE_MAP(
        '"', 738,
        '$', 11,
        '@', 768,
        '`', 187,
        't', 185,
        0xaf, 339,
        0x2682, 310,
        0x3b7, 826,
        0x3c0, 826,
        0x3c4, 826,
        0x221e, 826,
        ',', 281,
        '.', 281,
        ':', 281,
        '?', 281,
        0x2218, 281,
        0x25cc, 281,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(795);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(339);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(369);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_dyadic_prim);
      ADVANCE_MAP(
        '"', 739,
        '#', 708,
        '$', 538,
        '@', 769,
        '`', 708,
        't', 706,
        0xaf, 340,
        0x2682, 311,
        '\t', 708,
        ' ', 708,
        0x3b7, 708,
        0x3c0, 708,
        0x3c4, 708,
        0x221e, 708,
        ',', 282,
        '.', 282,
        ':', 282,
        '?', 282,
        0x2218, 282,
        0x25cc, 282,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(700);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(340);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(708);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_identifier);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '\r', 48,
        '"', 712,
        '$', 1,
        '(', 401,
        ')', 428,
        '/', 801,
        '@', 742,
        '[', 437,
        ']', 464,
        '_', 509,
        '`', 48,
        'o', 42,
        't', 46,
        '{', 473,
        '}', 500,
        0xaf, 313,
        0x2682, 284,
        0x3b7, 813,
        0x3c0, 813,
        0x3c4, 813,
        0x221e, 813,
        ',', 255,
        '.', 255,
        ':', 255,
        '?', 255,
        0x2218, 255,
        0x25cc, 255,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(782);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(313);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(343);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '\r', 565,
        '"', 713,
        '#', 565,
        '$', 528,
        '(', 402,
        ')', 429,
        '/', 802,
        '@', 743,
        '[', 438,
        ']', 465,
        '_', 510,
        '`', 565,
        'o', 559,
        't', 563,
        '{', 474,
        '}', 501,
        0xaf, 314,
        0x2682, 285,
        '\t', 565,
        ' ', 565,
        0x3b7, 565,
        0x3c0, 565,
        0x3c4, 565,
        0x221e, 565,
        ',', 256,
        '.', 256,
        ':', 256,
        '?', 256,
        0x2218, 256,
        0x25cc, 256,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(557);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(314);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(565);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '\r', 58,
        '"', 714,
        '$', 3,
        '(', 403,
        '@', 744,
        '[', 439,
        '`', 58,
        'o', 52,
        't', 56,
        '{', 475,
        0xaf, 315,
        0x2682, 286,
        0x3b7, 814,
        0x3c0, 814,
        0x3c4, 814,
        0x221e, 814,
        ',', 257,
        '.', 257,
        ':', 257,
        '?', 257,
        0x2218, 257,
        0x25cc, 257,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(783);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(315);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(345);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '\r', 576,
        '"', 715,
        '#', 576,
        '$', 530,
        '(', 404,
        '@', 745,
        '[', 440,
        '`', 576,
        'o', 570,
        't', 574,
        '{', 476,
        0xaf, 316,
        0x2682, 287,
        '\t', 576,
        ' ', 576,
        0x3b7, 576,
        0x3c0, 576,
        0x3c4, 576,
        0x221e, 576,
        ',', 258,
        '.', 258,
        ':', 258,
        '?', 258,
        0x2218, 258,
        0x25cc, 258,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(568);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(316);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(576);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '\r', 68,
        '"', 716,
        '$', 5,
        '(', 405,
        '@', 746,
        '[', 441,
        '`', 68,
        'o', 62,
        't', 66,
        '{', 477,
        '}', 502,
        0xaf, 317,
        0x2682, 288,
        0x3b7, 815,
        0x3c0, 815,
        0x3c4, 815,
        0x221e, 815,
        ',', 259,
        '.', 259,
        ':', 259,
        '?', 259,
        0x2218, 259,
        0x25cc, 259,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(784);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(317);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(347);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '\r', 587,
        '"', 717,
        '#', 587,
        '$', 532,
        '(', 406,
        '@', 747,
        '[', 442,
        '`', 587,
        'o', 581,
        't', 585,
        '{', 478,
        '}', 503,
        0xaf, 318,
        0x2682, 289,
        '\t', 587,
        ' ', 587,
        0x3b7, 587,
        0x3c0, 587,
        0x3c4, 587,
        0x221e, 587,
        ',', 260,
        '.', 260,
        ':', 260,
        '?', 260,
        0x2218, 260,
        0x25cc, 260,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(579);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(318);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(587);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '\r', 78,
        '"', 718,
        '$', 7,
        '(', 407,
        '@', 748,
        '[', 443,
        ']', 466,
        '`', 78,
        'o', 72,
        't', 76,
        '{', 479,
        0xaf, 319,
        0x2682, 290,
        0x3b7, 816,
        0x3c0, 816,
        0x3c4, 816,
        0x221e, 816,
        ',', 261,
        '.', 261,
        ':', 261,
        '?', 261,
        0x2218, 261,
        0x25cc, 261,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(785);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(319);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(349);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '\r', 598,
        '"', 719,
        '#', 598,
        '$', 534,
        '(', 408,
        '@', 749,
        '[', 444,
        ']', 467,
        '`', 598,
        'o', 592,
        't', 596,
        '{', 480,
        0xaf, 320,
        0x2682, 291,
        '\t', 598,
        ' ', 598,
        0x3b7, 598,
        0x3c0, 598,
        0x3c4, 598,
        0x221e, 598,
        ',', 262,
        '.', 262,
        ':', 262,
        '?', 262,
        0x2218, 262,
        0x25cc, 262,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(590);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(320);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(598);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '\r', 88,
        '"', 720,
        '$', 9,
        '(', 409,
        ')', 430,
        '@', 750,
        '[', 445,
        '`', 88,
        'o', 82,
        't', 86,
        '{', 481,
        0xaf, 321,
        0x2682, 292,
        0x3b7, 817,
        0x3c0, 817,
        0x3c4, 817,
        0x221e, 817,
        ',', 263,
        '.', 263,
        ':', 263,
        '?', 263,
        0x2218, 263,
        0x25cc, 263,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(786);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(321);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(351);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '\r', 609,
        '"', 721,
        '#', 609,
        '$', 536,
        '(', 410,
        ')', 431,
        '@', 751,
        '[', 446,
        '`', 609,
        'o', 603,
        't', 607,
        '{', 482,
        0xaf, 322,
        0x2682, 293,
        '\t', 609,
        ' ', 609,
        0x3b7, 609,
        0x3c0, 609,
        0x3c4, 609,
        0x221e, 609,
        ',', 264,
        '.', 264,
        ':', 264,
        '?', 264,
        0x2218, 264,
        0x25cc, 264,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(601);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(322);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(609);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '\r', 98,
        '"', 722,
        '$', 13,
        '(', 411,
        '@', 752,
        '[', 447,
        '_', 511,
        '`', 98,
        'o', 92,
        't', 96,
        '{', 483,
        0xaf, 323,
        0x2682, 294,
        0x3b7, 818,
        0x3c0, 818,
        0x3c4, 818,
        0x221e, 818,
        ',', 265,
        '.', 265,
        ':', 265,
        '?', 265,
        0x2218, 265,
        0x25cc, 265,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(787);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(323);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(353);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '\r', 620,
        '"', 723,
        '#', 620,
        '$', 540,
        '(', 412,
        '@', 753,
        '[', 448,
        '_', 512,
        '`', 620,
        'o', 614,
        't', 618,
        '{', 484,
        0xaf, 324,
        0x2682, 295,
        '\t', 620,
        ' ', 620,
        0x3b7, 620,
        0x3c0, 620,
        0x3c4, 620,
        0x221e, 620,
        ',', 266,
        '.', 266,
        ':', 266,
        '?', 266,
        0x2218, 266,
        0x25cc, 266,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(612);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(324);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(620);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '\r', 108,
        '"', 724,
        '$', 15,
        '(', 413,
        '/', 803,
        '@', 754,
        '[', 449,
        '_', 513,
        '`', 108,
        'o', 102,
        't', 106,
        '{', 485,
        0xaf, 325,
        0x2682, 296,
        0x3b7, 819,
        0x3c0, 819,
        0x3c4, 819,
        0x221e, 819,
        ',', 267,
        '.', 267,
        ':', 267,
        '?', 267,
        0x2218, 267,
        0x25cc, 267,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(788);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(325);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(355);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '\r', 631,
        '"', 725,
        '#', 631,
        '$', 542,
        '(', 414,
        '/', 804,
        '@', 755,
        '[', 450,
        '_', 514,
        '`', 631,
        'o', 625,
        't', 629,
        '{', 486,
        0xaf, 326,
        0x2682, 297,
        '\t', 631,
        ' ', 631,
        0x3b7, 631,
        0x3c0, 631,
        0x3c4, 631,
        0x221e, 631,
        ',', 268,
        '.', 268,
        ':', 268,
        '?', 268,
        0x2218, 268,
        0x25cc, 268,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(623);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(326);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(631);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '\r', 118,
        '"', 726,
        '$', 17,
        '(', 415,
        '/', 805,
        '@', 756,
        '[', 451,
        ']', 468,
        '_', 515,
        '`', 118,
        'o', 112,
        't', 116,
        '{', 487,
        0xaf, 327,
        0x2682, 298,
        0x3b7, 820,
        0x3c0, 820,
        0x3c4, 820,
        0x221e, 820,
        ',', 269,
        '.', 269,
        ':', 269,
        '?', 269,
        0x2218, 269,
        0x25cc, 269,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(789);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(327);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(357);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '\r', 642,
        '"', 727,
        '#', 642,
        '$', 544,
        '(', 416,
        '/', 806,
        '@', 757,
        '[', 452,
        ']', 469,
        '_', 516,
        '`', 642,
        'o', 636,
        't', 640,
        '{', 488,
        0xaf, 328,
        0x2682, 299,
        '\t', 642,
        ' ', 642,
        0x3b7, 642,
        0x3c0, 642,
        0x3c4, 642,
        0x221e, 642,
        ',', 270,
        '.', 270,
        ':', 270,
        '?', 270,
        0x2218, 270,
        0x25cc, 270,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(634);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(328);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(642);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '\r', 128,
        '"', 728,
        '$', 19,
        '(', 417,
        '@', 758,
        '[', 453,
        ']', 470,
        '_', 517,
        '`', 128,
        'o', 122,
        't', 126,
        '{', 489,
        0xaf, 329,
        0x2682, 300,
        0x3b7, 821,
        0x3c0, 821,
        0x3c4, 821,
        0x221e, 821,
        ',', 271,
        '.', 271,
        ':', 271,
        '?', 271,
        0x2218, 271,
        0x25cc, 271,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(790);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(329);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(359);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '\r', 653,
        '"', 729,
        '#', 653,
        '$', 546,
        '(', 418,
        '@', 759,
        '[', 454,
        ']', 471,
        '_', 518,
        '`', 653,
        'o', 647,
        't', 651,
        '{', 490,
        0xaf, 330,
        0x2682, 301,
        '\t', 653,
        ' ', 653,
        0x3b7, 653,
        0x3c0, 653,
        0x3c4, 653,
        0x221e, 653,
        ',', 272,
        '.', 272,
        ':', 272,
        '?', 272,
        0x2218, 272,
        0x25cc, 272,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(645);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(330);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(653);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '\r', 138,
        '"', 730,
        '$', 21,
        '(', 419,
        ')', 432,
        '@', 760,
        '[', 455,
        '_', 519,
        '`', 138,
        'o', 132,
        't', 136,
        '{', 491,
        0xaf, 331,
        0x2682, 302,
        0x3b7, 822,
        0x3c0, 822,
        0x3c4, 822,
        0x221e, 822,
        ',', 273,
        '.', 273,
        ':', 273,
        '?', 273,
        0x2218, 273,
        0x25cc, 273,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(791);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(331);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(361);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '\r', 664,
        '"', 731,
        '#', 664,
        '$', 548,
        '(', 420,
        ')', 433,
        '@', 761,
        '[', 456,
        '_', 520,
        '`', 664,
        'o', 658,
        't', 662,
        '{', 492,
        0xaf, 332,
        0x2682, 303,
        '\t', 664,
        ' ', 664,
        0x3b7, 664,
        0x3c0, 664,
        0x3c4, 664,
        0x221e, 664,
        ',', 274,
        '.', 274,
        ':', 274,
        '?', 274,
        0x2218, 274,
        0x25cc, 274,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(656);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(332);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '\r', 148,
        '"', 732,
        '$', 23,
        '(', 421,
        '/', 807,
        '@', 762,
        '[', 457,
        '_', 521,
        '`', 148,
        'o', 142,
        't', 146,
        '{', 493,
        '}', 504,
        0xaf, 333,
        0x2682, 304,
        0x3b7, 823,
        0x3c0, 823,
        0x3c4, 823,
        0x221e, 823,
        ',', 275,
        '.', 275,
        ':', 275,
        '?', 275,
        0x2218, 275,
        0x25cc, 275,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(792);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(333);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(363);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '\r', 675,
        '"', 733,
        '#', 675,
        '$', 550,
        '(', 422,
        '/', 808,
        '@', 763,
        '[', 458,
        '_', 522,
        '`', 675,
        'o', 669,
        't', 673,
        '{', 494,
        '}', 505,
        0xaf, 334,
        0x2682, 305,
        '\t', 675,
        ' ', 675,
        0x3b7, 675,
        0x3c0, 675,
        0x3c4, 675,
        0x221e, 675,
        ',', 276,
        '.', 276,
        ':', 276,
        '?', 276,
        0x2218, 276,
        0x25cc, 276,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(667);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(334);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(675);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '\r', 158,
        '"', 734,
        '$', 25,
        '(', 423,
        '@', 764,
        '[', 459,
        '_', 523,
        '`', 158,
        'o', 152,
        't', 156,
        '{', 495,
        '}', 506,
        0xaf, 335,
        0x2682, 306,
        0x3b7, 824,
        0x3c0, 824,
        0x3c4, 824,
        0x221e, 824,
        ',', 277,
        '.', 277,
        ':', 277,
        '?', 277,
        0x2218, 277,
        0x25cc, 277,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(793);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(335);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(365);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '\r', 686,
        '"', 735,
        '#', 686,
        '$', 552,
        '(', 424,
        '@', 765,
        '[', 460,
        '_', 524,
        '`', 686,
        'o', 680,
        't', 684,
        '{', 496,
        '}', 507,
        0xaf, 336,
        0x2682, 307,
        '\t', 686,
        ' ', 686,
        0x3b7, 686,
        0x3c0, 686,
        0x3c4, 686,
        0x221e, 686,
        ',', 278,
        '.', 278,
        ':', 278,
        '?', 278,
        0x2218, 278,
        0x25cc, 278,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(678);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(336);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(686);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '\r', 168,
        '"', 736,
        '$', 27,
        '(', 425,
        ')', 434,
        '/', 809,
        '@', 766,
        '[', 461,
        '_', 525,
        '`', 168,
        'o', 162,
        't', 166,
        '{', 497,
        0xaf, 337,
        0x2682, 308,
        0x3b7, 825,
        0x3c0, 825,
        0x3c4, 825,
        0x221e, 825,
        ',', 279,
        '.', 279,
        ':', 279,
        '?', 279,
        0x2218, 279,
        0x25cc, 279,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(794);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(337);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(367);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '\r', 697,
        '"', 737,
        '#', 697,
        '$', 554,
        '(', 426,
        ')', 435,
        '/', 810,
        '@', 767,
        '[', 462,
        '_', 526,
        '`', 697,
        'o', 691,
        't', 695,
        '{', 498,
        0xaf, 338,
        0x2682, 309,
        '\t', 697,
        ' ', 697,
        0x3b7, 697,
        0x3c0, 697,
        0x3c4, 697,
        0x221e, 697,
        ',', 280,
        '.', 280,
        ':', 280,
        '?', 280,
        0x2218, 280,
        0x25cc, 280,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(689);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(338);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(697);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '"', 738,
        '$', 11,
        '@', 768,
        '`', 187,
        'o', 181,
        't', 185,
        0xaf, 339,
        0x2682, 310,
        0x3b7, 826,
        0x3c0, 826,
        0x3c4, 826,
        0x221e, 826,
        ',', 281,
        '.', 281,
        ':', 281,
        '?', 281,
        0x2218, 281,
        0x25cc, 281,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(795);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(339);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(369);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '"', 739,
        '#', 708,
        '$', 538,
        '@', 769,
        '`', 708,
        'o', 702,
        't', 706,
        0xaf, 340,
        0x2682, 311,
        '\t', 708,
        ' ', 708,
        0x3b7, 708,
        0x3c0, 708,
        0x3c4, 708,
        0x221e, 708,
        ',', 282,
        '.', 282,
        ':', 282,
        '?', 282,
        0x2218, 282,
        0x25cc, 282,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(700);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(340);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(708);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      ADVANCE_MAP(
        '\r', 48,
        '"', 712,
        '$', 1,
        '(', 401,
        ')', 428,
        '/', 801,
        '@', 742,
        '[', 437,
        ']', 464,
        '_', 509,
        '`', 48,
        't', 46,
        '{', 473,
        '}', 500,
        0xaf, 313,
        0x2682, 284,
        0x3b7, 813,
        0x3c0, 813,
        0x3c4, 813,
        0x221e, 813,
        ',', 255,
        '.', 255,
        ':', 255,
        '?', 255,
        0x2218, 255,
        0x25cc, 255,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(782);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(313);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(343);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      ADVANCE_MAP(
        '\r', 565,
        '"', 713,
        '#', 565,
        '$', 528,
        '(', 402,
        ')', 429,
        '/', 802,
        '@', 743,
        '[', 438,
        ']', 465,
        '_', 510,
        '`', 565,
        't', 563,
        '{', 474,
        '}', 501,
        0xaf, 314,
        0x2682, 285,
        '\t', 565,
        ' ', 565,
        0x3b7, 565,
        0x3c0, 565,
        0x3c4, 565,
        0x221e, 565,
        ',', 256,
        '.', 256,
        ':', 256,
        '?', 256,
        0x2218, 256,
        0x25cc, 256,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(557);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(314);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(565);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      ADVANCE_MAP(
        '\r', 58,
        '"', 714,
        '$', 3,
        '(', 403,
        '@', 744,
        '[', 439,
        '`', 58,
        't', 56,
        '{', 475,
        0xaf, 315,
        0x2682, 286,
        0x3b7, 814,
        0x3c0, 814,
        0x3c4, 814,
        0x221e, 814,
        ',', 257,
        '.', 257,
        ':', 257,
        '?', 257,
        0x2218, 257,
        0x25cc, 257,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(783);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(315);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(345);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      ADVANCE_MAP(
        '\r', 576,
        '"', 715,
        '#', 576,
        '$', 530,
        '(', 404,
        '@', 745,
        '[', 440,
        '`', 576,
        't', 574,
        '{', 476,
        0xaf, 316,
        0x2682, 287,
        '\t', 576,
        ' ', 576,
        0x3b7, 576,
        0x3c0, 576,
        0x3c4, 576,
        0x221e, 576,
        ',', 258,
        '.', 258,
        ':', 258,
        '?', 258,
        0x2218, 258,
        0x25cc, 258,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(568);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(316);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(576);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      ADVANCE_MAP(
        '\r', 68,
        '"', 716,
        '$', 5,
        '(', 405,
        '@', 746,
        '[', 441,
        '`', 68,
        't', 66,
        '{', 477,
        '}', 502,
        0xaf, 317,
        0x2682, 288,
        0x3b7, 815,
        0x3c0, 815,
        0x3c4, 815,
        0x221e, 815,
        ',', 259,
        '.', 259,
        ':', 259,
        '?', 259,
        0x2218, 259,
        0x25cc, 259,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(784);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(317);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(347);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      ADVANCE_MAP(
        '\r', 587,
        '"', 717,
        '#', 587,
        '$', 532,
        '(', 406,
        '@', 747,
        '[', 442,
        '`', 587,
        't', 585,
        '{', 478,
        '}', 503,
        0xaf, 318,
        0x2682, 289,
        '\t', 587,
        ' ', 587,
        0x3b7, 587,
        0x3c0, 587,
        0x3c4, 587,
        0x221e, 587,
        ',', 260,
        '.', 260,
        ':', 260,
        '?', 260,
        0x2218, 260,
        0x25cc, 260,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(579);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(318);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(587);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      ADVANCE_MAP(
        '\r', 78,
        '"', 718,
        '$', 7,
        '(', 407,
        '@', 748,
        '[', 443,
        ']', 466,
        '`', 78,
        't', 76,
        '{', 479,
        0xaf, 319,
        0x2682, 290,
        0x3b7, 816,
        0x3c0, 816,
        0x3c4, 816,
        0x221e, 816,
        ',', 261,
        '.', 261,
        ':', 261,
        '?', 261,
        0x2218, 261,
        0x25cc, 261,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(785);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(319);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(349);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      ADVANCE_MAP(
        '\r', 598,
        '"', 719,
        '#', 598,
        '$', 534,
        '(', 408,
        '@', 749,
        '[', 444,
        ']', 467,
        '`', 598,
        't', 596,
        '{', 480,
        0xaf, 320,
        0x2682, 291,
        '\t', 598,
        ' ', 598,
        0x3b7, 598,
        0x3c0, 598,
        0x3c4, 598,
        0x221e, 598,
        ',', 262,
        '.', 262,
        ':', 262,
        '?', 262,
        0x2218, 262,
        0x25cc, 262,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(590);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(320);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(598);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      ADVANCE_MAP(
        '\r', 88,
        '"', 720,
        '$', 9,
        '(', 409,
        ')', 430,
        '@', 750,
        '[', 445,
        '`', 88,
        't', 86,
        '{', 481,
        0xaf, 321,
        0x2682, 292,
        0x3b7, 817,
        0x3c0, 817,
        0x3c4, 817,
        0x221e, 817,
        ',', 263,
        '.', 263,
        ':', 263,
        '?', 263,
        0x2218, 263,
        0x25cc, 263,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(786);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(321);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(351);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      ADVANCE_MAP(
        '\r', 609,
        '"', 721,
        '#', 609,
        '$', 536,
        '(', 410,
        ')', 431,
        '@', 751,
        '[', 446,
        '`', 609,
        't', 607,
        '{', 482,
        0xaf, 322,
        0x2682, 293,
        '\t', 609,
        ' ', 609,
        0x3b7, 609,
        0x3c0, 609,
        0x3c4, 609,
        0x221e, 609,
        ',', 264,
        '.', 264,
        ':', 264,
        '?', 264,
        0x2218, 264,
        0x25cc, 264,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(601);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(322);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(609);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      ADVANCE_MAP(
        '\r', 98,
        '"', 722,
        '$', 13,
        '(', 411,
        '@', 752,
        '[', 447,
        '_', 511,
        '`', 98,
        't', 96,
        '{', 483,
        0xaf, 323,
        0x2682, 294,
        0x3b7, 818,
        0x3c0, 818,
        0x3c4, 818,
        0x221e, 818,
        ',', 265,
        '.', 265,
        ':', 265,
        '?', 265,
        0x2218, 265,
        0x25cc, 265,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(787);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(323);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(353);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      ADVANCE_MAP(
        '\r', 620,
        '"', 723,
        '#', 620,
        '$', 540,
        '(', 412,
        '@', 753,
        '[', 448,
        '_', 512,
        '`', 620,
        't', 618,
        '{', 484,
        0xaf, 324,
        0x2682, 295,
        '\t', 620,
        ' ', 620,
        0x3b7, 620,
        0x3c0, 620,
        0x3c4, 620,
        0x221e, 620,
        ',', 266,
        '.', 266,
        ':', 266,
        '?', 266,
        0x2218, 266,
        0x25cc, 266,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(612);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(324);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(620);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      ADVANCE_MAP(
        '\r', 108,
        '"', 724,
        '$', 15,
        '(', 413,
        '/', 803,
        '@', 754,
        '[', 449,
        '_', 513,
        '`', 108,
        't', 106,
        '{', 485,
        0xaf, 325,
        0x2682, 296,
        0x3b7, 819,
        0x3c0, 819,
        0x3c4, 819,
        0x221e, 819,
        ',', 267,
        '.', 267,
        ':', 267,
        '?', 267,
        0x2218, 267,
        0x25cc, 267,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(788);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(325);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(355);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      ADVANCE_MAP(
        '\r', 631,
        '"', 725,
        '#', 631,
        '$', 542,
        '(', 414,
        '/', 804,
        '@', 755,
        '[', 450,
        '_', 514,
        '`', 631,
        't', 629,
        '{', 486,
        0xaf, 326,
        0x2682, 297,
        '\t', 631,
        ' ', 631,
        0x3b7, 631,
        0x3c0, 631,
        0x3c4, 631,
        0x221e, 631,
        ',', 268,
        '.', 268,
        ':', 268,
        '?', 268,
        0x2218, 268,
        0x25cc, 268,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(623);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(326);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(631);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      ADVANCE_MAP(
        '\r', 118,
        '"', 726,
        '$', 17,
        '(', 415,
        '/', 805,
        '@', 756,
        '[', 451,
        ']', 468,
        '_', 515,
        '`', 118,
        't', 116,
        '{', 487,
        0xaf, 327,
        0x2682, 298,
        0x3b7, 820,
        0x3c0, 820,
        0x3c4, 820,
        0x221e, 820,
        ',', 269,
        '.', 269,
        ':', 269,
        '?', 269,
        0x2218, 269,
        0x25cc, 269,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(789);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(327);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(357);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      ADVANCE_MAP(
        '\r', 642,
        '"', 727,
        '#', 642,
        '$', 544,
        '(', 416,
        '/', 806,
        '@', 757,
        '[', 452,
        ']', 469,
        '_', 516,
        '`', 642,
        't', 640,
        '{', 488,
        0xaf, 328,
        0x2682, 299,
        '\t', 642,
        ' ', 642,
        0x3b7, 642,
        0x3c0, 642,
        0x3c4, 642,
        0x221e, 642,
        ',', 270,
        '.', 270,
        ':', 270,
        '?', 270,
        0x2218, 270,
        0x25cc, 270,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(634);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(328);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(642);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      ADVANCE_MAP(
        '\r', 128,
        '"', 728,
        '$', 19,
        '(', 417,
        '@', 758,
        '[', 453,
        ']', 470,
        '_', 517,
        '`', 128,
        't', 126,
        '{', 489,
        0xaf, 329,
        0x2682, 300,
        0x3b7, 821,
        0x3c0, 821,
        0x3c4, 821,
        0x221e, 821,
        ',', 271,
        '.', 271,
        ':', 271,
        '?', 271,
        0x2218, 271,
        0x25cc, 271,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(790);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(329);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(359);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      ADVANCE_MAP(
        '\r', 653,
        '"', 729,
        '#', 653,
        '$', 546,
        '(', 418,
        '@', 759,
        '[', 454,
        ']', 471,
        '_', 518,
        '`', 653,
        't', 651,
        '{', 490,
        0xaf, 330,
        0x2682, 301,
        '\t', 653,
        ' ', 653,
        0x3b7, 653,
        0x3c0, 653,
        0x3c4, 653,
        0x221e, 653,
        ',', 272,
        '.', 272,
        ':', 272,
        '?', 272,
        0x2218, 272,
        0x25cc, 272,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(645);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(330);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(653);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      ADVANCE_MAP(
        '\r', 138,
        '"', 730,
        '$', 21,
        '(', 419,
        ')', 432,
        '@', 760,
        '[', 455,
        '_', 519,
        '`', 138,
        't', 136,
        '{', 491,
        0xaf, 331,
        0x2682, 302,
        0x3b7, 822,
        0x3c0, 822,
        0x3c4, 822,
        0x221e, 822,
        ',', 273,
        '.', 273,
        ':', 273,
        '?', 273,
        0x2218, 273,
        0x25cc, 273,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(791);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(331);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(361);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      ADVANCE_MAP(
        '\r', 664,
        '"', 731,
        '#', 664,
        '$', 548,
        '(', 420,
        ')', 433,
        '@', 761,
        '[', 456,
        '_', 520,
        '`', 664,
        't', 662,
        '{', 492,
        0xaf, 332,
        0x2682, 303,
        '\t', 664,
        ' ', 664,
        0x3b7, 664,
        0x3c0, 664,
        0x3c4, 664,
        0x221e, 664,
        ',', 274,
        '.', 274,
        ':', 274,
        '?', 274,
        0x2218, 274,
        0x25cc, 274,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(656);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(332);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      ADVANCE_MAP(
        '\r', 148,
        '"', 732,
        '$', 23,
        '(', 421,
        '/', 807,
        '@', 762,
        '[', 457,
        '_', 521,
        '`', 148,
        't', 146,
        '{', 493,
        '}', 504,
        0xaf, 333,
        0x2682, 304,
        0x3b7, 823,
        0x3c0, 823,
        0x3c4, 823,
        0x221e, 823,
        ',', 275,
        '.', 275,
        ':', 275,
        '?', 275,
        0x2218, 275,
        0x25cc, 275,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(792);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(333);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(363);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      ADVANCE_MAP(
        '\r', 675,
        '"', 733,
        '#', 675,
        '$', 550,
        '(', 422,
        '/', 808,
        '@', 763,
        '[', 458,
        '_', 522,
        '`', 675,
        't', 673,
        '{', 494,
        '}', 505,
        0xaf, 334,
        0x2682, 305,
        '\t', 675,
        ' ', 675,
        0x3b7, 675,
        0x3c0, 675,
        0x3c4, 675,
        0x221e, 675,
        ',', 276,
        '.', 276,
        ':', 276,
        '?', 276,
        0x2218, 276,
        0x25cc, 276,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(667);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(334);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(675);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      ADVANCE_MAP(
        '\r', 158,
        '"', 734,
        '$', 25,
        '(', 423,
        '@', 764,
        '[', 459,
        '_', 523,
        '`', 158,
        't', 156,
        '{', 495,
        '}', 506,
        0xaf, 335,
        0x2682, 306,
        0x3b7, 824,
        0x3c0, 824,
        0x3c4, 824,
        0x221e, 824,
        ',', 277,
        '.', 277,
        ':', 277,
        '?', 277,
        0x2218, 277,
        0x25cc, 277,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(793);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(335);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(365);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      ADVANCE_MAP(
        '\r', 686,
        '"', 735,
        '#', 686,
        '$', 552,
        '(', 424,
        '@', 765,
        '[', 460,
        '_', 524,
        '`', 686,
        't', 684,
        '{', 496,
        '}', 507,
        0xaf, 336,
        0x2682, 307,
        '\t', 686,
        ' ', 686,
        0x3b7, 686,
        0x3c0, 686,
        0x3c4, 686,
        0x221e, 686,
        ',', 278,
        '.', 278,
        ':', 278,
        '?', 278,
        0x2218, 278,
        0x25cc, 278,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(678);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(336);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(686);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      ADVANCE_MAP(
        '\r', 168,
        '"', 736,
        '$', 27,
        '(', 425,
        ')', 434,
        '/', 809,
        '@', 766,
        '[', 461,
        '_', 525,
        '`', 168,
        't', 166,
        '{', 497,
        0xaf, 337,
        0x2682, 308,
        0x3b7, 825,
        0x3c0, 825,
        0x3c4, 825,
        0x221e, 825,
        ',', 279,
        '.', 279,
        ':', 279,
        '?', 279,
        0x2218, 279,
        0x25cc, 279,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(794);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(337);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(367);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      ADVANCE_MAP(
        '\r', 697,
        '"', 737,
        '#', 697,
        '$', 554,
        '(', 426,
        ')', 435,
        '/', 810,
        '@', 767,
        '[', 462,
        '_', 526,
        '`', 697,
        't', 695,
        '{', 498,
        0xaf, 338,
        0x2682, 309,
        '\t', 697,
        ' ', 697,
        0x3b7, 697,
        0x3c0, 697,
        0x3c4, 697,
        0x221e, 697,
        ',', 280,
        '.', 280,
        ':', 280,
        '?', 280,
        0x2218, 280,
        0x25cc, 280,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(689);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(338);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(697);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      ADVANCE_MAP(
        '\r', 48,
        '"', 712,
        '$', 1,
        '(', 401,
        ')', 428,
        '/', 801,
        '@', 742,
        '[', 437,
        ']', 464,
        '_', 509,
        '`', 48,
        't', 46,
        '{', 473,
        '}', 500,
        0xaf, 313,
        0x2682, 284,
        0x3b7, 813,
        0x3c0, 813,
        0x3c4, 813,
        0x221e, 813,
        ',', 255,
        '.', 255,
        ':', 255,
        '?', 255,
        0x2218, 255,
        0x25cc, 255,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(782);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(313);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(343);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      ADVANCE_MAP(
        '\r', 565,
        '"', 713,
        '#', 565,
        '$', 528,
        '(', 402,
        ')', 429,
        '/', 802,
        '@', 743,
        '[', 438,
        ']', 465,
        '_', 510,
        '`', 565,
        't', 563,
        '{', 474,
        '}', 501,
        0xaf, 314,
        0x2682, 285,
        '\t', 565,
        ' ', 565,
        0x3b7, 565,
        0x3c0, 565,
        0x3c4, 565,
        0x221e, 565,
        ',', 256,
        '.', 256,
        ':', 256,
        '?', 256,
        0x2218, 256,
        0x25cc, 256,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(557);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(314);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(565);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      ADVANCE_MAP(
        '\r', 88,
        '"', 720,
        '$', 9,
        '(', 409,
        ')', 430,
        '@', 750,
        '[', 445,
        '`', 88,
        't', 86,
        '{', 481,
        0xaf, 321,
        0x2682, 292,
        0x3b7, 817,
        0x3c0, 817,
        0x3c4, 817,
        0x221e, 817,
        ',', 263,
        '.', 263,
        ':', 263,
        '?', 263,
        0x2218, 263,
        0x25cc, 263,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(786);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(321);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(351);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      ADVANCE_MAP(
        '\r', 609,
        '"', 721,
        '#', 609,
        '$', 536,
        '(', 410,
        ')', 431,
        '@', 751,
        '[', 446,
        '`', 609,
        't', 607,
        '{', 482,
        0xaf, 322,
        0x2682, 293,
        '\t', 609,
        ' ', 609,
        0x3b7, 609,
        0x3c0, 609,
        0x3c4, 609,
        0x221e, 609,
        ',', 264,
        '.', 264,
        ':', 264,
        '?', 264,
        0x2218, 264,
        0x25cc, 264,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(601);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(322);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(609);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      ADVANCE_MAP(
        '\r', 138,
        '"', 730,
        '$', 21,
        '(', 419,
        ')', 432,
        '@', 760,
        '[', 455,
        '_', 519,
        '`', 138,
        't', 136,
        '{', 491,
        0xaf, 331,
        0x2682, 302,
        0x3b7, 822,
        0x3c0, 822,
        0x3c4, 822,
        0x221e, 822,
        ',', 273,
        '.', 273,
        ':', 273,
        '?', 273,
        0x2218, 273,
        0x25cc, 273,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(791);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(331);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(361);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      ADVANCE_MAP(
        '\r', 664,
        '"', 731,
        '#', 664,
        '$', 548,
        '(', 420,
        ')', 433,
        '@', 761,
        '[', 456,
        '_', 520,
        '`', 664,
        't', 662,
        '{', 492,
        0xaf, 332,
        0x2682, 303,
        '\t', 664,
        ' ', 664,
        0x3b7, 664,
        0x3c0, 664,
        0x3c4, 664,
        0x221e, 664,
        ',', 274,
        '.', 274,
        ':', 274,
        '?', 274,
        0x2218, 274,
        0x25cc, 274,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(656);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(332);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      ADVANCE_MAP(
        '\r', 168,
        '"', 736,
        '$', 27,
        '(', 425,
        ')', 434,
        '/', 809,
        '@', 766,
        '[', 461,
        '_', 525,
        '`', 168,
        't', 166,
        '{', 497,
        0xaf, 337,
        0x2682, 308,
        0x3b7, 825,
        0x3c0, 825,
        0x3c4, 825,
        0x221e, 825,
        ',', 279,
        '.', 279,
        ':', 279,
        '?', 279,
        0x2218, 279,
        0x25cc, 279,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(794);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(337);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(367);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      ADVANCE_MAP(
        '\r', 697,
        '"', 737,
        '#', 697,
        '$', 554,
        '(', 426,
        ')', 435,
        '/', 810,
        '@', 767,
        '[', 462,
        '_', 526,
        '`', 697,
        't', 695,
        '{', 498,
        0xaf, 338,
        0x2682, 309,
        '\t', 697,
        ' ', 697,
        0x3b7, 697,
        0x3c0, 697,
        0x3c4, 697,
        0x221e, 697,
        ',', 280,
        '.', 280,
        ':', 280,
        '?', 280,
        0x2218, 280,
        0x25cc, 280,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(689);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(338);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(697);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      ADVANCE_MAP(
        '\r', 48,
        '"', 712,
        '$', 1,
        '(', 401,
        ')', 428,
        '/', 801,
        '@', 742,
        '[', 437,
        ']', 464,
        '_', 509,
        '`', 48,
        't', 46,
        '{', 473,
        '}', 500,
        0xaf, 313,
        0x2682, 284,
        0x3b7, 813,
        0x3c0, 813,
        0x3c4, 813,
        0x221e, 813,
        ',', 255,
        '.', 255,
        ':', 255,
        '?', 255,
        0x2218, 255,
        0x25cc, 255,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(782);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(313);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(343);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      ADVANCE_MAP(
        '\r', 565,
        '"', 713,
        '#', 565,
        '$', 528,
        '(', 402,
        ')', 429,
        '/', 802,
        '@', 743,
        '[', 438,
        ']', 465,
        '_', 510,
        '`', 565,
        't', 563,
        '{', 474,
        '}', 501,
        0xaf, 314,
        0x2682, 285,
        '\t', 565,
        ' ', 565,
        0x3b7, 565,
        0x3c0, 565,
        0x3c4, 565,
        0x221e, 565,
        ',', 256,
        '.', 256,
        ':', 256,
        '?', 256,
        0x2218, 256,
        0x25cc, 256,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(557);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(314);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(565);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      ADVANCE_MAP(
        '\r', 58,
        '"', 714,
        '$', 3,
        '(', 403,
        '@', 744,
        '[', 439,
        '`', 58,
        't', 56,
        '{', 475,
        0xaf, 315,
        0x2682, 286,
        0x3b7, 814,
        0x3c0, 814,
        0x3c4, 814,
        0x221e, 814,
        ',', 257,
        '.', 257,
        ':', 257,
        '?', 257,
        0x2218, 257,
        0x25cc, 257,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(783);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(315);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(345);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      ADVANCE_MAP(
        '\r', 576,
        '"', 715,
        '#', 576,
        '$', 530,
        '(', 404,
        '@', 745,
        '[', 440,
        '`', 576,
        't', 574,
        '{', 476,
        0xaf, 316,
        0x2682, 287,
        '\t', 576,
        ' ', 576,
        0x3b7, 576,
        0x3c0, 576,
        0x3c4, 576,
        0x221e, 576,
        ',', 258,
        '.', 258,
        ':', 258,
        '?', 258,
        0x2218, 258,
        0x25cc, 258,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(568);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(316);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(576);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      ADVANCE_MAP(
        '\r', 68,
        '"', 716,
        '$', 5,
        '(', 405,
        '@', 746,
        '[', 441,
        '`', 68,
        't', 66,
        '{', 477,
        '}', 502,
        0xaf, 317,
        0x2682, 288,
        0x3b7, 815,
        0x3c0, 815,
        0x3c4, 815,
        0x221e, 815,
        ',', 259,
        '.', 259,
        ':', 259,
        '?', 259,
        0x2218, 259,
        0x25cc, 259,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(784);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(317);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(347);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      ADVANCE_MAP(
        '\r', 587,
        '"', 717,
        '#', 587,
        '$', 532,
        '(', 406,
        '@', 747,
        '[', 442,
        '`', 587,
        't', 585,
        '{', 478,
        '}', 503,
        0xaf, 318,
        0x2682, 289,
        '\t', 587,
        ' ', 587,
        0x3b7, 587,
        0x3c0, 587,
        0x3c4, 587,
        0x221e, 587,
        ',', 260,
        '.', 260,
        ':', 260,
        '?', 260,
        0x2218, 260,
        0x25cc, 260,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(579);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(318);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(587);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      ADVANCE_MAP(
        '\r', 78,
        '"', 718,
        '$', 7,
        '(', 407,
        '@', 748,
        '[', 443,
        ']', 466,
        '`', 78,
        't', 76,
        '{', 479,
        0xaf, 319,
        0x2682, 290,
        0x3b7, 816,
        0x3c0, 816,
        0x3c4, 816,
        0x221e, 816,
        ',', 261,
        '.', 261,
        ':', 261,
        '?', 261,
        0x2218, 261,
        0x25cc, 261,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(785);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(319);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(349);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      ADVANCE_MAP(
        '\r', 598,
        '"', 719,
        '#', 598,
        '$', 534,
        '(', 408,
        '@', 749,
        '[', 444,
        ']', 467,
        '`', 598,
        't', 596,
        '{', 480,
        0xaf, 320,
        0x2682, 291,
        '\t', 598,
        ' ', 598,
        0x3b7, 598,
        0x3c0, 598,
        0x3c4, 598,
        0x221e, 598,
        ',', 262,
        '.', 262,
        ':', 262,
        '?', 262,
        0x2218, 262,
        0x25cc, 262,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(590);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(320);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(598);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      ADVANCE_MAP(
        '\r', 88,
        '"', 720,
        '$', 9,
        '(', 409,
        ')', 430,
        '@', 750,
        '[', 445,
        '`', 88,
        't', 86,
        '{', 481,
        0xaf, 321,
        0x2682, 292,
        0x3b7, 817,
        0x3c0, 817,
        0x3c4, 817,
        0x221e, 817,
        ',', 263,
        '.', 263,
        ':', 263,
        '?', 263,
        0x2218, 263,
        0x25cc, 263,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(786);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(321);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(351);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      ADVANCE_MAP(
        '\r', 609,
        '"', 721,
        '#', 609,
        '$', 536,
        '(', 410,
        ')', 431,
        '@', 751,
        '[', 446,
        '`', 609,
        't', 607,
        '{', 482,
        0xaf, 322,
        0x2682, 293,
        '\t', 609,
        ' ', 609,
        0x3b7, 609,
        0x3c0, 609,
        0x3c4, 609,
        0x221e, 609,
        ',', 264,
        '.', 264,
        ':', 264,
        '?', 264,
        0x2218, 264,
        0x25cc, 264,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(601);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(322);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(609);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      ADVANCE_MAP(
        '\r', 98,
        '"', 722,
        '$', 13,
        '(', 411,
        '@', 752,
        '[', 447,
        '_', 511,
        '`', 98,
        't', 96,
        '{', 483,
        0xaf, 323,
        0x2682, 294,
        0x3b7, 818,
        0x3c0, 818,
        0x3c4, 818,
        0x221e, 818,
        ',', 265,
        '.', 265,
        ':', 265,
        '?', 265,
        0x2218, 265,
        0x25cc, 265,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(787);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(323);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(353);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      ADVANCE_MAP(
        '\r', 620,
        '"', 723,
        '#', 620,
        '$', 540,
        '(', 412,
        '@', 753,
        '[', 448,
        '_', 512,
        '`', 620,
        't', 618,
        '{', 484,
        0xaf, 324,
        0x2682, 295,
        '\t', 620,
        ' ', 620,
        0x3b7, 620,
        0x3c0, 620,
        0x3c4, 620,
        0x221e, 620,
        ',', 266,
        '.', 266,
        ':', 266,
        '?', 266,
        0x2218, 266,
        0x25cc, 266,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(612);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(324);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(620);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      ADVANCE_MAP(
        '\r', 108,
        '"', 724,
        '$', 15,
        '(', 413,
        '/', 803,
        '@', 754,
        '[', 449,
        '_', 513,
        '`', 108,
        't', 106,
        '{', 485,
        0xaf, 325,
        0x2682, 296,
        0x3b7, 819,
        0x3c0, 819,
        0x3c4, 819,
        0x221e, 819,
        ',', 267,
        '.', 267,
        ':', 267,
        '?', 267,
        0x2218, 267,
        0x25cc, 267,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(788);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(325);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(355);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      ADVANCE_MAP(
        '\r', 631,
        '"', 725,
        '#', 631,
        '$', 542,
        '(', 414,
        '/', 804,
        '@', 755,
        '[', 450,
        '_', 514,
        '`', 631,
        't', 629,
        '{', 486,
        0xaf, 326,
        0x2682, 297,
        '\t', 631,
        ' ', 631,
        0x3b7, 631,
        0x3c0, 631,
        0x3c4, 631,
        0x221e, 631,
        ',', 268,
        '.', 268,
        ':', 268,
        '?', 268,
        0x2218, 268,
        0x25cc, 268,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(623);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(326);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(631);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      ADVANCE_MAP(
        '\r', 118,
        '"', 726,
        '$', 17,
        '(', 415,
        '/', 805,
        '@', 756,
        '[', 451,
        ']', 468,
        '_', 515,
        '`', 118,
        't', 116,
        '{', 487,
        0xaf, 327,
        0x2682, 298,
        0x3b7, 820,
        0x3c0, 820,
        0x3c4, 820,
        0x221e, 820,
        ',', 269,
        '.', 269,
        ':', 269,
        '?', 269,
        0x2218, 269,
        0x25cc, 269,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(789);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(327);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(357);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      ADVANCE_MAP(
        '\r', 642,
        '"', 727,
        '#', 642,
        '$', 544,
        '(', 416,
        '/', 806,
        '@', 757,
        '[', 452,
        ']', 469,
        '_', 516,
        '`', 642,
        't', 640,
        '{', 488,
        0xaf, 328,
        0x2682, 299,
        '\t', 642,
        ' ', 642,
        0x3b7, 642,
        0x3c0, 642,
        0x3c4, 642,
        0x221e, 642,
        ',', 270,
        '.', 270,
        ':', 270,
        '?', 270,
        0x2218, 270,
        0x25cc, 270,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(634);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(328);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(642);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      ADVANCE_MAP(
        '\r', 128,
        '"', 728,
        '$', 19,
        '(', 417,
        '@', 758,
        '[', 453,
        ']', 470,
        '_', 517,
        '`', 128,
        't', 126,
        '{', 489,
        0xaf, 329,
        0x2682, 300,
        0x3b7, 821,
        0x3c0, 821,
        0x3c4, 821,
        0x221e, 821,
        ',', 271,
        '.', 271,
        ':', 271,
        '?', 271,
        0x2218, 271,
        0x25cc, 271,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(790);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(329);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(359);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      ADVANCE_MAP(
        '\r', 653,
        '"', 729,
        '#', 653,
        '$', 546,
        '(', 418,
        '@', 759,
        '[', 454,
        ']', 471,
        '_', 518,
        '`', 653,
        't', 651,
        '{', 490,
        0xaf, 330,
        0x2682, 301,
        '\t', 653,
        ' ', 653,
        0x3b7, 653,
        0x3c0, 653,
        0x3c4, 653,
        0x221e, 653,
        ',', 272,
        '.', 272,
        ':', 272,
        '?', 272,
        0x2218, 272,
        0x25cc, 272,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(645);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(330);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(653);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      ADVANCE_MAP(
        '\r', 138,
        '"', 730,
        '$', 21,
        '(', 419,
        ')', 432,
        '@', 760,
        '[', 455,
        '_', 519,
        '`', 138,
        't', 136,
        '{', 491,
        0xaf, 331,
        0x2682, 302,
        0x3b7, 822,
        0x3c0, 822,
        0x3c4, 822,
        0x221e, 822,
        ',', 273,
        '.', 273,
        ':', 273,
        '?', 273,
        0x2218, 273,
        0x25cc, 273,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(791);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(331);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(361);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      ADVANCE_MAP(
        '\r', 664,
        '"', 731,
        '#', 664,
        '$', 548,
        '(', 420,
        ')', 433,
        '@', 761,
        '[', 456,
        '_', 520,
        '`', 664,
        't', 662,
        '{', 492,
        0xaf, 332,
        0x2682, 303,
        '\t', 664,
        ' ', 664,
        0x3b7, 664,
        0x3c0, 664,
        0x3c4, 664,
        0x221e, 664,
        ',', 274,
        '.', 274,
        ':', 274,
        '?', 274,
        0x2218, 274,
        0x25cc, 274,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(656);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(332);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      ADVANCE_MAP(
        '\r', 148,
        '"', 732,
        '$', 23,
        '(', 421,
        '/', 807,
        '@', 762,
        '[', 457,
        '_', 521,
        '`', 148,
        't', 146,
        '{', 493,
        '}', 504,
        0xaf, 333,
        0x2682, 304,
        0x3b7, 823,
        0x3c0, 823,
        0x3c4, 823,
        0x221e, 823,
        ',', 275,
        '.', 275,
        ':', 275,
        '?', 275,
        0x2218, 275,
        0x25cc, 275,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(792);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(333);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(363);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      ADVANCE_MAP(
        '\r', 675,
        '"', 733,
        '#', 675,
        '$', 550,
        '(', 422,
        '/', 808,
        '@', 763,
        '[', 458,
        '_', 522,
        '`', 675,
        't', 673,
        '{', 494,
        '}', 505,
        0xaf, 334,
        0x2682, 305,
        '\t', 675,
        ' ', 675,
        0x3b7, 675,
        0x3c0, 675,
        0x3c4, 675,
        0x221e, 675,
        ',', 276,
        '.', 276,
        ':', 276,
        '?', 276,
        0x2218, 276,
        0x25cc, 276,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(667);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(334);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(675);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      ADVANCE_MAP(
        '\r', 158,
        '"', 734,
        '$', 25,
        '(', 423,
        '@', 764,
        '[', 459,
        '_', 523,
        '`', 158,
        't', 156,
        '{', 495,
        '}', 506,
        0xaf, 335,
        0x2682, 306,
        0x3b7, 824,
        0x3c0, 824,
        0x3c4, 824,
        0x221e, 824,
        ',', 277,
        '.', 277,
        ':', 277,
        '?', 277,
        0x2218, 277,
        0x25cc, 277,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(793);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(335);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(365);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      ADVANCE_MAP(
        '\r', 686,
        '"', 735,
        '#', 686,
        '$', 552,
        '(', 424,
        '@', 765,
        '[', 460,
        '_', 524,
        '`', 686,
        't', 684,
        '{', 496,
        '}', 507,
        0xaf, 336,
        0x2682, 307,
        '\t', 686,
        ' ', 686,
        0x3b7, 686,
        0x3c0, 686,
        0x3c4, 686,
        0x221e, 686,
        ',', 278,
        '.', 278,
        ':', 278,
        '?', 278,
        0x2218, 278,
        0x25cc, 278,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(678);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(336);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(686);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      ADVANCE_MAP(
        '\r', 168,
        '"', 736,
        '$', 27,
        '(', 425,
        ')', 434,
        '/', 809,
        '@', 766,
        '[', 461,
        '_', 525,
        '`', 168,
        't', 166,
        '{', 497,
        0xaf, 337,
        0x2682, 308,
        0x3b7, 825,
        0x3c0, 825,
        0x3c4, 825,
        0x221e, 825,
        ',', 279,
        '.', 279,
        ':', 279,
        '?', 279,
        0x2218, 279,
        0x25cc, 279,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(794);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(337);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(367);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      ADVANCE_MAP(
        '\r', 697,
        '"', 737,
        '#', 697,
        '$', 554,
        '(', 426,
        ')', 435,
        '/', 810,
        '@', 767,
        '[', 462,
        '_', 526,
        '`', 697,
        't', 695,
        '{', 498,
        0xaf, 338,
        0x2682, 309,
        '\t', 697,
        ' ', 697,
        0x3b7, 697,
        0x3c0, 697,
        0x3c4, 697,
        0x221e, 697,
        ',', 280,
        '.', 280,
        ':', 280,
        '?', 280,
        0x2218, 280,
        0x25cc, 280,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(689);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(338);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(697);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      ADVANCE_MAP(
        '\r', 48,
        '"', 712,
        '$', 1,
        '(', 401,
        ')', 428,
        '/', 801,
        '@', 742,
        '[', 437,
        ']', 464,
        '_', 509,
        '`', 48,
        't', 46,
        '{', 473,
        '}', 500,
        0xaf, 313,
        0x2682, 284,
        0x3b7, 813,
        0x3c0, 813,
        0x3c4, 813,
        0x221e, 813,
        ',', 255,
        '.', 255,
        ':', 255,
        '?', 255,
        0x2218, 255,
        0x25cc, 255,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(782);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(313);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(343);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      ADVANCE_MAP(
        '\r', 565,
        '"', 713,
        '#', 565,
        '$', 528,
        '(', 402,
        ')', 429,
        '/', 802,
        '@', 743,
        '[', 438,
        ']', 465,
        '_', 510,
        '`', 565,
        't', 563,
        '{', 474,
        '}', 501,
        0xaf, 314,
        0x2682, 285,
        '\t', 565,
        ' ', 565,
        0x3b7, 565,
        0x3c0, 565,
        0x3c4, 565,
        0x221e, 565,
        ',', 256,
        '.', 256,
        ':', 256,
        '?', 256,
        0x2218, 256,
        0x25cc, 256,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(557);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(314);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(565);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      ADVANCE_MAP(
        '\r', 78,
        '"', 718,
        '$', 7,
        '(', 407,
        '@', 748,
        '[', 443,
        ']', 466,
        '`', 78,
        't', 76,
        '{', 479,
        0xaf, 319,
        0x2682, 290,
        0x3b7, 816,
        0x3c0, 816,
        0x3c4, 816,
        0x221e, 816,
        ',', 261,
        '.', 261,
        ':', 261,
        '?', 261,
        0x2218, 261,
        0x25cc, 261,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(785);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(319);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(349);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      ADVANCE_MAP(
        '\r', 598,
        '"', 719,
        '#', 598,
        '$', 534,
        '(', 408,
        '@', 749,
        '[', 444,
        ']', 467,
        '`', 598,
        't', 596,
        '{', 480,
        0xaf, 320,
        0x2682, 291,
        '\t', 598,
        ' ', 598,
        0x3b7, 598,
        0x3c0, 598,
        0x3c4, 598,
        0x221e, 598,
        ',', 262,
        '.', 262,
        ':', 262,
        '?', 262,
        0x2218, 262,
        0x25cc, 262,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(590);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(320);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(598);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      ADVANCE_MAP(
        '\r', 118,
        '"', 726,
        '$', 17,
        '(', 415,
        '/', 805,
        '@', 756,
        '[', 451,
        ']', 468,
        '_', 515,
        '`', 118,
        't', 116,
        '{', 487,
        0xaf, 327,
        0x2682, 298,
        0x3b7, 820,
        0x3c0, 820,
        0x3c4, 820,
        0x221e, 820,
        ',', 269,
        '.', 269,
        ':', 269,
        '?', 269,
        0x2218, 269,
        0x25cc, 269,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(789);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(327);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(357);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      ADVANCE_MAP(
        '\r', 642,
        '"', 727,
        '#', 642,
        '$', 544,
        '(', 416,
        '/', 806,
        '@', 757,
        '[', 452,
        ']', 469,
        '_', 516,
        '`', 642,
        't', 640,
        '{', 488,
        0xaf, 328,
        0x2682, 299,
        '\t', 642,
        ' ', 642,
        0x3b7, 642,
        0x3c0, 642,
        0x3c4, 642,
        0x221e, 642,
        ',', 270,
        '.', 270,
        ':', 270,
        '?', 270,
        0x2218, 270,
        0x25cc, 270,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(634);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(328);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(642);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      ADVANCE_MAP(
        '\r', 128,
        '"', 728,
        '$', 19,
        '(', 417,
        '@', 758,
        '[', 453,
        ']', 470,
        '_', 517,
        '`', 128,
        't', 126,
        '{', 489,
        0xaf, 329,
        0x2682, 300,
        0x3b7, 821,
        0x3c0, 821,
        0x3c4, 821,
        0x221e, 821,
        ',', 271,
        '.', 271,
        ':', 271,
        '?', 271,
        0x2218, 271,
        0x25cc, 271,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(790);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(329);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(359);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      ADVANCE_MAP(
        '\r', 653,
        '"', 729,
        '#', 653,
        '$', 546,
        '(', 418,
        '@', 759,
        '[', 454,
        ']', 471,
        '_', 518,
        '`', 653,
        't', 651,
        '{', 490,
        0xaf, 330,
        0x2682, 301,
        '\t', 653,
        ' ', 653,
        0x3b7, 653,
        0x3c0, 653,
        0x3c4, 653,
        0x221e, 653,
        ',', 272,
        '.', 272,
        ':', 272,
        '?', 272,
        0x2218, 272,
        0x25cc, 272,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(645);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(330);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(653);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      ADVANCE_MAP(
        '\r', 48,
        '"', 712,
        '$', 1,
        '(', 401,
        ')', 428,
        '/', 801,
        '@', 742,
        '[', 437,
        ']', 464,
        '_', 509,
        '`', 48,
        't', 46,
        '{', 473,
        '}', 500,
        0xaf, 313,
        0x2682, 284,
        0x3b7, 813,
        0x3c0, 813,
        0x3c4, 813,
        0x221e, 813,
        ',', 255,
        '.', 255,
        ':', 255,
        '?', 255,
        0x2218, 255,
        0x25cc, 255,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(782);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(313);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(343);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      ADVANCE_MAP(
        '\r', 565,
        '"', 713,
        '#', 565,
        '$', 528,
        '(', 402,
        ')', 429,
        '/', 802,
        '@', 743,
        '[', 438,
        ']', 465,
        '_', 510,
        '`', 565,
        't', 563,
        '{', 474,
        '}', 501,
        0xaf, 314,
        0x2682, 285,
        '\t', 565,
        ' ', 565,
        0x3b7, 565,
        0x3c0, 565,
        0x3c4, 565,
        0x221e, 565,
        ',', 256,
        '.', 256,
        ':', 256,
        '?', 256,
        0x2218, 256,
        0x25cc, 256,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(557);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(314);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(565);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      ADVANCE_MAP(
        '\r', 58,
        '"', 714,
        '$', 3,
        '(', 403,
        '@', 744,
        '[', 439,
        '`', 58,
        't', 56,
        '{', 475,
        0xaf, 315,
        0x2682, 286,
        0x3b7, 814,
        0x3c0, 814,
        0x3c4, 814,
        0x221e, 814,
        ',', 257,
        '.', 257,
        ':', 257,
        '?', 257,
        0x2218, 257,
        0x25cc, 257,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(783);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(315);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(345);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      ADVANCE_MAP(
        '\r', 576,
        '"', 715,
        '#', 576,
        '$', 530,
        '(', 404,
        '@', 745,
        '[', 440,
        '`', 576,
        't', 574,
        '{', 476,
        0xaf, 316,
        0x2682, 287,
        '\t', 576,
        ' ', 576,
        0x3b7, 576,
        0x3c0, 576,
        0x3c4, 576,
        0x221e, 576,
        ',', 258,
        '.', 258,
        ':', 258,
        '?', 258,
        0x2218, 258,
        0x25cc, 258,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(568);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(316);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(576);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      ADVANCE_MAP(
        '\r', 68,
        '"', 716,
        '$', 5,
        '(', 405,
        '@', 746,
        '[', 441,
        '`', 68,
        't', 66,
        '{', 477,
        '}', 502,
        0xaf, 317,
        0x2682, 288,
        0x3b7, 815,
        0x3c0, 815,
        0x3c4, 815,
        0x221e, 815,
        ',', 259,
        '.', 259,
        ':', 259,
        '?', 259,
        0x2218, 259,
        0x25cc, 259,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(784);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(317);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(347);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      ADVANCE_MAP(
        '\r', 587,
        '"', 717,
        '#', 587,
        '$', 532,
        '(', 406,
        '@', 747,
        '[', 442,
        '`', 587,
        't', 585,
        '{', 478,
        '}', 503,
        0xaf, 318,
        0x2682, 289,
        '\t', 587,
        ' ', 587,
        0x3b7, 587,
        0x3c0, 587,
        0x3c4, 587,
        0x221e, 587,
        ',', 260,
        '.', 260,
        ':', 260,
        '?', 260,
        0x2218, 260,
        0x25cc, 260,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(579);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(318);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(587);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      ADVANCE_MAP(
        '\r', 78,
        '"', 718,
        '$', 7,
        '(', 407,
        '@', 748,
        '[', 443,
        ']', 466,
        '`', 78,
        't', 76,
        '{', 479,
        0xaf, 319,
        0x2682, 290,
        0x3b7, 816,
        0x3c0, 816,
        0x3c4, 816,
        0x221e, 816,
        ',', 261,
        '.', 261,
        ':', 261,
        '?', 261,
        0x2218, 261,
        0x25cc, 261,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(785);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(319);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(349);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      ADVANCE_MAP(
        '\r', 598,
        '"', 719,
        '#', 598,
        '$', 534,
        '(', 408,
        '@', 749,
        '[', 444,
        ']', 467,
        '`', 598,
        't', 596,
        '{', 480,
        0xaf, 320,
        0x2682, 291,
        '\t', 598,
        ' ', 598,
        0x3b7, 598,
        0x3c0, 598,
        0x3c4, 598,
        0x221e, 598,
        ',', 262,
        '.', 262,
        ':', 262,
        '?', 262,
        0x2218, 262,
        0x25cc, 262,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(590);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(320);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(598);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      ADVANCE_MAP(
        '\r', 88,
        '"', 720,
        '$', 9,
        '(', 409,
        ')', 430,
        '@', 750,
        '[', 445,
        '`', 88,
        't', 86,
        '{', 481,
        0xaf, 321,
        0x2682, 292,
        0x3b7, 817,
        0x3c0, 817,
        0x3c4, 817,
        0x221e, 817,
        ',', 263,
        '.', 263,
        ':', 263,
        '?', 263,
        0x2218, 263,
        0x25cc, 263,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(786);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(321);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(351);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      ADVANCE_MAP(
        '\r', 609,
        '"', 721,
        '#', 609,
        '$', 536,
        '(', 410,
        ')', 431,
        '@', 751,
        '[', 446,
        '`', 609,
        't', 607,
        '{', 482,
        0xaf, 322,
        0x2682, 293,
        '\t', 609,
        ' ', 609,
        0x3b7, 609,
        0x3c0, 609,
        0x3c4, 609,
        0x221e, 609,
        ',', 264,
        '.', 264,
        ':', 264,
        '?', 264,
        0x2218, 264,
        0x25cc, 264,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(601);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(322);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(609);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      ADVANCE_MAP(
        '\r', 98,
        '"', 722,
        '$', 13,
        '(', 411,
        '@', 752,
        '[', 447,
        '_', 511,
        '`', 98,
        't', 96,
        '{', 483,
        0xaf, 323,
        0x2682, 294,
        0x3b7, 818,
        0x3c0, 818,
        0x3c4, 818,
        0x221e, 818,
        ',', 265,
        '.', 265,
        ':', 265,
        '?', 265,
        0x2218, 265,
        0x25cc, 265,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(787);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(323);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(353);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      ADVANCE_MAP(
        '\r', 620,
        '"', 723,
        '#', 620,
        '$', 540,
        '(', 412,
        '@', 753,
        '[', 448,
        '_', 512,
        '`', 620,
        't', 618,
        '{', 484,
        0xaf, 324,
        0x2682, 295,
        '\t', 620,
        ' ', 620,
        0x3b7, 620,
        0x3c0, 620,
        0x3c4, 620,
        0x221e, 620,
        ',', 266,
        '.', 266,
        ':', 266,
        '?', 266,
        0x2218, 266,
        0x25cc, 266,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(612);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(324);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(620);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      ADVANCE_MAP(
        '\r', 108,
        '"', 724,
        '$', 15,
        '(', 413,
        '/', 803,
        '@', 754,
        '[', 449,
        '_', 513,
        '`', 108,
        't', 106,
        '{', 485,
        0xaf, 325,
        0x2682, 296,
        0x3b7, 819,
        0x3c0, 819,
        0x3c4, 819,
        0x221e, 819,
        ',', 267,
        '.', 267,
        ':', 267,
        '?', 267,
        0x2218, 267,
        0x25cc, 267,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(788);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(325);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(355);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      ADVANCE_MAP(
        '\r', 631,
        '"', 725,
        '#', 631,
        '$', 542,
        '(', 414,
        '/', 804,
        '@', 755,
        '[', 450,
        '_', 514,
        '`', 631,
        't', 629,
        '{', 486,
        0xaf, 326,
        0x2682, 297,
        '\t', 631,
        ' ', 631,
        0x3b7, 631,
        0x3c0, 631,
        0x3c4, 631,
        0x221e, 631,
        ',', 268,
        '.', 268,
        ':', 268,
        '?', 268,
        0x2218, 268,
        0x25cc, 268,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(623);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(326);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(631);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      ADVANCE_MAP(
        '\r', 118,
        '"', 726,
        '$', 17,
        '(', 415,
        '/', 805,
        '@', 756,
        '[', 451,
        ']', 468,
        '_', 515,
        '`', 118,
        't', 116,
        '{', 487,
        0xaf, 327,
        0x2682, 298,
        0x3b7, 820,
        0x3c0, 820,
        0x3c4, 820,
        0x221e, 820,
        ',', 269,
        '.', 269,
        ':', 269,
        '?', 269,
        0x2218, 269,
        0x25cc, 269,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(789);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(327);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(357);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      ADVANCE_MAP(
        '\r', 642,
        '"', 727,
        '#', 642,
        '$', 544,
        '(', 416,
        '/', 806,
        '@', 757,
        '[', 452,
        ']', 469,
        '_', 516,
        '`', 642,
        't', 640,
        '{', 488,
        0xaf, 328,
        0x2682, 299,
        '\t', 642,
        ' ', 642,
        0x3b7, 642,
        0x3c0, 642,
        0x3c4, 642,
        0x221e, 642,
        ',', 270,
        '.', 270,
        ':', 270,
        '?', 270,
        0x2218, 270,
        0x25cc, 270,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(634);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(328);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(642);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      ADVANCE_MAP(
        '\r', 128,
        '"', 728,
        '$', 19,
        '(', 417,
        '@', 758,
        '[', 453,
        ']', 470,
        '_', 517,
        '`', 128,
        't', 126,
        '{', 489,
        0xaf, 329,
        0x2682, 300,
        0x3b7, 821,
        0x3c0, 821,
        0x3c4, 821,
        0x221e, 821,
        ',', 271,
        '.', 271,
        ':', 271,
        '?', 271,
        0x2218, 271,
        0x25cc, 271,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(790);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(329);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(359);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      ADVANCE_MAP(
        '\r', 653,
        '"', 729,
        '#', 653,
        '$', 546,
        '(', 418,
        '@', 759,
        '[', 454,
        ']', 471,
        '_', 518,
        '`', 653,
        't', 651,
        '{', 490,
        0xaf, 330,
        0x2682, 301,
        '\t', 653,
        ' ', 653,
        0x3b7, 653,
        0x3c0, 653,
        0x3c4, 653,
        0x221e, 653,
        ',', 272,
        '.', 272,
        ':', 272,
        '?', 272,
        0x2218, 272,
        0x25cc, 272,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(645);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(330);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(653);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      ADVANCE_MAP(
        '\r', 138,
        '"', 730,
        '$', 21,
        '(', 419,
        ')', 432,
        '@', 760,
        '[', 455,
        '_', 519,
        '`', 138,
        't', 136,
        '{', 491,
        0xaf, 331,
        0x2682, 302,
        0x3b7, 822,
        0x3c0, 822,
        0x3c4, 822,
        0x221e, 822,
        ',', 273,
        '.', 273,
        ':', 273,
        '?', 273,
        0x2218, 273,
        0x25cc, 273,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(791);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(331);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(361);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      ADVANCE_MAP(
        '\r', 664,
        '"', 731,
        '#', 664,
        '$', 548,
        '(', 420,
        ')', 433,
        '@', 761,
        '[', 456,
        '_', 520,
        '`', 664,
        't', 662,
        '{', 492,
        0xaf, 332,
        0x2682, 303,
        '\t', 664,
        ' ', 664,
        0x3b7, 664,
        0x3c0, 664,
        0x3c4, 664,
        0x221e, 664,
        ',', 274,
        '.', 274,
        ':', 274,
        '?', 274,
        0x2218, 274,
        0x25cc, 274,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(656);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(332);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      ADVANCE_MAP(
        '\r', 148,
        '"', 732,
        '$', 23,
        '(', 421,
        '/', 807,
        '@', 762,
        '[', 457,
        '_', 521,
        '`', 148,
        't', 146,
        '{', 493,
        '}', 504,
        0xaf, 333,
        0x2682, 304,
        0x3b7, 823,
        0x3c0, 823,
        0x3c4, 823,
        0x221e, 823,
        ',', 275,
        '.', 275,
        ':', 275,
        '?', 275,
        0x2218, 275,
        0x25cc, 275,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(792);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(333);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(363);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      ADVANCE_MAP(
        '\r', 675,
        '"', 733,
        '#', 675,
        '$', 550,
        '(', 422,
        '/', 808,
        '@', 763,
        '[', 458,
        '_', 522,
        '`', 675,
        't', 673,
        '{', 494,
        '}', 505,
        0xaf, 334,
        0x2682, 305,
        '\t', 675,
        ' ', 675,
        0x3b7, 675,
        0x3c0, 675,
        0x3c4, 675,
        0x221e, 675,
        ',', 276,
        '.', 276,
        ':', 276,
        '?', 276,
        0x2218, 276,
        0x25cc, 276,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(667);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(334);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(675);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      ADVANCE_MAP(
        '\r', 158,
        '"', 734,
        '$', 25,
        '(', 423,
        '@', 764,
        '[', 459,
        '_', 523,
        '`', 158,
        't', 156,
        '{', 495,
        '}', 506,
        0xaf, 335,
        0x2682, 306,
        0x3b7, 824,
        0x3c0, 824,
        0x3c4, 824,
        0x221e, 824,
        ',', 277,
        '.', 277,
        ':', 277,
        '?', 277,
        0x2218, 277,
        0x25cc, 277,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(793);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(335);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(365);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      ADVANCE_MAP(
        '\r', 686,
        '"', 735,
        '#', 686,
        '$', 552,
        '(', 424,
        '@', 765,
        '[', 460,
        '_', 524,
        '`', 686,
        't', 684,
        '{', 496,
        '}', 507,
        0xaf, 336,
        0x2682, 307,
        '\t', 686,
        ' ', 686,
        0x3b7, 686,
        0x3c0, 686,
        0x3c4, 686,
        0x221e, 686,
        ',', 278,
        '.', 278,
        ':', 278,
        '?', 278,
        0x2218, 278,
        0x25cc, 278,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(678);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(336);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(686);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      ADVANCE_MAP(
        '\r', 168,
        '"', 736,
        '$', 27,
        '(', 425,
        ')', 434,
        '/', 809,
        '@', 766,
        '[', 461,
        '_', 525,
        '`', 168,
        't', 166,
        '{', 497,
        0xaf, 337,
        0x2682, 308,
        0x3b7, 825,
        0x3c0, 825,
        0x3c4, 825,
        0x221e, 825,
        ',', 279,
        '.', 279,
        ':', 279,
        '?', 279,
        0x2218, 279,
        0x25cc, 279,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(794);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(337);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(367);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      ADVANCE_MAP(
        '\r', 697,
        '"', 737,
        '#', 697,
        '$', 554,
        '(', 426,
        ')', 435,
        '/', 810,
        '@', 767,
        '[', 462,
        '_', 526,
        '`', 697,
        't', 695,
        '{', 498,
        0xaf, 338,
        0x2682, 309,
        '\t', 697,
        ' ', 697,
        0x3b7, 697,
        0x3c0, 697,
        0x3c4, 697,
        0x221e, 697,
        ',', 280,
        '.', 280,
        ':', 280,
        '?', 280,
        0x2218, 280,
        0x25cc, 280,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(689);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(338);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(697);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      ADVANCE_MAP(
        '\r', 48,
        '"', 712,
        '$', 1,
        '(', 401,
        ')', 428,
        '/', 801,
        '@', 742,
        '[', 437,
        ']', 464,
        '_', 509,
        '`', 48,
        't', 46,
        '{', 473,
        '}', 500,
        0xaf, 313,
        0x2682, 284,
        0x3b7, 813,
        0x3c0, 813,
        0x3c4, 813,
        0x221e, 813,
        ',', 255,
        '.', 255,
        ':', 255,
        '?', 255,
        0x2218, 255,
        0x25cc, 255,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(782);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(313);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(343);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      ADVANCE_MAP(
        '\r', 565,
        '"', 713,
        '#', 565,
        '$', 528,
        '(', 402,
        ')', 429,
        '/', 802,
        '@', 743,
        '[', 438,
        ']', 465,
        '_', 510,
        '`', 565,
        't', 563,
        '{', 474,
        '}', 501,
        0xaf, 314,
        0x2682, 285,
        '\t', 565,
        ' ', 565,
        0x3b7, 565,
        0x3c0, 565,
        0x3c4, 565,
        0x221e, 565,
        ',', 256,
        '.', 256,
        ':', 256,
        '?', 256,
        0x2218, 256,
        0x25cc, 256,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(557);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(314);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(565);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      ADVANCE_MAP(
        '\r', 68,
        '"', 716,
        '$', 5,
        '(', 405,
        '@', 746,
        '[', 441,
        '`', 68,
        't', 66,
        '{', 477,
        '}', 502,
        0xaf, 317,
        0x2682, 288,
        0x3b7, 815,
        0x3c0, 815,
        0x3c4, 815,
        0x221e, 815,
        ',', 259,
        '.', 259,
        ':', 259,
        '?', 259,
        0x2218, 259,
        0x25cc, 259,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(784);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(317);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(347);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      ADVANCE_MAP(
        '\r', 587,
        '"', 717,
        '#', 587,
        '$', 532,
        '(', 406,
        '@', 747,
        '[', 442,
        '`', 587,
        't', 585,
        '{', 478,
        '}', 503,
        0xaf, 318,
        0x2682, 289,
        '\t', 587,
        ' ', 587,
        0x3b7, 587,
        0x3c0, 587,
        0x3c4, 587,
        0x221e, 587,
        ',', 260,
        '.', 260,
        ':', 260,
        '?', 260,
        0x2218, 260,
        0x25cc, 260,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(579);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(318);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(587);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      ADVANCE_MAP(
        '\r', 148,
        '"', 732,
        '$', 23,
        '(', 421,
        '/', 807,
        '@', 762,
        '[', 457,
        '_', 521,
        '`', 148,
        't', 146,
        '{', 493,
        '}', 504,
        0xaf, 333,
        0x2682, 304,
        0x3b7, 823,
        0x3c0, 823,
        0x3c4, 823,
        0x221e, 823,
        ',', 275,
        '.', 275,
        ':', 275,
        '?', 275,
        0x2218, 275,
        0x25cc, 275,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(792);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(333);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(363);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      ADVANCE_MAP(
        '\r', 675,
        '"', 733,
        '#', 675,
        '$', 550,
        '(', 422,
        '/', 808,
        '@', 763,
        '[', 458,
        '_', 522,
        '`', 675,
        't', 673,
        '{', 494,
        '}', 505,
        0xaf, 334,
        0x2682, 305,
        '\t', 675,
        ' ', 675,
        0x3b7, 675,
        0x3c0, 675,
        0x3c4, 675,
        0x221e, 675,
        ',', 276,
        '.', 276,
        ':', 276,
        '?', 276,
        0x2218, 276,
        0x25cc, 276,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(667);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(334);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(675);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      ADVANCE_MAP(
        '\r', 158,
        '"', 734,
        '$', 25,
        '(', 423,
        '@', 764,
        '[', 459,
        '_', 523,
        '`', 158,
        't', 156,
        '{', 495,
        '}', 506,
        0xaf, 335,
        0x2682, 306,
        0x3b7, 824,
        0x3c0, 824,
        0x3c4, 824,
        0x221e, 824,
        ',', 277,
        '.', 277,
        ':', 277,
        '?', 277,
        0x2218, 277,
        0x25cc, 277,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(793);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(335);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(365);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      ADVANCE_MAP(
        '\r', 686,
        '"', 735,
        '#', 686,
        '$', 552,
        '(', 424,
        '@', 765,
        '[', 460,
        '_', 524,
        '`', 686,
        't', 684,
        '{', 496,
        '}', 507,
        0xaf, 336,
        0x2682, 307,
        '\t', 686,
        ' ', 686,
        0x3b7, 686,
        0x3c0, 686,
        0x3c4, 686,
        0x221e, 686,
        ',', 278,
        '.', 278,
        ':', 278,
        '?', 278,
        0x2218, 278,
        0x25cc, 278,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(678);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(336);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(686);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym__);
      ADVANCE_MAP(
        '\r', 48,
        '"', 712,
        '$', 1,
        '(', 401,
        ')', 428,
        '/', 801,
        '@', 742,
        '[', 437,
        ']', 464,
        '_', 509,
        '`', 48,
        't', 46,
        '{', 473,
        '}', 500,
        0xaf, 313,
        0x2682, 284,
        0x3b7, 813,
        0x3c0, 813,
        0x3c4, 813,
        0x221e, 813,
        ',', 255,
        '.', 255,
        ':', 255,
        '?', 255,
        0x2218, 255,
        0x25cc, 255,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(782);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(313);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(343);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym__);
      ADVANCE_MAP(
        '\r', 565,
        '"', 713,
        '#', 565,
        '$', 528,
        '(', 402,
        ')', 429,
        '/', 802,
        '@', 743,
        '[', 438,
        ']', 465,
        '_', 510,
        '`', 565,
        't', 563,
        '{', 474,
        '}', 501,
        0xaf, 314,
        0x2682, 285,
        '\t', 565,
        ' ', 565,
        0x3b7, 565,
        0x3c0, 565,
        0x3c4, 565,
        0x221e, 565,
        ',', 256,
        '.', 256,
        ':', 256,
        '?', 256,
        0x2218, 256,
        0x25cc, 256,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(557);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(314);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(565);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym__);
      ADVANCE_MAP(
        '\r', 98,
        '"', 722,
        '$', 13,
        '(', 411,
        '@', 752,
        '[', 447,
        '_', 511,
        '`', 98,
        't', 96,
        '{', 483,
        0xaf, 323,
        0x2682, 294,
        0x3b7, 818,
        0x3c0, 818,
        0x3c4, 818,
        0x221e, 818,
        ',', 265,
        '.', 265,
        ':', 265,
        '?', 265,
        0x2218, 265,
        0x25cc, 265,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(787);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(323);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(353);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym__);
      ADVANCE_MAP(
        '\r', 620,
        '"', 723,
        '#', 620,
        '$', 540,
        '(', 412,
        '@', 753,
        '[', 448,
        '_', 512,
        '`', 620,
        't', 618,
        '{', 484,
        0xaf, 324,
        0x2682, 295,
        '\t', 620,
        ' ', 620,
        0x3b7, 620,
        0x3c0, 620,
        0x3c4, 620,
        0x221e, 620,
        ',', 266,
        '.', 266,
        ':', 266,
        '?', 266,
        0x2218, 266,
        0x25cc, 266,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(612);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(324);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(620);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym__);
      ADVANCE_MAP(
        '\r', 108,
        '"', 724,
        '$', 15,
        '(', 413,
        '/', 803,
        '@', 754,
        '[', 449,
        '_', 513,
        '`', 108,
        't', 106,
        '{', 485,
        0xaf, 325,
        0x2682, 296,
        0x3b7, 819,
        0x3c0, 819,
        0x3c4, 819,
        0x221e, 819,
        ',', 267,
        '.', 267,
        ':', 267,
        '?', 267,
        0x2218, 267,
        0x25cc, 267,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(788);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(325);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(355);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym__);
      ADVANCE_MAP(
        '\r', 631,
        '"', 725,
        '#', 631,
        '$', 542,
        '(', 414,
        '/', 804,
        '@', 755,
        '[', 450,
        '_', 514,
        '`', 631,
        't', 629,
        '{', 486,
        0xaf, 326,
        0x2682, 297,
        '\t', 631,
        ' ', 631,
        0x3b7, 631,
        0x3c0, 631,
        0x3c4, 631,
        0x221e, 631,
        ',', 268,
        '.', 268,
        ':', 268,
        '?', 268,
        0x2218, 268,
        0x25cc, 268,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(623);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(326);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(631);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym__);
      ADVANCE_MAP(
        '\r', 118,
        '"', 726,
        '$', 17,
        '(', 415,
        '/', 805,
        '@', 756,
        '[', 451,
        ']', 468,
        '_', 515,
        '`', 118,
        't', 116,
        '{', 487,
        0xaf, 327,
        0x2682, 298,
        0x3b7, 820,
        0x3c0, 820,
        0x3c4, 820,
        0x221e, 820,
        ',', 269,
        '.', 269,
        ':', 269,
        '?', 269,
        0x2218, 269,
        0x25cc, 269,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(789);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(327);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(357);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym__);
      ADVANCE_MAP(
        '\r', 642,
        '"', 727,
        '#', 642,
        '$', 544,
        '(', 416,
        '/', 806,
        '@', 757,
        '[', 452,
        ']', 469,
        '_', 516,
        '`', 642,
        't', 640,
        '{', 488,
        0xaf, 328,
        0x2682, 299,
        '\t', 642,
        ' ', 642,
        0x3b7, 642,
        0x3c0, 642,
        0x3c4, 642,
        0x221e, 642,
        ',', 270,
        '.', 270,
        ':', 270,
        '?', 270,
        0x2218, 270,
        0x25cc, 270,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(634);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(328);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(642);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym__);
      ADVANCE_MAP(
        '\r', 128,
        '"', 728,
        '$', 19,
        '(', 417,
        '@', 758,
        '[', 453,
        ']', 470,
        '_', 517,
        '`', 128,
        't', 126,
        '{', 489,
        0xaf, 329,
        0x2682, 300,
        0x3b7, 821,
        0x3c0, 821,
        0x3c4, 821,
        0x221e, 821,
        ',', 271,
        '.', 271,
        ':', 271,
        '?', 271,
        0x2218, 271,
        0x25cc, 271,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(790);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(329);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(359);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym__);
      ADVANCE_MAP(
        '\r', 653,
        '"', 729,
        '#', 653,
        '$', 546,
        '(', 418,
        '@', 759,
        '[', 454,
        ']', 471,
        '_', 518,
        '`', 653,
        't', 651,
        '{', 490,
        0xaf, 330,
        0x2682, 301,
        '\t', 653,
        ' ', 653,
        0x3b7, 653,
        0x3c0, 653,
        0x3c4, 653,
        0x221e, 653,
        ',', 272,
        '.', 272,
        ':', 272,
        '?', 272,
        0x2218, 272,
        0x25cc, 272,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(645);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(330);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(653);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym__);
      ADVANCE_MAP(
        '\r', 138,
        '"', 730,
        '$', 21,
        '(', 419,
        ')', 432,
        '@', 760,
        '[', 455,
        '_', 519,
        '`', 138,
        't', 136,
        '{', 491,
        0xaf, 331,
        0x2682, 302,
        0x3b7, 822,
        0x3c0, 822,
        0x3c4, 822,
        0x221e, 822,
        ',', 273,
        '.', 273,
        ':', 273,
        '?', 273,
        0x2218, 273,
        0x25cc, 273,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(791);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(331);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(361);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym__);
      ADVANCE_MAP(
        '\r', 664,
        '"', 731,
        '#', 664,
        '$', 548,
        '(', 420,
        ')', 433,
        '@', 761,
        '[', 456,
        '_', 520,
        '`', 664,
        't', 662,
        '{', 492,
        0xaf, 332,
        0x2682, 303,
        '\t', 664,
        ' ', 664,
        0x3b7, 664,
        0x3c0, 664,
        0x3c4, 664,
        0x221e, 664,
        ',', 274,
        '.', 274,
        ':', 274,
        '?', 274,
        0x2218, 274,
        0x25cc, 274,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(656);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(332);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym__);
      ADVANCE_MAP(
        '\r', 148,
        '"', 732,
        '$', 23,
        '(', 421,
        '/', 807,
        '@', 762,
        '[', 457,
        '_', 521,
        '`', 148,
        't', 146,
        '{', 493,
        '}', 504,
        0xaf, 333,
        0x2682, 304,
        0x3b7, 823,
        0x3c0, 823,
        0x3c4, 823,
        0x221e, 823,
        ',', 275,
        '.', 275,
        ':', 275,
        '?', 275,
        0x2218, 275,
        0x25cc, 275,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(792);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(333);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(363);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym__);
      ADVANCE_MAP(
        '\r', 675,
        '"', 733,
        '#', 675,
        '$', 550,
        '(', 422,
        '/', 808,
        '@', 763,
        '[', 458,
        '_', 522,
        '`', 675,
        't', 673,
        '{', 494,
        '}', 505,
        0xaf, 334,
        0x2682, 305,
        '\t', 675,
        ' ', 675,
        0x3b7, 675,
        0x3c0, 675,
        0x3c4, 675,
        0x221e, 675,
        ',', 276,
        '.', 276,
        ':', 276,
        '?', 276,
        0x2218, 276,
        0x25cc, 276,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(667);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(334);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(675);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym__);
      ADVANCE_MAP(
        '\r', 158,
        '"', 734,
        '$', 25,
        '(', 423,
        '@', 764,
        '[', 459,
        '_', 523,
        '`', 158,
        't', 156,
        '{', 495,
        '}', 506,
        0xaf, 335,
        0x2682, 306,
        0x3b7, 824,
        0x3c0, 824,
        0x3c4, 824,
        0x221e, 824,
        ',', 277,
        '.', 277,
        ':', 277,
        '?', 277,
        0x2218, 277,
        0x25cc, 277,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(793);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(335);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(365);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym__);
      ADVANCE_MAP(
        '\r', 686,
        '"', 735,
        '#', 686,
        '$', 552,
        '(', 424,
        '@', 765,
        '[', 460,
        '_', 524,
        '`', 686,
        't', 684,
        '{', 496,
        '}', 507,
        0xaf, 336,
        0x2682, 307,
        '\t', 686,
        ' ', 686,
        0x3b7, 686,
        0x3c0, 686,
        0x3c4, 686,
        0x221e, 686,
        ',', 278,
        '.', 278,
        ':', 278,
        '?', 278,
        0x2218, 278,
        0x25cc, 278,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(678);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(336);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(686);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym__);
      ADVANCE_MAP(
        '\r', 168,
        '"', 736,
        '$', 27,
        '(', 425,
        ')', 434,
        '/', 809,
        '@', 766,
        '[', 461,
        '_', 525,
        '`', 168,
        't', 166,
        '{', 497,
        0xaf, 337,
        0x2682, 308,
        0x3b7, 825,
        0x3c0, 825,
        0x3c4, 825,
        0x221e, 825,
        ',', 279,
        '.', 279,
        ':', 279,
        '?', 279,
        0x2218, 279,
        0x25cc, 279,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(794);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(337);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(367);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym__);
      ADVANCE_MAP(
        '\r', 697,
        '"', 737,
        '#', 697,
        '$', 554,
        '(', 426,
        ')', 435,
        '/', 810,
        '@', 767,
        '[', 462,
        '_', 526,
        '`', 697,
        't', 695,
        '{', 498,
        0xaf, 338,
        0x2682, 309,
        '\t', 697,
        ' ', 697,
        0x3b7, 697,
        0x3c0, 697,
        0x3c4, 697,
        0x221e, 697,
        ',', 280,
        '.', 280,
        ':', 280,
        '?', 280,
        0x2218, 280,
        0x25cc, 280,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(689);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(338);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(697);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == '_') ADVANCE(527);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\t', 565,
        '\r', 565,
        ' ', 565,
        '"', 713,
        '#', 565,
        '$', 528,
        '(', 402,
        ')', 429,
        '/', 802,
        '@', 743,
        '[', 438,
        ']', 465,
        '_', 510,
        '`', 565,
        't', 563,
        '{', 474,
        '}', 501,
        0xaf, 314,
        0x2682, 285,
        0x3b7, 565,
        0x3c0, 565,
        0x3c4, 565,
        0x221e, 565,
        ',', 256,
        '.', 256,
        ':', 256,
        '?', 256,
        0x2218, 256,
        0x25cc, 256,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(557);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(314);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(565);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\t', 565,
        '\r', 565,
        ' ', 561,
        '"', 713,
        '#', 565,
        '$', 528,
        '(', 402,
        ')', 429,
        '/', 802,
        '1', 229,
        '2', 238,
        '3', 247,
        '@', 743,
        '[', 438,
        ']', 465,
        '_', 510,
        '`', 565,
        't', 563,
        '{', 474,
        '}', 501,
        0xaf, 314,
        0x2682, 285,
        0x3b7, 565,
        0x3c0, 565,
        0x3c4, 565,
        0x221e, 565,
        ',', 256,
        '.', 256,
        ':', 256,
        '?', 256,
        0x2218, 256,
        0x25cc, 256,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(557);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(314);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(565);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\t', 576,
        '\r', 576,
        ' ', 576,
        '"', 715,
        '#', 576,
        '$', 530,
        '(', 404,
        '@', 745,
        '[', 440,
        '`', 576,
        't', 574,
        '{', 476,
        0xaf, 316,
        0x2682, 287,
        0x3b7, 576,
        0x3c0, 576,
        0x3c4, 576,
        0x221e, 576,
        ',', 258,
        '.', 258,
        ':', 258,
        '?', 258,
        0x2218, 258,
        0x25cc, 258,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(568);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(316);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(576);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\t', 576,
        '\r', 576,
        ' ', 572,
        '"', 715,
        '#', 576,
        '$', 530,
        '(', 404,
        '1', 231,
        '2', 240,
        '3', 249,
        '@', 745,
        '[', 440,
        '`', 576,
        't', 574,
        '{', 476,
        0xaf, 316,
        0x2682, 287,
        0x3b7, 576,
        0x3c0, 576,
        0x3c4, 576,
        0x221e, 576,
        ',', 258,
        '.', 258,
        ':', 258,
        '?', 258,
        0x2218, 258,
        0x25cc, 258,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(568);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(316);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(576);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\t', 587,
        '\r', 587,
        ' ', 587,
        '"', 717,
        '#', 587,
        '$', 532,
        '(', 406,
        '@', 747,
        '[', 442,
        '`', 587,
        't', 585,
        '{', 478,
        '}', 503,
        0xaf, 318,
        0x2682, 289,
        0x3b7, 587,
        0x3c0, 587,
        0x3c4, 587,
        0x221e, 587,
        ',', 260,
        '.', 260,
        ':', 260,
        '?', 260,
        0x2218, 260,
        0x25cc, 260,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(579);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(318);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(587);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\t', 587,
        '\r', 587,
        ' ', 583,
        '"', 717,
        '#', 587,
        '$', 532,
        '(', 406,
        '@', 747,
        '[', 442,
        '`', 587,
        't', 585,
        '{', 478,
        '}', 503,
        0xaf, 318,
        0x2682, 289,
        0x3b7, 587,
        0x3c0, 587,
        0x3c4, 587,
        0x221e, 587,
        ',', 260,
        '.', 260,
        ':', 260,
        '?', 260,
        0x2218, 260,
        0x25cc, 260,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(579);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(318);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(587);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\t', 598,
        '\r', 598,
        ' ', 598,
        '"', 719,
        '#', 598,
        '$', 534,
        '(', 408,
        '@', 749,
        '[', 444,
        ']', 467,
        '`', 598,
        't', 596,
        '{', 480,
        0xaf, 320,
        0x2682, 291,
        0x3b7, 598,
        0x3c0, 598,
        0x3c4, 598,
        0x221e, 598,
        ',', 262,
        '.', 262,
        ':', 262,
        '?', 262,
        0x2218, 262,
        0x25cc, 262,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(590);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(320);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(598);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\t', 598,
        '\r', 598,
        ' ', 594,
        '"', 719,
        '#', 598,
        '$', 534,
        '(', 408,
        '@', 749,
        '[', 444,
        ']', 467,
        '`', 598,
        't', 596,
        '{', 480,
        0xaf, 320,
        0x2682, 291,
        0x3b7, 598,
        0x3c0, 598,
        0x3c4, 598,
        0x221e, 598,
        ',', 262,
        '.', 262,
        ':', 262,
        '?', 262,
        0x2218, 262,
        0x25cc, 262,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(590);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(320);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(598);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\t', 609,
        '\r', 609,
        ' ', 609,
        '"', 721,
        '#', 609,
        '$', 536,
        '(', 410,
        ')', 431,
        '@', 751,
        '[', 446,
        '`', 609,
        't', 607,
        '{', 482,
        0xaf, 322,
        0x2682, 293,
        0x3b7, 609,
        0x3c0, 609,
        0x3c4, 609,
        0x221e, 609,
        ',', 264,
        '.', 264,
        ':', 264,
        '?', 264,
        0x2218, 264,
        0x25cc, 264,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(601);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(322);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(609);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\t', 609,
        '\r', 609,
        ' ', 605,
        '"', 721,
        '#', 609,
        '$', 536,
        '(', 410,
        ')', 431,
        '@', 751,
        '[', 446,
        '`', 609,
        't', 607,
        '{', 482,
        0xaf, 322,
        0x2682, 293,
        0x3b7, 609,
        0x3c0, 609,
        0x3c4, 609,
        0x221e, 609,
        ',', 264,
        '.', 264,
        ':', 264,
        '?', 264,
        0x2218, 264,
        0x25cc, 264,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(601);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(322);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(609);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\t', 708,
        ' ', 708,
        '"', 739,
        '#', 708,
        '$', 538,
        '@', 769,
        '`', 708,
        't', 706,
        0xaf, 340,
        0x2682, 311,
        0x3b7, 708,
        0x3c0, 708,
        0x3c4, 708,
        0x221e, 708,
        ',', 282,
        '.', 282,
        ':', 282,
        '?', 282,
        0x2218, 282,
        0x25cc, 282,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(700);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(340);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(708);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\t', 708,
        ' ', 704,
        '"', 739,
        '#', 708,
        '$', 538,
        '@', 769,
        '`', 708,
        't', 706,
        0xaf, 340,
        0x2682, 311,
        0x3b7, 708,
        0x3c0, 708,
        0x3c4, 708,
        0x221e, 708,
        ',', 282,
        '.', 282,
        ':', 282,
        '?', 282,
        0x2218, 282,
        0x25cc, 282,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(700);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(340);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(708);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\t', 620,
        '\r', 620,
        ' ', 620,
        '"', 723,
        '#', 620,
        '$', 540,
        '(', 412,
        '@', 753,
        '[', 448,
        '_', 512,
        '`', 620,
        't', 618,
        '{', 484,
        0xaf, 324,
        0x2682, 295,
        0x3b7, 620,
        0x3c0, 620,
        0x3c4, 620,
        0x221e, 620,
        ',', 266,
        '.', 266,
        ':', 266,
        '?', 266,
        0x2218, 266,
        0x25cc, 266,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(612);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(324);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(620);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\t', 620,
        '\r', 620,
        ' ', 616,
        '"', 723,
        '#', 620,
        '$', 540,
        '(', 412,
        '1', 233,
        '2', 242,
        '3', 251,
        '@', 753,
        '[', 448,
        '_', 512,
        '`', 620,
        't', 618,
        '{', 484,
        0xaf, 324,
        0x2682, 295,
        0x3b7, 620,
        0x3c0, 620,
        0x3c4, 620,
        0x221e, 620,
        ',', 266,
        '.', 266,
        ':', 266,
        '?', 266,
        0x2218, 266,
        0x25cc, 266,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(612);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(324);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(620);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\t', 631,
        '\r', 631,
        ' ', 631,
        '"', 725,
        '#', 631,
        '$', 542,
        '(', 414,
        '/', 804,
        '@', 755,
        '[', 450,
        '_', 514,
        '`', 631,
        't', 629,
        '{', 486,
        0xaf, 326,
        0x2682, 297,
        0x3b7, 631,
        0x3c0, 631,
        0x3c4, 631,
        0x221e, 631,
        ',', 268,
        '.', 268,
        ':', 268,
        '?', 268,
        0x2218, 268,
        0x25cc, 268,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(623);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(326);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(631);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\t', 631,
        '\r', 631,
        ' ', 627,
        '"', 725,
        '#', 631,
        '$', 542,
        '(', 414,
        '/', 804,
        '1', 235,
        '2', 244,
        '3', 253,
        '@', 755,
        '[', 450,
        '_', 514,
        '`', 631,
        't', 629,
        '{', 486,
        0xaf, 326,
        0x2682, 297,
        0x3b7, 631,
        0x3c0, 631,
        0x3c4, 631,
        0x221e, 631,
        ',', 268,
        '.', 268,
        ':', 268,
        '?', 268,
        0x2218, 268,
        0x25cc, 268,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(623);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(326);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(631);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\t', 642,
        '\r', 642,
        ' ', 642,
        '"', 727,
        '#', 642,
        '$', 544,
        '(', 416,
        '/', 806,
        '@', 757,
        '[', 452,
        ']', 469,
        '_', 516,
        '`', 642,
        't', 640,
        '{', 488,
        0xaf, 328,
        0x2682, 299,
        0x3b7, 642,
        0x3c0, 642,
        0x3c4, 642,
        0x221e, 642,
        ',', 270,
        '.', 270,
        ':', 270,
        '?', 270,
        0x2218, 270,
        0x25cc, 270,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(634);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(328);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(642);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\t', 642,
        '\r', 642,
        ' ', 638,
        '"', 727,
        '#', 642,
        '$', 544,
        '(', 416,
        '/', 806,
        '@', 757,
        '[', 452,
        ']', 469,
        '_', 516,
        '`', 642,
        't', 640,
        '{', 488,
        0xaf, 328,
        0x2682, 299,
        0x3b7, 642,
        0x3c0, 642,
        0x3c4, 642,
        0x221e, 642,
        ',', 270,
        '.', 270,
        ':', 270,
        '?', 270,
        0x2218, 270,
        0x25cc, 270,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(634);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(328);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(642);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\t', 653,
        '\r', 653,
        ' ', 653,
        '"', 729,
        '#', 653,
        '$', 546,
        '(', 418,
        '@', 759,
        '[', 454,
        ']', 471,
        '_', 518,
        '`', 653,
        't', 651,
        '{', 490,
        0xaf, 330,
        0x2682, 301,
        0x3b7, 653,
        0x3c0, 653,
        0x3c4, 653,
        0x221e, 653,
        ',', 272,
        '.', 272,
        ':', 272,
        '?', 272,
        0x2218, 272,
        0x25cc, 272,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(645);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(330);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(653);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\t', 653,
        '\r', 653,
        ' ', 649,
        '"', 729,
        '#', 653,
        '$', 546,
        '(', 418,
        '@', 759,
        '[', 454,
        ']', 471,
        '_', 518,
        '`', 653,
        't', 651,
        '{', 490,
        0xaf, 330,
        0x2682, 301,
        0x3b7, 653,
        0x3c0, 653,
        0x3c4, 653,
        0x221e, 653,
        ',', 272,
        '.', 272,
        ':', 272,
        '?', 272,
        0x2218, 272,
        0x25cc, 272,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(645);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(330);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(653);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\t', 664,
        '\r', 664,
        ' ', 664,
        '"', 731,
        '#', 664,
        '$', 548,
        '(', 420,
        ')', 433,
        '@', 761,
        '[', 456,
        '_', 520,
        '`', 664,
        't', 662,
        '{', 492,
        0xaf, 332,
        0x2682, 303,
        0x3b7, 664,
        0x3c0, 664,
        0x3c4, 664,
        0x221e, 664,
        ',', 274,
        '.', 274,
        ':', 274,
        '?', 274,
        0x2218, 274,
        0x25cc, 274,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(656);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(332);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\t', 664,
        '\r', 664,
        ' ', 660,
        '"', 731,
        '#', 664,
        '$', 548,
        '(', 420,
        ')', 433,
        '@', 761,
        '[', 456,
        '_', 520,
        '`', 664,
        't', 662,
        '{', 492,
        0xaf, 332,
        0x2682, 303,
        0x3b7, 664,
        0x3c0, 664,
        0x3c4, 664,
        0x221e, 664,
        ',', 274,
        '.', 274,
        ':', 274,
        '?', 274,
        0x2218, 274,
        0x25cc, 274,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(656);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(332);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\t', 675,
        '\r', 675,
        ' ', 675,
        '"', 733,
        '#', 675,
        '$', 550,
        '(', 422,
        '/', 808,
        '@', 763,
        '[', 458,
        '_', 522,
        '`', 675,
        't', 673,
        '{', 494,
        '}', 505,
        0xaf, 334,
        0x2682, 305,
        0x3b7, 675,
        0x3c0, 675,
        0x3c4, 675,
        0x221e, 675,
        ',', 276,
        '.', 276,
        ':', 276,
        '?', 276,
        0x2218, 276,
        0x25cc, 276,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(667);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(334);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(675);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\t', 675,
        '\r', 675,
        ' ', 671,
        '"', 733,
        '#', 675,
        '$', 550,
        '(', 422,
        '/', 808,
        '@', 763,
        '[', 458,
        '_', 522,
        '`', 675,
        't', 673,
        '{', 494,
        '}', 505,
        0xaf, 334,
        0x2682, 305,
        0x3b7, 675,
        0x3c0, 675,
        0x3c4, 675,
        0x221e, 675,
        ',', 276,
        '.', 276,
        ':', 276,
        '?', 276,
        0x2218, 276,
        0x25cc, 276,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(667);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(334);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(675);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\t', 686,
        '\r', 686,
        ' ', 686,
        '"', 735,
        '#', 686,
        '$', 552,
        '(', 424,
        '@', 765,
        '[', 460,
        '_', 524,
        '`', 686,
        't', 684,
        '{', 496,
        '}', 507,
        0xaf, 336,
        0x2682, 307,
        0x3b7, 686,
        0x3c0, 686,
        0x3c4, 686,
        0x221e, 686,
        ',', 278,
        '.', 278,
        ':', 278,
        '?', 278,
        0x2218, 278,
        0x25cc, 278,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(678);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(336);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(686);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\t', 686,
        '\r', 686,
        ' ', 682,
        '"', 735,
        '#', 686,
        '$', 552,
        '(', 424,
        '@', 765,
        '[', 460,
        '_', 524,
        '`', 686,
        't', 684,
        '{', 496,
        '}', 507,
        0xaf, 336,
        0x2682, 307,
        0x3b7, 686,
        0x3c0, 686,
        0x3c4, 686,
        0x221e, 686,
        ',', 278,
        '.', 278,
        ':', 278,
        '?', 278,
        0x2218, 278,
        0x25cc, 278,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(678);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(336);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(686);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\t', 697,
        '\r', 697,
        ' ', 697,
        '"', 737,
        '#', 697,
        '$', 554,
        '(', 426,
        ')', 435,
        '/', 810,
        '@', 767,
        '[', 462,
        '_', 526,
        '`', 697,
        't', 695,
        '{', 498,
        0xaf, 338,
        0x2682, 309,
        0x3b7, 697,
        0x3c0, 697,
        0x3c4, 697,
        0x221e, 697,
        ',', 280,
        '.', 280,
        ':', 280,
        '?', 280,
        0x2218, 280,
        0x25cc, 280,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(689);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(338);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(697);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\t', 697,
        '\r', 697,
        ' ', 693,
        '"', 737,
        '#', 697,
        '$', 554,
        '(', 426,
        ')', 435,
        '/', 810,
        '@', 767,
        '[', 462,
        '_', 526,
        '`', 697,
        't', 695,
        '{', 498,
        0xaf, 338,
        0x2682, 309,
        0x3b7, 697,
        0x3c0, 697,
        0x3c4, 697,
        0x221e, 697,
        ',', 280,
        '.', 280,
        ':', 280,
        '?', 280,
        0x2218, 280,
        0x25cc, 280,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(689);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(338);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(697);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 565,
        '"', 713,
        '#', 565,
        '$', 528,
        '(', 402,
        ')', 429,
        '-', 344,
        '/', 802,
        '@', 743,
        '[', 438,
        ']', 465,
        '_', 510,
        '`', 565,
        't', 563,
        '{', 474,
        '}', 501,
        0xaf, 314,
        0x2682, 285,
        '\t', 565,
        ' ', 565,
        0x3b7, 565,
        0x3c0, 565,
        0x3c4, 565,
        0x221e, 565,
        ',', 256,
        '.', 256,
        ':', 256,
        '?', 256,
        0x2218, 256,
        0x25cc, 256,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(557);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(314);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(565);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 565,
        '"', 713,
        '#', 565,
        '$', 528,
        '(', 402,
        ')', 429,
        '.', 256,
        '/', 802,
        '@', 743,
        '[', 438,
        ']', 465,
        '_', 510,
        '`', 565,
        't', 563,
        '{', 474,
        '}', 501,
        0xaf, 314,
        0x2682, 285,
        '\t', 565,
        ' ', 565,
        'E', 556,
        'e', 556,
        0x3b7, 565,
        0x3c0, 565,
        0x3c4, 565,
        0x221e, 565,
        ',', 256,
        ':', 256,
        '?', 256,
        0x2218, 256,
        0x25cc, 256,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(557);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(314);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(565);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 565,
        '"', 713,
        '#', 565,
        '$', 528,
        '(', 402,
        ')', 429,
        '/', 802,
        '@', 743,
        '[', 438,
        ']', 465,
        '_', 510,
        '`', 565,
        'd', 560,
        't', 563,
        '{', 474,
        '}', 501,
        0xaf, 314,
        0x2682, 285,
        '\t', 565,
        ' ', 565,
        0x3b7, 565,
        0x3c0, 565,
        0x3c4, 565,
        0x221e, 565,
        ',', 256,
        '.', 256,
        ':', 256,
        '?', 256,
        0x2218, 256,
        0x25cc, 256,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(557);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(314);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(565);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 565,
        '"', 713,
        '#', 565,
        '$', 528,
        '(', 402,
        ')', 429,
        '/', 802,
        '@', 743,
        '[', 438,
        ']', 465,
        '_', 510,
        '`', 565,
        'd', 564,
        't', 563,
        '{', 474,
        '}', 501,
        0xaf, 314,
        0x2682, 285,
        '\t', 565,
        ' ', 565,
        0x3b7, 565,
        0x3c0, 565,
        0x3c4, 565,
        0x221e, 565,
        ',', 256,
        '.', 256,
        ':', 256,
        '?', 256,
        0x2218, 256,
        0x25cc, 256,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(557);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(314);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(565);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 565,
        '"', 713,
        '#', 565,
        '$', 528,
        '(', 402,
        ')', 429,
        '/', 802,
        '@', 743,
        '[', 438,
        ']', 465,
        '_', 510,
        '`', 565,
        'e', 562,
        't', 563,
        '{', 474,
        '}', 501,
        0xaf, 314,
        0x2682, 285,
        '\t', 565,
        ' ', 565,
        0x3b7, 565,
        0x3c0, 565,
        0x3c4, 565,
        0x221e, 565,
        ',', 256,
        '.', 256,
        ':', 256,
        '?', 256,
        0x2218, 256,
        0x25cc, 256,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(557);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(314);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(565);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 565,
        '"', 713,
        '#', 565,
        '$', 528,
        '(', 402,
        ')', 429,
        '/', 802,
        '@', 743,
        '[', 438,
        ']', 465,
        '_', 510,
        '`', 565,
        'i', 558,
        't', 563,
        '{', 474,
        '}', 501,
        0xaf, 314,
        0x2682, 285,
        '\t', 565,
        ' ', 565,
        0x3b7, 565,
        0x3c0, 565,
        0x3c4, 565,
        0x221e, 565,
        ',', 256,
        '.', 256,
        ':', 256,
        '?', 256,
        0x2218, 256,
        0x25cc, 256,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(557);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(314);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(565);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 565,
        '"', 713,
        '#', 565,
        '$', 528,
        '(', 402,
        ')', 429,
        '/', 802,
        '@', 743,
        '[', 438,
        ']', 465,
        '_', 510,
        '`', 565,
        'n', 566,
        't', 563,
        '{', 474,
        '}', 501,
        0xaf, 314,
        0x2682, 285,
        '\t', 565,
        ' ', 565,
        0x3b7, 565,
        0x3c0, 565,
        0x3c4, 565,
        0x221e, 565,
        ',', 256,
        '.', 256,
        ':', 256,
        '?', 256,
        0x2218, 256,
        0x25cc, 256,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(557);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(314);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(565);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 565,
        '"', 713,
        '#', 565,
        '$', 528,
        '(', 402,
        ')', 429,
        '/', 802,
        '@', 743,
        '[', 438,
        ']', 465,
        '_', 510,
        '`', 565,
        'o', 559,
        't', 563,
        '{', 474,
        '}', 501,
        0xaf, 314,
        0x2682, 285,
        '\t', 565,
        ' ', 565,
        0x3b7, 565,
        0x3c0, 565,
        0x3c4, 565,
        0x221e, 565,
        ',', 256,
        '.', 256,
        ':', 256,
        '?', 256,
        0x2218, 256,
        0x25cc, 256,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(557);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(314);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(565);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 565,
        '"', 713,
        '#', 565,
        '$', 528,
        '(', 402,
        ')', 429,
        '/', 802,
        '@', 743,
        '[', 438,
        ']', 465,
        '_', 510,
        '`', 565,
        'o', 529,
        't', 563,
        '{', 474,
        '}', 501,
        0xaf, 314,
        0x2682, 285,
        '\t', 565,
        ' ', 565,
        0x3b7, 565,
        0x3c0, 565,
        0x3c4, 565,
        0x221e, 565,
        ',', 256,
        '.', 256,
        ':', 256,
        '?', 256,
        0x2218, 256,
        0x25cc, 256,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(557);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(314);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(565);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 565,
        '"', 713,
        '#', 565,
        '$', 528,
        '(', 402,
        ')', 429,
        '/', 802,
        '@', 743,
        '[', 438,
        ']', 465,
        '_', 510,
        '`', 565,
        't', 563,
        '{', 474,
        '}', 501,
        0xaf, 314,
        0x2682, 285,
        '\t', 565,
        ' ', 565,
        0x3b7, 565,
        0x3c0, 565,
        0x3c4, 565,
        0x221e, 565,
        ',', 256,
        '.', 256,
        ':', 256,
        '?', 256,
        0x2218, 256,
        0x25cc, 256,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(557);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(314);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(565);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 565,
        '"', 713,
        '#', 565,
        '$', 528,
        '(', 402,
        ')', 429,
        '/', 802,
        '@', 743,
        '[', 438,
        ']', 465,
        '_', 510,
        '`', 565,
        't', 373,
        '{', 474,
        '}', 501,
        0xaf, 314,
        0x2682, 285,
        '\t', 565,
        ' ', 565,
        0x3b7, 565,
        0x3c0, 565,
        0x3c4, 565,
        0x221e, 565,
        ',', 256,
        '.', 256,
        ':', 256,
        '?', 256,
        0x2218, 256,
        0x25cc, 256,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(557);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(314);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(565);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 576,
        '"', 715,
        '#', 576,
        '$', 530,
        '(', 404,
        '-', 346,
        '@', 745,
        '[', 440,
        '`', 576,
        't', 574,
        '{', 476,
        0xaf, 316,
        0x2682, 287,
        '\t', 576,
        ' ', 576,
        0x3b7, 576,
        0x3c0, 576,
        0x3c4, 576,
        0x221e, 576,
        ',', 258,
        '.', 258,
        ':', 258,
        '?', 258,
        0x2218, 258,
        0x25cc, 258,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(568);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(316);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(576);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 576,
        '"', 715,
        '#', 576,
        '$', 530,
        '(', 404,
        '.', 258,
        '@', 745,
        '[', 440,
        '`', 576,
        't', 574,
        '{', 476,
        0xaf, 316,
        0x2682, 287,
        '\t', 576,
        ' ', 576,
        'E', 567,
        'e', 567,
        0x3b7, 576,
        0x3c0, 576,
        0x3c4, 576,
        0x221e, 576,
        ',', 258,
        ':', 258,
        '?', 258,
        0x2218, 258,
        0x25cc, 258,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(568);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(316);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(576);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 576,
        '"', 715,
        '#', 576,
        '$', 530,
        '(', 404,
        '@', 745,
        '[', 440,
        '`', 576,
        'd', 571,
        't', 574,
        '{', 476,
        0xaf, 316,
        0x2682, 287,
        '\t', 576,
        ' ', 576,
        0x3b7, 576,
        0x3c0, 576,
        0x3c4, 576,
        0x221e, 576,
        ',', 258,
        '.', 258,
        ':', 258,
        '?', 258,
        0x2218, 258,
        0x25cc, 258,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(568);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(316);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(576);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 576,
        '"', 715,
        '#', 576,
        '$', 530,
        '(', 404,
        '@', 745,
        '[', 440,
        '`', 576,
        'd', 575,
        't', 574,
        '{', 476,
        0xaf, 316,
        0x2682, 287,
        '\t', 576,
        ' ', 576,
        0x3b7, 576,
        0x3c0, 576,
        0x3c4, 576,
        0x221e, 576,
        ',', 258,
        '.', 258,
        ':', 258,
        '?', 258,
        0x2218, 258,
        0x25cc, 258,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(568);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(316);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(576);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 576,
        '"', 715,
        '#', 576,
        '$', 530,
        '(', 404,
        '@', 745,
        '[', 440,
        '`', 576,
        'e', 573,
        't', 574,
        '{', 476,
        0xaf, 316,
        0x2682, 287,
        '\t', 576,
        ' ', 576,
        0x3b7, 576,
        0x3c0, 576,
        0x3c4, 576,
        0x221e, 576,
        ',', 258,
        '.', 258,
        ':', 258,
        '?', 258,
        0x2218, 258,
        0x25cc, 258,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(568);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(316);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(576);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 576,
        '"', 715,
        '#', 576,
        '$', 530,
        '(', 404,
        '@', 745,
        '[', 440,
        '`', 576,
        'i', 569,
        't', 574,
        '{', 476,
        0xaf, 316,
        0x2682, 287,
        '\t', 576,
        ' ', 576,
        0x3b7, 576,
        0x3c0, 576,
        0x3c4, 576,
        0x221e, 576,
        ',', 258,
        '.', 258,
        ':', 258,
        '?', 258,
        0x2218, 258,
        0x25cc, 258,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(568);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(316);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(576);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 576,
        '"', 715,
        '#', 576,
        '$', 530,
        '(', 404,
        '@', 745,
        '[', 440,
        '`', 576,
        'n', 577,
        't', 574,
        '{', 476,
        0xaf, 316,
        0x2682, 287,
        '\t', 576,
        ' ', 576,
        0x3b7, 576,
        0x3c0, 576,
        0x3c4, 576,
        0x221e, 576,
        ',', 258,
        '.', 258,
        ':', 258,
        '?', 258,
        0x2218, 258,
        0x25cc, 258,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(568);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(316);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(576);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 576,
        '"', 715,
        '#', 576,
        '$', 530,
        '(', 404,
        '@', 745,
        '[', 440,
        '`', 576,
        'o', 570,
        't', 574,
        '{', 476,
        0xaf, 316,
        0x2682, 287,
        '\t', 576,
        ' ', 576,
        0x3b7, 576,
        0x3c0, 576,
        0x3c4, 576,
        0x221e, 576,
        ',', 258,
        '.', 258,
        ':', 258,
        '?', 258,
        0x2218, 258,
        0x25cc, 258,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(568);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(316);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(576);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 576,
        '"', 715,
        '#', 576,
        '$', 530,
        '(', 404,
        '@', 745,
        '[', 440,
        '`', 576,
        'o', 531,
        't', 574,
        '{', 476,
        0xaf, 316,
        0x2682, 287,
        '\t', 576,
        ' ', 576,
        0x3b7, 576,
        0x3c0, 576,
        0x3c4, 576,
        0x221e, 576,
        ',', 258,
        '.', 258,
        ':', 258,
        '?', 258,
        0x2218, 258,
        0x25cc, 258,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(568);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(316);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(576);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 576,
        '"', 715,
        '#', 576,
        '$', 530,
        '(', 404,
        '@', 745,
        '[', 440,
        '`', 576,
        't', 574,
        '{', 476,
        0xaf, 316,
        0x2682, 287,
        '\t', 576,
        ' ', 576,
        0x3b7, 576,
        0x3c0, 576,
        0x3c4, 576,
        0x221e, 576,
        ',', 258,
        '.', 258,
        ':', 258,
        '?', 258,
        0x2218, 258,
        0x25cc, 258,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(568);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(316);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(576);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 576,
        '"', 715,
        '#', 576,
        '$', 530,
        '(', 404,
        '@', 745,
        '[', 440,
        '`', 576,
        't', 375,
        '{', 476,
        0xaf, 316,
        0x2682, 287,
        '\t', 576,
        ' ', 576,
        0x3b7, 576,
        0x3c0, 576,
        0x3c4, 576,
        0x221e, 576,
        ',', 258,
        '.', 258,
        ':', 258,
        '?', 258,
        0x2218, 258,
        0x25cc, 258,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(568);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(316);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(576);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 587,
        '"', 717,
        '#', 587,
        '$', 532,
        '(', 406,
        '-', 348,
        '@', 747,
        '[', 442,
        '`', 587,
        't', 585,
        '{', 478,
        '}', 503,
        0xaf, 318,
        0x2682, 289,
        '\t', 587,
        ' ', 587,
        0x3b7, 587,
        0x3c0, 587,
        0x3c4, 587,
        0x221e, 587,
        ',', 260,
        '.', 260,
        ':', 260,
        '?', 260,
        0x2218, 260,
        0x25cc, 260,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(579);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(318);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(587);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 587,
        '"', 717,
        '#', 587,
        '$', 532,
        '(', 406,
        '.', 260,
        '@', 747,
        '[', 442,
        '`', 587,
        't', 585,
        '{', 478,
        '}', 503,
        0xaf, 318,
        0x2682, 289,
        '\t', 587,
        ' ', 587,
        'E', 578,
        'e', 578,
        0x3b7, 587,
        0x3c0, 587,
        0x3c4, 587,
        0x221e, 587,
        ',', 260,
        ':', 260,
        '?', 260,
        0x2218, 260,
        0x25cc, 260,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(579);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(318);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(587);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 587,
        '"', 717,
        '#', 587,
        '$', 532,
        '(', 406,
        '@', 747,
        '[', 442,
        '`', 587,
        'd', 582,
        't', 585,
        '{', 478,
        '}', 503,
        0xaf, 318,
        0x2682, 289,
        '\t', 587,
        ' ', 587,
        0x3b7, 587,
        0x3c0, 587,
        0x3c4, 587,
        0x221e, 587,
        ',', 260,
        '.', 260,
        ':', 260,
        '?', 260,
        0x2218, 260,
        0x25cc, 260,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(579);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(318);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(587);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 587,
        '"', 717,
        '#', 587,
        '$', 532,
        '(', 406,
        '@', 747,
        '[', 442,
        '`', 587,
        'd', 586,
        't', 585,
        '{', 478,
        '}', 503,
        0xaf, 318,
        0x2682, 289,
        '\t', 587,
        ' ', 587,
        0x3b7, 587,
        0x3c0, 587,
        0x3c4, 587,
        0x221e, 587,
        ',', 260,
        '.', 260,
        ':', 260,
        '?', 260,
        0x2218, 260,
        0x25cc, 260,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(579);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(318);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(587);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 587,
        '"', 717,
        '#', 587,
        '$', 532,
        '(', 406,
        '@', 747,
        '[', 442,
        '`', 587,
        'e', 584,
        't', 585,
        '{', 478,
        '}', 503,
        0xaf, 318,
        0x2682, 289,
        '\t', 587,
        ' ', 587,
        0x3b7, 587,
        0x3c0, 587,
        0x3c4, 587,
        0x221e, 587,
        ',', 260,
        '.', 260,
        ':', 260,
        '?', 260,
        0x2218, 260,
        0x25cc, 260,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(579);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(318);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(587);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 587,
        '"', 717,
        '#', 587,
        '$', 532,
        '(', 406,
        '@', 747,
        '[', 442,
        '`', 587,
        'i', 580,
        't', 585,
        '{', 478,
        '}', 503,
        0xaf, 318,
        0x2682, 289,
        '\t', 587,
        ' ', 587,
        0x3b7, 587,
        0x3c0, 587,
        0x3c4, 587,
        0x221e, 587,
        ',', 260,
        '.', 260,
        ':', 260,
        '?', 260,
        0x2218, 260,
        0x25cc, 260,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(579);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(318);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(587);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 587,
        '"', 717,
        '#', 587,
        '$', 532,
        '(', 406,
        '@', 747,
        '[', 442,
        '`', 587,
        'n', 588,
        't', 585,
        '{', 478,
        '}', 503,
        0xaf, 318,
        0x2682, 289,
        '\t', 587,
        ' ', 587,
        0x3b7, 587,
        0x3c0, 587,
        0x3c4, 587,
        0x221e, 587,
        ',', 260,
        '.', 260,
        ':', 260,
        '?', 260,
        0x2218, 260,
        0x25cc, 260,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(579);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(318);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(587);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 587,
        '"', 717,
        '#', 587,
        '$', 532,
        '(', 406,
        '@', 747,
        '[', 442,
        '`', 587,
        'o', 581,
        't', 585,
        '{', 478,
        '}', 503,
        0xaf, 318,
        0x2682, 289,
        '\t', 587,
        ' ', 587,
        0x3b7, 587,
        0x3c0, 587,
        0x3c4, 587,
        0x221e, 587,
        ',', 260,
        '.', 260,
        ':', 260,
        '?', 260,
        0x2218, 260,
        0x25cc, 260,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(579);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(318);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(587);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 587,
        '"', 717,
        '#', 587,
        '$', 532,
        '(', 406,
        '@', 747,
        '[', 442,
        '`', 587,
        'o', 533,
        't', 585,
        '{', 478,
        '}', 503,
        0xaf, 318,
        0x2682, 289,
        '\t', 587,
        ' ', 587,
        0x3b7, 587,
        0x3c0, 587,
        0x3c4, 587,
        0x221e, 587,
        ',', 260,
        '.', 260,
        ':', 260,
        '?', 260,
        0x2218, 260,
        0x25cc, 260,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(579);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(318);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(587);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 587,
        '"', 717,
        '#', 587,
        '$', 532,
        '(', 406,
        '@', 747,
        '[', 442,
        '`', 587,
        't', 585,
        '{', 478,
        '}', 503,
        0xaf, 318,
        0x2682, 289,
        '\t', 587,
        ' ', 587,
        0x3b7, 587,
        0x3c0, 587,
        0x3c4, 587,
        0x221e, 587,
        ',', 260,
        '.', 260,
        ':', 260,
        '?', 260,
        0x2218, 260,
        0x25cc, 260,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(579);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(318);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(587);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 587,
        '"', 717,
        '#', 587,
        '$', 532,
        '(', 406,
        '@', 747,
        '[', 442,
        '`', 587,
        't', 377,
        '{', 478,
        '}', 503,
        0xaf, 318,
        0x2682, 289,
        '\t', 587,
        ' ', 587,
        0x3b7, 587,
        0x3c0, 587,
        0x3c4, 587,
        0x221e, 587,
        ',', 260,
        '.', 260,
        ':', 260,
        '?', 260,
        0x2218, 260,
        0x25cc, 260,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(579);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(318);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(587);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 598,
        '"', 719,
        '#', 598,
        '$', 534,
        '(', 408,
        '-', 350,
        '@', 749,
        '[', 444,
        ']', 467,
        '`', 598,
        't', 596,
        '{', 480,
        0xaf, 320,
        0x2682, 291,
        '\t', 598,
        ' ', 598,
        0x3b7, 598,
        0x3c0, 598,
        0x3c4, 598,
        0x221e, 598,
        ',', 262,
        '.', 262,
        ':', 262,
        '?', 262,
        0x2218, 262,
        0x25cc, 262,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(590);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(320);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(598);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 598,
        '"', 719,
        '#', 598,
        '$', 534,
        '(', 408,
        '.', 262,
        '@', 749,
        '[', 444,
        ']', 467,
        '`', 598,
        't', 596,
        '{', 480,
        0xaf, 320,
        0x2682, 291,
        '\t', 598,
        ' ', 598,
        'E', 589,
        'e', 589,
        0x3b7, 598,
        0x3c0, 598,
        0x3c4, 598,
        0x221e, 598,
        ',', 262,
        ':', 262,
        '?', 262,
        0x2218, 262,
        0x25cc, 262,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(590);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(320);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(598);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 598,
        '"', 719,
        '#', 598,
        '$', 534,
        '(', 408,
        '@', 749,
        '[', 444,
        ']', 467,
        '`', 598,
        'd', 593,
        't', 596,
        '{', 480,
        0xaf, 320,
        0x2682, 291,
        '\t', 598,
        ' ', 598,
        0x3b7, 598,
        0x3c0, 598,
        0x3c4, 598,
        0x221e, 598,
        ',', 262,
        '.', 262,
        ':', 262,
        '?', 262,
        0x2218, 262,
        0x25cc, 262,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(590);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(320);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(598);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 598,
        '"', 719,
        '#', 598,
        '$', 534,
        '(', 408,
        '@', 749,
        '[', 444,
        ']', 467,
        '`', 598,
        'd', 597,
        't', 596,
        '{', 480,
        0xaf, 320,
        0x2682, 291,
        '\t', 598,
        ' ', 598,
        0x3b7, 598,
        0x3c0, 598,
        0x3c4, 598,
        0x221e, 598,
        ',', 262,
        '.', 262,
        ':', 262,
        '?', 262,
        0x2218, 262,
        0x25cc, 262,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(590);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(320);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(598);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 598,
        '"', 719,
        '#', 598,
        '$', 534,
        '(', 408,
        '@', 749,
        '[', 444,
        ']', 467,
        '`', 598,
        'e', 595,
        't', 596,
        '{', 480,
        0xaf, 320,
        0x2682, 291,
        '\t', 598,
        ' ', 598,
        0x3b7, 598,
        0x3c0, 598,
        0x3c4, 598,
        0x221e, 598,
        ',', 262,
        '.', 262,
        ':', 262,
        '?', 262,
        0x2218, 262,
        0x25cc, 262,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(590);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(320);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(598);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 598,
        '"', 719,
        '#', 598,
        '$', 534,
        '(', 408,
        '@', 749,
        '[', 444,
        ']', 467,
        '`', 598,
        'i', 591,
        't', 596,
        '{', 480,
        0xaf, 320,
        0x2682, 291,
        '\t', 598,
        ' ', 598,
        0x3b7, 598,
        0x3c0, 598,
        0x3c4, 598,
        0x221e, 598,
        ',', 262,
        '.', 262,
        ':', 262,
        '?', 262,
        0x2218, 262,
        0x25cc, 262,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(590);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(320);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(598);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 598,
        '"', 719,
        '#', 598,
        '$', 534,
        '(', 408,
        '@', 749,
        '[', 444,
        ']', 467,
        '`', 598,
        'n', 599,
        't', 596,
        '{', 480,
        0xaf, 320,
        0x2682, 291,
        '\t', 598,
        ' ', 598,
        0x3b7, 598,
        0x3c0, 598,
        0x3c4, 598,
        0x221e, 598,
        ',', 262,
        '.', 262,
        ':', 262,
        '?', 262,
        0x2218, 262,
        0x25cc, 262,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(590);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(320);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(598);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 598,
        '"', 719,
        '#', 598,
        '$', 534,
        '(', 408,
        '@', 749,
        '[', 444,
        ']', 467,
        '`', 598,
        'o', 592,
        't', 596,
        '{', 480,
        0xaf, 320,
        0x2682, 291,
        '\t', 598,
        ' ', 598,
        0x3b7, 598,
        0x3c0, 598,
        0x3c4, 598,
        0x221e, 598,
        ',', 262,
        '.', 262,
        ':', 262,
        '?', 262,
        0x2218, 262,
        0x25cc, 262,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(590);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(320);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(598);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 598,
        '"', 719,
        '#', 598,
        '$', 534,
        '(', 408,
        '@', 749,
        '[', 444,
        ']', 467,
        '`', 598,
        'o', 535,
        't', 596,
        '{', 480,
        0xaf, 320,
        0x2682, 291,
        '\t', 598,
        ' ', 598,
        0x3b7, 598,
        0x3c0, 598,
        0x3c4, 598,
        0x221e, 598,
        ',', 262,
        '.', 262,
        ':', 262,
        '?', 262,
        0x2218, 262,
        0x25cc, 262,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(590);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(320);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(598);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 598,
        '"', 719,
        '#', 598,
        '$', 534,
        '(', 408,
        '@', 749,
        '[', 444,
        ']', 467,
        '`', 598,
        't', 596,
        '{', 480,
        0xaf, 320,
        0x2682, 291,
        '\t', 598,
        ' ', 598,
        0x3b7, 598,
        0x3c0, 598,
        0x3c4, 598,
        0x221e, 598,
        ',', 262,
        '.', 262,
        ':', 262,
        '?', 262,
        0x2218, 262,
        0x25cc, 262,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(590);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(320);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(598);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 598,
        '"', 719,
        '#', 598,
        '$', 534,
        '(', 408,
        '@', 749,
        '[', 444,
        ']', 467,
        '`', 598,
        't', 379,
        '{', 480,
        0xaf, 320,
        0x2682, 291,
        '\t', 598,
        ' ', 598,
        0x3b7, 598,
        0x3c0, 598,
        0x3c4, 598,
        0x221e, 598,
        ',', 262,
        '.', 262,
        ':', 262,
        '?', 262,
        0x2218, 262,
        0x25cc, 262,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(590);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(320);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(598);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 609,
        '"', 721,
        '#', 609,
        '$', 536,
        '(', 410,
        ')', 431,
        '-', 352,
        '@', 751,
        '[', 446,
        '`', 609,
        't', 607,
        '{', 482,
        0xaf, 322,
        0x2682, 293,
        '\t', 609,
        ' ', 609,
        0x3b7, 609,
        0x3c0, 609,
        0x3c4, 609,
        0x221e, 609,
        ',', 264,
        '.', 264,
        ':', 264,
        '?', 264,
        0x2218, 264,
        0x25cc, 264,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(601);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(322);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(609);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 609,
        '"', 721,
        '#', 609,
        '$', 536,
        '(', 410,
        ')', 431,
        '.', 264,
        '@', 751,
        '[', 446,
        '`', 609,
        't', 607,
        '{', 482,
        0xaf, 322,
        0x2682, 293,
        '\t', 609,
        ' ', 609,
        'E', 600,
        'e', 600,
        0x3b7, 609,
        0x3c0, 609,
        0x3c4, 609,
        0x221e, 609,
        ',', 264,
        ':', 264,
        '?', 264,
        0x2218, 264,
        0x25cc, 264,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(601);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(322);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(609);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 609,
        '"', 721,
        '#', 609,
        '$', 536,
        '(', 410,
        ')', 431,
        '@', 751,
        '[', 446,
        '`', 609,
        'd', 604,
        't', 607,
        '{', 482,
        0xaf, 322,
        0x2682, 293,
        '\t', 609,
        ' ', 609,
        0x3b7, 609,
        0x3c0, 609,
        0x3c4, 609,
        0x221e, 609,
        ',', 264,
        '.', 264,
        ':', 264,
        '?', 264,
        0x2218, 264,
        0x25cc, 264,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(601);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(322);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(609);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 609,
        '"', 721,
        '#', 609,
        '$', 536,
        '(', 410,
        ')', 431,
        '@', 751,
        '[', 446,
        '`', 609,
        'd', 608,
        't', 607,
        '{', 482,
        0xaf, 322,
        0x2682, 293,
        '\t', 609,
        ' ', 609,
        0x3b7, 609,
        0x3c0, 609,
        0x3c4, 609,
        0x221e, 609,
        ',', 264,
        '.', 264,
        ':', 264,
        '?', 264,
        0x2218, 264,
        0x25cc, 264,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(601);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(322);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(609);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 609,
        '"', 721,
        '#', 609,
        '$', 536,
        '(', 410,
        ')', 431,
        '@', 751,
        '[', 446,
        '`', 609,
        'e', 606,
        't', 607,
        '{', 482,
        0xaf, 322,
        0x2682, 293,
        '\t', 609,
        ' ', 609,
        0x3b7, 609,
        0x3c0, 609,
        0x3c4, 609,
        0x221e, 609,
        ',', 264,
        '.', 264,
        ':', 264,
        '?', 264,
        0x2218, 264,
        0x25cc, 264,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(601);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(322);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(609);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 609,
        '"', 721,
        '#', 609,
        '$', 536,
        '(', 410,
        ')', 431,
        '@', 751,
        '[', 446,
        '`', 609,
        'i', 602,
        't', 607,
        '{', 482,
        0xaf, 322,
        0x2682, 293,
        '\t', 609,
        ' ', 609,
        0x3b7, 609,
        0x3c0, 609,
        0x3c4, 609,
        0x221e, 609,
        ',', 264,
        '.', 264,
        ':', 264,
        '?', 264,
        0x2218, 264,
        0x25cc, 264,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(601);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(322);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(609);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 609,
        '"', 721,
        '#', 609,
        '$', 536,
        '(', 410,
        ')', 431,
        '@', 751,
        '[', 446,
        '`', 609,
        'n', 610,
        't', 607,
        '{', 482,
        0xaf, 322,
        0x2682, 293,
        '\t', 609,
        ' ', 609,
        0x3b7, 609,
        0x3c0, 609,
        0x3c4, 609,
        0x221e, 609,
        ',', 264,
        '.', 264,
        ':', 264,
        '?', 264,
        0x2218, 264,
        0x25cc, 264,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(601);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(322);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(609);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 609,
        '"', 721,
        '#', 609,
        '$', 536,
        '(', 410,
        ')', 431,
        '@', 751,
        '[', 446,
        '`', 609,
        'o', 603,
        't', 607,
        '{', 482,
        0xaf, 322,
        0x2682, 293,
        '\t', 609,
        ' ', 609,
        0x3b7, 609,
        0x3c0, 609,
        0x3c4, 609,
        0x221e, 609,
        ',', 264,
        '.', 264,
        ':', 264,
        '?', 264,
        0x2218, 264,
        0x25cc, 264,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(601);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(322);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(609);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 609,
        '"', 721,
        '#', 609,
        '$', 536,
        '(', 410,
        ')', 431,
        '@', 751,
        '[', 446,
        '`', 609,
        'o', 537,
        't', 607,
        '{', 482,
        0xaf, 322,
        0x2682, 293,
        '\t', 609,
        ' ', 609,
        0x3b7, 609,
        0x3c0, 609,
        0x3c4, 609,
        0x221e, 609,
        ',', 264,
        '.', 264,
        ':', 264,
        '?', 264,
        0x2218, 264,
        0x25cc, 264,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(601);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(322);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(609);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 609,
        '"', 721,
        '#', 609,
        '$', 536,
        '(', 410,
        ')', 431,
        '@', 751,
        '[', 446,
        '`', 609,
        't', 607,
        '{', 482,
        0xaf, 322,
        0x2682, 293,
        '\t', 609,
        ' ', 609,
        0x3b7, 609,
        0x3c0, 609,
        0x3c4, 609,
        0x221e, 609,
        ',', 264,
        '.', 264,
        ':', 264,
        '?', 264,
        0x2218, 264,
        0x25cc, 264,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(601);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(322);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(609);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 609,
        '"', 721,
        '#', 609,
        '$', 536,
        '(', 410,
        ')', 431,
        '@', 751,
        '[', 446,
        '`', 609,
        't', 381,
        '{', 482,
        0xaf, 322,
        0x2682, 293,
        '\t', 609,
        ' ', 609,
        0x3b7, 609,
        0x3c0, 609,
        0x3c4, 609,
        0x221e, 609,
        ',', 264,
        '.', 264,
        ':', 264,
        '?', 264,
        0x2218, 264,
        0x25cc, 264,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(601);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(322);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(609);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 620,
        '"', 723,
        '#', 620,
        '$', 540,
        '(', 412,
        '-', 354,
        '@', 753,
        '[', 448,
        '_', 512,
        '`', 620,
        't', 618,
        '{', 484,
        0xaf, 324,
        0x2682, 295,
        '\t', 620,
        ' ', 620,
        0x3b7, 620,
        0x3c0, 620,
        0x3c4, 620,
        0x221e, 620,
        ',', 266,
        '.', 266,
        ':', 266,
        '?', 266,
        0x2218, 266,
        0x25cc, 266,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(612);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(324);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(620);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 620,
        '"', 723,
        '#', 620,
        '$', 540,
        '(', 412,
        '.', 266,
        '@', 753,
        '[', 448,
        '_', 512,
        '`', 620,
        't', 618,
        '{', 484,
        0xaf, 324,
        0x2682, 295,
        '\t', 620,
        ' ', 620,
        'E', 611,
        'e', 611,
        0x3b7, 620,
        0x3c0, 620,
        0x3c4, 620,
        0x221e, 620,
        ',', 266,
        ':', 266,
        '?', 266,
        0x2218, 266,
        0x25cc, 266,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(612);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(324);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(620);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 620,
        '"', 723,
        '#', 620,
        '$', 540,
        '(', 412,
        '@', 753,
        '[', 448,
        '_', 512,
        '`', 620,
        'd', 615,
        't', 618,
        '{', 484,
        0xaf, 324,
        0x2682, 295,
        '\t', 620,
        ' ', 620,
        0x3b7, 620,
        0x3c0, 620,
        0x3c4, 620,
        0x221e, 620,
        ',', 266,
        '.', 266,
        ':', 266,
        '?', 266,
        0x2218, 266,
        0x25cc, 266,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(612);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(324);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(620);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 620,
        '"', 723,
        '#', 620,
        '$', 540,
        '(', 412,
        '@', 753,
        '[', 448,
        '_', 512,
        '`', 620,
        'd', 619,
        't', 618,
        '{', 484,
        0xaf, 324,
        0x2682, 295,
        '\t', 620,
        ' ', 620,
        0x3b7, 620,
        0x3c0, 620,
        0x3c4, 620,
        0x221e, 620,
        ',', 266,
        '.', 266,
        ':', 266,
        '?', 266,
        0x2218, 266,
        0x25cc, 266,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(612);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(324);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(620);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 620,
        '"', 723,
        '#', 620,
        '$', 540,
        '(', 412,
        '@', 753,
        '[', 448,
        '_', 512,
        '`', 620,
        'e', 617,
        't', 618,
        '{', 484,
        0xaf, 324,
        0x2682, 295,
        '\t', 620,
        ' ', 620,
        0x3b7, 620,
        0x3c0, 620,
        0x3c4, 620,
        0x221e, 620,
        ',', 266,
        '.', 266,
        ':', 266,
        '?', 266,
        0x2218, 266,
        0x25cc, 266,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(612);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(324);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(620);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 620,
        '"', 723,
        '#', 620,
        '$', 540,
        '(', 412,
        '@', 753,
        '[', 448,
        '_', 512,
        '`', 620,
        'i', 613,
        't', 618,
        '{', 484,
        0xaf, 324,
        0x2682, 295,
        '\t', 620,
        ' ', 620,
        0x3b7, 620,
        0x3c0, 620,
        0x3c4, 620,
        0x221e, 620,
        ',', 266,
        '.', 266,
        ':', 266,
        '?', 266,
        0x2218, 266,
        0x25cc, 266,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(612);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(324);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(620);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 620,
        '"', 723,
        '#', 620,
        '$', 540,
        '(', 412,
        '@', 753,
        '[', 448,
        '_', 512,
        '`', 620,
        'n', 621,
        't', 618,
        '{', 484,
        0xaf, 324,
        0x2682, 295,
        '\t', 620,
        ' ', 620,
        0x3b7, 620,
        0x3c0, 620,
        0x3c4, 620,
        0x221e, 620,
        ',', 266,
        '.', 266,
        ':', 266,
        '?', 266,
        0x2218, 266,
        0x25cc, 266,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(612);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(324);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(620);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 620,
        '"', 723,
        '#', 620,
        '$', 540,
        '(', 412,
        '@', 753,
        '[', 448,
        '_', 512,
        '`', 620,
        'o', 614,
        't', 618,
        '{', 484,
        0xaf, 324,
        0x2682, 295,
        '\t', 620,
        ' ', 620,
        0x3b7, 620,
        0x3c0, 620,
        0x3c4, 620,
        0x221e, 620,
        ',', 266,
        '.', 266,
        ':', 266,
        '?', 266,
        0x2218, 266,
        0x25cc, 266,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(612);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(324);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(620);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 620,
        '"', 723,
        '#', 620,
        '$', 540,
        '(', 412,
        '@', 753,
        '[', 448,
        '_', 512,
        '`', 620,
        'o', 541,
        't', 618,
        '{', 484,
        0xaf, 324,
        0x2682, 295,
        '\t', 620,
        ' ', 620,
        0x3b7, 620,
        0x3c0, 620,
        0x3c4, 620,
        0x221e, 620,
        ',', 266,
        '.', 266,
        ':', 266,
        '?', 266,
        0x2218, 266,
        0x25cc, 266,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(612);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(324);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(620);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 620,
        '"', 723,
        '#', 620,
        '$', 540,
        '(', 412,
        '@', 753,
        '[', 448,
        '_', 512,
        '`', 620,
        't', 618,
        '{', 484,
        0xaf, 324,
        0x2682, 295,
        '\t', 620,
        ' ', 620,
        0x3b7, 620,
        0x3c0, 620,
        0x3c4, 620,
        0x221e, 620,
        ',', 266,
        '.', 266,
        ':', 266,
        '?', 266,
        0x2218, 266,
        0x25cc, 266,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(612);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(324);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(620);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 620,
        '"', 723,
        '#', 620,
        '$', 540,
        '(', 412,
        '@', 753,
        '[', 448,
        '_', 512,
        '`', 620,
        't', 383,
        '{', 484,
        0xaf, 324,
        0x2682, 295,
        '\t', 620,
        ' ', 620,
        0x3b7, 620,
        0x3c0, 620,
        0x3c4, 620,
        0x221e, 620,
        ',', 266,
        '.', 266,
        ':', 266,
        '?', 266,
        0x2218, 266,
        0x25cc, 266,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(612);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(324);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(620);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 631,
        '"', 725,
        '#', 631,
        '$', 542,
        '(', 414,
        '-', 356,
        '/', 804,
        '@', 755,
        '[', 450,
        '_', 514,
        '`', 631,
        't', 629,
        '{', 486,
        0xaf, 326,
        0x2682, 297,
        '\t', 631,
        ' ', 631,
        0x3b7, 631,
        0x3c0, 631,
        0x3c4, 631,
        0x221e, 631,
        ',', 268,
        '.', 268,
        ':', 268,
        '?', 268,
        0x2218, 268,
        0x25cc, 268,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(623);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(326);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(631);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 631,
        '"', 725,
        '#', 631,
        '$', 542,
        '(', 414,
        '.', 268,
        '/', 804,
        '@', 755,
        '[', 450,
        '_', 514,
        '`', 631,
        't', 629,
        '{', 486,
        0xaf, 326,
        0x2682, 297,
        '\t', 631,
        ' ', 631,
        'E', 622,
        'e', 622,
        0x3b7, 631,
        0x3c0, 631,
        0x3c4, 631,
        0x221e, 631,
        ',', 268,
        ':', 268,
        '?', 268,
        0x2218, 268,
        0x25cc, 268,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(623);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(326);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(631);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 631,
        '"', 725,
        '#', 631,
        '$', 542,
        '(', 414,
        '/', 804,
        '@', 755,
        '[', 450,
        '_', 514,
        '`', 631,
        'd', 626,
        't', 629,
        '{', 486,
        0xaf, 326,
        0x2682, 297,
        '\t', 631,
        ' ', 631,
        0x3b7, 631,
        0x3c0, 631,
        0x3c4, 631,
        0x221e, 631,
        ',', 268,
        '.', 268,
        ':', 268,
        '?', 268,
        0x2218, 268,
        0x25cc, 268,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(623);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(326);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(631);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 631,
        '"', 725,
        '#', 631,
        '$', 542,
        '(', 414,
        '/', 804,
        '@', 755,
        '[', 450,
        '_', 514,
        '`', 631,
        'd', 630,
        't', 629,
        '{', 486,
        0xaf, 326,
        0x2682, 297,
        '\t', 631,
        ' ', 631,
        0x3b7, 631,
        0x3c0, 631,
        0x3c4, 631,
        0x221e, 631,
        ',', 268,
        '.', 268,
        ':', 268,
        '?', 268,
        0x2218, 268,
        0x25cc, 268,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(623);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(326);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(631);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 631,
        '"', 725,
        '#', 631,
        '$', 542,
        '(', 414,
        '/', 804,
        '@', 755,
        '[', 450,
        '_', 514,
        '`', 631,
        'e', 628,
        't', 629,
        '{', 486,
        0xaf, 326,
        0x2682, 297,
        '\t', 631,
        ' ', 631,
        0x3b7, 631,
        0x3c0, 631,
        0x3c4, 631,
        0x221e, 631,
        ',', 268,
        '.', 268,
        ':', 268,
        '?', 268,
        0x2218, 268,
        0x25cc, 268,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(623);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(326);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(631);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 631,
        '"', 725,
        '#', 631,
        '$', 542,
        '(', 414,
        '/', 804,
        '@', 755,
        '[', 450,
        '_', 514,
        '`', 631,
        'i', 624,
        't', 629,
        '{', 486,
        0xaf, 326,
        0x2682, 297,
        '\t', 631,
        ' ', 631,
        0x3b7, 631,
        0x3c0, 631,
        0x3c4, 631,
        0x221e, 631,
        ',', 268,
        '.', 268,
        ':', 268,
        '?', 268,
        0x2218, 268,
        0x25cc, 268,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(623);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(326);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(631);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 631,
        '"', 725,
        '#', 631,
        '$', 542,
        '(', 414,
        '/', 804,
        '@', 755,
        '[', 450,
        '_', 514,
        '`', 631,
        'n', 632,
        't', 629,
        '{', 486,
        0xaf, 326,
        0x2682, 297,
        '\t', 631,
        ' ', 631,
        0x3b7, 631,
        0x3c0, 631,
        0x3c4, 631,
        0x221e, 631,
        ',', 268,
        '.', 268,
        ':', 268,
        '?', 268,
        0x2218, 268,
        0x25cc, 268,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(623);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(326);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(631);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 631,
        '"', 725,
        '#', 631,
        '$', 542,
        '(', 414,
        '/', 804,
        '@', 755,
        '[', 450,
        '_', 514,
        '`', 631,
        'o', 625,
        't', 629,
        '{', 486,
        0xaf, 326,
        0x2682, 297,
        '\t', 631,
        ' ', 631,
        0x3b7, 631,
        0x3c0, 631,
        0x3c4, 631,
        0x221e, 631,
        ',', 268,
        '.', 268,
        ':', 268,
        '?', 268,
        0x2218, 268,
        0x25cc, 268,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(623);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(326);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(631);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 631,
        '"', 725,
        '#', 631,
        '$', 542,
        '(', 414,
        '/', 804,
        '@', 755,
        '[', 450,
        '_', 514,
        '`', 631,
        'o', 543,
        't', 629,
        '{', 486,
        0xaf, 326,
        0x2682, 297,
        '\t', 631,
        ' ', 631,
        0x3b7, 631,
        0x3c0, 631,
        0x3c4, 631,
        0x221e, 631,
        ',', 268,
        '.', 268,
        ':', 268,
        '?', 268,
        0x2218, 268,
        0x25cc, 268,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(623);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(326);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(631);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 631,
        '"', 725,
        '#', 631,
        '$', 542,
        '(', 414,
        '/', 804,
        '@', 755,
        '[', 450,
        '_', 514,
        '`', 631,
        't', 629,
        '{', 486,
        0xaf, 326,
        0x2682, 297,
        '\t', 631,
        ' ', 631,
        0x3b7, 631,
        0x3c0, 631,
        0x3c4, 631,
        0x221e, 631,
        ',', 268,
        '.', 268,
        ':', 268,
        '?', 268,
        0x2218, 268,
        0x25cc, 268,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(623);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(326);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(631);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 631,
        '"', 725,
        '#', 631,
        '$', 542,
        '(', 414,
        '/', 804,
        '@', 755,
        '[', 450,
        '_', 514,
        '`', 631,
        't', 385,
        '{', 486,
        0xaf, 326,
        0x2682, 297,
        '\t', 631,
        ' ', 631,
        0x3b7, 631,
        0x3c0, 631,
        0x3c4, 631,
        0x221e, 631,
        ',', 268,
        '.', 268,
        ':', 268,
        '?', 268,
        0x2218, 268,
        0x25cc, 268,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(623);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(326);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(631);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 642,
        '"', 727,
        '#', 642,
        '$', 544,
        '(', 416,
        '-', 358,
        '/', 806,
        '@', 757,
        '[', 452,
        ']', 469,
        '_', 516,
        '`', 642,
        't', 640,
        '{', 488,
        0xaf, 328,
        0x2682, 299,
        '\t', 642,
        ' ', 642,
        0x3b7, 642,
        0x3c0, 642,
        0x3c4, 642,
        0x221e, 642,
        ',', 270,
        '.', 270,
        ':', 270,
        '?', 270,
        0x2218, 270,
        0x25cc, 270,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(634);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(328);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(642);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 642,
        '"', 727,
        '#', 642,
        '$', 544,
        '(', 416,
        '.', 270,
        '/', 806,
        '@', 757,
        '[', 452,
        ']', 469,
        '_', 516,
        '`', 642,
        't', 640,
        '{', 488,
        0xaf, 328,
        0x2682, 299,
        '\t', 642,
        ' ', 642,
        'E', 633,
        'e', 633,
        0x3b7, 642,
        0x3c0, 642,
        0x3c4, 642,
        0x221e, 642,
        ',', 270,
        ':', 270,
        '?', 270,
        0x2218, 270,
        0x25cc, 270,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(634);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(328);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(642);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 642,
        '"', 727,
        '#', 642,
        '$', 544,
        '(', 416,
        '/', 806,
        '@', 757,
        '[', 452,
        ']', 469,
        '_', 516,
        '`', 642,
        'd', 637,
        't', 640,
        '{', 488,
        0xaf, 328,
        0x2682, 299,
        '\t', 642,
        ' ', 642,
        0x3b7, 642,
        0x3c0, 642,
        0x3c4, 642,
        0x221e, 642,
        ',', 270,
        '.', 270,
        ':', 270,
        '?', 270,
        0x2218, 270,
        0x25cc, 270,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(634);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(328);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(642);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 642,
        '"', 727,
        '#', 642,
        '$', 544,
        '(', 416,
        '/', 806,
        '@', 757,
        '[', 452,
        ']', 469,
        '_', 516,
        '`', 642,
        'd', 641,
        't', 640,
        '{', 488,
        0xaf, 328,
        0x2682, 299,
        '\t', 642,
        ' ', 642,
        0x3b7, 642,
        0x3c0, 642,
        0x3c4, 642,
        0x221e, 642,
        ',', 270,
        '.', 270,
        ':', 270,
        '?', 270,
        0x2218, 270,
        0x25cc, 270,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(634);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(328);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(642);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 642,
        '"', 727,
        '#', 642,
        '$', 544,
        '(', 416,
        '/', 806,
        '@', 757,
        '[', 452,
        ']', 469,
        '_', 516,
        '`', 642,
        'e', 639,
        't', 640,
        '{', 488,
        0xaf, 328,
        0x2682, 299,
        '\t', 642,
        ' ', 642,
        0x3b7, 642,
        0x3c0, 642,
        0x3c4, 642,
        0x221e, 642,
        ',', 270,
        '.', 270,
        ':', 270,
        '?', 270,
        0x2218, 270,
        0x25cc, 270,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(634);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(328);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(642);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 642,
        '"', 727,
        '#', 642,
        '$', 544,
        '(', 416,
        '/', 806,
        '@', 757,
        '[', 452,
        ']', 469,
        '_', 516,
        '`', 642,
        'i', 635,
        't', 640,
        '{', 488,
        0xaf, 328,
        0x2682, 299,
        '\t', 642,
        ' ', 642,
        0x3b7, 642,
        0x3c0, 642,
        0x3c4, 642,
        0x221e, 642,
        ',', 270,
        '.', 270,
        ':', 270,
        '?', 270,
        0x2218, 270,
        0x25cc, 270,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(634);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(328);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(642);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 642,
        '"', 727,
        '#', 642,
        '$', 544,
        '(', 416,
        '/', 806,
        '@', 757,
        '[', 452,
        ']', 469,
        '_', 516,
        '`', 642,
        'n', 643,
        't', 640,
        '{', 488,
        0xaf, 328,
        0x2682, 299,
        '\t', 642,
        ' ', 642,
        0x3b7, 642,
        0x3c0, 642,
        0x3c4, 642,
        0x221e, 642,
        ',', 270,
        '.', 270,
        ':', 270,
        '?', 270,
        0x2218, 270,
        0x25cc, 270,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(634);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(328);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(642);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 642,
        '"', 727,
        '#', 642,
        '$', 544,
        '(', 416,
        '/', 806,
        '@', 757,
        '[', 452,
        ']', 469,
        '_', 516,
        '`', 642,
        'o', 636,
        't', 640,
        '{', 488,
        0xaf, 328,
        0x2682, 299,
        '\t', 642,
        ' ', 642,
        0x3b7, 642,
        0x3c0, 642,
        0x3c4, 642,
        0x221e, 642,
        ',', 270,
        '.', 270,
        ':', 270,
        '?', 270,
        0x2218, 270,
        0x25cc, 270,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(634);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(328);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(642);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 642,
        '"', 727,
        '#', 642,
        '$', 544,
        '(', 416,
        '/', 806,
        '@', 757,
        '[', 452,
        ']', 469,
        '_', 516,
        '`', 642,
        'o', 545,
        't', 640,
        '{', 488,
        0xaf, 328,
        0x2682, 299,
        '\t', 642,
        ' ', 642,
        0x3b7, 642,
        0x3c0, 642,
        0x3c4, 642,
        0x221e, 642,
        ',', 270,
        '.', 270,
        ':', 270,
        '?', 270,
        0x2218, 270,
        0x25cc, 270,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(634);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(328);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(642);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 642,
        '"', 727,
        '#', 642,
        '$', 544,
        '(', 416,
        '/', 806,
        '@', 757,
        '[', 452,
        ']', 469,
        '_', 516,
        '`', 642,
        't', 640,
        '{', 488,
        0xaf, 328,
        0x2682, 299,
        '\t', 642,
        ' ', 642,
        0x3b7, 642,
        0x3c0, 642,
        0x3c4, 642,
        0x221e, 642,
        ',', 270,
        '.', 270,
        ':', 270,
        '?', 270,
        0x2218, 270,
        0x25cc, 270,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(634);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(328);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(642);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 642,
        '"', 727,
        '#', 642,
        '$', 544,
        '(', 416,
        '/', 806,
        '@', 757,
        '[', 452,
        ']', 469,
        '_', 516,
        '`', 642,
        't', 387,
        '{', 488,
        0xaf, 328,
        0x2682, 299,
        '\t', 642,
        ' ', 642,
        0x3b7, 642,
        0x3c0, 642,
        0x3c4, 642,
        0x221e, 642,
        ',', 270,
        '.', 270,
        ':', 270,
        '?', 270,
        0x2218, 270,
        0x25cc, 270,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(634);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(328);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(642);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 653,
        '"', 729,
        '#', 653,
        '$', 546,
        '(', 418,
        '-', 360,
        '@', 759,
        '[', 454,
        ']', 471,
        '_', 518,
        '`', 653,
        't', 651,
        '{', 490,
        0xaf, 330,
        0x2682, 301,
        '\t', 653,
        ' ', 653,
        0x3b7, 653,
        0x3c0, 653,
        0x3c4, 653,
        0x221e, 653,
        ',', 272,
        '.', 272,
        ':', 272,
        '?', 272,
        0x2218, 272,
        0x25cc, 272,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(645);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(330);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(653);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 653,
        '"', 729,
        '#', 653,
        '$', 546,
        '(', 418,
        '.', 272,
        '@', 759,
        '[', 454,
        ']', 471,
        '_', 518,
        '`', 653,
        't', 651,
        '{', 490,
        0xaf, 330,
        0x2682, 301,
        '\t', 653,
        ' ', 653,
        'E', 644,
        'e', 644,
        0x3b7, 653,
        0x3c0, 653,
        0x3c4, 653,
        0x221e, 653,
        ',', 272,
        ':', 272,
        '?', 272,
        0x2218, 272,
        0x25cc, 272,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(645);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(330);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(653);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 653,
        '"', 729,
        '#', 653,
        '$', 546,
        '(', 418,
        '@', 759,
        '[', 454,
        ']', 471,
        '_', 518,
        '`', 653,
        'd', 648,
        't', 651,
        '{', 490,
        0xaf, 330,
        0x2682, 301,
        '\t', 653,
        ' ', 653,
        0x3b7, 653,
        0x3c0, 653,
        0x3c4, 653,
        0x221e, 653,
        ',', 272,
        '.', 272,
        ':', 272,
        '?', 272,
        0x2218, 272,
        0x25cc, 272,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(645);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(330);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(653);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 653,
        '"', 729,
        '#', 653,
        '$', 546,
        '(', 418,
        '@', 759,
        '[', 454,
        ']', 471,
        '_', 518,
        '`', 653,
        'd', 652,
        't', 651,
        '{', 490,
        0xaf, 330,
        0x2682, 301,
        '\t', 653,
        ' ', 653,
        0x3b7, 653,
        0x3c0, 653,
        0x3c4, 653,
        0x221e, 653,
        ',', 272,
        '.', 272,
        ':', 272,
        '?', 272,
        0x2218, 272,
        0x25cc, 272,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(645);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(330);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(653);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 653,
        '"', 729,
        '#', 653,
        '$', 546,
        '(', 418,
        '@', 759,
        '[', 454,
        ']', 471,
        '_', 518,
        '`', 653,
        'e', 650,
        't', 651,
        '{', 490,
        0xaf, 330,
        0x2682, 301,
        '\t', 653,
        ' ', 653,
        0x3b7, 653,
        0x3c0, 653,
        0x3c4, 653,
        0x221e, 653,
        ',', 272,
        '.', 272,
        ':', 272,
        '?', 272,
        0x2218, 272,
        0x25cc, 272,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(645);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(330);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(653);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 653,
        '"', 729,
        '#', 653,
        '$', 546,
        '(', 418,
        '@', 759,
        '[', 454,
        ']', 471,
        '_', 518,
        '`', 653,
        'i', 646,
        't', 651,
        '{', 490,
        0xaf, 330,
        0x2682, 301,
        '\t', 653,
        ' ', 653,
        0x3b7, 653,
        0x3c0, 653,
        0x3c4, 653,
        0x221e, 653,
        ',', 272,
        '.', 272,
        ':', 272,
        '?', 272,
        0x2218, 272,
        0x25cc, 272,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(645);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(330);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(653);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 653,
        '"', 729,
        '#', 653,
        '$', 546,
        '(', 418,
        '@', 759,
        '[', 454,
        ']', 471,
        '_', 518,
        '`', 653,
        'n', 654,
        't', 651,
        '{', 490,
        0xaf, 330,
        0x2682, 301,
        '\t', 653,
        ' ', 653,
        0x3b7, 653,
        0x3c0, 653,
        0x3c4, 653,
        0x221e, 653,
        ',', 272,
        '.', 272,
        ':', 272,
        '?', 272,
        0x2218, 272,
        0x25cc, 272,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(645);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(330);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(653);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 653,
        '"', 729,
        '#', 653,
        '$', 546,
        '(', 418,
        '@', 759,
        '[', 454,
        ']', 471,
        '_', 518,
        '`', 653,
        'o', 647,
        't', 651,
        '{', 490,
        0xaf, 330,
        0x2682, 301,
        '\t', 653,
        ' ', 653,
        0x3b7, 653,
        0x3c0, 653,
        0x3c4, 653,
        0x221e, 653,
        ',', 272,
        '.', 272,
        ':', 272,
        '?', 272,
        0x2218, 272,
        0x25cc, 272,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(645);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(330);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(653);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 653,
        '"', 729,
        '#', 653,
        '$', 546,
        '(', 418,
        '@', 759,
        '[', 454,
        ']', 471,
        '_', 518,
        '`', 653,
        'o', 547,
        't', 651,
        '{', 490,
        0xaf, 330,
        0x2682, 301,
        '\t', 653,
        ' ', 653,
        0x3b7, 653,
        0x3c0, 653,
        0x3c4, 653,
        0x221e, 653,
        ',', 272,
        '.', 272,
        ':', 272,
        '?', 272,
        0x2218, 272,
        0x25cc, 272,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(645);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(330);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(653);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 653,
        '"', 729,
        '#', 653,
        '$', 546,
        '(', 418,
        '@', 759,
        '[', 454,
        ']', 471,
        '_', 518,
        '`', 653,
        't', 651,
        '{', 490,
        0xaf, 330,
        0x2682, 301,
        '\t', 653,
        ' ', 653,
        0x3b7, 653,
        0x3c0, 653,
        0x3c4, 653,
        0x221e, 653,
        ',', 272,
        '.', 272,
        ':', 272,
        '?', 272,
        0x2218, 272,
        0x25cc, 272,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(645);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(330);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(653);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 653,
        '"', 729,
        '#', 653,
        '$', 546,
        '(', 418,
        '@', 759,
        '[', 454,
        ']', 471,
        '_', 518,
        '`', 653,
        't', 389,
        '{', 490,
        0xaf, 330,
        0x2682, 301,
        '\t', 653,
        ' ', 653,
        0x3b7, 653,
        0x3c0, 653,
        0x3c4, 653,
        0x221e, 653,
        ',', 272,
        '.', 272,
        ':', 272,
        '?', 272,
        0x2218, 272,
        0x25cc, 272,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(645);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(330);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(653);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 664,
        '"', 731,
        '#', 664,
        '$', 548,
        '(', 420,
        ')', 433,
        '-', 362,
        '@', 761,
        '[', 456,
        '_', 520,
        '`', 664,
        't', 662,
        '{', 492,
        0xaf, 332,
        0x2682, 303,
        '\t', 664,
        ' ', 664,
        0x3b7, 664,
        0x3c0, 664,
        0x3c4, 664,
        0x221e, 664,
        ',', 274,
        '.', 274,
        ':', 274,
        '?', 274,
        0x2218, 274,
        0x25cc, 274,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(656);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(332);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 664,
        '"', 731,
        '#', 664,
        '$', 548,
        '(', 420,
        ')', 433,
        '.', 274,
        '@', 761,
        '[', 456,
        '_', 520,
        '`', 664,
        't', 662,
        '{', 492,
        0xaf, 332,
        0x2682, 303,
        '\t', 664,
        ' ', 664,
        'E', 655,
        'e', 655,
        0x3b7, 664,
        0x3c0, 664,
        0x3c4, 664,
        0x221e, 664,
        ',', 274,
        ':', 274,
        '?', 274,
        0x2218, 274,
        0x25cc, 274,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(656);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(332);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 664,
        '"', 731,
        '#', 664,
        '$', 548,
        '(', 420,
        ')', 433,
        '@', 761,
        '[', 456,
        '_', 520,
        '`', 664,
        'd', 659,
        't', 662,
        '{', 492,
        0xaf, 332,
        0x2682, 303,
        '\t', 664,
        ' ', 664,
        0x3b7, 664,
        0x3c0, 664,
        0x3c4, 664,
        0x221e, 664,
        ',', 274,
        '.', 274,
        ':', 274,
        '?', 274,
        0x2218, 274,
        0x25cc, 274,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(656);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(332);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 664,
        '"', 731,
        '#', 664,
        '$', 548,
        '(', 420,
        ')', 433,
        '@', 761,
        '[', 456,
        '_', 520,
        '`', 664,
        'd', 663,
        't', 662,
        '{', 492,
        0xaf, 332,
        0x2682, 303,
        '\t', 664,
        ' ', 664,
        0x3b7, 664,
        0x3c0, 664,
        0x3c4, 664,
        0x221e, 664,
        ',', 274,
        '.', 274,
        ':', 274,
        '?', 274,
        0x2218, 274,
        0x25cc, 274,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(656);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(332);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 664,
        '"', 731,
        '#', 664,
        '$', 548,
        '(', 420,
        ')', 433,
        '@', 761,
        '[', 456,
        '_', 520,
        '`', 664,
        'e', 661,
        't', 662,
        '{', 492,
        0xaf, 332,
        0x2682, 303,
        '\t', 664,
        ' ', 664,
        0x3b7, 664,
        0x3c0, 664,
        0x3c4, 664,
        0x221e, 664,
        ',', 274,
        '.', 274,
        ':', 274,
        '?', 274,
        0x2218, 274,
        0x25cc, 274,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(656);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(332);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 664,
        '"', 731,
        '#', 664,
        '$', 548,
        '(', 420,
        ')', 433,
        '@', 761,
        '[', 456,
        '_', 520,
        '`', 664,
        'i', 657,
        't', 662,
        '{', 492,
        0xaf, 332,
        0x2682, 303,
        '\t', 664,
        ' ', 664,
        0x3b7, 664,
        0x3c0, 664,
        0x3c4, 664,
        0x221e, 664,
        ',', 274,
        '.', 274,
        ':', 274,
        '?', 274,
        0x2218, 274,
        0x25cc, 274,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(656);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(332);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 664,
        '"', 731,
        '#', 664,
        '$', 548,
        '(', 420,
        ')', 433,
        '@', 761,
        '[', 456,
        '_', 520,
        '`', 664,
        'n', 665,
        't', 662,
        '{', 492,
        0xaf, 332,
        0x2682, 303,
        '\t', 664,
        ' ', 664,
        0x3b7, 664,
        0x3c0, 664,
        0x3c4, 664,
        0x221e, 664,
        ',', 274,
        '.', 274,
        ':', 274,
        '?', 274,
        0x2218, 274,
        0x25cc, 274,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(656);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(332);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 664,
        '"', 731,
        '#', 664,
        '$', 548,
        '(', 420,
        ')', 433,
        '@', 761,
        '[', 456,
        '_', 520,
        '`', 664,
        'o', 658,
        't', 662,
        '{', 492,
        0xaf, 332,
        0x2682, 303,
        '\t', 664,
        ' ', 664,
        0x3b7, 664,
        0x3c0, 664,
        0x3c4, 664,
        0x221e, 664,
        ',', 274,
        '.', 274,
        ':', 274,
        '?', 274,
        0x2218, 274,
        0x25cc, 274,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(656);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(332);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 664,
        '"', 731,
        '#', 664,
        '$', 548,
        '(', 420,
        ')', 433,
        '@', 761,
        '[', 456,
        '_', 520,
        '`', 664,
        'o', 549,
        't', 662,
        '{', 492,
        0xaf, 332,
        0x2682, 303,
        '\t', 664,
        ' ', 664,
        0x3b7, 664,
        0x3c0, 664,
        0x3c4, 664,
        0x221e, 664,
        ',', 274,
        '.', 274,
        ':', 274,
        '?', 274,
        0x2218, 274,
        0x25cc, 274,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(656);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(332);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 664,
        '"', 731,
        '#', 664,
        '$', 548,
        '(', 420,
        ')', 433,
        '@', 761,
        '[', 456,
        '_', 520,
        '`', 664,
        't', 662,
        '{', 492,
        0xaf, 332,
        0x2682, 303,
        '\t', 664,
        ' ', 664,
        0x3b7, 664,
        0x3c0, 664,
        0x3c4, 664,
        0x221e, 664,
        ',', 274,
        '.', 274,
        ':', 274,
        '?', 274,
        0x2218, 274,
        0x25cc, 274,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(656);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(332);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 664,
        '"', 731,
        '#', 664,
        '$', 548,
        '(', 420,
        ')', 433,
        '@', 761,
        '[', 456,
        '_', 520,
        '`', 664,
        't', 391,
        '{', 492,
        0xaf, 332,
        0x2682, 303,
        '\t', 664,
        ' ', 664,
        0x3b7, 664,
        0x3c0, 664,
        0x3c4, 664,
        0x221e, 664,
        ',', 274,
        '.', 274,
        ':', 274,
        '?', 274,
        0x2218, 274,
        0x25cc, 274,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(656);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(332);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 675,
        '"', 733,
        '#', 675,
        '$', 550,
        '(', 422,
        '-', 364,
        '/', 808,
        '@', 763,
        '[', 458,
        '_', 522,
        '`', 675,
        't', 673,
        '{', 494,
        '}', 505,
        0xaf, 334,
        0x2682, 305,
        '\t', 675,
        ' ', 675,
        0x3b7, 675,
        0x3c0, 675,
        0x3c4, 675,
        0x221e, 675,
        ',', 276,
        '.', 276,
        ':', 276,
        '?', 276,
        0x2218, 276,
        0x25cc, 276,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(667);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(334);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(675);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 675,
        '"', 733,
        '#', 675,
        '$', 550,
        '(', 422,
        '.', 276,
        '/', 808,
        '@', 763,
        '[', 458,
        '_', 522,
        '`', 675,
        't', 673,
        '{', 494,
        '}', 505,
        0xaf, 334,
        0x2682, 305,
        '\t', 675,
        ' ', 675,
        'E', 666,
        'e', 666,
        0x3b7, 675,
        0x3c0, 675,
        0x3c4, 675,
        0x221e, 675,
        ',', 276,
        ':', 276,
        '?', 276,
        0x2218, 276,
        0x25cc, 276,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(667);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(334);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(675);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 675,
        '"', 733,
        '#', 675,
        '$', 550,
        '(', 422,
        '/', 808,
        '@', 763,
        '[', 458,
        '_', 522,
        '`', 675,
        'd', 670,
        't', 673,
        '{', 494,
        '}', 505,
        0xaf, 334,
        0x2682, 305,
        '\t', 675,
        ' ', 675,
        0x3b7, 675,
        0x3c0, 675,
        0x3c4, 675,
        0x221e, 675,
        ',', 276,
        '.', 276,
        ':', 276,
        '?', 276,
        0x2218, 276,
        0x25cc, 276,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(667);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(334);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(675);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 675,
        '"', 733,
        '#', 675,
        '$', 550,
        '(', 422,
        '/', 808,
        '@', 763,
        '[', 458,
        '_', 522,
        '`', 675,
        'd', 674,
        't', 673,
        '{', 494,
        '}', 505,
        0xaf, 334,
        0x2682, 305,
        '\t', 675,
        ' ', 675,
        0x3b7, 675,
        0x3c0, 675,
        0x3c4, 675,
        0x221e, 675,
        ',', 276,
        '.', 276,
        ':', 276,
        '?', 276,
        0x2218, 276,
        0x25cc, 276,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(667);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(334);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(675);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 675,
        '"', 733,
        '#', 675,
        '$', 550,
        '(', 422,
        '/', 808,
        '@', 763,
        '[', 458,
        '_', 522,
        '`', 675,
        'e', 672,
        't', 673,
        '{', 494,
        '}', 505,
        0xaf, 334,
        0x2682, 305,
        '\t', 675,
        ' ', 675,
        0x3b7, 675,
        0x3c0, 675,
        0x3c4, 675,
        0x221e, 675,
        ',', 276,
        '.', 276,
        ':', 276,
        '?', 276,
        0x2218, 276,
        0x25cc, 276,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(667);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(334);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(675);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 675,
        '"', 733,
        '#', 675,
        '$', 550,
        '(', 422,
        '/', 808,
        '@', 763,
        '[', 458,
        '_', 522,
        '`', 675,
        'i', 668,
        't', 673,
        '{', 494,
        '}', 505,
        0xaf, 334,
        0x2682, 305,
        '\t', 675,
        ' ', 675,
        0x3b7, 675,
        0x3c0, 675,
        0x3c4, 675,
        0x221e, 675,
        ',', 276,
        '.', 276,
        ':', 276,
        '?', 276,
        0x2218, 276,
        0x25cc, 276,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(667);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(334);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(675);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 675,
        '"', 733,
        '#', 675,
        '$', 550,
        '(', 422,
        '/', 808,
        '@', 763,
        '[', 458,
        '_', 522,
        '`', 675,
        'n', 676,
        't', 673,
        '{', 494,
        '}', 505,
        0xaf, 334,
        0x2682, 305,
        '\t', 675,
        ' ', 675,
        0x3b7, 675,
        0x3c0, 675,
        0x3c4, 675,
        0x221e, 675,
        ',', 276,
        '.', 276,
        ':', 276,
        '?', 276,
        0x2218, 276,
        0x25cc, 276,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(667);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(334);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(675);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 675,
        '"', 733,
        '#', 675,
        '$', 550,
        '(', 422,
        '/', 808,
        '@', 763,
        '[', 458,
        '_', 522,
        '`', 675,
        'o', 669,
        't', 673,
        '{', 494,
        '}', 505,
        0xaf, 334,
        0x2682, 305,
        '\t', 675,
        ' ', 675,
        0x3b7, 675,
        0x3c0, 675,
        0x3c4, 675,
        0x221e, 675,
        ',', 276,
        '.', 276,
        ':', 276,
        '?', 276,
        0x2218, 276,
        0x25cc, 276,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(667);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(334);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(675);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 675,
        '"', 733,
        '#', 675,
        '$', 550,
        '(', 422,
        '/', 808,
        '@', 763,
        '[', 458,
        '_', 522,
        '`', 675,
        'o', 551,
        't', 673,
        '{', 494,
        '}', 505,
        0xaf, 334,
        0x2682, 305,
        '\t', 675,
        ' ', 675,
        0x3b7, 675,
        0x3c0, 675,
        0x3c4, 675,
        0x221e, 675,
        ',', 276,
        '.', 276,
        ':', 276,
        '?', 276,
        0x2218, 276,
        0x25cc, 276,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(667);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(334);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(675);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 675,
        '"', 733,
        '#', 675,
        '$', 550,
        '(', 422,
        '/', 808,
        '@', 763,
        '[', 458,
        '_', 522,
        '`', 675,
        't', 673,
        '{', 494,
        '}', 505,
        0xaf, 334,
        0x2682, 305,
        '\t', 675,
        ' ', 675,
        0x3b7, 675,
        0x3c0, 675,
        0x3c4, 675,
        0x221e, 675,
        ',', 276,
        '.', 276,
        ':', 276,
        '?', 276,
        0x2218, 276,
        0x25cc, 276,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(667);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(334);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(675);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 675,
        '"', 733,
        '#', 675,
        '$', 550,
        '(', 422,
        '/', 808,
        '@', 763,
        '[', 458,
        '_', 522,
        '`', 675,
        't', 393,
        '{', 494,
        '}', 505,
        0xaf, 334,
        0x2682, 305,
        '\t', 675,
        ' ', 675,
        0x3b7, 675,
        0x3c0, 675,
        0x3c4, 675,
        0x221e, 675,
        ',', 276,
        '.', 276,
        ':', 276,
        '?', 276,
        0x2218, 276,
        0x25cc, 276,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(667);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(334);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(675);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 686,
        '"', 735,
        '#', 686,
        '$', 552,
        '(', 424,
        '-', 366,
        '@', 765,
        '[', 460,
        '_', 524,
        '`', 686,
        't', 684,
        '{', 496,
        '}', 507,
        0xaf, 336,
        0x2682, 307,
        '\t', 686,
        ' ', 686,
        0x3b7, 686,
        0x3c0, 686,
        0x3c4, 686,
        0x221e, 686,
        ',', 278,
        '.', 278,
        ':', 278,
        '?', 278,
        0x2218, 278,
        0x25cc, 278,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(678);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(336);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(686);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 686,
        '"', 735,
        '#', 686,
        '$', 552,
        '(', 424,
        '.', 278,
        '@', 765,
        '[', 460,
        '_', 524,
        '`', 686,
        't', 684,
        '{', 496,
        '}', 507,
        0xaf, 336,
        0x2682, 307,
        '\t', 686,
        ' ', 686,
        'E', 677,
        'e', 677,
        0x3b7, 686,
        0x3c0, 686,
        0x3c4, 686,
        0x221e, 686,
        ',', 278,
        ':', 278,
        '?', 278,
        0x2218, 278,
        0x25cc, 278,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(678);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(336);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(686);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 686,
        '"', 735,
        '#', 686,
        '$', 552,
        '(', 424,
        '@', 765,
        '[', 460,
        '_', 524,
        '`', 686,
        'd', 681,
        't', 684,
        '{', 496,
        '}', 507,
        0xaf, 336,
        0x2682, 307,
        '\t', 686,
        ' ', 686,
        0x3b7, 686,
        0x3c0, 686,
        0x3c4, 686,
        0x221e, 686,
        ',', 278,
        '.', 278,
        ':', 278,
        '?', 278,
        0x2218, 278,
        0x25cc, 278,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(678);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(336);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(686);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 686,
        '"', 735,
        '#', 686,
        '$', 552,
        '(', 424,
        '@', 765,
        '[', 460,
        '_', 524,
        '`', 686,
        'd', 685,
        't', 684,
        '{', 496,
        '}', 507,
        0xaf, 336,
        0x2682, 307,
        '\t', 686,
        ' ', 686,
        0x3b7, 686,
        0x3c0, 686,
        0x3c4, 686,
        0x221e, 686,
        ',', 278,
        '.', 278,
        ':', 278,
        '?', 278,
        0x2218, 278,
        0x25cc, 278,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(678);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(336);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(686);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 686,
        '"', 735,
        '#', 686,
        '$', 552,
        '(', 424,
        '@', 765,
        '[', 460,
        '_', 524,
        '`', 686,
        'e', 683,
        't', 684,
        '{', 496,
        '}', 507,
        0xaf, 336,
        0x2682, 307,
        '\t', 686,
        ' ', 686,
        0x3b7, 686,
        0x3c0, 686,
        0x3c4, 686,
        0x221e, 686,
        ',', 278,
        '.', 278,
        ':', 278,
        '?', 278,
        0x2218, 278,
        0x25cc, 278,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(678);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(336);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(686);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 686,
        '"', 735,
        '#', 686,
        '$', 552,
        '(', 424,
        '@', 765,
        '[', 460,
        '_', 524,
        '`', 686,
        'i', 679,
        't', 684,
        '{', 496,
        '}', 507,
        0xaf, 336,
        0x2682, 307,
        '\t', 686,
        ' ', 686,
        0x3b7, 686,
        0x3c0, 686,
        0x3c4, 686,
        0x221e, 686,
        ',', 278,
        '.', 278,
        ':', 278,
        '?', 278,
        0x2218, 278,
        0x25cc, 278,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(678);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(336);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(686);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 686,
        '"', 735,
        '#', 686,
        '$', 552,
        '(', 424,
        '@', 765,
        '[', 460,
        '_', 524,
        '`', 686,
        'n', 687,
        't', 684,
        '{', 496,
        '}', 507,
        0xaf, 336,
        0x2682, 307,
        '\t', 686,
        ' ', 686,
        0x3b7, 686,
        0x3c0, 686,
        0x3c4, 686,
        0x221e, 686,
        ',', 278,
        '.', 278,
        ':', 278,
        '?', 278,
        0x2218, 278,
        0x25cc, 278,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(678);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(336);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(686);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 686,
        '"', 735,
        '#', 686,
        '$', 552,
        '(', 424,
        '@', 765,
        '[', 460,
        '_', 524,
        '`', 686,
        'o', 680,
        't', 684,
        '{', 496,
        '}', 507,
        0xaf, 336,
        0x2682, 307,
        '\t', 686,
        ' ', 686,
        0x3b7, 686,
        0x3c0, 686,
        0x3c4, 686,
        0x221e, 686,
        ',', 278,
        '.', 278,
        ':', 278,
        '?', 278,
        0x2218, 278,
        0x25cc, 278,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(678);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(336);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(686);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 686,
        '"', 735,
        '#', 686,
        '$', 552,
        '(', 424,
        '@', 765,
        '[', 460,
        '_', 524,
        '`', 686,
        'o', 553,
        't', 684,
        '{', 496,
        '}', 507,
        0xaf, 336,
        0x2682, 307,
        '\t', 686,
        ' ', 686,
        0x3b7, 686,
        0x3c0, 686,
        0x3c4, 686,
        0x221e, 686,
        ',', 278,
        '.', 278,
        ':', 278,
        '?', 278,
        0x2218, 278,
        0x25cc, 278,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(678);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(336);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(686);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 686,
        '"', 735,
        '#', 686,
        '$', 552,
        '(', 424,
        '@', 765,
        '[', 460,
        '_', 524,
        '`', 686,
        't', 684,
        '{', 496,
        '}', 507,
        0xaf, 336,
        0x2682, 307,
        '\t', 686,
        ' ', 686,
        0x3b7, 686,
        0x3c0, 686,
        0x3c4, 686,
        0x221e, 686,
        ',', 278,
        '.', 278,
        ':', 278,
        '?', 278,
        0x2218, 278,
        0x25cc, 278,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(678);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(336);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(686);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 686,
        '"', 735,
        '#', 686,
        '$', 552,
        '(', 424,
        '@', 765,
        '[', 460,
        '_', 524,
        '`', 686,
        't', 395,
        '{', 496,
        '}', 507,
        0xaf, 336,
        0x2682, 307,
        '\t', 686,
        ' ', 686,
        0x3b7, 686,
        0x3c0, 686,
        0x3c4, 686,
        0x221e, 686,
        ',', 278,
        '.', 278,
        ':', 278,
        '?', 278,
        0x2218, 278,
        0x25cc, 278,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(678);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(336);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(686);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 697,
        '"', 737,
        '#', 697,
        '$', 554,
        '(', 426,
        ')', 435,
        '-', 368,
        '/', 810,
        '@', 767,
        '[', 462,
        '_', 526,
        '`', 697,
        't', 695,
        '{', 498,
        0xaf, 338,
        0x2682, 309,
        '\t', 697,
        ' ', 697,
        0x3b7, 697,
        0x3c0, 697,
        0x3c4, 697,
        0x221e, 697,
        ',', 280,
        '.', 280,
        ':', 280,
        '?', 280,
        0x2218, 280,
        0x25cc, 280,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(689);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(338);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(697);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 697,
        '"', 737,
        '#', 697,
        '$', 554,
        '(', 426,
        ')', 435,
        '.', 280,
        '/', 810,
        '@', 767,
        '[', 462,
        '_', 526,
        '`', 697,
        't', 695,
        '{', 498,
        0xaf, 338,
        0x2682, 309,
        '\t', 697,
        ' ', 697,
        'E', 688,
        'e', 688,
        0x3b7, 697,
        0x3c0, 697,
        0x3c4, 697,
        0x221e, 697,
        ',', 280,
        ':', 280,
        '?', 280,
        0x2218, 280,
        0x25cc, 280,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(689);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(338);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(697);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 697,
        '"', 737,
        '#', 697,
        '$', 554,
        '(', 426,
        ')', 435,
        '/', 810,
        '@', 767,
        '[', 462,
        '_', 526,
        '`', 697,
        'd', 692,
        't', 695,
        '{', 498,
        0xaf, 338,
        0x2682, 309,
        '\t', 697,
        ' ', 697,
        0x3b7, 697,
        0x3c0, 697,
        0x3c4, 697,
        0x221e, 697,
        ',', 280,
        '.', 280,
        ':', 280,
        '?', 280,
        0x2218, 280,
        0x25cc, 280,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(689);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(338);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(697);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 697,
        '"', 737,
        '#', 697,
        '$', 554,
        '(', 426,
        ')', 435,
        '/', 810,
        '@', 767,
        '[', 462,
        '_', 526,
        '`', 697,
        'd', 696,
        't', 695,
        '{', 498,
        0xaf, 338,
        0x2682, 309,
        '\t', 697,
        ' ', 697,
        0x3b7, 697,
        0x3c0, 697,
        0x3c4, 697,
        0x221e, 697,
        ',', 280,
        '.', 280,
        ':', 280,
        '?', 280,
        0x2218, 280,
        0x25cc, 280,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(689);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(338);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(697);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 697,
        '"', 737,
        '#', 697,
        '$', 554,
        '(', 426,
        ')', 435,
        '/', 810,
        '@', 767,
        '[', 462,
        '_', 526,
        '`', 697,
        'e', 694,
        't', 695,
        '{', 498,
        0xaf, 338,
        0x2682, 309,
        '\t', 697,
        ' ', 697,
        0x3b7, 697,
        0x3c0, 697,
        0x3c4, 697,
        0x221e, 697,
        ',', 280,
        '.', 280,
        ':', 280,
        '?', 280,
        0x2218, 280,
        0x25cc, 280,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(689);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(338);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(697);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 697,
        '"', 737,
        '#', 697,
        '$', 554,
        '(', 426,
        ')', 435,
        '/', 810,
        '@', 767,
        '[', 462,
        '_', 526,
        '`', 697,
        'i', 690,
        't', 695,
        '{', 498,
        0xaf, 338,
        0x2682, 309,
        '\t', 697,
        ' ', 697,
        0x3b7, 697,
        0x3c0, 697,
        0x3c4, 697,
        0x221e, 697,
        ',', 280,
        '.', 280,
        ':', 280,
        '?', 280,
        0x2218, 280,
        0x25cc, 280,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(689);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(338);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(697);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 697,
        '"', 737,
        '#', 697,
        '$', 554,
        '(', 426,
        ')', 435,
        '/', 810,
        '@', 767,
        '[', 462,
        '_', 526,
        '`', 697,
        'n', 698,
        't', 695,
        '{', 498,
        0xaf, 338,
        0x2682, 309,
        '\t', 697,
        ' ', 697,
        0x3b7, 697,
        0x3c0, 697,
        0x3c4, 697,
        0x221e, 697,
        ',', 280,
        '.', 280,
        ':', 280,
        '?', 280,
        0x2218, 280,
        0x25cc, 280,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(689);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(338);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(697);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 697,
        '"', 737,
        '#', 697,
        '$', 554,
        '(', 426,
        ')', 435,
        '/', 810,
        '@', 767,
        '[', 462,
        '_', 526,
        '`', 697,
        'o', 691,
        't', 695,
        '{', 498,
        0xaf, 338,
        0x2682, 309,
        '\t', 697,
        ' ', 697,
        0x3b7, 697,
        0x3c0, 697,
        0x3c4, 697,
        0x221e, 697,
        ',', 280,
        '.', 280,
        ':', 280,
        '?', 280,
        0x2218, 280,
        0x25cc, 280,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(689);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(338);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(697);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 697,
        '"', 737,
        '#', 697,
        '$', 554,
        '(', 426,
        ')', 435,
        '/', 810,
        '@', 767,
        '[', 462,
        '_', 526,
        '`', 697,
        'o', 555,
        't', 695,
        '{', 498,
        0xaf, 338,
        0x2682, 309,
        '\t', 697,
        ' ', 697,
        0x3b7, 697,
        0x3c0, 697,
        0x3c4, 697,
        0x221e, 697,
        ',', 280,
        '.', 280,
        ':', 280,
        '?', 280,
        0x2218, 280,
        0x25cc, 280,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(689);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(338);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(697);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 697,
        '"', 737,
        '#', 697,
        '$', 554,
        '(', 426,
        ')', 435,
        '/', 810,
        '@', 767,
        '[', 462,
        '_', 526,
        '`', 697,
        't', 695,
        '{', 498,
        0xaf, 338,
        0x2682, 309,
        '\t', 697,
        ' ', 697,
        0x3b7, 697,
        0x3c0, 697,
        0x3c4, 697,
        0x221e, 697,
        ',', 280,
        '.', 280,
        ':', 280,
        '?', 280,
        0x2218, 280,
        0x25cc, 280,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(689);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(338);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(697);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '\r', 697,
        '"', 737,
        '#', 697,
        '$', 554,
        '(', 426,
        ')', 435,
        '/', 810,
        '@', 767,
        '[', 462,
        '_', 526,
        '`', 697,
        't', 397,
        '{', 498,
        0xaf, 338,
        0x2682, 309,
        '\t', 697,
        ' ', 697,
        0x3b7, 697,
        0x3c0, 697,
        0x3c4, 697,
        0x221e, 697,
        ',', 280,
        '.', 280,
        ':', 280,
        '?', 280,
        0x2218, 280,
        0x25cc, 280,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(689);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(338);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(697);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '"', 739,
        '#', 708,
        '$', 538,
        '-', 370,
        '@', 769,
        '`', 708,
        't', 706,
        0xaf, 340,
        0x2682, 311,
        '\t', 708,
        ' ', 708,
        0x3b7, 708,
        0x3c0, 708,
        0x3c4, 708,
        0x221e, 708,
        ',', 282,
        '.', 282,
        ':', 282,
        '?', 282,
        0x2218, 282,
        0x25cc, 282,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(700);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(340);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(708);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '"', 739,
        '#', 708,
        '$', 538,
        '.', 282,
        '@', 769,
        '`', 708,
        't', 706,
        0xaf, 340,
        0x2682, 311,
        '\t', 708,
        ' ', 708,
        'E', 699,
        'e', 699,
        0x3b7, 708,
        0x3c0, 708,
        0x3c4, 708,
        0x221e, 708,
        ',', 282,
        ':', 282,
        '?', 282,
        0x2218, 282,
        0x25cc, 282,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(700);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(340);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(708);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '"', 739,
        '#', 708,
        '$', 538,
        '@', 769,
        '`', 708,
        'd', 703,
        't', 706,
        0xaf, 340,
        0x2682, 311,
        '\t', 708,
        ' ', 708,
        0x3b7, 708,
        0x3c0, 708,
        0x3c4, 708,
        0x221e, 708,
        ',', 282,
        '.', 282,
        ':', 282,
        '?', 282,
        0x2218, 282,
        0x25cc, 282,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(700);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(340);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(708);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '"', 739,
        '#', 708,
        '$', 538,
        '@', 769,
        '`', 708,
        'd', 707,
        't', 706,
        0xaf, 340,
        0x2682, 311,
        '\t', 708,
        ' ', 708,
        0x3b7, 708,
        0x3c0, 708,
        0x3c4, 708,
        0x221e, 708,
        ',', 282,
        '.', 282,
        ':', 282,
        '?', 282,
        0x2218, 282,
        0x25cc, 282,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(700);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(340);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(708);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '"', 739,
        '#', 708,
        '$', 538,
        '@', 769,
        '`', 708,
        'e', 705,
        't', 706,
        0xaf, 340,
        0x2682, 311,
        '\t', 708,
        ' ', 708,
        0x3b7, 708,
        0x3c0, 708,
        0x3c4, 708,
        0x221e, 708,
        ',', 282,
        '.', 282,
        ':', 282,
        '?', 282,
        0x2218, 282,
        0x25cc, 282,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(700);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(340);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(708);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '"', 739,
        '#', 708,
        '$', 538,
        '@', 769,
        '`', 708,
        'i', 701,
        't', 706,
        0xaf, 340,
        0x2682, 311,
        '\t', 708,
        ' ', 708,
        0x3b7, 708,
        0x3c0, 708,
        0x3c4, 708,
        0x221e, 708,
        ',', 282,
        '.', 282,
        ':', 282,
        '?', 282,
        0x2218, 282,
        0x25cc, 282,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(700);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(340);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(708);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '"', 739,
        '#', 708,
        '$', 538,
        '@', 769,
        '`', 708,
        'n', 709,
        't', 706,
        0xaf, 340,
        0x2682, 311,
        '\t', 708,
        ' ', 708,
        0x3b7, 708,
        0x3c0, 708,
        0x3c4, 708,
        0x221e, 708,
        ',', 282,
        '.', 282,
        ':', 282,
        '?', 282,
        0x2218, 282,
        0x25cc, 282,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(700);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(340);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(708);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '"', 739,
        '#', 708,
        '$', 538,
        '@', 769,
        '`', 708,
        'o', 702,
        't', 706,
        0xaf, 340,
        0x2682, 311,
        '\t', 708,
        ' ', 708,
        0x3b7, 708,
        0x3c0, 708,
        0x3c4, 708,
        0x221e, 708,
        ',', 282,
        '.', 282,
        ':', 282,
        '?', 282,
        0x2218, 282,
        0x25cc, 282,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(700);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(340);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(708);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '"', 739,
        '#', 708,
        '$', 538,
        '@', 769,
        '`', 708,
        'o', 539,
        't', 706,
        0xaf, 340,
        0x2682, 311,
        '\t', 708,
        ' ', 708,
        0x3b7, 708,
        0x3c0, 708,
        0x3c4, 708,
        0x221e, 708,
        ',', 282,
        '.', 282,
        ':', 282,
        '?', 282,
        0x2218, 282,
        0x25cc, 282,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(700);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(340);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(708);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '"', 739,
        '#', 708,
        '$', 538,
        '@', 769,
        '`', 708,
        't', 706,
        0xaf, 340,
        0x2682, 311,
        '\t', 708,
        ' ', 708,
        0x3b7, 708,
        0x3c0, 708,
        0x3c4, 708,
        0x221e, 708,
        ',', 282,
        '.', 282,
        ':', 282,
        '?', 282,
        0x2218, 282,
        0x25cc, 282,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(700);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(340);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(708);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym__multiline_string_part);
      ADVANCE_MAP(
        '"', 739,
        '#', 708,
        '$', 538,
        '@', 769,
        '`', 708,
        't', 399,
        0xaf, 340,
        0x2682, 311,
        '\t', 708,
        ' ', 708,
        0x3b7, 708,
        0x3c0, 708,
        0x3c4, 708,
        0x221e, 708,
        ',', 282,
        '.', 282,
        ':', 282,
        '?', 282,
        0x2218, 282,
        0x25cc, 282,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(700);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(340);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(708);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym__multiline_string_part);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(710);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      ADVANCE_MAP(
        '\r', 48,
        '"', 712,
        '$', 1,
        '(', 401,
        ')', 428,
        '/', 801,
        '@', 742,
        '[', 437,
        ']', 464,
        '_', 509,
        '`', 48,
        't', 46,
        '{', 473,
        '}', 500,
        0xaf, 313,
        0x2682, 284,
        0x3b7, 813,
        0x3c0, 813,
        0x3c4, 813,
        0x221e, 813,
        ',', 255,
        '.', 255,
        ':', 255,
        '?', 255,
        0x2218, 255,
        0x25cc, 255,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(782);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(313);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(343);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      ADVANCE_MAP(
        '\r', 565,
        '"', 713,
        '#', 565,
        '$', 528,
        '(', 402,
        ')', 429,
        '/', 802,
        '@', 743,
        '[', 438,
        ']', 465,
        '_', 510,
        '`', 565,
        't', 563,
        '{', 474,
        '}', 501,
        0xaf, 314,
        0x2682, 285,
        '\t', 565,
        ' ', 565,
        0x3b7, 565,
        0x3c0, 565,
        0x3c4, 565,
        0x221e, 565,
        ',', 256,
        '.', 256,
        ':', 256,
        '?', 256,
        0x2218, 256,
        0x25cc, 256,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(557);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(314);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(565);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      ADVANCE_MAP(
        '\r', 58,
        '"', 714,
        '$', 3,
        '(', 403,
        '@', 744,
        '[', 439,
        '`', 58,
        't', 56,
        '{', 475,
        0xaf, 315,
        0x2682, 286,
        0x3b7, 814,
        0x3c0, 814,
        0x3c4, 814,
        0x221e, 814,
        ',', 257,
        '.', 257,
        ':', 257,
        '?', 257,
        0x2218, 257,
        0x25cc, 257,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(783);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(315);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(345);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      ADVANCE_MAP(
        '\r', 576,
        '"', 715,
        '#', 576,
        '$', 530,
        '(', 404,
        '@', 745,
        '[', 440,
        '`', 576,
        't', 574,
        '{', 476,
        0xaf, 316,
        0x2682, 287,
        '\t', 576,
        ' ', 576,
        0x3b7, 576,
        0x3c0, 576,
        0x3c4, 576,
        0x221e, 576,
        ',', 258,
        '.', 258,
        ':', 258,
        '?', 258,
        0x2218, 258,
        0x25cc, 258,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(568);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(316);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(576);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      ADVANCE_MAP(
        '\r', 68,
        '"', 716,
        '$', 5,
        '(', 405,
        '@', 746,
        '[', 441,
        '`', 68,
        't', 66,
        '{', 477,
        '}', 502,
        0xaf, 317,
        0x2682, 288,
        0x3b7, 815,
        0x3c0, 815,
        0x3c4, 815,
        0x221e, 815,
        ',', 259,
        '.', 259,
        ':', 259,
        '?', 259,
        0x2218, 259,
        0x25cc, 259,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(784);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(317);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(347);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      ADVANCE_MAP(
        '\r', 587,
        '"', 717,
        '#', 587,
        '$', 532,
        '(', 406,
        '@', 747,
        '[', 442,
        '`', 587,
        't', 585,
        '{', 478,
        '}', 503,
        0xaf, 318,
        0x2682, 289,
        '\t', 587,
        ' ', 587,
        0x3b7, 587,
        0x3c0, 587,
        0x3c4, 587,
        0x221e, 587,
        ',', 260,
        '.', 260,
        ':', 260,
        '?', 260,
        0x2218, 260,
        0x25cc, 260,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(579);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(318);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(587);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      ADVANCE_MAP(
        '\r', 78,
        '"', 718,
        '$', 7,
        '(', 407,
        '@', 748,
        '[', 443,
        ']', 466,
        '`', 78,
        't', 76,
        '{', 479,
        0xaf, 319,
        0x2682, 290,
        0x3b7, 816,
        0x3c0, 816,
        0x3c4, 816,
        0x221e, 816,
        ',', 261,
        '.', 261,
        ':', 261,
        '?', 261,
        0x2218, 261,
        0x25cc, 261,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(785);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(319);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(349);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      ADVANCE_MAP(
        '\r', 598,
        '"', 719,
        '#', 598,
        '$', 534,
        '(', 408,
        '@', 749,
        '[', 444,
        ']', 467,
        '`', 598,
        't', 596,
        '{', 480,
        0xaf, 320,
        0x2682, 291,
        '\t', 598,
        ' ', 598,
        0x3b7, 598,
        0x3c0, 598,
        0x3c4, 598,
        0x221e, 598,
        ',', 262,
        '.', 262,
        ':', 262,
        '?', 262,
        0x2218, 262,
        0x25cc, 262,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(590);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(320);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(598);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      ADVANCE_MAP(
        '\r', 88,
        '"', 720,
        '$', 9,
        '(', 409,
        ')', 430,
        '@', 750,
        '[', 445,
        '`', 88,
        't', 86,
        '{', 481,
        0xaf, 321,
        0x2682, 292,
        0x3b7, 817,
        0x3c0, 817,
        0x3c4, 817,
        0x221e, 817,
        ',', 263,
        '.', 263,
        ':', 263,
        '?', 263,
        0x2218, 263,
        0x25cc, 263,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(786);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(321);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(351);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      ADVANCE_MAP(
        '\r', 609,
        '"', 721,
        '#', 609,
        '$', 536,
        '(', 410,
        ')', 431,
        '@', 751,
        '[', 446,
        '`', 609,
        't', 607,
        '{', 482,
        0xaf, 322,
        0x2682, 293,
        '\t', 609,
        ' ', 609,
        0x3b7, 609,
        0x3c0, 609,
        0x3c4, 609,
        0x221e, 609,
        ',', 264,
        '.', 264,
        ':', 264,
        '?', 264,
        0x2218, 264,
        0x25cc, 264,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(601);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(322);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(609);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      ADVANCE_MAP(
        '\r', 98,
        '"', 722,
        '$', 13,
        '(', 411,
        '@', 752,
        '[', 447,
        '_', 511,
        '`', 98,
        't', 96,
        '{', 483,
        0xaf, 323,
        0x2682, 294,
        0x3b7, 818,
        0x3c0, 818,
        0x3c4, 818,
        0x221e, 818,
        ',', 265,
        '.', 265,
        ':', 265,
        '?', 265,
        0x2218, 265,
        0x25cc, 265,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(787);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(323);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(353);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      ADVANCE_MAP(
        '\r', 620,
        '"', 723,
        '#', 620,
        '$', 540,
        '(', 412,
        '@', 753,
        '[', 448,
        '_', 512,
        '`', 620,
        't', 618,
        '{', 484,
        0xaf, 324,
        0x2682, 295,
        '\t', 620,
        ' ', 620,
        0x3b7, 620,
        0x3c0, 620,
        0x3c4, 620,
        0x221e, 620,
        ',', 266,
        '.', 266,
        ':', 266,
        '?', 266,
        0x2218, 266,
        0x25cc, 266,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(612);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(324);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(620);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      ADVANCE_MAP(
        '\r', 108,
        '"', 724,
        '$', 15,
        '(', 413,
        '/', 803,
        '@', 754,
        '[', 449,
        '_', 513,
        '`', 108,
        't', 106,
        '{', 485,
        0xaf, 325,
        0x2682, 296,
        0x3b7, 819,
        0x3c0, 819,
        0x3c4, 819,
        0x221e, 819,
        ',', 267,
        '.', 267,
        ':', 267,
        '?', 267,
        0x2218, 267,
        0x25cc, 267,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(788);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(325);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(355);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      ADVANCE_MAP(
        '\r', 631,
        '"', 725,
        '#', 631,
        '$', 542,
        '(', 414,
        '/', 804,
        '@', 755,
        '[', 450,
        '_', 514,
        '`', 631,
        't', 629,
        '{', 486,
        0xaf, 326,
        0x2682, 297,
        '\t', 631,
        ' ', 631,
        0x3b7, 631,
        0x3c0, 631,
        0x3c4, 631,
        0x221e, 631,
        ',', 268,
        '.', 268,
        ':', 268,
        '?', 268,
        0x2218, 268,
        0x25cc, 268,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(623);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(326);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(631);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      ADVANCE_MAP(
        '\r', 118,
        '"', 726,
        '$', 17,
        '(', 415,
        '/', 805,
        '@', 756,
        '[', 451,
        ']', 468,
        '_', 515,
        '`', 118,
        't', 116,
        '{', 487,
        0xaf, 327,
        0x2682, 298,
        0x3b7, 820,
        0x3c0, 820,
        0x3c4, 820,
        0x221e, 820,
        ',', 269,
        '.', 269,
        ':', 269,
        '?', 269,
        0x2218, 269,
        0x25cc, 269,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(789);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(327);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(357);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      ADVANCE_MAP(
        '\r', 642,
        '"', 727,
        '#', 642,
        '$', 544,
        '(', 416,
        '/', 806,
        '@', 757,
        '[', 452,
        ']', 469,
        '_', 516,
        '`', 642,
        't', 640,
        '{', 488,
        0xaf, 328,
        0x2682, 299,
        '\t', 642,
        ' ', 642,
        0x3b7, 642,
        0x3c0, 642,
        0x3c4, 642,
        0x221e, 642,
        ',', 270,
        '.', 270,
        ':', 270,
        '?', 270,
        0x2218, 270,
        0x25cc, 270,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(634);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(328);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(642);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      ADVANCE_MAP(
        '\r', 128,
        '"', 728,
        '$', 19,
        '(', 417,
        '@', 758,
        '[', 453,
        ']', 470,
        '_', 517,
        '`', 128,
        't', 126,
        '{', 489,
        0xaf, 329,
        0x2682, 300,
        0x3b7, 821,
        0x3c0, 821,
        0x3c4, 821,
        0x221e, 821,
        ',', 271,
        '.', 271,
        ':', 271,
        '?', 271,
        0x2218, 271,
        0x25cc, 271,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(790);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(329);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(359);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      ADVANCE_MAP(
        '\r', 653,
        '"', 729,
        '#', 653,
        '$', 546,
        '(', 418,
        '@', 759,
        '[', 454,
        ']', 471,
        '_', 518,
        '`', 653,
        't', 651,
        '{', 490,
        0xaf, 330,
        0x2682, 301,
        '\t', 653,
        ' ', 653,
        0x3b7, 653,
        0x3c0, 653,
        0x3c4, 653,
        0x221e, 653,
        ',', 272,
        '.', 272,
        ':', 272,
        '?', 272,
        0x2218, 272,
        0x25cc, 272,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(645);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(330);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(653);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      ADVANCE_MAP(
        '\r', 138,
        '"', 730,
        '$', 21,
        '(', 419,
        ')', 432,
        '@', 760,
        '[', 455,
        '_', 519,
        '`', 138,
        't', 136,
        '{', 491,
        0xaf, 331,
        0x2682, 302,
        0x3b7, 822,
        0x3c0, 822,
        0x3c4, 822,
        0x221e, 822,
        ',', 273,
        '.', 273,
        ':', 273,
        '?', 273,
        0x2218, 273,
        0x25cc, 273,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(791);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(331);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(361);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      ADVANCE_MAP(
        '\r', 664,
        '"', 731,
        '#', 664,
        '$', 548,
        '(', 420,
        ')', 433,
        '@', 761,
        '[', 456,
        '_', 520,
        '`', 664,
        't', 662,
        '{', 492,
        0xaf, 332,
        0x2682, 303,
        '\t', 664,
        ' ', 664,
        0x3b7, 664,
        0x3c0, 664,
        0x3c4, 664,
        0x221e, 664,
        ',', 274,
        '.', 274,
        ':', 274,
        '?', 274,
        0x2218, 274,
        0x25cc, 274,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(656);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(332);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      ADVANCE_MAP(
        '\r', 148,
        '"', 732,
        '$', 23,
        '(', 421,
        '/', 807,
        '@', 762,
        '[', 457,
        '_', 521,
        '`', 148,
        't', 146,
        '{', 493,
        '}', 504,
        0xaf, 333,
        0x2682, 304,
        0x3b7, 823,
        0x3c0, 823,
        0x3c4, 823,
        0x221e, 823,
        ',', 275,
        '.', 275,
        ':', 275,
        '?', 275,
        0x2218, 275,
        0x25cc, 275,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(792);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(333);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(363);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      ADVANCE_MAP(
        '\r', 675,
        '"', 733,
        '#', 675,
        '$', 550,
        '(', 422,
        '/', 808,
        '@', 763,
        '[', 458,
        '_', 522,
        '`', 675,
        't', 673,
        '{', 494,
        '}', 505,
        0xaf, 334,
        0x2682, 305,
        '\t', 675,
        ' ', 675,
        0x3b7, 675,
        0x3c0, 675,
        0x3c4, 675,
        0x221e, 675,
        ',', 276,
        '.', 276,
        ':', 276,
        '?', 276,
        0x2218, 276,
        0x25cc, 276,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(667);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(334);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(675);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      ADVANCE_MAP(
        '\r', 158,
        '"', 734,
        '$', 25,
        '(', 423,
        '@', 764,
        '[', 459,
        '_', 523,
        '`', 158,
        't', 156,
        '{', 495,
        '}', 506,
        0xaf, 335,
        0x2682, 306,
        0x3b7, 824,
        0x3c0, 824,
        0x3c4, 824,
        0x221e, 824,
        ',', 277,
        '.', 277,
        ':', 277,
        '?', 277,
        0x2218, 277,
        0x25cc, 277,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(793);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(335);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(365);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      ADVANCE_MAP(
        '\r', 686,
        '"', 735,
        '#', 686,
        '$', 552,
        '(', 424,
        '@', 765,
        '[', 460,
        '_', 524,
        '`', 686,
        't', 684,
        '{', 496,
        '}', 507,
        0xaf, 336,
        0x2682, 307,
        '\t', 686,
        ' ', 686,
        0x3b7, 686,
        0x3c0, 686,
        0x3c4, 686,
        0x221e, 686,
        ',', 278,
        '.', 278,
        ':', 278,
        '?', 278,
        0x2218, 278,
        0x25cc, 278,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(678);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(336);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(686);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      ADVANCE_MAP(
        '\r', 168,
        '"', 736,
        '$', 27,
        '(', 425,
        ')', 434,
        '/', 809,
        '@', 766,
        '[', 461,
        '_', 525,
        '`', 168,
        't', 166,
        '{', 497,
        0xaf, 337,
        0x2682, 308,
        0x3b7, 825,
        0x3c0, 825,
        0x3c4, 825,
        0x221e, 825,
        ',', 279,
        '.', 279,
        ':', 279,
        '?', 279,
        0x2218, 279,
        0x25cc, 279,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(794);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(337);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(367);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      ADVANCE_MAP(
        '\r', 697,
        '"', 737,
        '#', 697,
        '$', 554,
        '(', 426,
        ')', 435,
        '/', 810,
        '@', 767,
        '[', 462,
        '_', 526,
        '`', 697,
        't', 695,
        '{', 498,
        0xaf, 338,
        0x2682, 309,
        '\t', 697,
        ' ', 697,
        0x3b7, 697,
        0x3c0, 697,
        0x3c4, 697,
        0x221e, 697,
        ',', 280,
        '.', 280,
        ':', 280,
        '?', 280,
        0x2218, 280,
        0x25cc, 280,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(689);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(338);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(697);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      ADVANCE_MAP(
        '"', 738,
        '$', 11,
        '@', 768,
        '`', 187,
        't', 185,
        0xaf, 339,
        0x2682, 310,
        0x3b7, 826,
        0x3c0, 826,
        0x3c4, 826,
        0x221e, 826,
        ',', 281,
        '.', 281,
        ':', 281,
        '?', 281,
        0x2218, 281,
        0x25cc, 281,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(795);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(339);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(369);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      ADVANCE_MAP(
        '"', 739,
        '#', 708,
        '$', 538,
        '@', 769,
        '`', 708,
        't', 706,
        0xaf, 340,
        0x2682, 311,
        '\t', 708,
        ' ', 708,
        0x3b7, 708,
        0x3c0, 708,
        0x3c4, 708,
        0x221e, 708,
        ',', 282,
        '.', 282,
        ':', 282,
        '?', 282,
        0x2218, 282,
        0x25cc, 282,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(700);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(340);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(708);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(740);
      if (lookahead == '#') ADVANCE(771);
      if (lookahead == '\\') ADVANCE(776);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(771);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(771);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(anon_sym_AT);
      ADVANCE_MAP(
        '\r', 48,
        '"', 712,
        '$', 1,
        '(', 401,
        ')', 428,
        '/', 801,
        '@', 742,
        '[', 437,
        ']', 464,
        '_', 509,
        '`', 48,
        't', 46,
        '{', 473,
        '}', 500,
        0xaf, 313,
        0x2682, 284,
        0x3b7, 813,
        0x3c0, 813,
        0x3c4, 813,
        0x221e, 813,
        ',', 255,
        '.', 255,
        ':', 255,
        '?', 255,
        0x2218, 255,
        0x25cc, 255,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(782);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(313);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(343);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(anon_sym_AT);
      ADVANCE_MAP(
        '\r', 565,
        '"', 713,
        '#', 565,
        '$', 528,
        '(', 402,
        ')', 429,
        '/', 802,
        '@', 743,
        '[', 438,
        ']', 465,
        '_', 510,
        '`', 565,
        't', 563,
        '{', 474,
        '}', 501,
        0xaf, 314,
        0x2682, 285,
        '\t', 565,
        ' ', 565,
        0x3b7, 565,
        0x3c0, 565,
        0x3c4, 565,
        0x221e, 565,
        ',', 256,
        '.', 256,
        ':', 256,
        '?', 256,
        0x2218, 256,
        0x25cc, 256,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(557);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(314);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(565);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(anon_sym_AT);
      ADVANCE_MAP(
        '\r', 58,
        '"', 714,
        '$', 3,
        '(', 403,
        '@', 744,
        '[', 439,
        '`', 58,
        't', 56,
        '{', 475,
        0xaf, 315,
        0x2682, 286,
        0x3b7, 814,
        0x3c0, 814,
        0x3c4, 814,
        0x221e, 814,
        ',', 257,
        '.', 257,
        ':', 257,
        '?', 257,
        0x2218, 257,
        0x25cc, 257,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(783);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(315);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(345);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(anon_sym_AT);
      ADVANCE_MAP(
        '\r', 576,
        '"', 715,
        '#', 576,
        '$', 530,
        '(', 404,
        '@', 745,
        '[', 440,
        '`', 576,
        't', 574,
        '{', 476,
        0xaf, 316,
        0x2682, 287,
        '\t', 576,
        ' ', 576,
        0x3b7, 576,
        0x3c0, 576,
        0x3c4, 576,
        0x221e, 576,
        ',', 258,
        '.', 258,
        ':', 258,
        '?', 258,
        0x2218, 258,
        0x25cc, 258,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(568);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(316);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(576);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(anon_sym_AT);
      ADVANCE_MAP(
        '\r', 68,
        '"', 716,
        '$', 5,
        '(', 405,
        '@', 746,
        '[', 441,
        '`', 68,
        't', 66,
        '{', 477,
        '}', 502,
        0xaf, 317,
        0x2682, 288,
        0x3b7, 815,
        0x3c0, 815,
        0x3c4, 815,
        0x221e, 815,
        ',', 259,
        '.', 259,
        ':', 259,
        '?', 259,
        0x2218, 259,
        0x25cc, 259,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(784);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(317);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(347);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(anon_sym_AT);
      ADVANCE_MAP(
        '\r', 587,
        '"', 717,
        '#', 587,
        '$', 532,
        '(', 406,
        '@', 747,
        '[', 442,
        '`', 587,
        't', 585,
        '{', 478,
        '}', 503,
        0xaf, 318,
        0x2682, 289,
        '\t', 587,
        ' ', 587,
        0x3b7, 587,
        0x3c0, 587,
        0x3c4, 587,
        0x221e, 587,
        ',', 260,
        '.', 260,
        ':', 260,
        '?', 260,
        0x2218, 260,
        0x25cc, 260,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(579);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(318);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(587);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(anon_sym_AT);
      ADVANCE_MAP(
        '\r', 78,
        '"', 718,
        '$', 7,
        '(', 407,
        '@', 748,
        '[', 443,
        ']', 466,
        '`', 78,
        't', 76,
        '{', 479,
        0xaf, 319,
        0x2682, 290,
        0x3b7, 816,
        0x3c0, 816,
        0x3c4, 816,
        0x221e, 816,
        ',', 261,
        '.', 261,
        ':', 261,
        '?', 261,
        0x2218, 261,
        0x25cc, 261,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(785);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(319);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(349);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(anon_sym_AT);
      ADVANCE_MAP(
        '\r', 598,
        '"', 719,
        '#', 598,
        '$', 534,
        '(', 408,
        '@', 749,
        '[', 444,
        ']', 467,
        '`', 598,
        't', 596,
        '{', 480,
        0xaf, 320,
        0x2682, 291,
        '\t', 598,
        ' ', 598,
        0x3b7, 598,
        0x3c0, 598,
        0x3c4, 598,
        0x221e, 598,
        ',', 262,
        '.', 262,
        ':', 262,
        '?', 262,
        0x2218, 262,
        0x25cc, 262,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(590);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(320);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(598);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(anon_sym_AT);
      ADVANCE_MAP(
        '\r', 88,
        '"', 720,
        '$', 9,
        '(', 409,
        ')', 430,
        '@', 750,
        '[', 445,
        '`', 88,
        't', 86,
        '{', 481,
        0xaf, 321,
        0x2682, 292,
        0x3b7, 817,
        0x3c0, 817,
        0x3c4, 817,
        0x221e, 817,
        ',', 263,
        '.', 263,
        ':', 263,
        '?', 263,
        0x2218, 263,
        0x25cc, 263,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(786);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(321);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(351);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(anon_sym_AT);
      ADVANCE_MAP(
        '\r', 609,
        '"', 721,
        '#', 609,
        '$', 536,
        '(', 410,
        ')', 431,
        '@', 751,
        '[', 446,
        '`', 609,
        't', 607,
        '{', 482,
        0xaf, 322,
        0x2682, 293,
        '\t', 609,
        ' ', 609,
        0x3b7, 609,
        0x3c0, 609,
        0x3c4, 609,
        0x221e, 609,
        ',', 264,
        '.', 264,
        ':', 264,
        '?', 264,
        0x2218, 264,
        0x25cc, 264,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(601);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(322);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(609);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(anon_sym_AT);
      ADVANCE_MAP(
        '\r', 98,
        '"', 722,
        '$', 13,
        '(', 411,
        '@', 752,
        '[', 447,
        '_', 511,
        '`', 98,
        't', 96,
        '{', 483,
        0xaf, 323,
        0x2682, 294,
        0x3b7, 818,
        0x3c0, 818,
        0x3c4, 818,
        0x221e, 818,
        ',', 265,
        '.', 265,
        ':', 265,
        '?', 265,
        0x2218, 265,
        0x25cc, 265,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(787);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(323);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(353);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(anon_sym_AT);
      ADVANCE_MAP(
        '\r', 620,
        '"', 723,
        '#', 620,
        '$', 540,
        '(', 412,
        '@', 753,
        '[', 448,
        '_', 512,
        '`', 620,
        't', 618,
        '{', 484,
        0xaf, 324,
        0x2682, 295,
        '\t', 620,
        ' ', 620,
        0x3b7, 620,
        0x3c0, 620,
        0x3c4, 620,
        0x221e, 620,
        ',', 266,
        '.', 266,
        ':', 266,
        '?', 266,
        0x2218, 266,
        0x25cc, 266,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(612);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(324);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(620);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(anon_sym_AT);
      ADVANCE_MAP(
        '\r', 108,
        '"', 724,
        '$', 15,
        '(', 413,
        '/', 803,
        '@', 754,
        '[', 449,
        '_', 513,
        '`', 108,
        't', 106,
        '{', 485,
        0xaf, 325,
        0x2682, 296,
        0x3b7, 819,
        0x3c0, 819,
        0x3c4, 819,
        0x221e, 819,
        ',', 267,
        '.', 267,
        ':', 267,
        '?', 267,
        0x2218, 267,
        0x25cc, 267,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(788);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(325);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(355);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(anon_sym_AT);
      ADVANCE_MAP(
        '\r', 631,
        '"', 725,
        '#', 631,
        '$', 542,
        '(', 414,
        '/', 804,
        '@', 755,
        '[', 450,
        '_', 514,
        '`', 631,
        't', 629,
        '{', 486,
        0xaf, 326,
        0x2682, 297,
        '\t', 631,
        ' ', 631,
        0x3b7, 631,
        0x3c0, 631,
        0x3c4, 631,
        0x221e, 631,
        ',', 268,
        '.', 268,
        ':', 268,
        '?', 268,
        0x2218, 268,
        0x25cc, 268,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(623);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(326);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(631);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(anon_sym_AT);
      ADVANCE_MAP(
        '\r', 118,
        '"', 726,
        '$', 17,
        '(', 415,
        '/', 805,
        '@', 756,
        '[', 451,
        ']', 468,
        '_', 515,
        '`', 118,
        't', 116,
        '{', 487,
        0xaf, 327,
        0x2682, 298,
        0x3b7, 820,
        0x3c0, 820,
        0x3c4, 820,
        0x221e, 820,
        ',', 269,
        '.', 269,
        ':', 269,
        '?', 269,
        0x2218, 269,
        0x25cc, 269,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(789);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(327);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(357);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(anon_sym_AT);
      ADVANCE_MAP(
        '\r', 642,
        '"', 727,
        '#', 642,
        '$', 544,
        '(', 416,
        '/', 806,
        '@', 757,
        '[', 452,
        ']', 469,
        '_', 516,
        '`', 642,
        't', 640,
        '{', 488,
        0xaf, 328,
        0x2682, 299,
        '\t', 642,
        ' ', 642,
        0x3b7, 642,
        0x3c0, 642,
        0x3c4, 642,
        0x221e, 642,
        ',', 270,
        '.', 270,
        ':', 270,
        '?', 270,
        0x2218, 270,
        0x25cc, 270,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(634);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(328);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(642);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(anon_sym_AT);
      ADVANCE_MAP(
        '\r', 128,
        '"', 728,
        '$', 19,
        '(', 417,
        '@', 758,
        '[', 453,
        ']', 470,
        '_', 517,
        '`', 128,
        't', 126,
        '{', 489,
        0xaf, 329,
        0x2682, 300,
        0x3b7, 821,
        0x3c0, 821,
        0x3c4, 821,
        0x221e, 821,
        ',', 271,
        '.', 271,
        ':', 271,
        '?', 271,
        0x2218, 271,
        0x25cc, 271,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(790);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(329);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(359);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(anon_sym_AT);
      ADVANCE_MAP(
        '\r', 653,
        '"', 729,
        '#', 653,
        '$', 546,
        '(', 418,
        '@', 759,
        '[', 454,
        ']', 471,
        '_', 518,
        '`', 653,
        't', 651,
        '{', 490,
        0xaf, 330,
        0x2682, 301,
        '\t', 653,
        ' ', 653,
        0x3b7, 653,
        0x3c0, 653,
        0x3c4, 653,
        0x221e, 653,
        ',', 272,
        '.', 272,
        ':', 272,
        '?', 272,
        0x2218, 272,
        0x25cc, 272,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(645);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(330);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(653);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(anon_sym_AT);
      ADVANCE_MAP(
        '\r', 138,
        '"', 730,
        '$', 21,
        '(', 419,
        ')', 432,
        '@', 760,
        '[', 455,
        '_', 519,
        '`', 138,
        't', 136,
        '{', 491,
        0xaf, 331,
        0x2682, 302,
        0x3b7, 822,
        0x3c0, 822,
        0x3c4, 822,
        0x221e, 822,
        ',', 273,
        '.', 273,
        ':', 273,
        '?', 273,
        0x2218, 273,
        0x25cc, 273,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(791);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(331);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(361);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(anon_sym_AT);
      ADVANCE_MAP(
        '\r', 664,
        '"', 731,
        '#', 664,
        '$', 548,
        '(', 420,
        ')', 433,
        '@', 761,
        '[', 456,
        '_', 520,
        '`', 664,
        't', 662,
        '{', 492,
        0xaf, 332,
        0x2682, 303,
        '\t', 664,
        ' ', 664,
        0x3b7, 664,
        0x3c0, 664,
        0x3c4, 664,
        0x221e, 664,
        ',', 274,
        '.', 274,
        ':', 274,
        '?', 274,
        0x2218, 274,
        0x25cc, 274,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(656);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(332);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(anon_sym_AT);
      ADVANCE_MAP(
        '\r', 148,
        '"', 732,
        '$', 23,
        '(', 421,
        '/', 807,
        '@', 762,
        '[', 457,
        '_', 521,
        '`', 148,
        't', 146,
        '{', 493,
        '}', 504,
        0xaf, 333,
        0x2682, 304,
        0x3b7, 823,
        0x3c0, 823,
        0x3c4, 823,
        0x221e, 823,
        ',', 275,
        '.', 275,
        ':', 275,
        '?', 275,
        0x2218, 275,
        0x25cc, 275,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(792);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(333);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(363);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(anon_sym_AT);
      ADVANCE_MAP(
        '\r', 675,
        '"', 733,
        '#', 675,
        '$', 550,
        '(', 422,
        '/', 808,
        '@', 763,
        '[', 458,
        '_', 522,
        '`', 675,
        't', 673,
        '{', 494,
        '}', 505,
        0xaf, 334,
        0x2682, 305,
        '\t', 675,
        ' ', 675,
        0x3b7, 675,
        0x3c0, 675,
        0x3c4, 675,
        0x221e, 675,
        ',', 276,
        '.', 276,
        ':', 276,
        '?', 276,
        0x2218, 276,
        0x25cc, 276,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(667);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(334);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(675);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(anon_sym_AT);
      ADVANCE_MAP(
        '\r', 158,
        '"', 734,
        '$', 25,
        '(', 423,
        '@', 764,
        '[', 459,
        '_', 523,
        '`', 158,
        't', 156,
        '{', 495,
        '}', 506,
        0xaf, 335,
        0x2682, 306,
        0x3b7, 824,
        0x3c0, 824,
        0x3c4, 824,
        0x221e, 824,
        ',', 277,
        '.', 277,
        ':', 277,
        '?', 277,
        0x2218, 277,
        0x25cc, 277,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(793);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(335);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(365);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(anon_sym_AT);
      ADVANCE_MAP(
        '\r', 686,
        '"', 735,
        '#', 686,
        '$', 552,
        '(', 424,
        '@', 765,
        '[', 460,
        '_', 524,
        '`', 686,
        't', 684,
        '{', 496,
        '}', 507,
        0xaf, 336,
        0x2682, 307,
        '\t', 686,
        ' ', 686,
        0x3b7, 686,
        0x3c0, 686,
        0x3c4, 686,
        0x221e, 686,
        ',', 278,
        '.', 278,
        ':', 278,
        '?', 278,
        0x2218, 278,
        0x25cc, 278,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(678);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(336);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(686);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(anon_sym_AT);
      ADVANCE_MAP(
        '\r', 168,
        '"', 736,
        '$', 27,
        '(', 425,
        ')', 434,
        '/', 809,
        '@', 766,
        '[', 461,
        '_', 525,
        '`', 168,
        't', 166,
        '{', 497,
        0xaf, 337,
        0x2682, 308,
        0x3b7, 825,
        0x3c0, 825,
        0x3c4, 825,
        0x221e, 825,
        ',', 279,
        '.', 279,
        ':', 279,
        '?', 279,
        0x2218, 279,
        0x25cc, 279,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(794);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(337);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(367);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(anon_sym_AT);
      ADVANCE_MAP(
        '\r', 697,
        '"', 737,
        '#', 697,
        '$', 554,
        '(', 426,
        ')', 435,
        '/', 810,
        '@', 767,
        '[', 462,
        '_', 526,
        '`', 697,
        't', 695,
        '{', 498,
        0xaf, 338,
        0x2682, 309,
        '\t', 697,
        ' ', 697,
        0x3b7, 697,
        0x3c0, 697,
        0x3c4, 697,
        0x221e, 697,
        ',', 280,
        '.', 280,
        ':', 280,
        '?', 280,
        0x2218, 280,
        0x25cc, 280,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(689);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(338);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(697);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(anon_sym_AT);
      ADVANCE_MAP(
        '"', 738,
        '$', 11,
        '@', 768,
        '`', 187,
        't', 185,
        0xaf, 339,
        0x2682, 310,
        0x3b7, 826,
        0x3c0, 826,
        0x3c4, 826,
        0x221e, 826,
        ',', 281,
        '.', 281,
        ':', 281,
        '?', 281,
        0x2218, 281,
        0x25cc, 281,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(795);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(339);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(369);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(anon_sym_AT);
      ADVANCE_MAP(
        '"', 739,
        '#', 708,
        '$', 538,
        '@', 769,
        '`', 708,
        't', 706,
        0xaf, 340,
        0x2682, 311,
        '\t', 708,
        ' ', 708,
        0x3b7, 708,
        0x3c0, 708,
        0x3c4, 708,
        0x221e, 708,
        ',', 282,
        '.', 282,
        ':', 282,
        '?', 282,
        0x2218, 282,
        0x25cc, 282,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(700);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(340);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(708);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(aux_sym__character_token1);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(aux_sym__character_token1);
      if (lookahead == '\n') ADVANCE(770);
      if (lookahead == '"') ADVANCE(740);
      if (lookahead == '#') ADVANCE(771);
      if (lookahead == '\\') ADVANCE(776);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(771);
      if (lookahead != 0) ADVANCE(771);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(aux_sym__character_token1);
      if (lookahead == '\n') ADVANCE(770);
      if (lookahead == '#') ADVANCE(772);
      if (lookahead == '\\') ADVANCE(777);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(772);
      if (lookahead != 0) ADVANCE(772);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(aux_sym__character_token1);
      if (lookahead == '"') ADVANCE(711);
      if (lookahead == '#') ADVANCE(771);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(773);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(770);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(aux_sym__character_token1);
      if (lookahead == '#') ADVANCE(772);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(774);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(770);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '"') ADVANCE(740);
      if (lookahead == '#') ADVANCE(771);
      if (lookahead == '\\') ADVANCE(776);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(771);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(771);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '#') ADVANCE(772);
      if (lookahead == '\\') ADVANCE(777);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(772);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(772);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(aux_sym_escape_token1);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(aux_sym_escape_token1);
      if (lookahead == '}') ADVANCE(778);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(209);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(aux_sym_escape_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(778);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(aux_sym_escape_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(216);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym_integer);
      ADVANCE_MAP(
        '\r', 48,
        '"', 712,
        '$', 1,
        '(', 401,
        ')', 428,
        '.', 255,
        '/', 801,
        '@', 742,
        '[', 437,
        ']', 464,
        '_', 509,
        '`', 48,
        't', 46,
        '{', 473,
        '}', 500,
        0xaf, 313,
        0x2682, 284,
        'E', 40,
        'e', 40,
        0x3b7, 813,
        0x3c0, 813,
        0x3c4, 813,
        0x221e, 813,
        ',', 255,
        ':', 255,
        '?', 255,
        0x2218, 255,
        0x25cc, 255,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(782);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(313);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(343);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym_integer);
      ADVANCE_MAP(
        '\r', 58,
        '"', 714,
        '$', 3,
        '(', 403,
        '.', 257,
        '@', 744,
        '[', 439,
        '`', 58,
        't', 56,
        '{', 475,
        0xaf, 315,
        0x2682, 286,
        'E', 50,
        'e', 50,
        0x3b7, 814,
        0x3c0, 814,
        0x3c4, 814,
        0x221e, 814,
        ',', 257,
        ':', 257,
        '?', 257,
        0x2218, 257,
        0x25cc, 257,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(783);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(315);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(345);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym_integer);
      ADVANCE_MAP(
        '\r', 68,
        '"', 716,
        '$', 5,
        '(', 405,
        '.', 259,
        '@', 746,
        '[', 441,
        '`', 68,
        't', 66,
        '{', 477,
        '}', 502,
        0xaf, 317,
        0x2682, 288,
        'E', 60,
        'e', 60,
        0x3b7, 815,
        0x3c0, 815,
        0x3c4, 815,
        0x221e, 815,
        ',', 259,
        ':', 259,
        '?', 259,
        0x2218, 259,
        0x25cc, 259,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(784);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(317);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(347);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym_integer);
      ADVANCE_MAP(
        '\r', 78,
        '"', 718,
        '$', 7,
        '(', 407,
        '.', 261,
        '@', 748,
        '[', 443,
        ']', 466,
        '`', 78,
        't', 76,
        '{', 479,
        0xaf, 319,
        0x2682, 290,
        'E', 70,
        'e', 70,
        0x3b7, 816,
        0x3c0, 816,
        0x3c4, 816,
        0x221e, 816,
        ',', 261,
        ':', 261,
        '?', 261,
        0x2218, 261,
        0x25cc, 261,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(785);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(319);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(349);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym_integer);
      ADVANCE_MAP(
        '\r', 88,
        '"', 720,
        '$', 9,
        '(', 409,
        ')', 430,
        '.', 263,
        '@', 750,
        '[', 445,
        '`', 88,
        't', 86,
        '{', 481,
        0xaf, 321,
        0x2682, 292,
        'E', 80,
        'e', 80,
        0x3b7, 817,
        0x3c0, 817,
        0x3c4, 817,
        0x221e, 817,
        ',', 263,
        ':', 263,
        '?', 263,
        0x2218, 263,
        0x25cc, 263,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(786);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(321);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(351);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym_integer);
      ADVANCE_MAP(
        '\r', 98,
        '"', 722,
        '$', 13,
        '(', 411,
        '.', 265,
        '@', 752,
        '[', 447,
        '_', 511,
        '`', 98,
        't', 96,
        '{', 483,
        0xaf, 323,
        0x2682, 294,
        'E', 90,
        'e', 90,
        0x3b7, 818,
        0x3c0, 818,
        0x3c4, 818,
        0x221e, 818,
        ',', 265,
        ':', 265,
        '?', 265,
        0x2218, 265,
        0x25cc, 265,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(787);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(323);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(353);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym_integer);
      ADVANCE_MAP(
        '\r', 108,
        '"', 724,
        '$', 15,
        '(', 413,
        '.', 267,
        '/', 803,
        '@', 754,
        '[', 449,
        '_', 513,
        '`', 108,
        't', 106,
        '{', 485,
        0xaf, 325,
        0x2682, 296,
        'E', 100,
        'e', 100,
        0x3b7, 819,
        0x3c0, 819,
        0x3c4, 819,
        0x221e, 819,
        ',', 267,
        ':', 267,
        '?', 267,
        0x2218, 267,
        0x25cc, 267,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(788);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(325);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(355);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym_integer);
      ADVANCE_MAP(
        '\r', 118,
        '"', 726,
        '$', 17,
        '(', 415,
        '.', 269,
        '/', 805,
        '@', 756,
        '[', 451,
        ']', 468,
        '_', 515,
        '`', 118,
        't', 116,
        '{', 487,
        0xaf, 327,
        0x2682, 298,
        'E', 110,
        'e', 110,
        0x3b7, 820,
        0x3c0, 820,
        0x3c4, 820,
        0x221e, 820,
        ',', 269,
        ':', 269,
        '?', 269,
        0x2218, 269,
        0x25cc, 269,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(789);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(327);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(357);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym_integer);
      ADVANCE_MAP(
        '\r', 128,
        '"', 728,
        '$', 19,
        '(', 417,
        '.', 271,
        '@', 758,
        '[', 453,
        ']', 470,
        '_', 517,
        '`', 128,
        't', 126,
        '{', 489,
        0xaf, 329,
        0x2682, 300,
        'E', 120,
        'e', 120,
        0x3b7, 821,
        0x3c0, 821,
        0x3c4, 821,
        0x221e, 821,
        ',', 271,
        ':', 271,
        '?', 271,
        0x2218, 271,
        0x25cc, 271,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(790);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(329);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(359);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym_integer);
      ADVANCE_MAP(
        '\r', 138,
        '"', 730,
        '$', 21,
        '(', 419,
        ')', 432,
        '.', 273,
        '@', 760,
        '[', 455,
        '_', 519,
        '`', 138,
        't', 136,
        '{', 491,
        0xaf, 331,
        0x2682, 302,
        'E', 130,
        'e', 130,
        0x3b7, 822,
        0x3c0, 822,
        0x3c4, 822,
        0x221e, 822,
        ',', 273,
        ':', 273,
        '?', 273,
        0x2218, 273,
        0x25cc, 273,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(791);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(331);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(361);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym_integer);
      ADVANCE_MAP(
        '\r', 148,
        '"', 732,
        '$', 23,
        '(', 421,
        '.', 275,
        '/', 807,
        '@', 762,
        '[', 457,
        '_', 521,
        '`', 148,
        't', 146,
        '{', 493,
        '}', 504,
        0xaf, 333,
        0x2682, 304,
        'E', 140,
        'e', 140,
        0x3b7, 823,
        0x3c0, 823,
        0x3c4, 823,
        0x221e, 823,
        ',', 275,
        ':', 275,
        '?', 275,
        0x2218, 275,
        0x25cc, 275,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(792);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(333);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(363);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym_integer);
      ADVANCE_MAP(
        '\r', 158,
        '"', 734,
        '$', 25,
        '(', 423,
        '.', 277,
        '@', 764,
        '[', 459,
        '_', 523,
        '`', 158,
        't', 156,
        '{', 495,
        '}', 506,
        0xaf, 335,
        0x2682, 306,
        'E', 150,
        'e', 150,
        0x3b7, 824,
        0x3c0, 824,
        0x3c4, 824,
        0x221e, 824,
        ',', 277,
        ':', 277,
        '?', 277,
        0x2218, 277,
        0x25cc, 277,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(793);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(335);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(365);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym_integer);
      ADVANCE_MAP(
        '\r', 168,
        '"', 736,
        '$', 27,
        '(', 425,
        ')', 434,
        '.', 279,
        '/', 809,
        '@', 766,
        '[', 461,
        '_', 525,
        '`', 168,
        't', 166,
        '{', 497,
        0xaf, 337,
        0x2682, 308,
        'E', 160,
        'e', 160,
        0x3b7, 825,
        0x3c0, 825,
        0x3c4, 825,
        0x221e, 825,
        ',', 279,
        ':', 279,
        '?', 279,
        0x2218, 279,
        0x25cc, 279,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(794);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(337);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(367);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym_integer);
      ADVANCE_MAP(
        '"', 738,
        '$', 11,
        '.', 281,
        '@', 768,
        '`', 187,
        't', 185,
        0xaf, 339,
        0x2682, 310,
        'E', 179,
        'e', 179,
        0x3b7, 826,
        0x3c0, 826,
        0x3c4, 826,
        0x221e, 826,
        ',', 281,
        ':', 281,
        '?', 281,
        0x2218, 281,
        0x25cc, 281,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(795);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(339);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(369);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(213);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(796);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '`' ||
          lookahead == 0xaf) ADVANCE(191);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(827);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(797);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(798);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym_decimal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(799);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(anon_sym_SLASH);
      ADVANCE_MAP(
        '\r', 48,
        '"', 712,
        '$', 1,
        '(', 401,
        ')', 428,
        '/', 801,
        '@', 742,
        '[', 437,
        ']', 464,
        '_', 509,
        '`', 48,
        't', 46,
        '{', 473,
        '}', 500,
        0xaf, 313,
        0x2682, 284,
        0x3b7, 813,
        0x3c0, 813,
        0x3c4, 813,
        0x221e, 813,
        ',', 255,
        '.', 255,
        ':', 255,
        '?', 255,
        0x2218, 255,
        0x25cc, 255,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(782);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(313);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(343);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(anon_sym_SLASH);
      ADVANCE_MAP(
        '\r', 565,
        '"', 713,
        '#', 565,
        '$', 528,
        '(', 402,
        ')', 429,
        '/', 802,
        '@', 743,
        '[', 438,
        ']', 465,
        '_', 510,
        '`', 565,
        't', 563,
        '{', 474,
        '}', 501,
        0xaf, 314,
        0x2682, 285,
        '\t', 565,
        ' ', 565,
        0x3b7, 565,
        0x3c0, 565,
        0x3c4, 565,
        0x221e, 565,
        ',', 256,
        '.', 256,
        ':', 256,
        '?', 256,
        0x2218, 256,
        0x25cc, 256,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(557);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(314);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(565);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(anon_sym_SLASH);
      ADVANCE_MAP(
        '\r', 108,
        '"', 724,
        '$', 15,
        '(', 413,
        '/', 803,
        '@', 754,
        '[', 449,
        '_', 513,
        '`', 108,
        't', 106,
        '{', 485,
        0xaf, 325,
        0x2682, 296,
        0x3b7, 819,
        0x3c0, 819,
        0x3c4, 819,
        0x221e, 819,
        ',', 267,
        '.', 267,
        ':', 267,
        '?', 267,
        0x2218, 267,
        0x25cc, 267,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(788);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(325);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(355);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(anon_sym_SLASH);
      ADVANCE_MAP(
        '\r', 631,
        '"', 725,
        '#', 631,
        '$', 542,
        '(', 414,
        '/', 804,
        '@', 755,
        '[', 450,
        '_', 514,
        '`', 631,
        't', 629,
        '{', 486,
        0xaf, 326,
        0x2682, 297,
        '\t', 631,
        ' ', 631,
        0x3b7, 631,
        0x3c0, 631,
        0x3c4, 631,
        0x221e, 631,
        ',', 268,
        '.', 268,
        ':', 268,
        '?', 268,
        0x2218, 268,
        0x25cc, 268,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(623);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(326);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(631);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(anon_sym_SLASH);
      ADVANCE_MAP(
        '\r', 118,
        '"', 726,
        '$', 17,
        '(', 415,
        '/', 805,
        '@', 756,
        '[', 451,
        ']', 468,
        '_', 515,
        '`', 118,
        't', 116,
        '{', 487,
        0xaf, 327,
        0x2682, 298,
        0x3b7, 820,
        0x3c0, 820,
        0x3c4, 820,
        0x221e, 820,
        ',', 269,
        '.', 269,
        ':', 269,
        '?', 269,
        0x2218, 269,
        0x25cc, 269,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(789);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(327);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(357);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(anon_sym_SLASH);
      ADVANCE_MAP(
        '\r', 642,
        '"', 727,
        '#', 642,
        '$', 544,
        '(', 416,
        '/', 806,
        '@', 757,
        '[', 452,
        ']', 469,
        '_', 516,
        '`', 642,
        't', 640,
        '{', 488,
        0xaf, 328,
        0x2682, 299,
        '\t', 642,
        ' ', 642,
        0x3b7, 642,
        0x3c0, 642,
        0x3c4, 642,
        0x221e, 642,
        ',', 270,
        '.', 270,
        ':', 270,
        '?', 270,
        0x2218, 270,
        0x25cc, 270,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(634);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(328);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(642);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(anon_sym_SLASH);
      ADVANCE_MAP(
        '\r', 148,
        '"', 732,
        '$', 23,
        '(', 421,
        '/', 807,
        '@', 762,
        '[', 457,
        '_', 521,
        '`', 148,
        't', 146,
        '{', 493,
        '}', 504,
        0xaf, 333,
        0x2682, 304,
        0x3b7, 823,
        0x3c0, 823,
        0x3c4, 823,
        0x221e, 823,
        ',', 275,
        '.', 275,
        ':', 275,
        '?', 275,
        0x2218, 275,
        0x25cc, 275,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(792);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(333);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(363);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(anon_sym_SLASH);
      ADVANCE_MAP(
        '\r', 675,
        '"', 733,
        '#', 675,
        '$', 550,
        '(', 422,
        '/', 808,
        '@', 763,
        '[', 458,
        '_', 522,
        '`', 675,
        't', 673,
        '{', 494,
        '}', 505,
        0xaf, 334,
        0x2682, 305,
        '\t', 675,
        ' ', 675,
        0x3b7, 675,
        0x3c0, 675,
        0x3c4, 675,
        0x221e, 675,
        ',', 276,
        '.', 276,
        ':', 276,
        '?', 276,
        0x2218, 276,
        0x25cc, 276,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(667);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(334);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(675);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(anon_sym_SLASH);
      ADVANCE_MAP(
        '\r', 168,
        '"', 736,
        '$', 27,
        '(', 425,
        ')', 434,
        '/', 809,
        '@', 766,
        '[', 461,
        '_', 525,
        '`', 168,
        't', 166,
        '{', 497,
        0xaf, 337,
        0x2682, 308,
        0x3b7, 825,
        0x3c0, 825,
        0x3c4, 825,
        0x221e, 825,
        ',', 279,
        '.', 279,
        ':', 279,
        '?', 279,
        0x2218, 279,
        0x25cc, 279,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(794);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(337);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(367);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(anon_sym_SLASH);
      ADVANCE_MAP(
        '\r', 697,
        '"', 737,
        '#', 697,
        '$', 554,
        '(', 426,
        ')', 435,
        '/', 810,
        '@', 767,
        '[', 462,
        '_', 526,
        '`', 697,
        't', 695,
        '{', 498,
        0xaf, 338,
        0x2682, 309,
        '\t', 697,
        ' ', 697,
        0x3b7, 697,
        0x3c0, 697,
        0x3c4, 697,
        0x221e, 697,
        ',', 280,
        '.', 280,
        ':', 280,
        '?', 280,
        0x2218, 280,
        0x25cc, 280,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(689);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(338);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(697);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(811);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym_constant);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym_constant);
      ADVANCE_MAP(
        '\r', 48,
        '"', 712,
        '$', 1,
        '(', 401,
        ')', 428,
        '/', 801,
        '@', 742,
        '[', 437,
        ']', 464,
        '_', 509,
        '`', 48,
        't', 46,
        '{', 473,
        '}', 500,
        0xaf, 313,
        0x2682, 284,
        0x3b7, 813,
        0x3c0, 813,
        0x3c4, 813,
        0x221e, 813,
        ',', 255,
        '.', 255,
        ':', 255,
        '?', 255,
        0x2218, 255,
        0x25cc, 255,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(782);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(313);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(343);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym_constant);
      ADVANCE_MAP(
        '\r', 58,
        '"', 714,
        '$', 3,
        '(', 403,
        '@', 744,
        '[', 439,
        '`', 58,
        't', 56,
        '{', 475,
        0xaf, 315,
        0x2682, 286,
        0x3b7, 814,
        0x3c0, 814,
        0x3c4, 814,
        0x221e, 814,
        ',', 257,
        '.', 257,
        ':', 257,
        '?', 257,
        0x2218, 257,
        0x25cc, 257,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(783);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(315);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(345);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym_constant);
      ADVANCE_MAP(
        '\r', 68,
        '"', 716,
        '$', 5,
        '(', 405,
        '@', 746,
        '[', 441,
        '`', 68,
        't', 66,
        '{', 477,
        '}', 502,
        0xaf, 317,
        0x2682, 288,
        0x3b7, 815,
        0x3c0, 815,
        0x3c4, 815,
        0x221e, 815,
        ',', 259,
        '.', 259,
        ':', 259,
        '?', 259,
        0x2218, 259,
        0x25cc, 259,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(784);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(317);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(347);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym_constant);
      ADVANCE_MAP(
        '\r', 78,
        '"', 718,
        '$', 7,
        '(', 407,
        '@', 748,
        '[', 443,
        ']', 466,
        '`', 78,
        't', 76,
        '{', 479,
        0xaf, 319,
        0x2682, 290,
        0x3b7, 816,
        0x3c0, 816,
        0x3c4, 816,
        0x221e, 816,
        ',', 261,
        '.', 261,
        ':', 261,
        '?', 261,
        0x2218, 261,
        0x25cc, 261,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(785);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(319);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(349);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_constant);
      ADVANCE_MAP(
        '\r', 88,
        '"', 720,
        '$', 9,
        '(', 409,
        ')', 430,
        '@', 750,
        '[', 445,
        '`', 88,
        't', 86,
        '{', 481,
        0xaf, 321,
        0x2682, 292,
        0x3b7, 817,
        0x3c0, 817,
        0x3c4, 817,
        0x221e, 817,
        ',', 263,
        '.', 263,
        ':', 263,
        '?', 263,
        0x2218, 263,
        0x25cc, 263,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(786);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(321);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(351);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym_constant);
      ADVANCE_MAP(
        '\r', 98,
        '"', 722,
        '$', 13,
        '(', 411,
        '@', 752,
        '[', 447,
        '_', 511,
        '`', 98,
        't', 96,
        '{', 483,
        0xaf, 323,
        0x2682, 294,
        0x3b7, 818,
        0x3c0, 818,
        0x3c4, 818,
        0x221e, 818,
        ',', 265,
        '.', 265,
        ':', 265,
        '?', 265,
        0x2218, 265,
        0x25cc, 265,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(787);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(323);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(353);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_constant);
      ADVANCE_MAP(
        '\r', 108,
        '"', 724,
        '$', 15,
        '(', 413,
        '/', 803,
        '@', 754,
        '[', 449,
        '_', 513,
        '`', 108,
        't', 106,
        '{', 485,
        0xaf, 325,
        0x2682, 296,
        0x3b7, 819,
        0x3c0, 819,
        0x3c4, 819,
        0x221e, 819,
        ',', 267,
        '.', 267,
        ':', 267,
        '?', 267,
        0x2218, 267,
        0x25cc, 267,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(788);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(325);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(355);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_constant);
      ADVANCE_MAP(
        '\r', 118,
        '"', 726,
        '$', 17,
        '(', 415,
        '/', 805,
        '@', 756,
        '[', 451,
        ']', 468,
        '_', 515,
        '`', 118,
        't', 116,
        '{', 487,
        0xaf, 327,
        0x2682, 298,
        0x3b7, 820,
        0x3c0, 820,
        0x3c4, 820,
        0x221e, 820,
        ',', 269,
        '.', 269,
        ':', 269,
        '?', 269,
        0x2218, 269,
        0x25cc, 269,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(789);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(327);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(357);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_constant);
      ADVANCE_MAP(
        '\r', 128,
        '"', 728,
        '$', 19,
        '(', 417,
        '@', 758,
        '[', 453,
        ']', 470,
        '_', 517,
        '`', 128,
        't', 126,
        '{', 489,
        0xaf, 329,
        0x2682, 300,
        0x3b7, 821,
        0x3c0, 821,
        0x3c4, 821,
        0x221e, 821,
        ',', 271,
        '.', 271,
        ':', 271,
        '?', 271,
        0x2218, 271,
        0x25cc, 271,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(790);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(329);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(359);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym_constant);
      ADVANCE_MAP(
        '\r', 138,
        '"', 730,
        '$', 21,
        '(', 419,
        ')', 432,
        '@', 760,
        '[', 455,
        '_', 519,
        '`', 138,
        't', 136,
        '{', 491,
        0xaf, 331,
        0x2682, 302,
        0x3b7, 822,
        0x3c0, 822,
        0x3c4, 822,
        0x221e, 822,
        ',', 273,
        '.', 273,
        ':', 273,
        '?', 273,
        0x2218, 273,
        0x25cc, 273,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(791);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(331);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(361);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym_constant);
      ADVANCE_MAP(
        '\r', 148,
        '"', 732,
        '$', 23,
        '(', 421,
        '/', 807,
        '@', 762,
        '[', 457,
        '_', 521,
        '`', 148,
        't', 146,
        '{', 493,
        '}', 504,
        0xaf, 333,
        0x2682, 304,
        0x3b7, 823,
        0x3c0, 823,
        0x3c4, 823,
        0x221e, 823,
        ',', 275,
        '.', 275,
        ':', 275,
        '?', 275,
        0x2218, 275,
        0x25cc, 275,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(792);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(333);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(363);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym_constant);
      ADVANCE_MAP(
        '\r', 158,
        '"', 734,
        '$', 25,
        '(', 423,
        '@', 764,
        '[', 459,
        '_', 523,
        '`', 158,
        't', 156,
        '{', 495,
        '}', 506,
        0xaf, 335,
        0x2682, 306,
        0x3b7, 824,
        0x3c0, 824,
        0x3c4, 824,
        0x221e, 824,
        ',', 277,
        '.', 277,
        ':', 277,
        '?', 277,
        0x2218, 277,
        0x25cc, 277,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(793);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(335);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(365);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym_constant);
      ADVANCE_MAP(
        '\r', 168,
        '"', 736,
        '$', 27,
        '(', 425,
        ')', 434,
        '/', 809,
        '@', 766,
        '[', 461,
        '_', 525,
        '`', 168,
        't', 166,
        '{', 497,
        0xaf, 337,
        0x2682, 308,
        0x3b7, 825,
        0x3c0, 825,
        0x3c4, 825,
        0x221e, 825,
        ',', 279,
        '.', 279,
        ':', 279,
        '?', 279,
        0x2218, 279,
        0x25cc, 279,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(794);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(337);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(367);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym_constant);
      ADVANCE_MAP(
        '"', 738,
        '$', 11,
        '@', 768,
        '`', 187,
        't', 185,
        0xaf, 339,
        0x2682, 310,
        0x3b7, 826,
        0x3c0, 826,
        0x3c4, 826,
        0x221e, 826,
        ',', 281,
        '.', 281,
        ':', 281,
        '?', 281,
        0x2218, 281,
        0x25cc, 281,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(795);
      if (set_contains(sym_monadic_prim_character_set_1, 26, lookahead)) ADVANCE(339);
      if (set_contains(sym_dyadic_prim_character_set_1, 26, lookahead)) ADVANCE(369);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym_constant);
      if (lookahead == '`' ||
          lookahead == 0xaf) ADVANCE(191);
      if (lookahead == 0x3b7 ||
          lookahead == 0x3c0 ||
          lookahead == 0x3c4 ||
          lookahead == 0x221e) ADVANCE(827);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(797);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym_scientific);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(828);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 218},
  [2] = {.lex_state = 218},
  [3] = {.lex_state = 218},
  [4] = {.lex_state = 30},
  [5] = {.lex_state = 31},
  [6] = {.lex_state = 32},
  [7] = {.lex_state = 31},
  [8] = {.lex_state = 30},
  [9] = {.lex_state = 32},
  [10] = {.lex_state = 32},
  [11] = {.lex_state = 31},
  [12] = {.lex_state = 30},
  [13] = {.lex_state = 32},
  [14] = {.lex_state = 31},
  [15] = {.lex_state = 30},
  [16] = {.lex_state = 32},
  [17] = {.lex_state = 31},
  [18] = {.lex_state = 30},
  [19] = {.lex_state = 32},
  [20] = {.lex_state = 31},
  [21] = {.lex_state = 30},
  [22] = {.lex_state = 32},
  [23] = {.lex_state = 31},
  [24] = {.lex_state = 30},
  [25] = {.lex_state = 32},
  [26] = {.lex_state = 31},
  [27] = {.lex_state = 30},
  [28] = {.lex_state = 32},
  [29] = {.lex_state = 31},
  [30] = {.lex_state = 30},
  [31] = {.lex_state = 177},
  [32] = {.lex_state = 177},
  [33] = {.lex_state = 177},
  [34] = {.lex_state = 177},
  [35] = {.lex_state = 219},
  [36] = {.lex_state = 219},
  [37] = {.lex_state = 219},
  [38] = {.lex_state = 220},
  [39] = {.lex_state = 219},
  [40] = {.lex_state = 219},
  [41] = {.lex_state = 219},
  [42] = {.lex_state = 219},
  [43] = {.lex_state = 219},
  [44] = {.lex_state = 219},
  [45] = {.lex_state = 219},
  [46] = {.lex_state = 219},
  [47] = {.lex_state = 219},
  [48] = {.lex_state = 219},
  [49] = {.lex_state = 218},
  [50] = {.lex_state = 219},
  [51] = {.lex_state = 219},
  [52] = {.lex_state = 219},
  [53] = {.lex_state = 218},
  [54] = {.lex_state = 218},
  [55] = {.lex_state = 218},
  [56] = {.lex_state = 218},
  [57] = {.lex_state = 218},
  [58] = {.lex_state = 218},
  [59] = {.lex_state = 218},
  [60] = {.lex_state = 33},
  [61] = {.lex_state = 34},
  [62] = {.lex_state = 35},
  [63] = {.lex_state = 34},
  [64] = {.lex_state = 34},
  [65] = {.lex_state = 35},
  [66] = {.lex_state = 34},
  [67] = {.lex_state = 36},
  [68] = {.lex_state = 37},
  [69] = {.lex_state = 37},
  [70] = {.lex_state = 37},
  [71] = {.lex_state = 35},
  [72] = {.lex_state = 37},
  [73] = {.lex_state = 38},
  [74] = {.lex_state = 35},
  [75] = {.lex_state = 37},
  [76] = {.lex_state = 37},
  [77] = {.lex_state = 37},
  [78] = {.lex_state = 37},
  [79] = {.lex_state = 34},
  [80] = {.lex_state = 37},
  [81] = {.lex_state = 35},
  [82] = {.lex_state = 37},
  [83] = {.lex_state = 34},
  [84] = {.lex_state = 34},
  [85] = {.lex_state = 34},
  [86] = {.lex_state = 34},
  [87] = {.lex_state = 37},
  [88] = {.lex_state = 37},
  [89] = {.lex_state = 34},
  [90] = {.lex_state = 37},
  [91] = {.lex_state = 37},
  [92] = {.lex_state = 35},
  [93] = {.lex_state = 35},
  [94] = {.lex_state = 35},
  [95] = {.lex_state = 35},
  [96] = {.lex_state = 35},
  [97] = {.lex_state = 34},
  [98] = {.lex_state = 34},
  [99] = {.lex_state = 34},
  [100] = {.lex_state = 35},
  [101] = {.lex_state = 34},
  [102] = {.lex_state = 34},
  [103] = {.lex_state = 35},
  [104] = {.lex_state = 37},
  [105] = {.lex_state = 35},
  [106] = {.lex_state = 35},
  [107] = {.lex_state = 35},
  [108] = {.lex_state = 35},
  [109] = {.lex_state = 34},
  [110] = {.lex_state = 37},
  [111] = {.lex_state = 31},
  [112] = {.lex_state = 30},
  [113] = {.lex_state = 30},
  [114] = {.lex_state = 31},
  [115] = {.lex_state = 31},
  [116] = {.lex_state = 32},
  [117] = {.lex_state = 32},
  [118] = {.lex_state = 32},
  [119] = {.lex_state = 31},
  [120] = {.lex_state = 31},
  [121] = {.lex_state = 31},
  [122] = {.lex_state = 30},
  [123] = {.lex_state = 30},
  [124] = {.lex_state = 30},
  [125] = {.lex_state = 32},
  [126] = {.lex_state = 30},
  [127] = {.lex_state = 32},
  [128] = {.lex_state = 32},
  [129] = {.lex_state = 178},
  [130] = {.lex_state = 178},
  [131] = {.lex_state = 178},
  [132] = {.lex_state = 178},
  [133] = {.lex_state = 178},
  [134] = {.lex_state = 178},
  [135] = {.lex_state = 178},
  [136] = {.lex_state = 178},
  [137] = {.lex_state = 178},
  [138] = {.lex_state = 189},
  [139] = {.lex_state = 189},
  [140] = {.lex_state = 189},
  [141] = {.lex_state = 189},
  [142] = {.lex_state = 190},
  [143] = {.lex_state = 190},
  [144] = {.lex_state = 190},
  [145] = {.lex_state = 178},
  [146] = {.lex_state = 190},
  [147] = {.lex_state = 192},
  [148] = {.lex_state = 192},
  [149] = {.lex_state = 192},
  [150] = {.lex_state = 192},
  [151] = {.lex_state = 39},
  [152] = {.lex_state = 207},
  [153] = {.lex_state = 39},
  [154] = {.lex_state = 207},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 194},
  [157] = {.lex_state = 207},
  [158] = {.lex_state = 207},
  [159] = {.lex_state = 39},
  [160] = {.lex_state = 39},
  [161] = {.lex_state = 207},
  [162] = {.lex_state = 194},
  [163] = {.lex_state = 194},
  [164] = {.lex_state = 194},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
    [sym_binding] = ACTIONS(1),
    [sym_import] = ACTIONS(1),
    [sym_module] = ACTIONS(1),
    [sym_stack_prim] = ACTIONS(1),
    [sym_noadic_prim] = ACTIONS(1),
    [sym_monadic_prim] = ACTIONS(1),
    [sym_dyadic_prim] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
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
    [sym_source_file] = STATE(155),
    [sym__top_level] = STATE(2),
    [sym__function] = STATE(2),
    [sym_prim] = STATE(50),
    [sym_inline_function] = STATE(2),
    [sym_array] = STATE(2),
    [sym_box_array] = STATE(2),
    [sym_strand] = STATE(2),
    [sym__strand_item] = STATE(149),
    [sym_literal] = STATE(50),
    [sym_string] = STATE(47),
    [sym_multiline_string] = STATE(40),
    [sym__string_literal] = STATE(40),
    [sym_char] = STATE(47),
    [sym_number] = STATE(47),
    [sym_fraction] = STATE(42),
    [sym__fraction_part] = STATE(156),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym__top_level_repeat1] = STATE(53),
    [aux_sym_multiline_string_repeat1] = STATE(39),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym__newline] = ACTIONS(5),
    [sym_binding] = ACTIONS(7),
    [sym_import] = ACTIONS(7),
    [sym_module] = ACTIONS(7),
    [sym_stack_prim] = ACTIONS(9),
    [sym_noadic_prim] = ACTIONS(9),
    [sym_monadic_prim] = ACTIONS(9),
    [sym_dyadic_prim] = ACTIONS(9),
    [sym_identifier] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(17),
    [sym__multiline_string_part] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_AT] = ACTIONS(23),
    [sym_integer] = ACTIONS(25),
    [sym_decimal] = ACTIONS(27),
    [sym_constant] = ACTIONS(25),
    [sym_scientific] = ACTIONS(27),
  },
  [2] = {
    [sym__top_level] = STATE(3),
    [sym__function] = STATE(3),
    [sym_prim] = STATE(50),
    [sym_inline_function] = STATE(3),
    [sym_array] = STATE(3),
    [sym_box_array] = STATE(3),
    [sym_strand] = STATE(3),
    [sym__strand_item] = STATE(149),
    [sym_literal] = STATE(50),
    [sym_string] = STATE(47),
    [sym_multiline_string] = STATE(40),
    [sym__string_literal] = STATE(40),
    [sym_char] = STATE(47),
    [sym_number] = STATE(47),
    [sym_fraction] = STATE(42),
    [sym__fraction_part] = STATE(156),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym__top_level_repeat1] = STATE(53),
    [aux_sym_multiline_string_repeat1] = STATE(39),
    [ts_builtin_sym_end] = ACTIONS(29),
    [sym__newline] = ACTIONS(5),
    [sym_binding] = ACTIONS(31),
    [sym_import] = ACTIONS(31),
    [sym_module] = ACTIONS(31),
    [sym_stack_prim] = ACTIONS(9),
    [sym_noadic_prim] = ACTIONS(9),
    [sym_monadic_prim] = ACTIONS(9),
    [sym_dyadic_prim] = ACTIONS(9),
    [sym_identifier] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(17),
    [sym__multiline_string_part] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_AT] = ACTIONS(23),
    [sym_integer] = ACTIONS(25),
    [sym_decimal] = ACTIONS(27),
    [sym_constant] = ACTIONS(25),
    [sym_scientific] = ACTIONS(27),
  },
  [3] = {
    [sym__top_level] = STATE(3),
    [sym__function] = STATE(3),
    [sym_prim] = STATE(50),
    [sym_inline_function] = STATE(3),
    [sym_array] = STATE(3),
    [sym_box_array] = STATE(3),
    [sym_strand] = STATE(3),
    [sym__strand_item] = STATE(149),
    [sym_literal] = STATE(50),
    [sym_string] = STATE(47),
    [sym_multiline_string] = STATE(40),
    [sym__string_literal] = STATE(40),
    [sym_char] = STATE(47),
    [sym_number] = STATE(47),
    [sym_fraction] = STATE(42),
    [sym__fraction_part] = STATE(156),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym__top_level_repeat1] = STATE(53),
    [aux_sym_multiline_string_repeat1] = STATE(39),
    [ts_builtin_sym_end] = ACTIONS(33),
    [sym__newline] = ACTIONS(35),
    [sym_binding] = ACTIONS(38),
    [sym_import] = ACTIONS(38),
    [sym_module] = ACTIONS(38),
    [sym_stack_prim] = ACTIONS(41),
    [sym_noadic_prim] = ACTIONS(41),
    [sym_monadic_prim] = ACTIONS(41),
    [sym_dyadic_prim] = ACTIONS(41),
    [sym_identifier] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(47),
    [anon_sym_LBRACK] = ACTIONS(50),
    [anon_sym_LBRACE] = ACTIONS(53),
    [sym__multiline_string_part] = ACTIONS(56),
    [anon_sym_DQUOTE] = ACTIONS(59),
    [anon_sym_AT] = ACTIONS(62),
    [sym_integer] = ACTIONS(65),
    [sym_decimal] = ACTIONS(68),
    [sym_constant] = ACTIONS(65),
    [sym_scientific] = ACTIONS(68),
  },
  [4] = {
    [sym__function] = STATE(8),
    [sym_prim] = STATE(76),
    [sym_inline_function] = STATE(8),
    [aux_sym__function_body] = STATE(8),
    [sym_array] = STATE(8),
    [sym_box_array] = STATE(8),
    [sym_strand] = STATE(8),
    [sym__strand_item] = STATE(147),
    [sym_literal] = STATE(76),
    [sym_string] = STATE(77),
    [sym_multiline_string] = STATE(78),
    [sym__string_literal] = STATE(78),
    [sym_char] = STATE(77),
    [sym_number] = STATE(77),
    [sym_fraction] = STATE(91),
    [sym__fraction_part] = STATE(164),
    [aux_sym_multiline_string_repeat1] = STATE(68),
    [sym__newline] = ACTIONS(71),
    [sym_stack_prim] = ACTIONS(73),
    [sym_noadic_prim] = ACTIONS(73),
    [sym_monadic_prim] = ACTIONS(73),
    [sym_dyadic_prim] = ACTIONS(73),
    [sym_identifier] = ACTIONS(75),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(81),
    [anon_sym_RBRACE] = ACTIONS(83),
    [sym__multiline_string_part] = ACTIONS(85),
    [anon_sym_DQUOTE] = ACTIONS(87),
    [anon_sym_AT] = ACTIONS(89),
    [sym_integer] = ACTIONS(91),
    [sym_decimal] = ACTIONS(93),
    [sym_constant] = ACTIONS(91),
    [sym_scientific] = ACTIONS(93),
  },
  [5] = {
    [sym__function] = STATE(7),
    [sym_prim] = STATE(83),
    [sym_inline_function] = STATE(7),
    [aux_sym__function_body] = STATE(7),
    [sym_array] = STATE(7),
    [sym_box_array] = STATE(7),
    [sym_strand] = STATE(7),
    [sym__strand_item] = STATE(148),
    [sym_literal] = STATE(83),
    [sym_string] = STATE(84),
    [sym_multiline_string] = STATE(85),
    [sym__string_literal] = STATE(85),
    [sym_char] = STATE(84),
    [sym_number] = STATE(84),
    [sym_fraction] = STATE(89),
    [sym__fraction_part] = STATE(163),
    [aux_sym_multiline_string_repeat1] = STATE(61),
    [sym__newline] = ACTIONS(95),
    [sym_stack_prim] = ACTIONS(97),
    [sym_noadic_prim] = ACTIONS(97),
    [sym_monadic_prim] = ACTIONS(97),
    [sym_dyadic_prim] = ACTIONS(97),
    [sym_identifier] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(101),
    [anon_sym_LBRACK] = ACTIONS(103),
    [anon_sym_RBRACK] = ACTIONS(105),
    [anon_sym_LBRACE] = ACTIONS(107),
    [sym__multiline_string_part] = ACTIONS(109),
    [anon_sym_DQUOTE] = ACTIONS(111),
    [anon_sym_AT] = ACTIONS(113),
    [sym_integer] = ACTIONS(115),
    [sym_decimal] = ACTIONS(117),
    [sym_constant] = ACTIONS(115),
    [sym_scientific] = ACTIONS(117),
  },
  [6] = {
    [sym__function] = STATE(10),
    [sym_prim] = STATE(106),
    [sym_inline_function] = STATE(10),
    [aux_sym__function_body] = STATE(10),
    [sym_array] = STATE(10),
    [sym_box_array] = STATE(10),
    [sym_strand] = STATE(10),
    [sym__strand_item] = STATE(150),
    [sym_literal] = STATE(106),
    [sym_string] = STATE(107),
    [sym_multiline_string] = STATE(108),
    [sym__string_literal] = STATE(108),
    [sym_char] = STATE(107),
    [sym_number] = STATE(107),
    [sym_fraction] = STATE(105),
    [sym__fraction_part] = STATE(162),
    [aux_sym_multiline_string_repeat1] = STATE(74),
    [sym__newline] = ACTIONS(119),
    [sym_stack_prim] = ACTIONS(121),
    [sym_noadic_prim] = ACTIONS(121),
    [sym_monadic_prim] = ACTIONS(121),
    [sym_dyadic_prim] = ACTIONS(121),
    [sym_identifier] = ACTIONS(123),
    [anon_sym_LPAREN] = ACTIONS(125),
    [anon_sym_RPAREN] = ACTIONS(127),
    [anon_sym_LBRACK] = ACTIONS(129),
    [anon_sym_LBRACE] = ACTIONS(131),
    [sym__multiline_string_part] = ACTIONS(133),
    [anon_sym_DQUOTE] = ACTIONS(135),
    [anon_sym_AT] = ACTIONS(137),
    [sym_integer] = ACTIONS(139),
    [sym_decimal] = ACTIONS(141),
    [sym_constant] = ACTIONS(139),
    [sym_scientific] = ACTIONS(141),
  },
  [7] = {
    [sym__function] = STATE(11),
    [sym_prim] = STATE(83),
    [sym_inline_function] = STATE(11),
    [aux_sym__function_body] = STATE(11),
    [sym_array] = STATE(11),
    [sym_box_array] = STATE(11),
    [sym_strand] = STATE(11),
    [sym__strand_item] = STATE(148),
    [sym_literal] = STATE(83),
    [sym_string] = STATE(84),
    [sym_multiline_string] = STATE(85),
    [sym__string_literal] = STATE(85),
    [sym_char] = STATE(84),
    [sym_number] = STATE(84),
    [sym_fraction] = STATE(89),
    [sym__fraction_part] = STATE(163),
    [aux_sym_multiline_string_repeat1] = STATE(61),
    [sym__newline] = ACTIONS(143),
    [sym_stack_prim] = ACTIONS(97),
    [sym_noadic_prim] = ACTIONS(97),
    [sym_monadic_prim] = ACTIONS(97),
    [sym_dyadic_prim] = ACTIONS(97),
    [sym_identifier] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(101),
    [anon_sym_LBRACK] = ACTIONS(103),
    [anon_sym_RBRACK] = ACTIONS(145),
    [anon_sym_LBRACE] = ACTIONS(107),
    [sym__multiline_string_part] = ACTIONS(109),
    [anon_sym_DQUOTE] = ACTIONS(111),
    [anon_sym_AT] = ACTIONS(113),
    [sym_integer] = ACTIONS(115),
    [sym_decimal] = ACTIONS(117),
    [sym_constant] = ACTIONS(115),
    [sym_scientific] = ACTIONS(117),
  },
  [8] = {
    [sym__function] = STATE(30),
    [sym_prim] = STATE(76),
    [sym_inline_function] = STATE(30),
    [aux_sym__function_body] = STATE(30),
    [sym_array] = STATE(30),
    [sym_box_array] = STATE(30),
    [sym_strand] = STATE(30),
    [sym__strand_item] = STATE(147),
    [sym_literal] = STATE(76),
    [sym_string] = STATE(77),
    [sym_multiline_string] = STATE(78),
    [sym__string_literal] = STATE(78),
    [sym_char] = STATE(77),
    [sym_number] = STATE(77),
    [sym_fraction] = STATE(91),
    [sym__fraction_part] = STATE(164),
    [aux_sym_multiline_string_repeat1] = STATE(68),
    [sym__newline] = ACTIONS(147),
    [sym_stack_prim] = ACTIONS(73),
    [sym_noadic_prim] = ACTIONS(73),
    [sym_monadic_prim] = ACTIONS(73),
    [sym_dyadic_prim] = ACTIONS(73),
    [sym_identifier] = ACTIONS(75),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(81),
    [anon_sym_RBRACE] = ACTIONS(149),
    [sym__multiline_string_part] = ACTIONS(85),
    [anon_sym_DQUOTE] = ACTIONS(87),
    [anon_sym_AT] = ACTIONS(89),
    [sym_integer] = ACTIONS(91),
    [sym_decimal] = ACTIONS(93),
    [sym_constant] = ACTIONS(91),
    [sym_scientific] = ACTIONS(93),
  },
  [9] = {
    [sym__function] = STATE(6),
    [sym_prim] = STATE(106),
    [sym_inline_function] = STATE(6),
    [aux_sym__function_body] = STATE(6),
    [sym_array] = STATE(6),
    [sym_box_array] = STATE(6),
    [sym_strand] = STATE(6),
    [sym__strand_item] = STATE(150),
    [sym_literal] = STATE(106),
    [sym_string] = STATE(107),
    [sym_multiline_string] = STATE(108),
    [sym__string_literal] = STATE(108),
    [sym_char] = STATE(107),
    [sym_number] = STATE(107),
    [sym_fraction] = STATE(105),
    [sym__fraction_part] = STATE(162),
    [aux_sym_multiline_string_repeat1] = STATE(74),
    [sym__newline] = ACTIONS(151),
    [sym_stack_prim] = ACTIONS(121),
    [sym_noadic_prim] = ACTIONS(121),
    [sym_monadic_prim] = ACTIONS(121),
    [sym_dyadic_prim] = ACTIONS(121),
    [sym_identifier] = ACTIONS(123),
    [anon_sym_LPAREN] = ACTIONS(125),
    [anon_sym_RPAREN] = ACTIONS(153),
    [anon_sym_LBRACK] = ACTIONS(129),
    [anon_sym_LBRACE] = ACTIONS(131),
    [sym__multiline_string_part] = ACTIONS(133),
    [anon_sym_DQUOTE] = ACTIONS(135),
    [anon_sym_AT] = ACTIONS(137),
    [sym_integer] = ACTIONS(139),
    [sym_decimal] = ACTIONS(141),
    [sym_constant] = ACTIONS(139),
    [sym_scientific] = ACTIONS(141),
  },
  [10] = {
    [sym__function] = STATE(10),
    [sym_prim] = STATE(106),
    [sym_inline_function] = STATE(10),
    [aux_sym__function_body] = STATE(10),
    [sym_array] = STATE(10),
    [sym_box_array] = STATE(10),
    [sym_strand] = STATE(10),
    [sym__strand_item] = STATE(150),
    [sym_literal] = STATE(106),
    [sym_string] = STATE(107),
    [sym_multiline_string] = STATE(108),
    [sym__string_literal] = STATE(108),
    [sym_char] = STATE(107),
    [sym_number] = STATE(107),
    [sym_fraction] = STATE(105),
    [sym__fraction_part] = STATE(162),
    [aux_sym_multiline_string_repeat1] = STATE(74),
    [sym__newline] = ACTIONS(155),
    [sym_stack_prim] = ACTIONS(158),
    [sym_noadic_prim] = ACTIONS(158),
    [sym_monadic_prim] = ACTIONS(158),
    [sym_dyadic_prim] = ACTIONS(158),
    [sym_identifier] = ACTIONS(161),
    [anon_sym_LPAREN] = ACTIONS(164),
    [anon_sym_RPAREN] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(169),
    [anon_sym_LBRACE] = ACTIONS(172),
    [sym__multiline_string_part] = ACTIONS(175),
    [anon_sym_DQUOTE] = ACTIONS(178),
    [anon_sym_AT] = ACTIONS(181),
    [sym_integer] = ACTIONS(184),
    [sym_decimal] = ACTIONS(187),
    [sym_constant] = ACTIONS(184),
    [sym_scientific] = ACTIONS(187),
  },
  [11] = {
    [sym__function] = STATE(11),
    [sym_prim] = STATE(83),
    [sym_inline_function] = STATE(11),
    [aux_sym__function_body] = STATE(11),
    [sym_array] = STATE(11),
    [sym_box_array] = STATE(11),
    [sym_strand] = STATE(11),
    [sym__strand_item] = STATE(148),
    [sym_literal] = STATE(83),
    [sym_string] = STATE(84),
    [sym_multiline_string] = STATE(85),
    [sym__string_literal] = STATE(85),
    [sym_char] = STATE(84),
    [sym_number] = STATE(84),
    [sym_fraction] = STATE(89),
    [sym__fraction_part] = STATE(163),
    [aux_sym_multiline_string_repeat1] = STATE(61),
    [sym__newline] = ACTIONS(190),
    [sym_stack_prim] = ACTIONS(193),
    [sym_noadic_prim] = ACTIONS(193),
    [sym_monadic_prim] = ACTIONS(193),
    [sym_dyadic_prim] = ACTIONS(193),
    [sym_identifier] = ACTIONS(196),
    [anon_sym_LPAREN] = ACTIONS(199),
    [anon_sym_LBRACK] = ACTIONS(202),
    [anon_sym_RBRACK] = ACTIONS(167),
    [anon_sym_LBRACE] = ACTIONS(205),
    [sym__multiline_string_part] = ACTIONS(208),
    [anon_sym_DQUOTE] = ACTIONS(211),
    [anon_sym_AT] = ACTIONS(214),
    [sym_integer] = ACTIONS(217),
    [sym_decimal] = ACTIONS(220),
    [sym_constant] = ACTIONS(217),
    [sym_scientific] = ACTIONS(220),
  },
  [12] = {
    [sym__function] = STATE(30),
    [sym_prim] = STATE(76),
    [sym_inline_function] = STATE(30),
    [aux_sym__function_body] = STATE(30),
    [sym_array] = STATE(30),
    [sym_box_array] = STATE(30),
    [sym_strand] = STATE(30),
    [sym__strand_item] = STATE(147),
    [sym_literal] = STATE(76),
    [sym_string] = STATE(77),
    [sym_multiline_string] = STATE(78),
    [sym__string_literal] = STATE(78),
    [sym_char] = STATE(77),
    [sym_number] = STATE(77),
    [sym_fraction] = STATE(91),
    [sym__fraction_part] = STATE(164),
    [aux_sym_multiline_string_repeat1] = STATE(68),
    [sym__newline] = ACTIONS(147),
    [sym_stack_prim] = ACTIONS(73),
    [sym_noadic_prim] = ACTIONS(73),
    [sym_monadic_prim] = ACTIONS(73),
    [sym_dyadic_prim] = ACTIONS(73),
    [sym_identifier] = ACTIONS(75),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(81),
    [anon_sym_RBRACE] = ACTIONS(223),
    [sym__multiline_string_part] = ACTIONS(85),
    [anon_sym_DQUOTE] = ACTIONS(87),
    [anon_sym_AT] = ACTIONS(89),
    [sym_integer] = ACTIONS(91),
    [sym_decimal] = ACTIONS(93),
    [sym_constant] = ACTIONS(91),
    [sym_scientific] = ACTIONS(93),
  },
  [13] = {
    [sym__function] = STATE(16),
    [sym_prim] = STATE(106),
    [sym_inline_function] = STATE(16),
    [aux_sym__function_body] = STATE(16),
    [sym_array] = STATE(16),
    [sym_box_array] = STATE(16),
    [sym_strand] = STATE(16),
    [sym__strand_item] = STATE(150),
    [sym_literal] = STATE(106),
    [sym_string] = STATE(107),
    [sym_multiline_string] = STATE(108),
    [sym__string_literal] = STATE(108),
    [sym_char] = STATE(107),
    [sym_number] = STATE(107),
    [sym_fraction] = STATE(105),
    [sym__fraction_part] = STATE(162),
    [aux_sym_multiline_string_repeat1] = STATE(74),
    [sym__newline] = ACTIONS(225),
    [sym_stack_prim] = ACTIONS(121),
    [sym_noadic_prim] = ACTIONS(121),
    [sym_monadic_prim] = ACTIONS(121),
    [sym_dyadic_prim] = ACTIONS(121),
    [sym_identifier] = ACTIONS(123),
    [anon_sym_LPAREN] = ACTIONS(125),
    [anon_sym_RPAREN] = ACTIONS(227),
    [anon_sym_LBRACK] = ACTIONS(129),
    [anon_sym_LBRACE] = ACTIONS(131),
    [sym__multiline_string_part] = ACTIONS(133),
    [anon_sym_DQUOTE] = ACTIONS(135),
    [anon_sym_AT] = ACTIONS(137),
    [sym_integer] = ACTIONS(139),
    [sym_decimal] = ACTIONS(141),
    [sym_constant] = ACTIONS(139),
    [sym_scientific] = ACTIONS(141),
  },
  [14] = {
    [sym__function] = STATE(17),
    [sym_prim] = STATE(83),
    [sym_inline_function] = STATE(17),
    [aux_sym__function_body] = STATE(17),
    [sym_array] = STATE(17),
    [sym_box_array] = STATE(17),
    [sym_strand] = STATE(17),
    [sym__strand_item] = STATE(148),
    [sym_literal] = STATE(83),
    [sym_string] = STATE(84),
    [sym_multiline_string] = STATE(85),
    [sym__string_literal] = STATE(85),
    [sym_char] = STATE(84),
    [sym_number] = STATE(84),
    [sym_fraction] = STATE(89),
    [sym__fraction_part] = STATE(163),
    [aux_sym_multiline_string_repeat1] = STATE(61),
    [sym__newline] = ACTIONS(229),
    [sym_stack_prim] = ACTIONS(97),
    [sym_noadic_prim] = ACTIONS(97),
    [sym_monadic_prim] = ACTIONS(97),
    [sym_dyadic_prim] = ACTIONS(97),
    [sym_identifier] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(101),
    [anon_sym_LBRACK] = ACTIONS(103),
    [anon_sym_RBRACK] = ACTIONS(231),
    [anon_sym_LBRACE] = ACTIONS(107),
    [sym__multiline_string_part] = ACTIONS(109),
    [anon_sym_DQUOTE] = ACTIONS(111),
    [anon_sym_AT] = ACTIONS(113),
    [sym_integer] = ACTIONS(115),
    [sym_decimal] = ACTIONS(117),
    [sym_constant] = ACTIONS(115),
    [sym_scientific] = ACTIONS(117),
  },
  [15] = {
    [sym__function] = STATE(18),
    [sym_prim] = STATE(76),
    [sym_inline_function] = STATE(18),
    [aux_sym__function_body] = STATE(18),
    [sym_array] = STATE(18),
    [sym_box_array] = STATE(18),
    [sym_strand] = STATE(18),
    [sym__strand_item] = STATE(147),
    [sym_literal] = STATE(76),
    [sym_string] = STATE(77),
    [sym_multiline_string] = STATE(78),
    [sym__string_literal] = STATE(78),
    [sym_char] = STATE(77),
    [sym_number] = STATE(77),
    [sym_fraction] = STATE(91),
    [sym__fraction_part] = STATE(164),
    [aux_sym_multiline_string_repeat1] = STATE(68),
    [sym__newline] = ACTIONS(233),
    [sym_stack_prim] = ACTIONS(73),
    [sym_noadic_prim] = ACTIONS(73),
    [sym_monadic_prim] = ACTIONS(73),
    [sym_dyadic_prim] = ACTIONS(73),
    [sym_identifier] = ACTIONS(75),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(81),
    [anon_sym_RBRACE] = ACTIONS(235),
    [sym__multiline_string_part] = ACTIONS(85),
    [anon_sym_DQUOTE] = ACTIONS(87),
    [anon_sym_AT] = ACTIONS(89),
    [sym_integer] = ACTIONS(91),
    [sym_decimal] = ACTIONS(93),
    [sym_constant] = ACTIONS(91),
    [sym_scientific] = ACTIONS(93),
  },
  [16] = {
    [sym__function] = STATE(10),
    [sym_prim] = STATE(106),
    [sym_inline_function] = STATE(10),
    [aux_sym__function_body] = STATE(10),
    [sym_array] = STATE(10),
    [sym_box_array] = STATE(10),
    [sym_strand] = STATE(10),
    [sym__strand_item] = STATE(150),
    [sym_literal] = STATE(106),
    [sym_string] = STATE(107),
    [sym_multiline_string] = STATE(108),
    [sym__string_literal] = STATE(108),
    [sym_char] = STATE(107),
    [sym_number] = STATE(107),
    [sym_fraction] = STATE(105),
    [sym__fraction_part] = STATE(162),
    [aux_sym_multiline_string_repeat1] = STATE(74),
    [sym__newline] = ACTIONS(119),
    [sym_stack_prim] = ACTIONS(121),
    [sym_noadic_prim] = ACTIONS(121),
    [sym_monadic_prim] = ACTIONS(121),
    [sym_dyadic_prim] = ACTIONS(121),
    [sym_identifier] = ACTIONS(123),
    [anon_sym_LPAREN] = ACTIONS(125),
    [anon_sym_RPAREN] = ACTIONS(237),
    [anon_sym_LBRACK] = ACTIONS(129),
    [anon_sym_LBRACE] = ACTIONS(131),
    [sym__multiline_string_part] = ACTIONS(133),
    [anon_sym_DQUOTE] = ACTIONS(135),
    [anon_sym_AT] = ACTIONS(137),
    [sym_integer] = ACTIONS(139),
    [sym_decimal] = ACTIONS(141),
    [sym_constant] = ACTIONS(139),
    [sym_scientific] = ACTIONS(141),
  },
  [17] = {
    [sym__function] = STATE(11),
    [sym_prim] = STATE(83),
    [sym_inline_function] = STATE(11),
    [aux_sym__function_body] = STATE(11),
    [sym_array] = STATE(11),
    [sym_box_array] = STATE(11),
    [sym_strand] = STATE(11),
    [sym__strand_item] = STATE(148),
    [sym_literal] = STATE(83),
    [sym_string] = STATE(84),
    [sym_multiline_string] = STATE(85),
    [sym__string_literal] = STATE(85),
    [sym_char] = STATE(84),
    [sym_number] = STATE(84),
    [sym_fraction] = STATE(89),
    [sym__fraction_part] = STATE(163),
    [aux_sym_multiline_string_repeat1] = STATE(61),
    [sym__newline] = ACTIONS(143),
    [sym_stack_prim] = ACTIONS(97),
    [sym_noadic_prim] = ACTIONS(97),
    [sym_monadic_prim] = ACTIONS(97),
    [sym_dyadic_prim] = ACTIONS(97),
    [sym_identifier] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(101),
    [anon_sym_LBRACK] = ACTIONS(103),
    [anon_sym_RBRACK] = ACTIONS(239),
    [anon_sym_LBRACE] = ACTIONS(107),
    [sym__multiline_string_part] = ACTIONS(109),
    [anon_sym_DQUOTE] = ACTIONS(111),
    [anon_sym_AT] = ACTIONS(113),
    [sym_integer] = ACTIONS(115),
    [sym_decimal] = ACTIONS(117),
    [sym_constant] = ACTIONS(115),
    [sym_scientific] = ACTIONS(117),
  },
  [18] = {
    [sym__function] = STATE(30),
    [sym_prim] = STATE(76),
    [sym_inline_function] = STATE(30),
    [aux_sym__function_body] = STATE(30),
    [sym_array] = STATE(30),
    [sym_box_array] = STATE(30),
    [sym_strand] = STATE(30),
    [sym__strand_item] = STATE(147),
    [sym_literal] = STATE(76),
    [sym_string] = STATE(77),
    [sym_multiline_string] = STATE(78),
    [sym__string_literal] = STATE(78),
    [sym_char] = STATE(77),
    [sym_number] = STATE(77),
    [sym_fraction] = STATE(91),
    [sym__fraction_part] = STATE(164),
    [aux_sym_multiline_string_repeat1] = STATE(68),
    [sym__newline] = ACTIONS(147),
    [sym_stack_prim] = ACTIONS(73),
    [sym_noadic_prim] = ACTIONS(73),
    [sym_monadic_prim] = ACTIONS(73),
    [sym_dyadic_prim] = ACTIONS(73),
    [sym_identifier] = ACTIONS(75),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(81),
    [anon_sym_RBRACE] = ACTIONS(241),
    [sym__multiline_string_part] = ACTIONS(85),
    [anon_sym_DQUOTE] = ACTIONS(87),
    [anon_sym_AT] = ACTIONS(89),
    [sym_integer] = ACTIONS(91),
    [sym_decimal] = ACTIONS(93),
    [sym_constant] = ACTIONS(91),
    [sym_scientific] = ACTIONS(93),
  },
  [19] = {
    [sym__function] = STATE(22),
    [sym_prim] = STATE(106),
    [sym_inline_function] = STATE(22),
    [aux_sym__function_body] = STATE(22),
    [sym_array] = STATE(22),
    [sym_box_array] = STATE(22),
    [sym_strand] = STATE(22),
    [sym__strand_item] = STATE(150),
    [sym_literal] = STATE(106),
    [sym_string] = STATE(107),
    [sym_multiline_string] = STATE(108),
    [sym__string_literal] = STATE(108),
    [sym_char] = STATE(107),
    [sym_number] = STATE(107),
    [sym_fraction] = STATE(105),
    [sym__fraction_part] = STATE(162),
    [aux_sym_multiline_string_repeat1] = STATE(74),
    [sym__newline] = ACTIONS(243),
    [sym_stack_prim] = ACTIONS(121),
    [sym_noadic_prim] = ACTIONS(121),
    [sym_monadic_prim] = ACTIONS(121),
    [sym_dyadic_prim] = ACTIONS(121),
    [sym_identifier] = ACTIONS(123),
    [anon_sym_LPAREN] = ACTIONS(125),
    [anon_sym_RPAREN] = ACTIONS(245),
    [anon_sym_LBRACK] = ACTIONS(129),
    [anon_sym_LBRACE] = ACTIONS(131),
    [sym__multiline_string_part] = ACTIONS(133),
    [anon_sym_DQUOTE] = ACTIONS(135),
    [anon_sym_AT] = ACTIONS(137),
    [sym_integer] = ACTIONS(139),
    [sym_decimal] = ACTIONS(141),
    [sym_constant] = ACTIONS(139),
    [sym_scientific] = ACTIONS(141),
  },
  [20] = {
    [sym__function] = STATE(23),
    [sym_prim] = STATE(83),
    [sym_inline_function] = STATE(23),
    [aux_sym__function_body] = STATE(23),
    [sym_array] = STATE(23),
    [sym_box_array] = STATE(23),
    [sym_strand] = STATE(23),
    [sym__strand_item] = STATE(148),
    [sym_literal] = STATE(83),
    [sym_string] = STATE(84),
    [sym_multiline_string] = STATE(85),
    [sym__string_literal] = STATE(85),
    [sym_char] = STATE(84),
    [sym_number] = STATE(84),
    [sym_fraction] = STATE(89),
    [sym__fraction_part] = STATE(163),
    [aux_sym_multiline_string_repeat1] = STATE(61),
    [sym__newline] = ACTIONS(247),
    [sym_stack_prim] = ACTIONS(97),
    [sym_noadic_prim] = ACTIONS(97),
    [sym_monadic_prim] = ACTIONS(97),
    [sym_dyadic_prim] = ACTIONS(97),
    [sym_identifier] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(101),
    [anon_sym_LBRACK] = ACTIONS(103),
    [anon_sym_RBRACK] = ACTIONS(249),
    [anon_sym_LBRACE] = ACTIONS(107),
    [sym__multiline_string_part] = ACTIONS(109),
    [anon_sym_DQUOTE] = ACTIONS(111),
    [anon_sym_AT] = ACTIONS(113),
    [sym_integer] = ACTIONS(115),
    [sym_decimal] = ACTIONS(117),
    [sym_constant] = ACTIONS(115),
    [sym_scientific] = ACTIONS(117),
  },
  [21] = {
    [sym__function] = STATE(24),
    [sym_prim] = STATE(76),
    [sym_inline_function] = STATE(24),
    [aux_sym__function_body] = STATE(24),
    [sym_array] = STATE(24),
    [sym_box_array] = STATE(24),
    [sym_strand] = STATE(24),
    [sym__strand_item] = STATE(147),
    [sym_literal] = STATE(76),
    [sym_string] = STATE(77),
    [sym_multiline_string] = STATE(78),
    [sym__string_literal] = STATE(78),
    [sym_char] = STATE(77),
    [sym_number] = STATE(77),
    [sym_fraction] = STATE(91),
    [sym__fraction_part] = STATE(164),
    [aux_sym_multiline_string_repeat1] = STATE(68),
    [sym__newline] = ACTIONS(251),
    [sym_stack_prim] = ACTIONS(73),
    [sym_noadic_prim] = ACTIONS(73),
    [sym_monadic_prim] = ACTIONS(73),
    [sym_dyadic_prim] = ACTIONS(73),
    [sym_identifier] = ACTIONS(75),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(81),
    [anon_sym_RBRACE] = ACTIONS(253),
    [sym__multiline_string_part] = ACTIONS(85),
    [anon_sym_DQUOTE] = ACTIONS(87),
    [anon_sym_AT] = ACTIONS(89),
    [sym_integer] = ACTIONS(91),
    [sym_decimal] = ACTIONS(93),
    [sym_constant] = ACTIONS(91),
    [sym_scientific] = ACTIONS(93),
  },
  [22] = {
    [sym__function] = STATE(10),
    [sym_prim] = STATE(106),
    [sym_inline_function] = STATE(10),
    [aux_sym__function_body] = STATE(10),
    [sym_array] = STATE(10),
    [sym_box_array] = STATE(10),
    [sym_strand] = STATE(10),
    [sym__strand_item] = STATE(150),
    [sym_literal] = STATE(106),
    [sym_string] = STATE(107),
    [sym_multiline_string] = STATE(108),
    [sym__string_literal] = STATE(108),
    [sym_char] = STATE(107),
    [sym_number] = STATE(107),
    [sym_fraction] = STATE(105),
    [sym__fraction_part] = STATE(162),
    [aux_sym_multiline_string_repeat1] = STATE(74),
    [sym__newline] = ACTIONS(119),
    [sym_stack_prim] = ACTIONS(121),
    [sym_noadic_prim] = ACTIONS(121),
    [sym_monadic_prim] = ACTIONS(121),
    [sym_dyadic_prim] = ACTIONS(121),
    [sym_identifier] = ACTIONS(123),
    [anon_sym_LPAREN] = ACTIONS(125),
    [anon_sym_RPAREN] = ACTIONS(255),
    [anon_sym_LBRACK] = ACTIONS(129),
    [anon_sym_LBRACE] = ACTIONS(131),
    [sym__multiline_string_part] = ACTIONS(133),
    [anon_sym_DQUOTE] = ACTIONS(135),
    [anon_sym_AT] = ACTIONS(137),
    [sym_integer] = ACTIONS(139),
    [sym_decimal] = ACTIONS(141),
    [sym_constant] = ACTIONS(139),
    [sym_scientific] = ACTIONS(141),
  },
  [23] = {
    [sym__function] = STATE(11),
    [sym_prim] = STATE(83),
    [sym_inline_function] = STATE(11),
    [aux_sym__function_body] = STATE(11),
    [sym_array] = STATE(11),
    [sym_box_array] = STATE(11),
    [sym_strand] = STATE(11),
    [sym__strand_item] = STATE(148),
    [sym_literal] = STATE(83),
    [sym_string] = STATE(84),
    [sym_multiline_string] = STATE(85),
    [sym__string_literal] = STATE(85),
    [sym_char] = STATE(84),
    [sym_number] = STATE(84),
    [sym_fraction] = STATE(89),
    [sym__fraction_part] = STATE(163),
    [aux_sym_multiline_string_repeat1] = STATE(61),
    [sym__newline] = ACTIONS(143),
    [sym_stack_prim] = ACTIONS(97),
    [sym_noadic_prim] = ACTIONS(97),
    [sym_monadic_prim] = ACTIONS(97),
    [sym_dyadic_prim] = ACTIONS(97),
    [sym_identifier] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(101),
    [anon_sym_LBRACK] = ACTIONS(103),
    [anon_sym_RBRACK] = ACTIONS(257),
    [anon_sym_LBRACE] = ACTIONS(107),
    [sym__multiline_string_part] = ACTIONS(109),
    [anon_sym_DQUOTE] = ACTIONS(111),
    [anon_sym_AT] = ACTIONS(113),
    [sym_integer] = ACTIONS(115),
    [sym_decimal] = ACTIONS(117),
    [sym_constant] = ACTIONS(115),
    [sym_scientific] = ACTIONS(117),
  },
  [24] = {
    [sym__function] = STATE(30),
    [sym_prim] = STATE(76),
    [sym_inline_function] = STATE(30),
    [aux_sym__function_body] = STATE(30),
    [sym_array] = STATE(30),
    [sym_box_array] = STATE(30),
    [sym_strand] = STATE(30),
    [sym__strand_item] = STATE(147),
    [sym_literal] = STATE(76),
    [sym_string] = STATE(77),
    [sym_multiline_string] = STATE(78),
    [sym__string_literal] = STATE(78),
    [sym_char] = STATE(77),
    [sym_number] = STATE(77),
    [sym_fraction] = STATE(91),
    [sym__fraction_part] = STATE(164),
    [aux_sym_multiline_string_repeat1] = STATE(68),
    [sym__newline] = ACTIONS(147),
    [sym_stack_prim] = ACTIONS(73),
    [sym_noadic_prim] = ACTIONS(73),
    [sym_monadic_prim] = ACTIONS(73),
    [sym_dyadic_prim] = ACTIONS(73),
    [sym_identifier] = ACTIONS(75),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(81),
    [anon_sym_RBRACE] = ACTIONS(259),
    [sym__multiline_string_part] = ACTIONS(85),
    [anon_sym_DQUOTE] = ACTIONS(87),
    [anon_sym_AT] = ACTIONS(89),
    [sym_integer] = ACTIONS(91),
    [sym_decimal] = ACTIONS(93),
    [sym_constant] = ACTIONS(91),
    [sym_scientific] = ACTIONS(93),
  },
  [25] = {
    [sym__function] = STATE(28),
    [sym_prim] = STATE(106),
    [sym_inline_function] = STATE(28),
    [aux_sym__function_body] = STATE(28),
    [sym_array] = STATE(28),
    [sym_box_array] = STATE(28),
    [sym_strand] = STATE(28),
    [sym__strand_item] = STATE(150),
    [sym_literal] = STATE(106),
    [sym_string] = STATE(107),
    [sym_multiline_string] = STATE(108),
    [sym__string_literal] = STATE(108),
    [sym_char] = STATE(107),
    [sym_number] = STATE(107),
    [sym_fraction] = STATE(105),
    [sym__fraction_part] = STATE(162),
    [aux_sym_multiline_string_repeat1] = STATE(74),
    [sym__newline] = ACTIONS(261),
    [sym_stack_prim] = ACTIONS(121),
    [sym_noadic_prim] = ACTIONS(121),
    [sym_monadic_prim] = ACTIONS(121),
    [sym_dyadic_prim] = ACTIONS(121),
    [sym_identifier] = ACTIONS(123),
    [anon_sym_LPAREN] = ACTIONS(125),
    [anon_sym_RPAREN] = ACTIONS(263),
    [anon_sym_LBRACK] = ACTIONS(129),
    [anon_sym_LBRACE] = ACTIONS(131),
    [sym__multiline_string_part] = ACTIONS(133),
    [anon_sym_DQUOTE] = ACTIONS(135),
    [anon_sym_AT] = ACTIONS(137),
    [sym_integer] = ACTIONS(139),
    [sym_decimal] = ACTIONS(141),
    [sym_constant] = ACTIONS(139),
    [sym_scientific] = ACTIONS(141),
  },
  [26] = {
    [sym__function] = STATE(29),
    [sym_prim] = STATE(83),
    [sym_inline_function] = STATE(29),
    [aux_sym__function_body] = STATE(29),
    [sym_array] = STATE(29),
    [sym_box_array] = STATE(29),
    [sym_strand] = STATE(29),
    [sym__strand_item] = STATE(148),
    [sym_literal] = STATE(83),
    [sym_string] = STATE(84),
    [sym_multiline_string] = STATE(85),
    [sym__string_literal] = STATE(85),
    [sym_char] = STATE(84),
    [sym_number] = STATE(84),
    [sym_fraction] = STATE(89),
    [sym__fraction_part] = STATE(163),
    [aux_sym_multiline_string_repeat1] = STATE(61),
    [sym__newline] = ACTIONS(265),
    [sym_stack_prim] = ACTIONS(97),
    [sym_noadic_prim] = ACTIONS(97),
    [sym_monadic_prim] = ACTIONS(97),
    [sym_dyadic_prim] = ACTIONS(97),
    [sym_identifier] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(101),
    [anon_sym_LBRACK] = ACTIONS(103),
    [anon_sym_RBRACK] = ACTIONS(267),
    [anon_sym_LBRACE] = ACTIONS(107),
    [sym__multiline_string_part] = ACTIONS(109),
    [anon_sym_DQUOTE] = ACTIONS(111),
    [anon_sym_AT] = ACTIONS(113),
    [sym_integer] = ACTIONS(115),
    [sym_decimal] = ACTIONS(117),
    [sym_constant] = ACTIONS(115),
    [sym_scientific] = ACTIONS(117),
  },
  [27] = {
    [sym__function] = STATE(12),
    [sym_prim] = STATE(76),
    [sym_inline_function] = STATE(12),
    [aux_sym__function_body] = STATE(12),
    [sym_array] = STATE(12),
    [sym_box_array] = STATE(12),
    [sym_strand] = STATE(12),
    [sym__strand_item] = STATE(147),
    [sym_literal] = STATE(76),
    [sym_string] = STATE(77),
    [sym_multiline_string] = STATE(78),
    [sym__string_literal] = STATE(78),
    [sym_char] = STATE(77),
    [sym_number] = STATE(77),
    [sym_fraction] = STATE(91),
    [sym__fraction_part] = STATE(164),
    [aux_sym_multiline_string_repeat1] = STATE(68),
    [sym__newline] = ACTIONS(269),
    [sym_stack_prim] = ACTIONS(73),
    [sym_noadic_prim] = ACTIONS(73),
    [sym_monadic_prim] = ACTIONS(73),
    [sym_dyadic_prim] = ACTIONS(73),
    [sym_identifier] = ACTIONS(75),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(81),
    [anon_sym_RBRACE] = ACTIONS(271),
    [sym__multiline_string_part] = ACTIONS(85),
    [anon_sym_DQUOTE] = ACTIONS(87),
    [anon_sym_AT] = ACTIONS(89),
    [sym_integer] = ACTIONS(91),
    [sym_decimal] = ACTIONS(93),
    [sym_constant] = ACTIONS(91),
    [sym_scientific] = ACTIONS(93),
  },
  [28] = {
    [sym__function] = STATE(10),
    [sym_prim] = STATE(106),
    [sym_inline_function] = STATE(10),
    [aux_sym__function_body] = STATE(10),
    [sym_array] = STATE(10),
    [sym_box_array] = STATE(10),
    [sym_strand] = STATE(10),
    [sym__strand_item] = STATE(150),
    [sym_literal] = STATE(106),
    [sym_string] = STATE(107),
    [sym_multiline_string] = STATE(108),
    [sym__string_literal] = STATE(108),
    [sym_char] = STATE(107),
    [sym_number] = STATE(107),
    [sym_fraction] = STATE(105),
    [sym__fraction_part] = STATE(162),
    [aux_sym_multiline_string_repeat1] = STATE(74),
    [sym__newline] = ACTIONS(119),
    [sym_stack_prim] = ACTIONS(121),
    [sym_noadic_prim] = ACTIONS(121),
    [sym_monadic_prim] = ACTIONS(121),
    [sym_dyadic_prim] = ACTIONS(121),
    [sym_identifier] = ACTIONS(123),
    [anon_sym_LPAREN] = ACTIONS(125),
    [anon_sym_RPAREN] = ACTIONS(273),
    [anon_sym_LBRACK] = ACTIONS(129),
    [anon_sym_LBRACE] = ACTIONS(131),
    [sym__multiline_string_part] = ACTIONS(133),
    [anon_sym_DQUOTE] = ACTIONS(135),
    [anon_sym_AT] = ACTIONS(137),
    [sym_integer] = ACTIONS(139),
    [sym_decimal] = ACTIONS(141),
    [sym_constant] = ACTIONS(139),
    [sym_scientific] = ACTIONS(141),
  },
  [29] = {
    [sym__function] = STATE(11),
    [sym_prim] = STATE(83),
    [sym_inline_function] = STATE(11),
    [aux_sym__function_body] = STATE(11),
    [sym_array] = STATE(11),
    [sym_box_array] = STATE(11),
    [sym_strand] = STATE(11),
    [sym__strand_item] = STATE(148),
    [sym_literal] = STATE(83),
    [sym_string] = STATE(84),
    [sym_multiline_string] = STATE(85),
    [sym__string_literal] = STATE(85),
    [sym_char] = STATE(84),
    [sym_number] = STATE(84),
    [sym_fraction] = STATE(89),
    [sym__fraction_part] = STATE(163),
    [aux_sym_multiline_string_repeat1] = STATE(61),
    [sym__newline] = ACTIONS(143),
    [sym_stack_prim] = ACTIONS(97),
    [sym_noadic_prim] = ACTIONS(97),
    [sym_monadic_prim] = ACTIONS(97),
    [sym_dyadic_prim] = ACTIONS(97),
    [sym_identifier] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(101),
    [anon_sym_LBRACK] = ACTIONS(103),
    [anon_sym_RBRACK] = ACTIONS(275),
    [anon_sym_LBRACE] = ACTIONS(107),
    [sym__multiline_string_part] = ACTIONS(109),
    [anon_sym_DQUOTE] = ACTIONS(111),
    [anon_sym_AT] = ACTIONS(113),
    [sym_integer] = ACTIONS(115),
    [sym_decimal] = ACTIONS(117),
    [sym_constant] = ACTIONS(115),
    [sym_scientific] = ACTIONS(117),
  },
  [30] = {
    [sym__function] = STATE(30),
    [sym_prim] = STATE(76),
    [sym_inline_function] = STATE(30),
    [aux_sym__function_body] = STATE(30),
    [sym_array] = STATE(30),
    [sym_box_array] = STATE(30),
    [sym_strand] = STATE(30),
    [sym__strand_item] = STATE(147),
    [sym_literal] = STATE(76),
    [sym_string] = STATE(77),
    [sym_multiline_string] = STATE(78),
    [sym__string_literal] = STATE(78),
    [sym_char] = STATE(77),
    [sym_number] = STATE(77),
    [sym_fraction] = STATE(91),
    [sym__fraction_part] = STATE(164),
    [aux_sym_multiline_string_repeat1] = STATE(68),
    [sym__newline] = ACTIONS(277),
    [sym_stack_prim] = ACTIONS(280),
    [sym_noadic_prim] = ACTIONS(280),
    [sym_monadic_prim] = ACTIONS(280),
    [sym_dyadic_prim] = ACTIONS(280),
    [sym_identifier] = ACTIONS(283),
    [anon_sym_LPAREN] = ACTIONS(286),
    [anon_sym_LBRACK] = ACTIONS(289),
    [anon_sym_LBRACE] = ACTIONS(292),
    [anon_sym_RBRACE] = ACTIONS(167),
    [sym__multiline_string_part] = ACTIONS(295),
    [anon_sym_DQUOTE] = ACTIONS(298),
    [anon_sym_AT] = ACTIONS(301),
    [sym_integer] = ACTIONS(304),
    [sym_decimal] = ACTIONS(307),
    [sym_constant] = ACTIONS(304),
    [sym_scientific] = ACTIONS(307),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(85), 1,
      sym__multiline_string_part,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_AT,
    ACTIONS(310), 1,
      sym_identifier,
    STATE(68), 1,
      aux_sym_multiline_string_repeat1,
    STATE(91), 1,
      sym_fraction,
    STATE(164), 1,
      sym__fraction_part,
    ACTIONS(91), 2,
      sym_integer,
      sym_constant,
    ACTIONS(93), 2,
      sym_decimal,
      sym_scientific,
    STATE(78), 2,
      sym_multiline_string,
      sym__string_literal,
    STATE(77), 3,
      sym_string,
      sym_char,
      sym_number,
    STATE(88), 3,
      sym_prim,
      sym__strand_item,
      sym_literal,
    ACTIONS(73), 4,
      sym_stack_prim,
      sym_noadic_prim,
      sym_monadic_prim,
      sym_dyadic_prim,
  [50] = 13,
    ACTIONS(133), 1,
      sym__multiline_string_part,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      anon_sym_AT,
    ACTIONS(312), 1,
      sym_identifier,
    STATE(74), 1,
      aux_sym_multiline_string_repeat1,
    STATE(105), 1,
      sym_fraction,
    STATE(162), 1,
      sym__fraction_part,
    ACTIONS(139), 2,
      sym_integer,
      sym_constant,
    ACTIONS(141), 2,
      sym_decimal,
      sym_scientific,
    STATE(108), 2,
      sym_multiline_string,
      sym__string_literal,
    STATE(96), 3,
      sym_prim,
      sym__strand_item,
      sym_literal,
    STATE(107), 3,
      sym_string,
      sym_char,
      sym_number,
    ACTIONS(121), 4,
      sym_stack_prim,
      sym_noadic_prim,
      sym_monadic_prim,
      sym_dyadic_prim,
  [100] = 13,
    ACTIONS(19), 1,
      sym__multiline_string_part,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_AT,
    ACTIONS(314), 1,
      sym_identifier,
    STATE(39), 1,
      aux_sym_multiline_string_repeat1,
    STATE(42), 1,
      sym_fraction,
    STATE(156), 1,
      sym__fraction_part,
    ACTIONS(25), 2,
      sym_integer,
      sym_constant,
    ACTIONS(27), 2,
      sym_decimal,
      sym_scientific,
    STATE(40), 2,
      sym_multiline_string,
      sym__string_literal,
    STATE(47), 3,
      sym_string,
      sym_char,
      sym_number,
    STATE(52), 3,
      sym_prim,
      sym__strand_item,
      sym_literal,
    ACTIONS(9), 4,
      sym_stack_prim,
      sym_noadic_prim,
      sym_monadic_prim,
      sym_dyadic_prim,
  [150] = 13,
    ACTIONS(109), 1,
      sym__multiline_string_part,
    ACTIONS(111), 1,
      anon_sym_DQUOTE,
    ACTIONS(113), 1,
      anon_sym_AT,
    ACTIONS(316), 1,
      sym_identifier,
    STATE(61), 1,
      aux_sym_multiline_string_repeat1,
    STATE(89), 1,
      sym_fraction,
    STATE(163), 1,
      sym__fraction_part,
    ACTIONS(115), 2,
      sym_integer,
      sym_constant,
    ACTIONS(117), 2,
      sym_decimal,
      sym_scientific,
    STATE(85), 2,
      sym_multiline_string,
      sym__string_literal,
    STATE(84), 3,
      sym_string,
      sym_char,
      sym_number,
    STATE(98), 3,
      sym_prim,
      sym__strand_item,
      sym_literal,
    ACTIONS(97), 4,
      sym_stack_prim,
      sym_noadic_prim,
      sym_monadic_prim,
      sym_dyadic_prim,
  [200] = 4,
    ACTIONS(318), 1,
      ts_builtin_sym_end,
    ACTIONS(322), 1,
      sym__multiline_string_part,
    STATE(35), 1,
      aux_sym_multiline_string_repeat1,
    ACTIONS(320), 19,
      sym__newline,
      sym_binding,
      sym_import,
      sym_module,
      sym_stack_prim,
      sym_noadic_prim,
      sym_monadic_prim,
      sym_dyadic_prim,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym__,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [231] = 4,
    ACTIONS(325), 1,
      ts_builtin_sym_end,
    ACTIONS(329), 1,
      anon_sym__,
    STATE(36), 1,
      aux_sym_strand_repeat1,
    ACTIONS(327), 19,
      sym__newline,
      sym_binding,
      sym_import,
      sym_module,
      sym_stack_prim,
      sym_noadic_prim,
      sym_monadic_prim,
      sym_dyadic_prim,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [262] = 4,
    ACTIONS(332), 1,
      ts_builtin_sym_end,
    ACTIONS(336), 1,
      anon_sym__,
    STATE(36), 1,
      aux_sym_strand_repeat1,
    ACTIONS(334), 19,
      sym__newline,
      sym_binding,
      sym_import,
      sym_module,
      sym_stack_prim,
      sym_noadic_prim,
      sym_monadic_prim,
      sym_dyadic_prim,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [293] = 3,
    ACTIONS(338), 1,
      ts_builtin_sym_end,
    ACTIONS(342), 1,
      anon_sym_SLASH,
    ACTIONS(340), 20,
      sym__newline,
      sym_binding,
      sym_import,
      sym_module,
      sym_stack_prim,
      sym_noadic_prim,
      sym_monadic_prim,
      sym_dyadic_prim,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym__,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [322] = 4,
    ACTIONS(19), 1,
      sym__multiline_string_part,
    ACTIONS(344), 1,
      ts_builtin_sym_end,
    STATE(35), 1,
      aux_sym_multiline_string_repeat1,
    ACTIONS(346), 19,
      sym__newline,
      sym_binding,
      sym_import,
      sym_module,
      sym_stack_prim,
      sym_noadic_prim,
      sym_monadic_prim,
      sym_dyadic_prim,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym__,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [353] = 2,
    ACTIONS(348), 1,
      ts_builtin_sym_end,
    ACTIONS(350), 20,
      sym__newline,
      sym_binding,
      sym_import,
      sym_module,
      sym_stack_prim,
      sym_noadic_prim,
      sym_monadic_prim,
      sym_dyadic_prim,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym__,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [379] = 2,
    ACTIONS(352), 1,
      ts_builtin_sym_end,
    ACTIONS(354), 20,
      sym__newline,
      sym_binding,
      sym_import,
      sym_module,
      sym_stack_prim,
      sym_noadic_prim,
      sym_monadic_prim,
      sym_dyadic_prim,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym__,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [405] = 2,
    ACTIONS(338), 1,
      ts_builtin_sym_end,
    ACTIONS(340), 20,
      sym__newline,
      sym_binding,
      sym_import,
      sym_module,
      sym_stack_prim,
      sym_noadic_prim,
      sym_monadic_prim,
      sym_dyadic_prim,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym__,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [431] = 2,
    ACTIONS(318), 1,
      ts_builtin_sym_end,
    ACTIONS(320), 20,
      sym__newline,
      sym_binding,
      sym_import,
      sym_module,
      sym_stack_prim,
      sym_noadic_prim,
      sym_monadic_prim,
      sym_dyadic_prim,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym__,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [457] = 2,
    ACTIONS(356), 1,
      ts_builtin_sym_end,
    ACTIONS(358), 20,
      sym__newline,
      sym_binding,
      sym_import,
      sym_module,
      sym_stack_prim,
      sym_noadic_prim,
      sym_monadic_prim,
      sym_dyadic_prim,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym__,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [483] = 2,
    ACTIONS(360), 1,
      ts_builtin_sym_end,
    ACTIONS(362), 20,
      sym__newline,
      sym_binding,
      sym_import,
      sym_module,
      sym_stack_prim,
      sym_noadic_prim,
      sym_monadic_prim,
      sym_dyadic_prim,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym__,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [509] = 2,
    ACTIONS(364), 1,
      ts_builtin_sym_end,
    ACTIONS(366), 20,
      sym__newline,
      sym_binding,
      sym_import,
      sym_module,
      sym_stack_prim,
      sym_noadic_prim,
      sym_monadic_prim,
      sym_dyadic_prim,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym__,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [535] = 2,
    ACTIONS(368), 1,
      ts_builtin_sym_end,
    ACTIONS(370), 20,
      sym__newline,
      sym_binding,
      sym_import,
      sym_module,
      sym_stack_prim,
      sym_noadic_prim,
      sym_monadic_prim,
      sym_dyadic_prim,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym__,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [561] = 2,
    ACTIONS(372), 1,
      ts_builtin_sym_end,
    ACTIONS(374), 20,
      sym__newline,
      sym_binding,
      sym_import,
      sym_module,
      sym_stack_prim,
      sym_noadic_prim,
      sym_monadic_prim,
      sym_dyadic_prim,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym__,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [587] = 4,
    ACTIONS(376), 1,
      ts_builtin_sym_end,
    ACTIONS(378), 1,
      sym__newline,
    STATE(49), 1,
      aux_sym__top_level_repeat1,
    ACTIONS(381), 18,
      sym_binding,
      sym_import,
      sym_module,
      sym_stack_prim,
      sym_noadic_prim,
      sym_monadic_prim,
      sym_dyadic_prim,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [617] = 3,
    ACTIONS(383), 1,
      ts_builtin_sym_end,
    ACTIONS(387), 1,
      anon_sym__,
    ACTIONS(385), 19,
      sym__newline,
      sym_binding,
      sym_import,
      sym_module,
      sym_stack_prim,
      sym_noadic_prim,
      sym_monadic_prim,
      sym_dyadic_prim,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [645] = 2,
    ACTIONS(389), 1,
      ts_builtin_sym_end,
    ACTIONS(391), 20,
      sym__newline,
      sym_binding,
      sym_import,
      sym_module,
      sym_stack_prim,
      sym_noadic_prim,
      sym_monadic_prim,
      sym_dyadic_prim,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym__,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [671] = 2,
    ACTIONS(325), 1,
      ts_builtin_sym_end,
    ACTIONS(327), 20,
      sym__newline,
      sym_binding,
      sym_import,
      sym_module,
      sym_stack_prim,
      sym_noadic_prim,
      sym_monadic_prim,
      sym_dyadic_prim,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym__,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [697] = 4,
    ACTIONS(393), 1,
      ts_builtin_sym_end,
    ACTIONS(395), 1,
      sym__newline,
    STATE(49), 1,
      aux_sym__top_level_repeat1,
    ACTIONS(397), 18,
      sym_binding,
      sym_import,
      sym_module,
      sym_stack_prim,
      sym_noadic_prim,
      sym_monadic_prim,
      sym_dyadic_prim,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [727] = 2,
    ACTIONS(399), 1,
      ts_builtin_sym_end,
    ACTIONS(401), 19,
      sym__newline,
      sym_binding,
      sym_import,
      sym_module,
      sym_stack_prim,
      sym_noadic_prim,
      sym_monadic_prim,
      sym_dyadic_prim,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [752] = 2,
    ACTIONS(403), 1,
      ts_builtin_sym_end,
    ACTIONS(405), 19,
      sym__newline,
      sym_binding,
      sym_import,
      sym_module,
      sym_stack_prim,
      sym_noadic_prim,
      sym_monadic_prim,
      sym_dyadic_prim,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [777] = 2,
    ACTIONS(407), 1,
      ts_builtin_sym_end,
    ACTIONS(409), 19,
      sym__newline,
      sym_binding,
      sym_import,
      sym_module,
      sym_stack_prim,
      sym_noadic_prim,
      sym_monadic_prim,
      sym_dyadic_prim,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [802] = 2,
    ACTIONS(411), 1,
      ts_builtin_sym_end,
    ACTIONS(413), 19,
      sym__newline,
      sym_binding,
      sym_import,
      sym_module,
      sym_stack_prim,
      sym_noadic_prim,
      sym_monadic_prim,
      sym_dyadic_prim,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [827] = 2,
    ACTIONS(415), 1,
      ts_builtin_sym_end,
    ACTIONS(417), 19,
      sym__newline,
      sym_binding,
      sym_import,
      sym_module,
      sym_stack_prim,
      sym_noadic_prim,
      sym_monadic_prim,
      sym_dyadic_prim,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [852] = 2,
    ACTIONS(419), 1,
      ts_builtin_sym_end,
    ACTIONS(421), 19,
      sym__newline,
      sym_binding,
      sym_import,
      sym_module,
      sym_stack_prim,
      sym_noadic_prim,
      sym_monadic_prim,
      sym_dyadic_prim,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [877] = 2,
    ACTIONS(342), 1,
      anon_sym_SLASH,
    ACTIONS(340), 18,
      sym__newline,
      sym_stack_prim,
      sym_noadic_prim,
      sym_monadic_prim,
      sym_dyadic_prim,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym__,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [901] = 3,
    ACTIONS(109), 1,
      sym__multiline_string_part,
    STATE(64), 1,
      aux_sym_multiline_string_repeat1,
    ACTIONS(346), 17,
      sym__newline,
      sym_stack_prim,
      sym_noadic_prim,
      sym_monadic_prim,
      sym_dyadic_prim,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym__,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [927] = 3,
    ACTIONS(423), 1,
      anon_sym__,
    STATE(71), 1,
      aux_sym_strand_repeat1,
    ACTIONS(334), 17,
      sym__newline,
      sym_stack_prim,
      sym_noadic_prim,
      sym_monadic_prim,
      sym_dyadic_prim,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [953] = 3,
    ACTIONS(425), 1,
      anon_sym__,
    STATE(66), 1,
      aux_sym_strand_repeat1,
    ACTIONS(334), 17,
      sym__newline,
      sym_stack_prim,
      sym_noadic_prim,
      sym_monadic_prim,
      sym_dyadic_prim,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [979] = 3,
    ACTIONS(427), 1,
      sym__multiline_string_part,
    STATE(64), 1,
      aux_sym_multiline_string_repeat1,
    ACTIONS(320), 17,
      sym__newline,
      sym_stack_prim,
      sym_noadic_prim,
      sym_monadic_prim,
      sym_dyadic_prim,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym__,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [1005] = 3,
    ACTIONS(430), 1,
      sym__multiline_string_part,
    STATE(65), 1,
      aux_sym_multiline_string_repeat1,
    ACTIONS(320), 17,
      sym__newline,
      sym_stack_prim,
      sym_noadic_prim,
      sym_monadic_prim,
      sym_dyadic_prim,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym__,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [1031] = 3,
    ACTIONS(433), 1,
      anon_sym__,
    STATE(66), 1,
      aux_sym_strand_repeat1,
    ACTIONS(327), 17,
      sym__newline,
      sym_stack_prim,
      sym_noadic_prim,
      sym_monadic_prim,
      sym_dyadic_prim,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [1057] = 2,
    ACTIONS(342), 1,
      anon_sym_SLASH,
    ACTIONS(340), 18,
      sym__newline,
      sym_stack_prim,
      sym_noadic_prim,
      sym_monadic_prim,
      sym_dyadic_prim,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym__,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [1081] = 3,
    ACTIONS(85), 1,
      sym__multiline_string_part,
    STATE(69), 1,
      aux_sym_multiline_string_repeat1,
    ACTIONS(346), 17,
      sym__newline,
      sym_stack_prim,
      sym_noadic_prim,
      sym_monadic_prim,
      sym_dyadic_prim,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym__,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [1107] = 3,
    ACTIONS(436), 1,
      sym__multiline_string_part,
    STATE(69), 1,
      aux_sym_multiline_string_repeat1,
    ACTIONS(320), 17,
      sym__newline,
      sym_stack_prim,
      sym_noadic_prim,
      sym_monadic_prim,
      sym_dyadic_prim,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym__,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [1133] = 3,
    ACTIONS(439), 1,
      anon_sym__,
    STATE(70), 1,
      aux_sym_strand_repeat1,
    ACTIONS(327), 17,
      sym__newline,
      sym_stack_prim,
      sym_noadic_prim,
      sym_monadic_prim,
      sym_dyadic_prim,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [1159] = 3,
    ACTIONS(442), 1,
      anon_sym__,
    STATE(71), 1,
      aux_sym_strand_repeat1,
    ACTIONS(327), 17,
      sym__newline,
      sym_stack_prim,
      sym_noadic_prim,
      sym_monadic_prim,
      sym_dyadic_prim,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [1185] = 3,
    ACTIONS(445), 1,
      anon_sym__,
    STATE(70), 1,
      aux_sym_strand_repeat1,
    ACTIONS(334), 17,
      sym__newline,
      sym_stack_prim,
      sym_noadic_prim,
      sym_monadic_prim,
      sym_dyadic_prim,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [1211] = 2,
    ACTIONS(342), 1,
      anon_sym_SLASH,
    ACTIONS(340), 18,
      sym__newline,
      sym_stack_prim,
      sym_noadic_prim,
      sym_monadic_prim,
      sym_dyadic_prim,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym__,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [1235] = 3,
    ACTIONS(133), 1,
      sym__multiline_string_part,
    STATE(65), 1,
      aux_sym_multiline_string_repeat1,
    ACTIONS(346), 17,
      sym__newline,
      sym_stack_prim,
      sym_noadic_prim,
      sym_monadic_prim,
      sym_dyadic_prim,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym__,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [1261] = 1,
    ACTIONS(362), 18,
      sym__newline,
      sym_stack_prim,
      sym_noadic_prim,
      sym_monadic_prim,
      sym_dyadic_prim,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym__,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [1282] = 2,
    ACTIONS(387), 1,
      anon_sym__,
    ACTIONS(385), 17,
      sym__newline,
      sym_stack_prim,
      sym_noadic_prim,
      sym_monadic_prim,
      sym_dyadic_prim,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [1305] = 1,
    ACTIONS(370), 18,
      sym__newline,
      sym_stack_prim,
      sym_noadic_prim,
      sym_monadic_prim,
      sym_dyadic_prim,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym__,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [1326] = 1,
    ACTIONS(350), 18,
      sym__newline,
      sym_stack_prim,
      sym_noadic_prim,
      sym_monadic_prim,
      sym_dyadic_prim,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym__,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [1347] = 1,
    ACTIONS(366), 18,
      sym__newline,
      sym_stack_prim,
      sym_noadic_prim,
      sym_monadic_prim,
      sym_dyadic_prim,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym__,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [1368] = 1,
    ACTIONS(320), 18,
      sym__newline,
      sym_stack_prim,
      sym_noadic_prim,
      sym_monadic_prim,
      sym_dyadic_prim,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym__,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [1389] = 1,
    ACTIONS(320), 18,
      sym__newline,
      sym_stack_prim,
      sym_noadic_prim,
      sym_monadic_prim,
      sym_dyadic_prim,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym__,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [1410] = 1,
    ACTIONS(366), 18,
      sym__newline,
      sym_stack_prim,
      sym_noadic_prim,
      sym_monadic_prim,
      sym_dyadic_prim,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym__,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [1431] = 2,
    ACTIONS(387), 1,
      anon_sym__,
    ACTIONS(385), 17,
      sym__newline,
      sym_stack_prim,
      sym_noadic_prim,
      sym_monadic_prim,
      sym_dyadic_prim,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [1454] = 1,
    ACTIONS(370), 18,
      sym__newline,
      sym_stack_prim,
      sym_noadic_prim,
      sym_monadic_prim,
      sym_dyadic_prim,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym__,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [1475] = 1,
    ACTIONS(350), 18,
      sym__newline,
      sym_stack_prim,
      sym_noadic_prim,
      sym_monadic_prim,
      sym_dyadic_prim,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym__,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [1496] = 1,
    ACTIONS(358), 18,
      sym__newline,
      sym_stack_prim,
      sym_noadic_prim,
      sym_monadic_prim,
      sym_dyadic_prim,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym__,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [1517] = 1,
    ACTIONS(391), 18,
      sym__newline,
      sym_stack_prim,
      sym_noadic_prim,
      sym_monadic_prim,
      sym_dyadic_prim,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym__,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [1538] = 1,
    ACTIONS(327), 18,
      sym__newline,
      sym_stack_prim,
      sym_noadic_prim,
      sym_monadic_prim,
      sym_dyadic_prim,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym__,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [1559] = 1,
    ACTIONS(340), 18,
      sym__newline,
      sym_stack_prim,
      sym_noadic_prim,
      sym_monadic_prim,
      sym_dyadic_prim,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym__,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [1580] = 1,
    ACTIONS(354), 18,
      sym__newline,
      sym_stack_prim,
      sym_noadic_prim,
      sym_monadic_prim,
      sym_dyadic_prim,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym__,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [1601] = 1,
    ACTIONS(340), 18,
      sym__newline,
      sym_stack_prim,
      sym_noadic_prim,
      sym_monadic_prim,
      sym_dyadic_prim,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym__,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [1622] = 1,
    ACTIONS(362), 18,
      sym__newline,
      sym_stack_prim,
      sym_noadic_prim,
      sym_monadic_prim,
      sym_dyadic_prim,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym__,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [1643] = 1,
    ACTIONS(391), 18,
      sym__newline,
      sym_stack_prim,
      sym_noadic_prim,
      sym_monadic_prim,
      sym_dyadic_prim,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym__,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [1664] = 1,
    ACTIONS(366), 18,
      sym__newline,
      sym_stack_prim,
      sym_noadic_prim,
      sym_monadic_prim,
      sym_dyadic_prim,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym__,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [1685] = 1,
    ACTIONS(358), 18,
      sym__newline,
      sym_stack_prim,
      sym_noadic_prim,
      sym_monadic_prim,
      sym_dyadic_prim,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym__,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [1706] = 1,
    ACTIONS(327), 18,
      sym__newline,
      sym_stack_prim,
      sym_noadic_prim,
      sym_monadic_prim,
      sym_dyadic_prim,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym__,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [1727] = 1,
    ACTIONS(391), 18,
      sym__newline,
      sym_stack_prim,
      sym_noadic_prim,
      sym_monadic_prim,
      sym_dyadic_prim,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym__,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [1748] = 1,
    ACTIONS(327), 18,
      sym__newline,
      sym_stack_prim,
      sym_noadic_prim,
      sym_monadic_prim,
      sym_dyadic_prim,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym__,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [1769] = 1,
    ACTIONS(320), 18,
      sym__newline,
      sym_stack_prim,
      sym_noadic_prim,
      sym_monadic_prim,
      sym_dyadic_prim,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym__,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [1790] = 1,
    ACTIONS(354), 18,
      sym__newline,
      sym_stack_prim,
      sym_noadic_prim,
      sym_monadic_prim,
      sym_dyadic_prim,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym__,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [1811] = 1,
    ACTIONS(354), 18,
      sym__newline,
      sym_stack_prim,
      sym_noadic_prim,
      sym_monadic_prim,
      sym_dyadic_prim,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym__,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [1832] = 1,
    ACTIONS(374), 18,
      sym__newline,
      sym_stack_prim,
      sym_noadic_prim,
      sym_monadic_prim,
      sym_dyadic_prim,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym__,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [1853] = 1,
    ACTIONS(374), 18,
      sym__newline,
      sym_stack_prim,
      sym_noadic_prim,
      sym_monadic_prim,
      sym_dyadic_prim,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym__,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [1874] = 1,
    ACTIONS(374), 18,
      sym__newline,
      sym_stack_prim,
      sym_noadic_prim,
      sym_monadic_prim,
      sym_dyadic_prim,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym__,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [1895] = 1,
    ACTIONS(340), 18,
      sym__newline,
      sym_stack_prim,
      sym_noadic_prim,
      sym_monadic_prim,
      sym_dyadic_prim,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym__,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [1916] = 2,
    ACTIONS(387), 1,
      anon_sym__,
    ACTIONS(385), 17,
      sym__newline,
      sym_stack_prim,
      sym_noadic_prim,
      sym_monadic_prim,
      sym_dyadic_prim,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [1939] = 1,
    ACTIONS(370), 18,
      sym__newline,
      sym_stack_prim,
      sym_noadic_prim,
      sym_monadic_prim,
      sym_dyadic_prim,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym__,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [1960] = 1,
    ACTIONS(350), 18,
      sym__newline,
      sym_stack_prim,
      sym_noadic_prim,
      sym_monadic_prim,
      sym_dyadic_prim,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym__,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [1981] = 1,
    ACTIONS(362), 18,
      sym__newline,
      sym_stack_prim,
      sym_noadic_prim,
      sym_monadic_prim,
      sym_dyadic_prim,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym__,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [2002] = 1,
    ACTIONS(358), 18,
      sym__newline,
      sym_stack_prim,
      sym_noadic_prim,
      sym_monadic_prim,
      sym_dyadic_prim,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym__,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [2023] = 1,
    ACTIONS(421), 17,
      sym__newline,
      sym_stack_prim,
      sym_noadic_prim,
      sym_monadic_prim,
      sym_dyadic_prim,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [2043] = 1,
    ACTIONS(413), 17,
      sym__newline,
      sym_stack_prim,
      sym_noadic_prim,
      sym_monadic_prim,
      sym_dyadic_prim,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [2063] = 1,
    ACTIONS(417), 17,
      sym__newline,
      sym_stack_prim,
      sym_noadic_prim,
      sym_monadic_prim,
      sym_dyadic_prim,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [2083] = 1,
    ACTIONS(413), 17,
      sym__newline,
      sym_stack_prim,
      sym_noadic_prim,
      sym_monadic_prim,
      sym_dyadic_prim,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [2103] = 1,
    ACTIONS(417), 17,
      sym__newline,
      sym_stack_prim,
      sym_noadic_prim,
      sym_monadic_prim,
      sym_dyadic_prim,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [2123] = 1,
    ACTIONS(401), 17,
      sym__newline,
      sym_stack_prim,
      sym_noadic_prim,
      sym_monadic_prim,
      sym_dyadic_prim,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [2143] = 1,
    ACTIONS(405), 17,
      sym__newline,
      sym_stack_prim,
      sym_noadic_prim,
      sym_monadic_prim,
      sym_dyadic_prim,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [2163] = 1,
    ACTIONS(409), 17,
      sym__newline,
      sym_stack_prim,
      sym_noadic_prim,
      sym_monadic_prim,
      sym_dyadic_prim,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [2183] = 1,
    ACTIONS(401), 17,
      sym__newline,
      sym_stack_prim,
      sym_noadic_prim,
      sym_monadic_prim,
      sym_dyadic_prim,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [2203] = 1,
    ACTIONS(405), 17,
      sym__newline,
      sym_stack_prim,
      sym_noadic_prim,
      sym_monadic_prim,
      sym_dyadic_prim,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [2223] = 1,
    ACTIONS(409), 17,
      sym__newline,
      sym_stack_prim,
      sym_noadic_prim,
      sym_monadic_prim,
      sym_dyadic_prim,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [2243] = 1,
    ACTIONS(401), 17,
      sym__newline,
      sym_stack_prim,
      sym_noadic_prim,
      sym_monadic_prim,
      sym_dyadic_prim,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [2263] = 1,
    ACTIONS(405), 17,
      sym__newline,
      sym_stack_prim,
      sym_noadic_prim,
      sym_monadic_prim,
      sym_dyadic_prim,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [2283] = 1,
    ACTIONS(409), 17,
      sym__newline,
      sym_stack_prim,
      sym_noadic_prim,
      sym_monadic_prim,
      sym_dyadic_prim,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [2303] = 1,
    ACTIONS(421), 17,
      sym__newline,
      sym_stack_prim,
      sym_noadic_prim,
      sym_monadic_prim,
      sym_dyadic_prim,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [2323] = 1,
    ACTIONS(421), 17,
      sym__newline,
      sym_stack_prim,
      sym_noadic_prim,
      sym_monadic_prim,
      sym_dyadic_prim,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [2343] = 1,
    ACTIONS(413), 17,
      sym__newline,
      sym_stack_prim,
      sym_noadic_prim,
      sym_monadic_prim,
      sym_dyadic_prim,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [2363] = 1,
    ACTIONS(417), 17,
      sym__newline,
      sym_stack_prim,
      sym_noadic_prim,
      sym_monadic_prim,
      sym_dyadic_prim,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      sym__multiline_string_part,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_integer,
      sym_decimal,
      sym_constant,
      sym_scientific,
  [2383] = 4,
    ACTIONS(447), 1,
      anon_sym_DQUOTE,
    ACTIONS(449), 1,
      aux_sym__character_token1,
    ACTIONS(451), 1,
      anon_sym_BSLASH,
    STATE(137), 3,
      sym__character,
      sym_escape,
      aux_sym__string_literal_repeat1,
  [2398] = 4,
    ACTIONS(451), 1,
      anon_sym_BSLASH,
    ACTIONS(453), 1,
      anon_sym_DQUOTE,
    ACTIONS(455), 1,
      aux_sym__character_token1,
    STATE(133), 3,
      sym__character,
      sym_escape,
      aux_sym__string_literal_repeat1,
  [2413] = 4,
    ACTIONS(451), 1,
      anon_sym_BSLASH,
    ACTIONS(457), 1,
      anon_sym_DQUOTE,
    ACTIONS(459), 1,
      aux_sym__character_token1,
    STATE(135), 3,
      sym__character,
      sym_escape,
      aux_sym__string_literal_repeat1,
  [2428] = 4,
    ACTIONS(451), 1,
      anon_sym_BSLASH,
    ACTIONS(455), 1,
      aux_sym__character_token1,
    ACTIONS(461), 1,
      anon_sym_DQUOTE,
    STATE(133), 3,
      sym__character,
      sym_escape,
      aux_sym__string_literal_repeat1,
  [2443] = 4,
    ACTIONS(463), 1,
      anon_sym_DQUOTE,
    ACTIONS(465), 1,
      aux_sym__character_token1,
    ACTIONS(468), 1,
      anon_sym_BSLASH,
    STATE(133), 3,
      sym__character,
      sym_escape,
      aux_sym__string_literal_repeat1,
  [2458] = 4,
    ACTIONS(451), 1,
      anon_sym_BSLASH,
    ACTIONS(471), 1,
      anon_sym_DQUOTE,
    ACTIONS(473), 1,
      aux_sym__character_token1,
    STATE(132), 3,
      sym__character,
      sym_escape,
      aux_sym__string_literal_repeat1,
  [2473] = 4,
    ACTIONS(451), 1,
      anon_sym_BSLASH,
    ACTIONS(455), 1,
      aux_sym__character_token1,
    ACTIONS(475), 1,
      anon_sym_DQUOTE,
    STATE(133), 3,
      sym__character,
      sym_escape,
      aux_sym__string_literal_repeat1,
  [2488] = 4,
    ACTIONS(451), 1,
      anon_sym_BSLASH,
    ACTIONS(477), 1,
      anon_sym_DQUOTE,
    ACTIONS(479), 1,
      aux_sym__character_token1,
    STATE(130), 3,
      sym__character,
      sym_escape,
      aux_sym__string_literal_repeat1,
  [2503] = 4,
    ACTIONS(451), 1,
      anon_sym_BSLASH,
    ACTIONS(455), 1,
      aux_sym__character_token1,
    ACTIONS(481), 1,
      anon_sym_DQUOTE,
    STATE(133), 3,
      sym__character,
      sym_escape,
      aux_sym__string_literal_repeat1,
  [2518] = 3,
    ACTIONS(483), 1,
      aux_sym__character_token1,
    ACTIONS(485), 1,
      anon_sym_BSLASH,
    STATE(94), 2,
      sym__character,
      sym_escape,
  [2529] = 3,
    ACTIONS(487), 1,
      aux_sym__character_token1,
    ACTIONS(489), 1,
      anon_sym_BSLASH,
    STATE(79), 2,
      sym__character,
      sym_escape,
  [2540] = 3,
    ACTIONS(491), 1,
      aux_sym__character_token1,
    ACTIONS(493), 1,
      anon_sym_BSLASH,
    STATE(82), 2,
      sym__character,
      sym_escape,
  [2551] = 3,
    ACTIONS(495), 1,
      aux_sym__character_token1,
    ACTIONS(497), 1,
      anon_sym_BSLASH,
    STATE(46), 2,
      sym__character,
      sym_escape,
  [2562] = 2,
    STATE(101), 1,
      sym__fraction_part,
    ACTIONS(499), 2,
      sym_integer,
      sym_constant,
  [2570] = 2,
    STATE(100), 1,
      sym__fraction_part,
    ACTIONS(501), 2,
      sym_integer,
      sym_constant,
  [2578] = 2,
    STATE(41), 1,
      sym__fraction_part,
    ACTIONS(503), 2,
      sym_integer,
      sym_constant,
  [2586] = 1,
    ACTIONS(358), 3,
      anon_sym_DQUOTE,
      aux_sym__character_token1,
      anon_sym_BSLASH,
  [2592] = 2,
    STATE(90), 1,
      sym__fraction_part,
    ACTIONS(505), 2,
      sym_integer,
      sym_constant,
  [2600] = 2,
    ACTIONS(507), 1,
      anon_sym__,
    STATE(72), 1,
      aux_sym_strand_repeat1,
  [2607] = 2,
    ACTIONS(509), 1,
      anon_sym__,
    STATE(63), 1,
      aux_sym_strand_repeat1,
  [2614] = 2,
    ACTIONS(511), 1,
      anon_sym__,
    STATE(37), 1,
      aux_sym_strand_repeat1,
  [2621] = 2,
    ACTIONS(513), 1,
      anon_sym__,
    STATE(62), 1,
      aux_sym_strand_repeat1,
  [2628] = 1,
    ACTIONS(515), 1,
      sym__newline,
  [2632] = 1,
    ACTIONS(517), 1,
      aux_sym_escape_token1,
  [2636] = 1,
    ACTIONS(519), 1,
      sym__newline,
  [2640] = 1,
    ACTIONS(521), 1,
      aux_sym_escape_token1,
  [2644] = 1,
    ACTIONS(523), 1,
      ts_builtin_sym_end,
  [2648] = 1,
    ACTIONS(525), 1,
      anon_sym_SLASH,
  [2652] = 1,
    ACTIONS(527), 1,
      aux_sym_escape_token1,
  [2656] = 1,
    ACTIONS(529), 1,
      aux_sym_escape_token1,
  [2660] = 1,
    ACTIONS(531), 1,
      sym__newline,
  [2664] = 1,
    ACTIONS(533), 1,
      sym__newline,
  [2668] = 1,
    ACTIONS(535), 1,
      aux_sym_escape_token1,
  [2672] = 1,
    ACTIONS(537), 1,
      anon_sym_SLASH,
  [2676] = 1,
    ACTIONS(539), 1,
      anon_sym_SLASH,
  [2680] = 1,
    ACTIONS(541), 1,
      anon_sym_SLASH,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(31)] = 0,
  [SMALL_STATE(32)] = 50,
  [SMALL_STATE(33)] = 100,
  [SMALL_STATE(34)] = 150,
  [SMALL_STATE(35)] = 200,
  [SMALL_STATE(36)] = 231,
  [SMALL_STATE(37)] = 262,
  [SMALL_STATE(38)] = 293,
  [SMALL_STATE(39)] = 322,
  [SMALL_STATE(40)] = 353,
  [SMALL_STATE(41)] = 379,
  [SMALL_STATE(42)] = 405,
  [SMALL_STATE(43)] = 431,
  [SMALL_STATE(44)] = 457,
  [SMALL_STATE(45)] = 483,
  [SMALL_STATE(46)] = 509,
  [SMALL_STATE(47)] = 535,
  [SMALL_STATE(48)] = 561,
  [SMALL_STATE(49)] = 587,
  [SMALL_STATE(50)] = 617,
  [SMALL_STATE(51)] = 645,
  [SMALL_STATE(52)] = 671,
  [SMALL_STATE(53)] = 697,
  [SMALL_STATE(54)] = 727,
  [SMALL_STATE(55)] = 752,
  [SMALL_STATE(56)] = 777,
  [SMALL_STATE(57)] = 802,
  [SMALL_STATE(58)] = 827,
  [SMALL_STATE(59)] = 852,
  [SMALL_STATE(60)] = 877,
  [SMALL_STATE(61)] = 901,
  [SMALL_STATE(62)] = 927,
  [SMALL_STATE(63)] = 953,
  [SMALL_STATE(64)] = 979,
  [SMALL_STATE(65)] = 1005,
  [SMALL_STATE(66)] = 1031,
  [SMALL_STATE(67)] = 1057,
  [SMALL_STATE(68)] = 1081,
  [SMALL_STATE(69)] = 1107,
  [SMALL_STATE(70)] = 1133,
  [SMALL_STATE(71)] = 1159,
  [SMALL_STATE(72)] = 1185,
  [SMALL_STATE(73)] = 1211,
  [SMALL_STATE(74)] = 1235,
  [SMALL_STATE(75)] = 1261,
  [SMALL_STATE(76)] = 1282,
  [SMALL_STATE(77)] = 1305,
  [SMALL_STATE(78)] = 1326,
  [SMALL_STATE(79)] = 1347,
  [SMALL_STATE(80)] = 1368,
  [SMALL_STATE(81)] = 1389,
  [SMALL_STATE(82)] = 1410,
  [SMALL_STATE(83)] = 1431,
  [SMALL_STATE(84)] = 1454,
  [SMALL_STATE(85)] = 1475,
  [SMALL_STATE(86)] = 1496,
  [SMALL_STATE(87)] = 1517,
  [SMALL_STATE(88)] = 1538,
  [SMALL_STATE(89)] = 1559,
  [SMALL_STATE(90)] = 1580,
  [SMALL_STATE(91)] = 1601,
  [SMALL_STATE(92)] = 1622,
  [SMALL_STATE(93)] = 1643,
  [SMALL_STATE(94)] = 1664,
  [SMALL_STATE(95)] = 1685,
  [SMALL_STATE(96)] = 1706,
  [SMALL_STATE(97)] = 1727,
  [SMALL_STATE(98)] = 1748,
  [SMALL_STATE(99)] = 1769,
  [SMALL_STATE(100)] = 1790,
  [SMALL_STATE(101)] = 1811,
  [SMALL_STATE(102)] = 1832,
  [SMALL_STATE(103)] = 1853,
  [SMALL_STATE(104)] = 1874,
  [SMALL_STATE(105)] = 1895,
  [SMALL_STATE(106)] = 1916,
  [SMALL_STATE(107)] = 1939,
  [SMALL_STATE(108)] = 1960,
  [SMALL_STATE(109)] = 1981,
  [SMALL_STATE(110)] = 2002,
  [SMALL_STATE(111)] = 2023,
  [SMALL_STATE(112)] = 2043,
  [SMALL_STATE(113)] = 2063,
  [SMALL_STATE(114)] = 2083,
  [SMALL_STATE(115)] = 2103,
  [SMALL_STATE(116)] = 2123,
  [SMALL_STATE(117)] = 2143,
  [SMALL_STATE(118)] = 2163,
  [SMALL_STATE(119)] = 2183,
  [SMALL_STATE(120)] = 2203,
  [SMALL_STATE(121)] = 2223,
  [SMALL_STATE(122)] = 2243,
  [SMALL_STATE(123)] = 2263,
  [SMALL_STATE(124)] = 2283,
  [SMALL_STATE(125)] = 2303,
  [SMALL_STATE(126)] = 2323,
  [SMALL_STATE(127)] = 2343,
  [SMALL_STATE(128)] = 2363,
  [SMALL_STATE(129)] = 2383,
  [SMALL_STATE(130)] = 2398,
  [SMALL_STATE(131)] = 2413,
  [SMALL_STATE(132)] = 2428,
  [SMALL_STATE(133)] = 2443,
  [SMALL_STATE(134)] = 2458,
  [SMALL_STATE(135)] = 2473,
  [SMALL_STATE(136)] = 2488,
  [SMALL_STATE(137)] = 2503,
  [SMALL_STATE(138)] = 2518,
  [SMALL_STATE(139)] = 2529,
  [SMALL_STATE(140)] = 2540,
  [SMALL_STATE(141)] = 2551,
  [SMALL_STATE(142)] = 2562,
  [SMALL_STATE(143)] = 2570,
  [SMALL_STATE(144)] = 2578,
  [SMALL_STATE(145)] = 2586,
  [SMALL_STATE(146)] = 2592,
  [SMALL_STATE(147)] = 2600,
  [SMALL_STATE(148)] = 2607,
  [SMALL_STATE(149)] = 2614,
  [SMALL_STATE(150)] = 2621,
  [SMALL_STATE(151)] = 2628,
  [SMALL_STATE(152)] = 2632,
  [SMALL_STATE(153)] = 2636,
  [SMALL_STATE(154)] = 2640,
  [SMALL_STATE(155)] = 2644,
  [SMALL_STATE(156)] = 2648,
  [SMALL_STATE(157)] = 2652,
  [SMALL_STATE(158)] = 2656,
  [SMALL_STATE(159)] = 2660,
  [SMALL_STATE(160)] = 2664,
  [SMALL_STATE(161)] = 2668,
  [SMALL_STATE(162)] = 2672,
  [SMALL_STATE(163)] = 2676,
  [SMALL_STATE(164)] = 2680,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(149),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(159),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(136),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(141),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__function_body, 2, 0, 0), SHIFT_REPEAT(10),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__function_body, 2, 0, 0), SHIFT_REPEAT(103),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__function_body, 2, 0, 0), SHIFT_REPEAT(150),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__function_body, 2, 0, 0), SHIFT_REPEAT(13),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__function_body, 2, 0, 0),
  [169] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__function_body, 2, 0, 0), SHIFT_REPEAT(14),
  [172] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__function_body, 2, 0, 0), SHIFT_REPEAT(15),
  [175] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__function_body, 2, 0, 0), SHIFT_REPEAT(153),
  [178] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__function_body, 2, 0, 0), SHIFT_REPEAT(134),
  [181] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__function_body, 2, 0, 0), SHIFT_REPEAT(138),
  [184] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__function_body, 2, 0, 0), SHIFT_REPEAT(73),
  [187] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__function_body, 2, 0, 0), SHIFT_REPEAT(105),
  [190] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__function_body, 2, 0, 0), SHIFT_REPEAT(11),
  [193] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__function_body, 2, 0, 0), SHIFT_REPEAT(102),
  [196] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__function_body, 2, 0, 0), SHIFT_REPEAT(148),
  [199] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__function_body, 2, 0, 0), SHIFT_REPEAT(19),
  [202] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__function_body, 2, 0, 0), SHIFT_REPEAT(20),
  [205] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__function_body, 2, 0, 0), SHIFT_REPEAT(21),
  [208] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__function_body, 2, 0, 0), SHIFT_REPEAT(160),
  [211] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__function_body, 2, 0, 0), SHIFT_REPEAT(131),
  [214] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__function_body, 2, 0, 0), SHIFT_REPEAT(139),
  [217] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__function_body, 2, 0, 0), SHIFT_REPEAT(60),
  [220] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__function_body, 2, 0, 0), SHIFT_REPEAT(89),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [277] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__function_body, 2, 0, 0), SHIFT_REPEAT(30),
  [280] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__function_body, 2, 0, 0), SHIFT_REPEAT(104),
  [283] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__function_body, 2, 0, 0), SHIFT_REPEAT(147),
  [286] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__function_body, 2, 0, 0), SHIFT_REPEAT(25),
  [289] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__function_body, 2, 0, 0), SHIFT_REPEAT(26),
  [292] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__function_body, 2, 0, 0), SHIFT_REPEAT(27),
  [295] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__function_body, 2, 0, 0), SHIFT_REPEAT(151),
  [298] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__function_body, 2, 0, 0), SHIFT_REPEAT(129),
  [301] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__function_body, 2, 0, 0), SHIFT_REPEAT(140),
  [304] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__function_body, 2, 0, 0), SHIFT_REPEAT(67),
  [307] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__function_body, 2, 0, 0), SHIFT_REPEAT(91),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multiline_string_repeat1, 2, 0, 0),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2, 0, 0),
  [322] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2, 0, 0), SHIFT_REPEAT(159),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_strand_repeat1, 2, 0, 0),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_strand_repeat1, 2, 0, 0),
  [329] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_strand_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_strand, 2, 0, 0),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_strand, 2, 0, 0),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1, 0, 0),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1, 0, 0),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__fraction_part, 1, 0, 0),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 1, 0, 0),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 1, 0, 0),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, 0, 0),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1, 0, 0),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fraction, 3, 0, 0),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fraction, 3, 0, 0),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape, 2, 0, 0),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape, 2, 0, 0),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal, 2, 0, 0),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_literal, 2, 0, 0),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 2, 0, 0),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char, 2, 0, 0),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1, 0, 0),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1, 0, 0),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prim, 1, 0, 0),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prim, 1, 0, 0),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__top_level_repeat1, 2, 0, 0),
  [378] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__top_level_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__top_level_repeat1, 2, 0, 0),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function, 1, 0, 0),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__function, 1, 0, 0),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__strand_item, 1, 0, 0),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal, 3, 0, 0),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_literal, 3, 0, 0),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__top_level, 1, 0, 0),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__top_level, 1, 0, 0),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_function, 2, 0, 0),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_function, 2, 0, 0),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2, 0, 0),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2, 0, 0),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_box_array, 2, 0, 0),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_box_array, 2, 0, 0),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3, 0, 0),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3, 0, 0),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_box_array, 3, 0, 0),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_box_array, 3, 0, 0),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_function, 3, 0, 0),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_function, 3, 0, 0),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [427] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2, 0, 0), SHIFT_REPEAT(160),
  [430] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2, 0, 0), SHIFT_REPEAT(153),
  [433] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_strand_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [436] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2, 0, 0), SHIFT_REPEAT(151),
  [439] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_strand_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [442] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_strand_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [457] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [459] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__string_literal_repeat1, 2, 0, 0),
  [465] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__string_literal_repeat1, 2, 0, 0), SHIFT_REPEAT(133),
  [468] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__string_literal_repeat1, 2, 0, 0), SHIFT_REPEAT(154),
  [471] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [473] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [475] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [477] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [481] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [483] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [489] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [493] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [495] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [497] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [499] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [503] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [523] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
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
