#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 9
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 8
#define ALIAS_COUNT 0
#define TOKEN_COUNT 5
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 2
#define PRODUCTION_ID_COUNT 1

enum {
  sym_setting = 1,
  anon_sym_POUND = 2,
  aux_sym_comment_token1 = 3,
  aux_sym_comment_token2 = 4,
  sym_config = 5,
  sym_comment = 6,
  aux_sym_config_repeat1 = 7,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_setting] = "setting",
  [anon_sym_POUND] = "#",
  [aux_sym_comment_token1] = "comment_token1",
  [aux_sym_comment_token2] = "comment_token2",
  [sym_config] = "config",
  [sym_comment] = "comment",
  [aux_sym_config_repeat1] = "config_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_setting] = sym_setting,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [aux_sym_comment_token2] = aux_sym_comment_token2,
  [sym_config] = sym_config,
  [sym_comment] = sym_comment,
  [aux_sym_config_repeat1] = aux_sym_config_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_setting] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_config] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_config_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (eof) ADVANCE(7);
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(9);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(8);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead == '#') ADVANCE(12);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(11);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(21);
      if (lookahead == 11 ||
          lookahead == '\f') SKIP(3)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == 11 ||
          lookahead == '\f') SKIP(3)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(2);
      END_STATE();
    case 4:
      if (eof) ADVANCE(7);
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(11);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 5:
      if (eof) ADVANCE(7);
      if (lookahead == '#') ADVANCE(13);
      if (lookahead == 11 ||
          lookahead == '\f') SKIP(6)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(2);
      END_STATE();
    case 6:
      if (eof) ADVANCE(7);
      if (lookahead == 11 ||
          lookahead == '\f') SKIP(6)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(2);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_setting);
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == '#') ADVANCE(12);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(9);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(8);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_setting);
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(9);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(8);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_setting);
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead == '#') ADVANCE(12);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(11);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_setting);
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(11);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_setting);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == '#') ADVANCE(12);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(9);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(8);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(17);
      if (lookahead == '#') ADVANCE(20);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(19);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(17);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(17);
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(19);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(17);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(17);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(19);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(17);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 4},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 18},
  [6] = {.lex_state = 5},
  [7] = {(TSStateId)(-1)},
  [8] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_setting] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(1),
    [aux_sym_comment_token2] = ACTIONS(5),
  },
  [1] = {
    [sym_config] = STATE(6),
    [sym_comment] = STATE(1),
    [aux_sym_config_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym_setting] = ACTIONS(9),
    [anon_sym_POUND] = ACTIONS(3),
    [aux_sym_comment_token2] = ACTIONS(5),
  },
  [2] = {
    [sym_comment] = STATE(2),
    [aux_sym_config_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(11),
    [sym_setting] = ACTIONS(9),
    [anon_sym_POUND] = ACTIONS(3),
    [aux_sym_comment_token2] = ACTIONS(5),
  },
  [3] = {
    [sym_comment] = STATE(3),
    [aux_sym_config_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(13),
    [sym_setting] = ACTIONS(15),
    [anon_sym_POUND] = ACTIONS(3),
    [aux_sym_comment_token2] = ACTIONS(5),
  },
  [4] = {
    [sym_comment] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(18),
    [sym_setting] = ACTIONS(20),
    [anon_sym_POUND] = ACTIONS(3),
    [aux_sym_comment_token2] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(22), 1,
      aux_sym_comment_token1,
    STATE(5), 1,
      sym_comment,
  [13] = 4,
    ACTIONS(24), 1,
      ts_builtin_sym_end,
    ACTIONS(26), 1,
      anon_sym_POUND,
    ACTIONS(28), 1,
      aux_sym_comment_token2,
    STATE(6), 1,
      sym_comment,
  [26] = 1,
    ACTIONS(30), 1,
      ts_builtin_sym_end,
  [30] = 1,
    ACTIONS(32), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 13,
  [SMALL_STATE(7)] = 26,
  [SMALL_STATE(8)] = 30,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(4),
  [18] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 1),
  [20] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 1),
  [22] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [24] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_conf(void) {
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
