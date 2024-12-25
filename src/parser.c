#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 80
#define LARGE_STATE_COUNT 15
#define SYMBOL_COUNT 124
#define ALIAS_COUNT 0
#define TOKEN_COUNT 92
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 4

enum ts_symbol_identifiers {
  sym_identifier = 1,
  aux_sym_empty_line_token1 = 2,
  anon_sym_POUND = 3,
  aux_sym_standalone_comment_token1 = 4,
  aux_sym_indent_token1 = 5,
  anon_sym_DOLLAR = 6,
  anon_sym_DASH_GT = 7,
  anon_sym_EQ_GT = 8,
  anon_sym_PERCENT = 9,
  anon_sym_Show = 10,
  anon_sym_Hide = 11,
  anon_sym_ShowD = 12,
  anon_sym_HideD = 13,
  anon_sym_Continue = 14,
  anon_sym_Cont = 15,
  anon_sym_ItemLevel = 16,
  anon_sym_DropLevel = 17,
  anon_sym_AreaLevel = 18,
  anon_sym_GemLevel = 19,
  anon_sym_StackSize = 20,
  anon_sym_Height = 21,
  anon_sym_Width = 22,
  anon_sym_Sockets = 23,
  anon_sym_LinkedSockets = 24,
  anon_sym_SocketGroup = 25,
  anon_sym_Class = 26,
  anon_sym_BaseType = 27,
  anon_sym_Rarity = 28,
  anon_sym_Quality = 29,
  anon_sym_HasInfluence = 30,
  anon_sym_HasSearingExarchImplicit = 31,
  anon_sym_HasEaterOfWorldsImplicit = 32,
  anon_sym_HasCruciblePassiveTree = 33,
  anon_sym_HasExplicitMod = 34,
  anon_sym_HasImplicitMod = 35,
  anon_sym_ShapedMap = 36,
  anon_sym_ElderMap = 37,
  anon_sym_BlightedMap = 38,
  anon_sym_UberBlightedMap = 39,
  anon_sym_MapTier = 40,
  anon_sym_EnchantmentPassiveNode = 41,
  anon_sym_EnchantmentPassiveNum = 42,
  anon_sym_BaseArmour = 43,
  anon_sym_BaseDefencePercentile = 44,
  anon_sym_BaseEnergyShield = 45,
  anon_sym_BaseEvasion = 46,
  anon_sym_BaseWard = 47,
  anon_sym_Mirrored = 48,
  anon_sym_Corrupted = 49,
  anon_sym_Identified = 50,
  anon_sym_Synthesised = 51,
  anon_sym_ShaperItem = 52,
  anon_sym_ElderItem = 53,
  anon_sym_AnyEnchantment = 54,
  anon_sym_FracturedItem = 55,
  anon_sym_Replica = 56,
  anon_sym_Scourged = 57,
  anon_sym_TransfiguredGem = 58,
  anon_sym_AlternateQuality = 59,
  anon_sym_CorruptedMods = 60,
  anon_sym_SynthesisedItem = 61,
  anon_sym_EQ = 62,
  anon_sym_EQ_EQ = 63,
  anon_sym_BANG_EQ = 64,
  anon_sym_LT = 65,
  anon_sym_LT_EQ = 66,
  anon_sym_GT = 67,
  anon_sym_GT_EQ = 68,
  anon_sym_SPACE = 69,
  anon_sym_DQUOTE = 70,
  aux_sym_quoted_string_token1 = 71,
  anon_sym_SetFontSize = 72,
  anon_sym_SetTextColor = 73,
  anon_sym_SetBorderColor = 74,
  anon_sym_SetBackgroundColor = 75,
  anon_sym_DisableDropSound = 76,
  anon_sym_PlayAlertSound = 77,
  anon_sym_PlayAlertSoundPositional = 78,
  anon_sym_CustomAlertSound = 79,
  anon_sym_PlayEffect = 80,
  anon_sym_MinimapIcon = 81,
  sym_number = 82,
  anon_sym_True = 83,
  anon_sym_False = 84,
  anon_sym_Section = 85,
  anon_sym_Style = 86,
  anon_sym_var = 87,
  anon_sym_Import = 88,
  anon_sym_Optional = 89,
  anon_sym_LBRACE = 90,
  anon_sym_RBRACE = 91,
  sym_source_file = 92,
  sym_empty_line = 93,
  sym_standalone_comment = 94,
  sym_statement_line = 95,
  sym_statement = 96,
  sym_indent = 97,
  sym_inline_comment = 98,
  sym_metadata = 99,
  sym_comment_text = 100,
  sym_show_hide_statement = 101,
  sym_condition_statement = 102,
  sym_condition_name = 103,
  sym_comparison_op = 104,
  sym_value_list = 105,
  sym_condition_value = 106,
  sym_string_list = 107,
  sym_quoted_string = 108,
  sym_action_statement = 109,
  sym_action_name = 110,
  sym_action_values = 111,
  sym_boolean = 112,
  sym_section_declaration = 113,
  sym_style_declaration = 114,
  sym_variable_declaration = 115,
  sym_import_statement = 116,
  sym_block = 117,
  aux_sym_source_file_repeat1 = 118,
  aux_sym_metadata_repeat1 = 119,
  aux_sym_value_list_repeat1 = 120,
  aux_sym_string_list_repeat1 = 121,
  aux_sym_action_values_repeat1 = 122,
  aux_sym_block_repeat1 = 123,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [aux_sym_empty_line_token1] = "empty_line_token1",
  [anon_sym_POUND] = "#",
  [aux_sym_standalone_comment_token1] = "standalone_comment_token1",
  [aux_sym_indent_token1] = "indent_token1",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_PERCENT] = "%",
  [anon_sym_Show] = "Show",
  [anon_sym_Hide] = "Hide",
  [anon_sym_ShowD] = "ShowD",
  [anon_sym_HideD] = "HideD",
  [anon_sym_Continue] = "Continue",
  [anon_sym_Cont] = "Cont",
  [anon_sym_ItemLevel] = "ItemLevel",
  [anon_sym_DropLevel] = "DropLevel",
  [anon_sym_AreaLevel] = "AreaLevel",
  [anon_sym_GemLevel] = "GemLevel",
  [anon_sym_StackSize] = "StackSize",
  [anon_sym_Height] = "Height",
  [anon_sym_Width] = "Width",
  [anon_sym_Sockets] = "Sockets",
  [anon_sym_LinkedSockets] = "LinkedSockets",
  [anon_sym_SocketGroup] = "SocketGroup",
  [anon_sym_Class] = "Class",
  [anon_sym_BaseType] = "BaseType",
  [anon_sym_Rarity] = "Rarity",
  [anon_sym_Quality] = "Quality",
  [anon_sym_HasInfluence] = "HasInfluence",
  [anon_sym_HasSearingExarchImplicit] = "HasSearingExarchImplicit",
  [anon_sym_HasEaterOfWorldsImplicit] = "HasEaterOfWorldsImplicit",
  [anon_sym_HasCruciblePassiveTree] = "HasCruciblePassiveTree",
  [anon_sym_HasExplicitMod] = "HasExplicitMod",
  [anon_sym_HasImplicitMod] = "HasImplicitMod",
  [anon_sym_ShapedMap] = "ShapedMap",
  [anon_sym_ElderMap] = "ElderMap",
  [anon_sym_BlightedMap] = "BlightedMap",
  [anon_sym_UberBlightedMap] = "UberBlightedMap",
  [anon_sym_MapTier] = "MapTier",
  [anon_sym_EnchantmentPassiveNode] = "EnchantmentPassiveNode",
  [anon_sym_EnchantmentPassiveNum] = "EnchantmentPassiveNum",
  [anon_sym_BaseArmour] = "BaseArmour",
  [anon_sym_BaseDefencePercentile] = "BaseDefencePercentile",
  [anon_sym_BaseEnergyShield] = "BaseEnergyShield",
  [anon_sym_BaseEvasion] = "BaseEvasion",
  [anon_sym_BaseWard] = "BaseWard",
  [anon_sym_Mirrored] = "Mirrored",
  [anon_sym_Corrupted] = "Corrupted",
  [anon_sym_Identified] = "Identified",
  [anon_sym_Synthesised] = "Synthesised",
  [anon_sym_ShaperItem] = "ShaperItem",
  [anon_sym_ElderItem] = "ElderItem",
  [anon_sym_AnyEnchantment] = "AnyEnchantment",
  [anon_sym_FracturedItem] = "FracturedItem",
  [anon_sym_Replica] = "Replica",
  [anon_sym_Scourged] = "Scourged",
  [anon_sym_TransfiguredGem] = "TransfiguredGem",
  [anon_sym_AlternateQuality] = "AlternateQuality",
  [anon_sym_CorruptedMods] = "CorruptedMods",
  [anon_sym_SynthesisedItem] = "SynthesisedItem",
  [anon_sym_EQ] = "=",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_SPACE] = " ",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_quoted_string_token1] = "quoted_string_token1",
  [anon_sym_SetFontSize] = "SetFontSize",
  [anon_sym_SetTextColor] = "SetTextColor",
  [anon_sym_SetBorderColor] = "SetBorderColor",
  [anon_sym_SetBackgroundColor] = "SetBackgroundColor",
  [anon_sym_DisableDropSound] = "DisableDropSound",
  [anon_sym_PlayAlertSound] = "PlayAlertSound",
  [anon_sym_PlayAlertSoundPositional] = "PlayAlertSoundPositional",
  [anon_sym_CustomAlertSound] = "CustomAlertSound",
  [anon_sym_PlayEffect] = "PlayEffect",
  [anon_sym_MinimapIcon] = "MinimapIcon",
  [sym_number] = "number",
  [anon_sym_True] = "True",
  [anon_sym_False] = "False",
  [anon_sym_Section] = "Section",
  [anon_sym_Style] = "Style",
  [anon_sym_var] = "var",
  [anon_sym_Import] = "Import",
  [anon_sym_Optional] = "Optional",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_source_file] = "source_file",
  [sym_empty_line] = "empty_line",
  [sym_standalone_comment] = "standalone_comment",
  [sym_statement_line] = "statement_line",
  [sym_statement] = "statement",
  [sym_indent] = "indent",
  [sym_inline_comment] = "inline_comment",
  [sym_metadata] = "metadata",
  [sym_comment_text] = "comment_text",
  [sym_show_hide_statement] = "show_hide_statement",
  [sym_condition_statement] = "condition_statement",
  [sym_condition_name] = "condition_name",
  [sym_comparison_op] = "comparison_op",
  [sym_value_list] = "value_list",
  [sym_condition_value] = "condition_value",
  [sym_string_list] = "string_list",
  [sym_quoted_string] = "quoted_string",
  [sym_action_statement] = "action_statement",
  [sym_action_name] = "action_name",
  [sym_action_values] = "action_values",
  [sym_boolean] = "boolean",
  [sym_section_declaration] = "section_declaration",
  [sym_style_declaration] = "style_declaration",
  [sym_variable_declaration] = "variable_declaration",
  [sym_import_statement] = "import_statement",
  [sym_block] = "block",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_metadata_repeat1] = "metadata_repeat1",
  [aux_sym_value_list_repeat1] = "value_list_repeat1",
  [aux_sym_string_list_repeat1] = "string_list_repeat1",
  [aux_sym_action_values_repeat1] = "action_values_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [aux_sym_empty_line_token1] = aux_sym_empty_line_token1,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_standalone_comment_token1] = aux_sym_standalone_comment_token1,
  [aux_sym_indent_token1] = aux_sym_indent_token1,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_Show] = anon_sym_Show,
  [anon_sym_Hide] = anon_sym_Hide,
  [anon_sym_ShowD] = anon_sym_ShowD,
  [anon_sym_HideD] = anon_sym_HideD,
  [anon_sym_Continue] = anon_sym_Continue,
  [anon_sym_Cont] = anon_sym_Cont,
  [anon_sym_ItemLevel] = anon_sym_ItemLevel,
  [anon_sym_DropLevel] = anon_sym_DropLevel,
  [anon_sym_AreaLevel] = anon_sym_AreaLevel,
  [anon_sym_GemLevel] = anon_sym_GemLevel,
  [anon_sym_StackSize] = anon_sym_StackSize,
  [anon_sym_Height] = anon_sym_Height,
  [anon_sym_Width] = anon_sym_Width,
  [anon_sym_Sockets] = anon_sym_Sockets,
  [anon_sym_LinkedSockets] = anon_sym_LinkedSockets,
  [anon_sym_SocketGroup] = anon_sym_SocketGroup,
  [anon_sym_Class] = anon_sym_Class,
  [anon_sym_BaseType] = anon_sym_BaseType,
  [anon_sym_Rarity] = anon_sym_Rarity,
  [anon_sym_Quality] = anon_sym_Quality,
  [anon_sym_HasInfluence] = anon_sym_HasInfluence,
  [anon_sym_HasSearingExarchImplicit] = anon_sym_HasSearingExarchImplicit,
  [anon_sym_HasEaterOfWorldsImplicit] = anon_sym_HasEaterOfWorldsImplicit,
  [anon_sym_HasCruciblePassiveTree] = anon_sym_HasCruciblePassiveTree,
  [anon_sym_HasExplicitMod] = anon_sym_HasExplicitMod,
  [anon_sym_HasImplicitMod] = anon_sym_HasImplicitMod,
  [anon_sym_ShapedMap] = anon_sym_ShapedMap,
  [anon_sym_ElderMap] = anon_sym_ElderMap,
  [anon_sym_BlightedMap] = anon_sym_BlightedMap,
  [anon_sym_UberBlightedMap] = anon_sym_UberBlightedMap,
  [anon_sym_MapTier] = anon_sym_MapTier,
  [anon_sym_EnchantmentPassiveNode] = anon_sym_EnchantmentPassiveNode,
  [anon_sym_EnchantmentPassiveNum] = anon_sym_EnchantmentPassiveNum,
  [anon_sym_BaseArmour] = anon_sym_BaseArmour,
  [anon_sym_BaseDefencePercentile] = anon_sym_BaseDefencePercentile,
  [anon_sym_BaseEnergyShield] = anon_sym_BaseEnergyShield,
  [anon_sym_BaseEvasion] = anon_sym_BaseEvasion,
  [anon_sym_BaseWard] = anon_sym_BaseWard,
  [anon_sym_Mirrored] = anon_sym_Mirrored,
  [anon_sym_Corrupted] = anon_sym_Corrupted,
  [anon_sym_Identified] = anon_sym_Identified,
  [anon_sym_Synthesised] = anon_sym_Synthesised,
  [anon_sym_ShaperItem] = anon_sym_ShaperItem,
  [anon_sym_ElderItem] = anon_sym_ElderItem,
  [anon_sym_AnyEnchantment] = anon_sym_AnyEnchantment,
  [anon_sym_FracturedItem] = anon_sym_FracturedItem,
  [anon_sym_Replica] = anon_sym_Replica,
  [anon_sym_Scourged] = anon_sym_Scourged,
  [anon_sym_TransfiguredGem] = anon_sym_TransfiguredGem,
  [anon_sym_AlternateQuality] = anon_sym_AlternateQuality,
  [anon_sym_CorruptedMods] = anon_sym_CorruptedMods,
  [anon_sym_SynthesisedItem] = anon_sym_SynthesisedItem,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_SPACE] = anon_sym_SPACE,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_quoted_string_token1] = aux_sym_quoted_string_token1,
  [anon_sym_SetFontSize] = anon_sym_SetFontSize,
  [anon_sym_SetTextColor] = anon_sym_SetTextColor,
  [anon_sym_SetBorderColor] = anon_sym_SetBorderColor,
  [anon_sym_SetBackgroundColor] = anon_sym_SetBackgroundColor,
  [anon_sym_DisableDropSound] = anon_sym_DisableDropSound,
  [anon_sym_PlayAlertSound] = anon_sym_PlayAlertSound,
  [anon_sym_PlayAlertSoundPositional] = anon_sym_PlayAlertSoundPositional,
  [anon_sym_CustomAlertSound] = anon_sym_CustomAlertSound,
  [anon_sym_PlayEffect] = anon_sym_PlayEffect,
  [anon_sym_MinimapIcon] = anon_sym_MinimapIcon,
  [sym_number] = sym_number,
  [anon_sym_True] = anon_sym_True,
  [anon_sym_False] = anon_sym_False,
  [anon_sym_Section] = anon_sym_Section,
  [anon_sym_Style] = anon_sym_Style,
  [anon_sym_var] = anon_sym_var,
  [anon_sym_Import] = anon_sym_Import,
  [anon_sym_Optional] = anon_sym_Optional,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_source_file] = sym_source_file,
  [sym_empty_line] = sym_empty_line,
  [sym_standalone_comment] = sym_standalone_comment,
  [sym_statement_line] = sym_statement_line,
  [sym_statement] = sym_statement,
  [sym_indent] = sym_indent,
  [sym_inline_comment] = sym_inline_comment,
  [sym_metadata] = sym_metadata,
  [sym_comment_text] = sym_comment_text,
  [sym_show_hide_statement] = sym_show_hide_statement,
  [sym_condition_statement] = sym_condition_statement,
  [sym_condition_name] = sym_condition_name,
  [sym_comparison_op] = sym_comparison_op,
  [sym_value_list] = sym_value_list,
  [sym_condition_value] = sym_condition_value,
  [sym_string_list] = sym_string_list,
  [sym_quoted_string] = sym_quoted_string,
  [sym_action_statement] = sym_action_statement,
  [sym_action_name] = sym_action_name,
  [sym_action_values] = sym_action_values,
  [sym_boolean] = sym_boolean,
  [sym_section_declaration] = sym_section_declaration,
  [sym_style_declaration] = sym_style_declaration,
  [sym_variable_declaration] = sym_variable_declaration,
  [sym_import_statement] = sym_import_statement,
  [sym_block] = sym_block,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_metadata_repeat1] = aux_sym_metadata_repeat1,
  [aux_sym_value_list_repeat1] = aux_sym_value_list_repeat1,
  [aux_sym_string_list_repeat1] = aux_sym_string_list_repeat1,
  [aux_sym_action_values_repeat1] = aux_sym_action_values_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_empty_line_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_standalone_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_indent_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Show] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Hide] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ShowD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_HideD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Continue] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Cont] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ItemLevel] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DropLevel] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AreaLevel] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GemLevel] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_StackSize] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Height] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Width] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Sockets] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LinkedSockets] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SocketGroup] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Class] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BaseType] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Rarity] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Quality] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_HasInfluence] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_HasSearingExarchImplicit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_HasEaterOfWorldsImplicit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_HasCruciblePassiveTree] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_HasExplicitMod] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_HasImplicitMod] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ShapedMap] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ElderMap] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BlightedMap] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_UberBlightedMap] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MapTier] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EnchantmentPassiveNode] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EnchantmentPassiveNum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BaseArmour] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BaseDefencePercentile] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BaseEnergyShield] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BaseEvasion] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BaseWard] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Mirrored] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Corrupted] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Identified] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Synthesised] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ShaperItem] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ElderItem] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AnyEnchantment] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FracturedItem] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Replica] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Scourged] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TransfiguredGem] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AlternateQuality] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CorruptedMods] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SynthesisedItem] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SPACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quoted_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SetFontSize] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SetTextColor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SetBorderColor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SetBackgroundColor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DisableDropSound] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PlayAlertSound] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PlayAlertSoundPositional] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CustomAlertSound] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PlayEffect] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MinimapIcon] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_True] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_False] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Section] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Style] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_var] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Optional] = {
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
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_empty_line] = {
    .visible = true,
    .named = true,
  },
  [sym_standalone_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_statement_line] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_indent] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_metadata] = {
    .visible = true,
    .named = true,
  },
  [sym_comment_text] = {
    .visible = true,
    .named = true,
  },
  [sym_show_hide_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_condition_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_condition_name] = {
    .visible = true,
    .named = true,
  },
  [sym_comparison_op] = {
    .visible = true,
    .named = true,
  },
  [sym_value_list] = {
    .visible = true,
    .named = true,
  },
  [sym_condition_value] = {
    .visible = true,
    .named = true,
  },
  [sym_string_list] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_string] = {
    .visible = true,
    .named = true,
  },
  [sym_action_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_action_name] = {
    .visible = true,
    .named = true,
  },
  [sym_action_values] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_section_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_style_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_import_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_metadata_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_value_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_action_values_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_name = 1,
  field_operator = 2,
  field_value = 3,
  field_values = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
  [field_operator] = "operator",
  [field_value] = "value",
  [field_values] = "values",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
  [3] = {.index = 4, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
    {field_value, 1},
  [2] =
    {field_name, 0},
    {field_values, 1},
  [4] =
    {field_name, 0},
    {field_operator, 1},
    {field_value, 2},
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
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
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
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(9);
      ADVANCE_MAP(
        '\n', 10,
        '!', 4,
        '"', 31,
        '#', 11,
        '$', 16,
        '%', 20,
        '-', 5,
        '<', 26,
        '=', 23,
        '>', 28,
        '{', 37,
        '}', 38,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 1:
      if (lookahead == '\t') SKIP(1);
      if (lookahead == ' ') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(10);
      if (lookahead == '!') ADVANCE(4);
      if (lookahead == '"') ADVANCE(31);
      if (lookahead == '#') ADVANCE(11);
      if (lookahead == '<') ADVANCE(26);
      if (lookahead == '=') ADVANCE(22);
      if (lookahead == '>') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(10);
      if (lookahead == '#') ADVANCE(11);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '=') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 4:
      if (lookahead == '=') ADVANCE(25);
      END_STATE();
    case 5:
      if (lookahead == '>') ADVANCE(18);
      END_STATE();
    case 6:
      if (lookahead == '>') ADVANCE(19);
      END_STATE();
    case 7:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(33);
      END_STATE();
    case 8:
      if (eof) ADVANCE(9);
      if (lookahead == '\n') ADVANCE(10);
      if (lookahead == '#') ADVANCE(11);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym_empty_line_token1);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_standalone_comment_token1);
      if (lookahead == '$') ADVANCE(17);
      if (lookahead == '%') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(14);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_standalone_comment_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(14);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_standalone_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_indent_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(14);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(14);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(24);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(24);
      if (lookahead == '>') ADVANCE(19);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(27);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(29);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == ' ') ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_quoted_string_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(33);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ADVANCE_MAP(
        'A', 1,
        'B', 2,
        'C', 3,
        'D', 4,
        'E', 5,
        'F', 6,
        'G', 7,
        'H', 8,
        'I', 9,
        'L', 10,
        'M', 11,
        'O', 12,
        'P', 13,
        'Q', 14,
        'R', 15,
        'S', 16,
        'T', 17,
        'U', 18,
        'W', 19,
        'v', 20,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == 'l') ADVANCE(21);
      if (lookahead == 'n') ADVANCE(22);
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(24);
      if (lookahead == 'l') ADVANCE(25);
      END_STATE();
    case 3:
      if (lookahead == 'l') ADVANCE(26);
      if (lookahead == 'o') ADVANCE(27);
      if (lookahead == 'u') ADVANCE(28);
      END_STATE();
    case 4:
      if (lookahead == 'i') ADVANCE(29);
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 5:
      if (lookahead == 'l') ADVANCE(31);
      if (lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(33);
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(36);
      if (lookahead == 'e') ADVANCE(37);
      if (lookahead == 'i') ADVANCE(38);
      END_STATE();
    case 9:
      if (lookahead == 'd') ADVANCE(39);
      if (lookahead == 'm') ADVANCE(40);
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 10:
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(43);
      if (lookahead == 'i') ADVANCE(44);
      END_STATE();
    case 12:
      if (lookahead == 'p') ADVANCE(45);
      END_STATE();
    case 13:
      if (lookahead == 'l') ADVANCE(46);
      END_STATE();
    case 14:
      if (lookahead == 'u') ADVANCE(47);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(48);
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 16:
      if (lookahead == 'c') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(51);
      if (lookahead == 'h') ADVANCE(52);
      if (lookahead == 'o') ADVANCE(53);
      if (lookahead == 't') ADVANCE(54);
      if (lookahead == 'y') ADVANCE(55);
      END_STATE();
    case 17:
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 18:
      if (lookahead == 'b') ADVANCE(57);
      END_STATE();
    case 19:
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(59);
      END_STATE();
    case 21:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 22:
      if (lookahead == 'y') ADVANCE(61);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 24:
      if (lookahead == 's') ADVANCE(63);
      END_STATE();
    case 25:
      if (lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(65);
      END_STATE();
    case 27:
      if (lookahead == 'n') ADVANCE(66);
      if (lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 28:
      if (lookahead == 's') ADVANCE(68);
      END_STATE();
    case 29:
      if (lookahead == 's') ADVANCE(69);
      END_STATE();
    case 30:
      if (lookahead == 'o') ADVANCE(70);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(71);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(72);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(73);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(74);
      END_STATE();
    case 35:
      if (lookahead == 'm') ADVANCE(75);
      END_STATE();
    case 36:
      if (lookahead == 's') ADVANCE(76);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(77);
      END_STATE();
    case 38:
      if (lookahead == 'd') ADVANCE(78);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 40:
      if (lookahead == 'p') ADVANCE(80);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 43:
      if (lookahead == 'p') ADVANCE(83);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(84);
      if (lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 45:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(87);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(88);
      END_STATE();
    case 48:
      if (lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 49:
      if (lookahead == 'p') ADVANCE(90);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(91);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(92);
      if (lookahead == 't') ADVANCE(93);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(94);
      if (lookahead == 'o') ADVANCE(95);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(96);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(97);
      if (lookahead == 'y') ADVANCE(98);
      END_STATE();
    case 55:
      if (lookahead == 'n') ADVANCE(99);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(100);
      if (lookahead == 'u') ADVANCE(101);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(103);
      END_STATE();
    case 59:
      if (lookahead == 'r') ADVANCE(104);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 61:
      if (lookahead == 'E') ADVANCE(106);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(107);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 64:
      if (lookahead == 'g') ADVANCE(109);
      END_STATE();
    case 65:
      if (lookahead == 's') ADVANCE(110);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(111);
      END_STATE();
    case 67:
      if (lookahead == 'r') ADVANCE(112);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(114);
      END_STATE();
    case 70:
      if (lookahead == 'p') ADVANCE(115);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 72:
      if (lookahead == 'h') ADVANCE(117);
      END_STATE();
    case 73:
      if (lookahead == 's') ADVANCE(118);
      END_STATE();
    case 74:
      if (lookahead == 'c') ADVANCE(119);
      END_STATE();
    case 75:
      if (lookahead == 'L') ADVANCE(120);
      END_STATE();
    case 76:
      if (lookahead == 'C') ADVANCE(121);
      if (lookahead == 'E') ADVANCE(122);
      if (lookahead == 'I') ADVANCE(123);
      if (lookahead == 'S') ADVANCE(124);
      END_STATE();
    case 77:
      if (lookahead == 'g') ADVANCE(125);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 79:
      if (lookahead == 'n') ADVANCE(127);
      END_STATE();
    case 80:
      if (lookahead == 'o') ADVANCE(128);
      END_STATE();
    case 81:
      if (lookahead == 'm') ADVANCE(129);
      END_STATE();
    case 82:
      if (lookahead == 'k') ADVANCE(130);
      END_STATE();
    case 83:
      if (lookahead == 'T') ADVANCE(131);
      END_STATE();
    case 84:
      if (lookahead == 'i') ADVANCE(132);
      END_STATE();
    case 85:
      if (lookahead == 'r') ADVANCE(133);
      END_STATE();
    case 86:
      if (lookahead == 'i') ADVANCE(134);
      END_STATE();
    case 87:
      if (lookahead == 'y') ADVANCE(135);
      END_STATE();
    case 88:
      if (lookahead == 'l') ADVANCE(136);
      END_STATE();
    case 89:
      if (lookahead == 'i') ADVANCE(137);
      END_STATE();
    case 90:
      if (lookahead == 'l') ADVANCE(138);
      END_STATE();
    case 91:
      if (lookahead == 'u') ADVANCE(139);
      END_STATE();
    case 92:
      if (lookahead == 't') ADVANCE(140);
      END_STATE();
    case 93:
      if (lookahead == 'B') ADVANCE(141);
      if (lookahead == 'F') ADVANCE(142);
      if (lookahead == 'T') ADVANCE(143);
      END_STATE();
    case 94:
      if (lookahead == 'p') ADVANCE(144);
      END_STATE();
    case 95:
      if (lookahead == 'w') ADVANCE(145);
      END_STATE();
    case 96:
      if (lookahead == 'k') ADVANCE(146);
      END_STATE();
    case 97:
      if (lookahead == 'c') ADVANCE(147);
      END_STATE();
    case 98:
      if (lookahead == 'l') ADVANCE(148);
      END_STATE();
    case 99:
      if (lookahead == 't') ADVANCE(149);
      END_STATE();
    case 100:
      if (lookahead == 'n') ADVANCE(150);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 102:
      if (lookahead == 'r') ADVANCE(152);
      END_STATE();
    case 103:
      if (lookahead == 't') ADVANCE(153);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 105:
      if (lookahead == 'r') ADVANCE(154);
      END_STATE();
    case 106:
      if (lookahead == 'n') ADVANCE(155);
      END_STATE();
    case 107:
      if (lookahead == 'L') ADVANCE(156);
      END_STATE();
    case 108:
      if (lookahead == 'A') ADVANCE(157);
      if (lookahead == 'D') ADVANCE(158);
      if (lookahead == 'E') ADVANCE(159);
      if (lookahead == 'T') ADVANCE(160);
      if (lookahead == 'W') ADVANCE(161);
      END_STATE();
    case 109:
      if (lookahead == 'h') ADVANCE(162);
      END_STATE();
    case 110:
      if (lookahead == 's') ADVANCE(163);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_Cont);
      if (lookahead == 'i') ADVANCE(164);
      END_STATE();
    case 112:
      if (lookahead == 'u') ADVANCE(165);
      END_STATE();
    case 113:
      if (lookahead == 'o') ADVANCE(166);
      END_STATE();
    case 114:
      if (lookahead == 'b') ADVANCE(167);
      END_STATE();
    case 115:
      if (lookahead == 'L') ADVANCE(168);
      END_STATE();
    case 116:
      if (lookahead == 'r') ADVANCE(169);
      END_STATE();
    case 117:
      if (lookahead == 'a') ADVANCE(170);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 119:
      if (lookahead == 't') ADVANCE(172);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(173);
      END_STATE();
    case 121:
      if (lookahead == 'r') ADVANCE(174);
      END_STATE();
    case 122:
      if (lookahead == 'a') ADVANCE(175);
      if (lookahead == 'x') ADVANCE(176);
      END_STATE();
    case 123:
      if (lookahead == 'm') ADVANCE(177);
      if (lookahead == 'n') ADVANCE(178);
      END_STATE();
    case 124:
      if (lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 125:
      if (lookahead == 'h') ADVANCE(180);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_Hide);
      if (lookahead == 'D') ADVANCE(181);
      END_STATE();
    case 127:
      if (lookahead == 't') ADVANCE(182);
      END_STATE();
    case 128:
      if (lookahead == 'r') ADVANCE(183);
      END_STATE();
    case 129:
      if (lookahead == 'L') ADVANCE(184);
      END_STATE();
    case 130:
      if (lookahead == 'e') ADVANCE(185);
      END_STATE();
    case 131:
      if (lookahead == 'i') ADVANCE(186);
      END_STATE();
    case 132:
      if (lookahead == 'm') ADVANCE(187);
      END_STATE();
    case 133:
      if (lookahead == 'o') ADVANCE(188);
      END_STATE();
    case 134:
      if (lookahead == 'o') ADVANCE(189);
      END_STATE();
    case 135:
      if (lookahead == 'A') ADVANCE(190);
      if (lookahead == 'E') ADVANCE(191);
      END_STATE();
    case 136:
      if (lookahead == 'i') ADVANCE(192);
      END_STATE();
    case 137:
      if (lookahead == 't') ADVANCE(193);
      END_STATE();
    case 138:
      if (lookahead == 'i') ADVANCE(194);
      END_STATE();
    case 139:
      if (lookahead == 'r') ADVANCE(195);
      END_STATE();
    case 140:
      if (lookahead == 'i') ADVANCE(196);
      END_STATE();
    case 141:
      if (lookahead == 'a') ADVANCE(197);
      if (lookahead == 'o') ADVANCE(198);
      END_STATE();
    case 142:
      if (lookahead == 'o') ADVANCE(199);
      END_STATE();
    case 143:
      if (lookahead == 'e') ADVANCE(200);
      END_STATE();
    case 144:
      if (lookahead == 'e') ADVANCE(201);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_Show);
      if (lookahead == 'D') ADVANCE(202);
      END_STATE();
    case 146:
      if (lookahead == 'e') ADVANCE(203);
      END_STATE();
    case 147:
      if (lookahead == 'k') ADVANCE(204);
      END_STATE();
    case 148:
      if (lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 149:
      if (lookahead == 'h') ADVANCE(206);
      END_STATE();
    case 150:
      if (lookahead == 's') ADVANCE(207);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_True);
      END_STATE();
    case 152:
      if (lookahead == 'B') ADVANCE(208);
      END_STATE();
    case 153:
      if (lookahead == 'h') ADVANCE(209);
      END_STATE();
    case 154:
      if (lookahead == 'n') ADVANCE(210);
      END_STATE();
    case 155:
      if (lookahead == 'c') ADVANCE(211);
      END_STATE();
    case 156:
      if (lookahead == 'e') ADVANCE(212);
      END_STATE();
    case 157:
      if (lookahead == 'r') ADVANCE(213);
      END_STATE();
    case 158:
      if (lookahead == 'e') ADVANCE(214);
      END_STATE();
    case 159:
      if (lookahead == 'n') ADVANCE(215);
      if (lookahead == 'v') ADVANCE(216);
      END_STATE();
    case 160:
      if (lookahead == 'y') ADVANCE(217);
      END_STATE();
    case 161:
      if (lookahead == 'a') ADVANCE(218);
      END_STATE();
    case 162:
      if (lookahead == 't') ADVANCE(219);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_Class);
      END_STATE();
    case 164:
      if (lookahead == 'n') ADVANCE(220);
      END_STATE();
    case 165:
      if (lookahead == 'p') ADVANCE(221);
      END_STATE();
    case 166:
      if (lookahead == 'm') ADVANCE(222);
      END_STATE();
    case 167:
      if (lookahead == 'l') ADVANCE(223);
      END_STATE();
    case 168:
      if (lookahead == 'e') ADVANCE(224);
      END_STATE();
    case 169:
      if (lookahead == 'I') ADVANCE(225);
      if (lookahead == 'M') ADVANCE(226);
      END_STATE();
    case 170:
      if (lookahead == 'n') ADVANCE(227);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_False);
      END_STATE();
    case 172:
      if (lookahead == 'u') ADVANCE(228);
      END_STATE();
    case 173:
      if (lookahead == 'v') ADVANCE(229);
      END_STATE();
    case 174:
      if (lookahead == 'u') ADVANCE(230);
      END_STATE();
    case 175:
      if (lookahead == 't') ADVANCE(231);
      END_STATE();
    case 176:
      if (lookahead == 'p') ADVANCE(232);
      END_STATE();
    case 177:
      if (lookahead == 'p') ADVANCE(233);
      END_STATE();
    case 178:
      if (lookahead == 'f') ADVANCE(234);
      END_STATE();
    case 179:
      if (lookahead == 'a') ADVANCE(235);
      END_STATE();
    case 180:
      if (lookahead == 't') ADVANCE(236);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_HideD);
      END_STATE();
    case 182:
      if (lookahead == 'i') ADVANCE(237);
      END_STATE();
    case 183:
      if (lookahead == 't') ADVANCE(238);
      END_STATE();
    case 184:
      if (lookahead == 'e') ADVANCE(239);
      END_STATE();
    case 185:
      if (lookahead == 'd') ADVANCE(240);
      END_STATE();
    case 186:
      if (lookahead == 'e') ADVANCE(241);
      END_STATE();
    case 187:
      if (lookahead == 'a') ADVANCE(242);
      END_STATE();
    case 188:
      if (lookahead == 'r') ADVANCE(243);
      END_STATE();
    case 189:
      if (lookahead == 'n') ADVANCE(244);
      END_STATE();
    case 190:
      if (lookahead == 'l') ADVANCE(245);
      END_STATE();
    case 191:
      if (lookahead == 'f') ADVANCE(246);
      END_STATE();
    case 192:
      if (lookahead == 't') ADVANCE(247);
      END_STATE();
    case 193:
      if (lookahead == 'y') ADVANCE(248);
      END_STATE();
    case 194:
      if (lookahead == 'c') ADVANCE(249);
      END_STATE();
    case 195:
      if (lookahead == 'g') ADVANCE(250);
      END_STATE();
    case 196:
      if (lookahead == 'o') ADVANCE(251);
      END_STATE();
    case 197:
      if (lookahead == 'c') ADVANCE(252);
      END_STATE();
    case 198:
      if (lookahead == 'r') ADVANCE(253);
      END_STATE();
    case 199:
      if (lookahead == 'n') ADVANCE(254);
      END_STATE();
    case 200:
      if (lookahead == 'x') ADVANCE(255);
      END_STATE();
    case 201:
      if (lookahead == 'd') ADVANCE(256);
      if (lookahead == 'r') ADVANCE(257);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_ShowD);
      END_STATE();
    case 203:
      if (lookahead == 't') ADVANCE(258);
      END_STATE();
    case 204:
      if (lookahead == 'S') ADVANCE(259);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_Style);
      END_STATE();
    case 206:
      if (lookahead == 'e') ADVANCE(260);
      END_STATE();
    case 207:
      if (lookahead == 'f') ADVANCE(261);
      END_STATE();
    case 208:
      if (lookahead == 'l') ADVANCE(262);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_Width);
      END_STATE();
    case 210:
      if (lookahead == 'a') ADVANCE(263);
      END_STATE();
    case 211:
      if (lookahead == 'h') ADVANCE(264);
      END_STATE();
    case 212:
      if (lookahead == 'v') ADVANCE(265);
      END_STATE();
    case 213:
      if (lookahead == 'm') ADVANCE(266);
      END_STATE();
    case 214:
      if (lookahead == 'f') ADVANCE(267);
      END_STATE();
    case 215:
      if (lookahead == 'e') ADVANCE(268);
      END_STATE();
    case 216:
      if (lookahead == 'a') ADVANCE(269);
      END_STATE();
    case 217:
      if (lookahead == 'p') ADVANCE(270);
      END_STATE();
    case 218:
      if (lookahead == 'r') ADVANCE(271);
      END_STATE();
    case 219:
      if (lookahead == 'e') ADVANCE(272);
      END_STATE();
    case 220:
      if (lookahead == 'u') ADVANCE(273);
      END_STATE();
    case 221:
      if (lookahead == 't') ADVANCE(274);
      END_STATE();
    case 222:
      if (lookahead == 'A') ADVANCE(275);
      END_STATE();
    case 223:
      if (lookahead == 'e') ADVANCE(276);
      END_STATE();
    case 224:
      if (lookahead == 'v') ADVANCE(277);
      END_STATE();
    case 225:
      if (lookahead == 't') ADVANCE(278);
      END_STATE();
    case 226:
      if (lookahead == 'a') ADVANCE(279);
      END_STATE();
    case 227:
      if (lookahead == 't') ADVANCE(280);
      END_STATE();
    case 228:
      if (lookahead == 'r') ADVANCE(281);
      END_STATE();
    case 229:
      if (lookahead == 'e') ADVANCE(282);
      END_STATE();
    case 230:
      if (lookahead == 'c') ADVANCE(283);
      END_STATE();
    case 231:
      if (lookahead == 'e') ADVANCE(284);
      END_STATE();
    case 232:
      if (lookahead == 'l') ADVANCE(285);
      END_STATE();
    case 233:
      if (lookahead == 'l') ADVANCE(286);
      END_STATE();
    case 234:
      if (lookahead == 'l') ADVANCE(287);
      END_STATE();
    case 235:
      if (lookahead == 'r') ADVANCE(288);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_Height);
      END_STATE();
    case 237:
      if (lookahead == 'f') ADVANCE(289);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_Import);
      END_STATE();
    case 239:
      if (lookahead == 'v') ADVANCE(290);
      END_STATE();
    case 240:
      if (lookahead == 'S') ADVANCE(291);
      END_STATE();
    case 241:
      if (lookahead == 'r') ADVANCE(292);
      END_STATE();
    case 242:
      if (lookahead == 'p') ADVANCE(293);
      END_STATE();
    case 243:
      if (lookahead == 'e') ADVANCE(294);
      END_STATE();
    case 244:
      if (lookahead == 'a') ADVANCE(295);
      END_STATE();
    case 245:
      if (lookahead == 'e') ADVANCE(296);
      END_STATE();
    case 246:
      if (lookahead == 'f') ADVANCE(297);
      END_STATE();
    case 247:
      if (lookahead == 'y') ADVANCE(298);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_Rarity);
      END_STATE();
    case 249:
      if (lookahead == 'a') ADVANCE(299);
      END_STATE();
    case 250:
      if (lookahead == 'e') ADVANCE(300);
      END_STATE();
    case 251:
      if (lookahead == 'n') ADVANCE(301);
      END_STATE();
    case 252:
      if (lookahead == 'k') ADVANCE(302);
      END_STATE();
    case 253:
      if (lookahead == 'd') ADVANCE(303);
      END_STATE();
    case 254:
      if (lookahead == 't') ADVANCE(304);
      END_STATE();
    case 255:
      if (lookahead == 't') ADVANCE(305);
      END_STATE();
    case 256:
      if (lookahead == 'M') ADVANCE(306);
      END_STATE();
    case 257:
      if (lookahead == 'I') ADVANCE(307);
      END_STATE();
    case 258:
      if (lookahead == 'G') ADVANCE(308);
      if (lookahead == 's') ADVANCE(309);
      END_STATE();
    case 259:
      if (lookahead == 'i') ADVANCE(310);
      END_STATE();
    case 260:
      if (lookahead == 's') ADVANCE(311);
      END_STATE();
    case 261:
      if (lookahead == 'i') ADVANCE(312);
      END_STATE();
    case 262:
      if (lookahead == 'i') ADVANCE(313);
      END_STATE();
    case 263:
      if (lookahead == 't') ADVANCE(314);
      END_STATE();
    case 264:
      if (lookahead == 'a') ADVANCE(315);
      END_STATE();
    case 265:
      if (lookahead == 'e') ADVANCE(316);
      END_STATE();
    case 266:
      if (lookahead == 'o') ADVANCE(317);
      END_STATE();
    case 267:
      if (lookahead == 'e') ADVANCE(318);
      END_STATE();
    case 268:
      if (lookahead == 'r') ADVANCE(319);
      END_STATE();
    case 269:
      if (lookahead == 's') ADVANCE(320);
      END_STATE();
    case 270:
      if (lookahead == 'e') ADVANCE(321);
      END_STATE();
    case 271:
      if (lookahead == 'd') ADVANCE(322);
      END_STATE();
    case 272:
      if (lookahead == 'd') ADVANCE(323);
      END_STATE();
    case 273:
      if (lookahead == 'e') ADVANCE(324);
      END_STATE();
    case 274:
      if (lookahead == 'e') ADVANCE(325);
      END_STATE();
    case 275:
      if (lookahead == 'l') ADVANCE(326);
      END_STATE();
    case 276:
      if (lookahead == 'D') ADVANCE(327);
      END_STATE();
    case 277:
      if (lookahead == 'e') ADVANCE(328);
      END_STATE();
    case 278:
      if (lookahead == 'e') ADVANCE(329);
      END_STATE();
    case 279:
      if (lookahead == 'p') ADVANCE(330);
      END_STATE();
    case 280:
      if (lookahead == 'm') ADVANCE(331);
      END_STATE();
    case 281:
      if (lookahead == 'e') ADVANCE(332);
      END_STATE();
    case 282:
      if (lookahead == 'l') ADVANCE(333);
      END_STATE();
    case 283:
      if (lookahead == 'i') ADVANCE(334);
      END_STATE();
    case 284:
      if (lookahead == 'r') ADVANCE(335);
      END_STATE();
    case 285:
      if (lookahead == 'i') ADVANCE(336);
      END_STATE();
    case 286:
      if (lookahead == 'i') ADVANCE(337);
      END_STATE();
    case 287:
      if (lookahead == 'u') ADVANCE(338);
      END_STATE();
    case 288:
      if (lookahead == 'i') ADVANCE(339);
      END_STATE();
    case 289:
      if (lookahead == 'i') ADVANCE(340);
      END_STATE();
    case 290:
      if (lookahead == 'e') ADVANCE(341);
      END_STATE();
    case 291:
      if (lookahead == 'o') ADVANCE(342);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_MapTier);
      END_STATE();
    case 293:
      if (lookahead == 'I') ADVANCE(343);
      END_STATE();
    case 294:
      if (lookahead == 'd') ADVANCE(344);
      END_STATE();
    case 295:
      if (lookahead == 'l') ADVANCE(345);
      END_STATE();
    case 296:
      if (lookahead == 'r') ADVANCE(346);
      END_STATE();
    case 297:
      if (lookahead == 'e') ADVANCE(347);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_Quality);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_Replica);
      END_STATE();
    case 300:
      if (lookahead == 'd') ADVANCE(348);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_Section);
      END_STATE();
    case 302:
      if (lookahead == 'g') ADVANCE(349);
      END_STATE();
    case 303:
      if (lookahead == 'e') ADVANCE(350);
      END_STATE();
    case 304:
      if (lookahead == 'S') ADVANCE(351);
      END_STATE();
    case 305:
      if (lookahead == 'C') ADVANCE(352);
      END_STATE();
    case 306:
      if (lookahead == 'a') ADVANCE(353);
      END_STATE();
    case 307:
      if (lookahead == 't') ADVANCE(354);
      END_STATE();
    case 308:
      if (lookahead == 'r') ADVANCE(355);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_Sockets);
      END_STATE();
    case 310:
      if (lookahead == 'z') ADVANCE(356);
      END_STATE();
    case 311:
      if (lookahead == 'i') ADVANCE(357);
      END_STATE();
    case 312:
      if (lookahead == 'g') ADVANCE(358);
      END_STATE();
    case 313:
      if (lookahead == 'g') ADVANCE(359);
      END_STATE();
    case 314:
      if (lookahead == 'e') ADVANCE(360);
      END_STATE();
    case 315:
      if (lookahead == 'n') ADVANCE(361);
      END_STATE();
    case 316:
      if (lookahead == 'l') ADVANCE(362);
      END_STATE();
    case 317:
      if (lookahead == 'u') ADVANCE(363);
      END_STATE();
    case 318:
      if (lookahead == 'n') ADVANCE(364);
      END_STATE();
    case 319:
      if (lookahead == 'g') ADVANCE(365);
      END_STATE();
    case 320:
      if (lookahead == 'i') ADVANCE(366);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_BaseType);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_BaseWard);
      END_STATE();
    case 323:
      if (lookahead == 'M') ADVANCE(367);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_Continue);
      END_STATE();
    case 325:
      if (lookahead == 'd') ADVANCE(368);
      END_STATE();
    case 326:
      if (lookahead == 'e') ADVANCE(369);
      END_STATE();
    case 327:
      if (lookahead == 'r') ADVANCE(370);
      END_STATE();
    case 328:
      if (lookahead == 'l') ADVANCE(371);
      END_STATE();
    case 329:
      if (lookahead == 'm') ADVANCE(372);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_ElderMap);
      END_STATE();
    case 331:
      if (lookahead == 'e') ADVANCE(373);
      END_STATE();
    case 332:
      if (lookahead == 'd') ADVANCE(374);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_GemLevel);
      END_STATE();
    case 334:
      if (lookahead == 'b') ADVANCE(375);
      END_STATE();
    case 335:
      if (lookahead == 'O') ADVANCE(376);
      END_STATE();
    case 336:
      if (lookahead == 'c') ADVANCE(377);
      END_STATE();
    case 337:
      if (lookahead == 'c') ADVANCE(378);
      END_STATE();
    case 338:
      if (lookahead == 'e') ADVANCE(379);
      END_STATE();
    case 339:
      if (lookahead == 'n') ADVANCE(380);
      END_STATE();
    case 340:
      if (lookahead == 'e') ADVANCE(381);
      END_STATE();
    case 341:
      if (lookahead == 'l') ADVANCE(382);
      END_STATE();
    case 342:
      if (lookahead == 'c') ADVANCE(383);
      END_STATE();
    case 343:
      if (lookahead == 'c') ADVANCE(384);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_Mirrored);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_Optional);
      END_STATE();
    case 346:
      if (lookahead == 't') ADVANCE(385);
      END_STATE();
    case 347:
      if (lookahead == 'c') ADVANCE(386);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_Scourged);
      END_STATE();
    case 349:
      if (lookahead == 'r') ADVANCE(387);
      END_STATE();
    case 350:
      if (lookahead == 'r') ADVANCE(388);
      END_STATE();
    case 351:
      if (lookahead == 'i') ADVANCE(389);
      END_STATE();
    case 352:
      if (lookahead == 'o') ADVANCE(390);
      END_STATE();
    case 353:
      if (lookahead == 'p') ADVANCE(391);
      END_STATE();
    case 354:
      if (lookahead == 'e') ADVANCE(392);
      END_STATE();
    case 355:
      if (lookahead == 'o') ADVANCE(393);
      END_STATE();
    case 356:
      if (lookahead == 'e') ADVANCE(394);
      END_STATE();
    case 357:
      if (lookahead == 's') ADVANCE(395);
      END_STATE();
    case 358:
      if (lookahead == 'u') ADVANCE(396);
      END_STATE();
    case 359:
      if (lookahead == 'h') ADVANCE(397);
      END_STATE();
    case 360:
      if (lookahead == 'Q') ADVANCE(398);
      END_STATE();
    case 361:
      if (lookahead == 't') ADVANCE(399);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_AreaLevel);
      END_STATE();
    case 363:
      if (lookahead == 'r') ADVANCE(400);
      END_STATE();
    case 364:
      if (lookahead == 'c') ADVANCE(401);
      END_STATE();
    case 365:
      if (lookahead == 'y') ADVANCE(402);
      END_STATE();
    case 366:
      if (lookahead == 'o') ADVANCE(403);
      END_STATE();
    case 367:
      if (lookahead == 'a') ADVANCE(404);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_Corrupted);
      if (lookahead == 'M') ADVANCE(405);
      END_STATE();
    case 369:
      if (lookahead == 'r') ADVANCE(406);
      END_STATE();
    case 370:
      if (lookahead == 'o') ADVANCE(407);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_DropLevel);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_ElderItem);
      END_STATE();
    case 373:
      if (lookahead == 'n') ADVANCE(408);
      END_STATE();
    case 374:
      if (lookahead == 'I') ADVANCE(409);
      END_STATE();
    case 375:
      if (lookahead == 'l') ADVANCE(410);
      END_STATE();
    case 376:
      if (lookahead == 'f') ADVANCE(411);
      END_STATE();
    case 377:
      if (lookahead == 'i') ADVANCE(412);
      END_STATE();
    case 378:
      if (lookahead == 'i') ADVANCE(413);
      END_STATE();
    case 379:
      if (lookahead == 'n') ADVANCE(414);
      END_STATE();
    case 380:
      if (lookahead == 'g') ADVANCE(415);
      END_STATE();
    case 381:
      if (lookahead == 'd') ADVANCE(416);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_ItemLevel);
      END_STATE();
    case 383:
      if (lookahead == 'k') ADVANCE(417);
      END_STATE();
    case 384:
      if (lookahead == 'o') ADVANCE(418);
      END_STATE();
    case 385:
      if (lookahead == 'S') ADVANCE(419);
      END_STATE();
    case 386:
      if (lookahead == 't') ADVANCE(420);
      END_STATE();
    case 387:
      if (lookahead == 'o') ADVANCE(421);
      END_STATE();
    case 388:
      if (lookahead == 'C') ADVANCE(422);
      END_STATE();
    case 389:
      if (lookahead == 'z') ADVANCE(423);
      END_STATE();
    case 390:
      if (lookahead == 'l') ADVANCE(424);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_ShapedMap);
      END_STATE();
    case 392:
      if (lookahead == 'm') ADVANCE(425);
      END_STATE();
    case 393:
      if (lookahead == 'u') ADVANCE(426);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_StackSize);
      END_STATE();
    case 395:
      if (lookahead == 'e') ADVANCE(427);
      END_STATE();
    case 396:
      if (lookahead == 'r') ADVANCE(428);
      END_STATE();
    case 397:
      if (lookahead == 't') ADVANCE(429);
      END_STATE();
    case 398:
      if (lookahead == 'u') ADVANCE(430);
      END_STATE();
    case 399:
      if (lookahead == 'm') ADVANCE(431);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_BaseArmour);
      END_STATE();
    case 401:
      if (lookahead == 'e') ADVANCE(432);
      END_STATE();
    case 402:
      if (lookahead == 'S') ADVANCE(433);
      END_STATE();
    case 403:
      if (lookahead == 'n') ADVANCE(434);
      END_STATE();
    case 404:
      if (lookahead == 'p') ADVANCE(435);
      END_STATE();
    case 405:
      if (lookahead == 'o') ADVANCE(436);
      END_STATE();
    case 406:
      if (lookahead == 't') ADVANCE(437);
      END_STATE();
    case 407:
      if (lookahead == 'p') ADVANCE(438);
      END_STATE();
    case 408:
      if (lookahead == 't') ADVANCE(439);
      END_STATE();
    case 409:
      if (lookahead == 't') ADVANCE(440);
      END_STATE();
    case 410:
      if (lookahead == 'e') ADVANCE(441);
      END_STATE();
    case 411:
      if (lookahead == 'W') ADVANCE(442);
      END_STATE();
    case 412:
      if (lookahead == 't') ADVANCE(443);
      END_STATE();
    case 413:
      if (lookahead == 't') ADVANCE(444);
      END_STATE();
    case 414:
      if (lookahead == 'c') ADVANCE(445);
      END_STATE();
    case 415:
      if (lookahead == 'E') ADVANCE(446);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_Identified);
      END_STATE();
    case 417:
      if (lookahead == 'e') ADVANCE(447);
      END_STATE();
    case 418:
      if (lookahead == 'n') ADVANCE(448);
      END_STATE();
    case 419:
      if (lookahead == 'o') ADVANCE(449);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_PlayEffect);
      END_STATE();
    case 421:
      if (lookahead == 'u') ADVANCE(450);
      END_STATE();
    case 422:
      if (lookahead == 'o') ADVANCE(451);
      END_STATE();
    case 423:
      if (lookahead == 'e') ADVANCE(452);
      END_STATE();
    case 424:
      if (lookahead == 'o') ADVANCE(453);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_ShaperItem);
      END_STATE();
    case 426:
      if (lookahead == 'p') ADVANCE(454);
      END_STATE();
    case 427:
      if (lookahead == 'd') ADVANCE(455);
      END_STATE();
    case 428:
      if (lookahead == 'e') ADVANCE(456);
      END_STATE();
    case 429:
      if (lookahead == 'e') ADVANCE(457);
      END_STATE();
    case 430:
      if (lookahead == 'a') ADVANCE(458);
      END_STATE();
    case 431:
      if (lookahead == 'e') ADVANCE(459);
      END_STATE();
    case 432:
      if (lookahead == 'P') ADVANCE(460);
      END_STATE();
    case 433:
      if (lookahead == 'h') ADVANCE(461);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_BaseEvasion);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_BlightedMap);
      END_STATE();
    case 436:
      if (lookahead == 'd') ADVANCE(462);
      END_STATE();
    case 437:
      if (lookahead == 'S') ADVANCE(463);
      END_STATE();
    case 438:
      if (lookahead == 'S') ADVANCE(464);
      END_STATE();
    case 439:
      if (lookahead == 'P') ADVANCE(465);
      END_STATE();
    case 440:
      if (lookahead == 'e') ADVANCE(466);
      END_STATE();
    case 441:
      if (lookahead == 'P') ADVANCE(467);
      END_STATE();
    case 442:
      if (lookahead == 'o') ADVANCE(468);
      END_STATE();
    case 443:
      if (lookahead == 'M') ADVANCE(469);
      END_STATE();
    case 444:
      if (lookahead == 'M') ADVANCE(470);
      END_STATE();
    case 445:
      if (lookahead == 'e') ADVANCE(471);
      END_STATE();
    case 446:
      if (lookahead == 'x') ADVANCE(472);
      END_STATE();
    case 447:
      if (lookahead == 't') ADVANCE(473);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_MinimapIcon);
      END_STATE();
    case 449:
      if (lookahead == 'u') ADVANCE(474);
      END_STATE();
    case 450:
      if (lookahead == 'n') ADVANCE(475);
      END_STATE();
    case 451:
      if (lookahead == 'l') ADVANCE(476);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_SetFontSize);
      END_STATE();
    case 453:
      if (lookahead == 'r') ADVANCE(477);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_SocketGroup);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_Synthesised);
      if (lookahead == 'I') ADVANCE(478);
      END_STATE();
    case 456:
      if (lookahead == 'd') ADVANCE(479);
      END_STATE();
    case 457:
      if (lookahead == 'd') ADVANCE(480);
      END_STATE();
    case 458:
      if (lookahead == 'l') ADVANCE(481);
      END_STATE();
    case 459:
      if (lookahead == 'n') ADVANCE(482);
      END_STATE();
    case 460:
      if (lookahead == 'e') ADVANCE(483);
      END_STATE();
    case 461:
      if (lookahead == 'i') ADVANCE(484);
      END_STATE();
    case 462:
      if (lookahead == 's') ADVANCE(485);
      END_STATE();
    case 463:
      if (lookahead == 'o') ADVANCE(486);
      END_STATE();
    case 464:
      if (lookahead == 'o') ADVANCE(487);
      END_STATE();
    case 465:
      if (lookahead == 'a') ADVANCE(488);
      END_STATE();
    case 466:
      if (lookahead == 'm') ADVANCE(489);
      END_STATE();
    case 467:
      if (lookahead == 'a') ADVANCE(490);
      END_STATE();
    case 468:
      if (lookahead == 'r') ADVANCE(491);
      END_STATE();
    case 469:
      if (lookahead == 'o') ADVANCE(492);
      END_STATE();
    case 470:
      if (lookahead == 'o') ADVANCE(493);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_HasInfluence);
      END_STATE();
    case 472:
      if (lookahead == 'a') ADVANCE(494);
      END_STATE();
    case 473:
      if (lookahead == 's') ADVANCE(495);
      END_STATE();
    case 474:
      if (lookahead == 'n') ADVANCE(496);
      END_STATE();
    case 475:
      if (lookahead == 'd') ADVANCE(497);
      END_STATE();
    case 476:
      if (lookahead == 'o') ADVANCE(498);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_SetTextColor);
      END_STATE();
    case 478:
      if (lookahead == 't') ADVANCE(499);
      END_STATE();
    case 479:
      if (lookahead == 'G') ADVANCE(500);
      END_STATE();
    case 480:
      if (lookahead == 'M') ADVANCE(501);
      END_STATE();
    case 481:
      if (lookahead == 'i') ADVANCE(502);
      END_STATE();
    case 482:
      if (lookahead == 't') ADVANCE(503);
      END_STATE();
    case 483:
      if (lookahead == 'r') ADVANCE(504);
      END_STATE();
    case 484:
      if (lookahead == 'e') ADVANCE(505);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_CorruptedMods);
      END_STATE();
    case 486:
      if (lookahead == 'u') ADVANCE(506);
      END_STATE();
    case 487:
      if (lookahead == 'u') ADVANCE(507);
      END_STATE();
    case 488:
      if (lookahead == 's') ADVANCE(508);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_FracturedItem);
      END_STATE();
    case 490:
      if (lookahead == 's') ADVANCE(509);
      END_STATE();
    case 491:
      if (lookahead == 'l') ADVANCE(510);
      END_STATE();
    case 492:
      if (lookahead == 'd') ADVANCE(511);
      END_STATE();
    case 493:
      if (lookahead == 'd') ADVANCE(512);
      END_STATE();
    case 494:
      if (lookahead == 'r') ADVANCE(513);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_LinkedSockets);
      END_STATE();
    case 496:
      if (lookahead == 'd') ADVANCE(514);
      END_STATE();
    case 497:
      if (lookahead == 'C') ADVANCE(515);
      END_STATE();
    case 498:
      if (lookahead == 'r') ADVANCE(516);
      END_STATE();
    case 499:
      if (lookahead == 'e') ADVANCE(517);
      END_STATE();
    case 500:
      if (lookahead == 'e') ADVANCE(518);
      END_STATE();
    case 501:
      if (lookahead == 'a') ADVANCE(519);
      END_STATE();
    case 502:
      if (lookahead == 't') ADVANCE(520);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_AnyEnchantment);
      END_STATE();
    case 504:
      if (lookahead == 'c') ADVANCE(521);
      END_STATE();
    case 505:
      if (lookahead == 'l') ADVANCE(522);
      END_STATE();
    case 506:
      if (lookahead == 'n') ADVANCE(523);
      END_STATE();
    case 507:
      if (lookahead == 'n') ADVANCE(524);
      END_STATE();
    case 508:
      if (lookahead == 's') ADVANCE(525);
      END_STATE();
    case 509:
      if (lookahead == 's') ADVANCE(526);
      END_STATE();
    case 510:
      if (lookahead == 'd') ADVANCE(527);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_HasExplicitMod);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_HasImplicitMod);
      END_STATE();
    case 513:
      if (lookahead == 'c') ADVANCE(528);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_PlayAlertSound);
      if (lookahead == 'P') ADVANCE(529);
      END_STATE();
    case 515:
      if (lookahead == 'o') ADVANCE(530);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_SetBorderColor);
      END_STATE();
    case 517:
      if (lookahead == 'm') ADVANCE(531);
      END_STATE();
    case 518:
      if (lookahead == 'm') ADVANCE(532);
      END_STATE();
    case 519:
      if (lookahead == 'p') ADVANCE(533);
      END_STATE();
    case 520:
      if (lookahead == 'y') ADVANCE(534);
      END_STATE();
    case 521:
      if (lookahead == 'e') ADVANCE(535);
      END_STATE();
    case 522:
      if (lookahead == 'd') ADVANCE(536);
      END_STATE();
    case 523:
      if (lookahead == 'd') ADVANCE(537);
      END_STATE();
    case 524:
      if (lookahead == 'd') ADVANCE(538);
      END_STATE();
    case 525:
      if (lookahead == 'i') ADVANCE(539);
      END_STATE();
    case 526:
      if (lookahead == 'i') ADVANCE(540);
      END_STATE();
    case 527:
      if (lookahead == 's') ADVANCE(541);
      END_STATE();
    case 528:
      if (lookahead == 'h') ADVANCE(542);
      END_STATE();
    case 529:
      if (lookahead == 'o') ADVANCE(543);
      END_STATE();
    case 530:
      if (lookahead == 'l') ADVANCE(544);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_SynthesisedItem);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_TransfiguredGem);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_UberBlightedMap);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_AlternateQuality);
      END_STATE();
    case 535:
      if (lookahead == 'n') ADVANCE(545);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_BaseEnergyShield);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_CustomAlertSound);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_DisableDropSound);
      END_STATE();
    case 539:
      if (lookahead == 'v') ADVANCE(546);
      END_STATE();
    case 540:
      if (lookahead == 'v') ADVANCE(547);
      END_STATE();
    case 541:
      if (lookahead == 'I') ADVANCE(548);
      END_STATE();
    case 542:
      if (lookahead == 'I') ADVANCE(549);
      END_STATE();
    case 543:
      if (lookahead == 's') ADVANCE(550);
      END_STATE();
    case 544:
      if (lookahead == 'o') ADVANCE(551);
      END_STATE();
    case 545:
      if (lookahead == 't') ADVANCE(552);
      END_STATE();
    case 546:
      if (lookahead == 'e') ADVANCE(553);
      END_STATE();
    case 547:
      if (lookahead == 'e') ADVANCE(554);
      END_STATE();
    case 548:
      if (lookahead == 'm') ADVANCE(555);
      END_STATE();
    case 549:
      if (lookahead == 'm') ADVANCE(556);
      END_STATE();
    case 550:
      if (lookahead == 'i') ADVANCE(557);
      END_STATE();
    case 551:
      if (lookahead == 'r') ADVANCE(558);
      END_STATE();
    case 552:
      if (lookahead == 'i') ADVANCE(559);
      END_STATE();
    case 553:
      if (lookahead == 'N') ADVANCE(560);
      END_STATE();
    case 554:
      if (lookahead == 'T') ADVANCE(561);
      END_STATE();
    case 555:
      if (lookahead == 'p') ADVANCE(562);
      END_STATE();
    case 556:
      if (lookahead == 'p') ADVANCE(563);
      END_STATE();
    case 557:
      if (lookahead == 't') ADVANCE(564);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(anon_sym_SetBackgroundColor);
      END_STATE();
    case 559:
      if (lookahead == 'l') ADVANCE(565);
      END_STATE();
    case 560:
      if (lookahead == 'o') ADVANCE(566);
      if (lookahead == 'u') ADVANCE(567);
      END_STATE();
    case 561:
      if (lookahead == 'r') ADVANCE(568);
      END_STATE();
    case 562:
      if (lookahead == 'l') ADVANCE(569);
      END_STATE();
    case 563:
      if (lookahead == 'l') ADVANCE(570);
      END_STATE();
    case 564:
      if (lookahead == 'i') ADVANCE(571);
      END_STATE();
    case 565:
      if (lookahead == 'e') ADVANCE(572);
      END_STATE();
    case 566:
      if (lookahead == 'd') ADVANCE(573);
      END_STATE();
    case 567:
      if (lookahead == 'm') ADVANCE(574);
      END_STATE();
    case 568:
      if (lookahead == 'e') ADVANCE(575);
      END_STATE();
    case 569:
      if (lookahead == 'i') ADVANCE(576);
      END_STATE();
    case 570:
      if (lookahead == 'i') ADVANCE(577);
      END_STATE();
    case 571:
      if (lookahead == 'o') ADVANCE(578);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(anon_sym_BaseDefencePercentile);
      END_STATE();
    case 573:
      if (lookahead == 'e') ADVANCE(579);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(anon_sym_EnchantmentPassiveNum);
      END_STATE();
    case 575:
      if (lookahead == 'e') ADVANCE(580);
      END_STATE();
    case 576:
      if (lookahead == 'c') ADVANCE(581);
      END_STATE();
    case 577:
      if (lookahead == 'c') ADVANCE(582);
      END_STATE();
    case 578:
      if (lookahead == 'n') ADVANCE(583);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(anon_sym_EnchantmentPassiveNode);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(anon_sym_HasCruciblePassiveTree);
      END_STATE();
    case 581:
      if (lookahead == 'i') ADVANCE(584);
      END_STATE();
    case 582:
      if (lookahead == 'i') ADVANCE(585);
      END_STATE();
    case 583:
      if (lookahead == 'a') ADVANCE(586);
      END_STATE();
    case 584:
      if (lookahead == 't') ADVANCE(587);
      END_STATE();
    case 585:
      if (lookahead == 't') ADVANCE(588);
      END_STATE();
    case 586:
      if (lookahead == 'l') ADVANCE(589);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(anon_sym_HasEaterOfWorldsImplicit);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(anon_sym_HasSearingExarchImplicit);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(anon_sym_PlayAlertSoundPositional);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 8},
  [2] = {.lex_state = 8},
  [3] = {.lex_state = 8},
  [4] = {.lex_state = 8},
  [5] = {.lex_state = 8},
  [6] = {.lex_state = 8},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 8},
  [9] = {.lex_state = 8},
  [10] = {.lex_state = 8},
  [11] = {.lex_state = 8},
  [12] = {.lex_state = 8},
  [13] = {.lex_state = 8},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 12},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 13},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 13},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 7},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 3},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 2},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [aux_sym_empty_line_token1] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_Show] = ACTIONS(1),
    [anon_sym_Hide] = ACTIONS(1),
    [anon_sym_ShowD] = ACTIONS(1),
    [anon_sym_HideD] = ACTIONS(1),
    [anon_sym_Continue] = ACTIONS(1),
    [anon_sym_Cont] = ACTIONS(1),
    [anon_sym_ItemLevel] = ACTIONS(1),
    [anon_sym_DropLevel] = ACTIONS(1),
    [anon_sym_AreaLevel] = ACTIONS(1),
    [anon_sym_GemLevel] = ACTIONS(1),
    [anon_sym_StackSize] = ACTIONS(1),
    [anon_sym_Height] = ACTIONS(1),
    [anon_sym_Width] = ACTIONS(1),
    [anon_sym_Sockets] = ACTIONS(1),
    [anon_sym_LinkedSockets] = ACTIONS(1),
    [anon_sym_SocketGroup] = ACTIONS(1),
    [anon_sym_Class] = ACTIONS(1),
    [anon_sym_BaseType] = ACTIONS(1),
    [anon_sym_Rarity] = ACTIONS(1),
    [anon_sym_Quality] = ACTIONS(1),
    [anon_sym_HasInfluence] = ACTIONS(1),
    [anon_sym_HasSearingExarchImplicit] = ACTIONS(1),
    [anon_sym_HasEaterOfWorldsImplicit] = ACTIONS(1),
    [anon_sym_HasCruciblePassiveTree] = ACTIONS(1),
    [anon_sym_HasExplicitMod] = ACTIONS(1),
    [anon_sym_HasImplicitMod] = ACTIONS(1),
    [anon_sym_ShapedMap] = ACTIONS(1),
    [anon_sym_ElderMap] = ACTIONS(1),
    [anon_sym_BlightedMap] = ACTIONS(1),
    [anon_sym_UberBlightedMap] = ACTIONS(1),
    [anon_sym_MapTier] = ACTIONS(1),
    [anon_sym_EnchantmentPassiveNode] = ACTIONS(1),
    [anon_sym_EnchantmentPassiveNum] = ACTIONS(1),
    [anon_sym_BaseArmour] = ACTIONS(1),
    [anon_sym_BaseDefencePercentile] = ACTIONS(1),
    [anon_sym_BaseEnergyShield] = ACTIONS(1),
    [anon_sym_BaseEvasion] = ACTIONS(1),
    [anon_sym_BaseWard] = ACTIONS(1),
    [anon_sym_Mirrored] = ACTIONS(1),
    [anon_sym_Corrupted] = ACTIONS(1),
    [anon_sym_Identified] = ACTIONS(1),
    [anon_sym_Synthesised] = ACTIONS(1),
    [anon_sym_ShaperItem] = ACTIONS(1),
    [anon_sym_ElderItem] = ACTIONS(1),
    [anon_sym_AnyEnchantment] = ACTIONS(1),
    [anon_sym_FracturedItem] = ACTIONS(1),
    [anon_sym_Replica] = ACTIONS(1),
    [anon_sym_Scourged] = ACTIONS(1),
    [anon_sym_TransfiguredGem] = ACTIONS(1),
    [anon_sym_AlternateQuality] = ACTIONS(1),
    [anon_sym_CorruptedMods] = ACTIONS(1),
    [anon_sym_SynthesisedItem] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SetFontSize] = ACTIONS(1),
    [anon_sym_SetTextColor] = ACTIONS(1),
    [anon_sym_SetBorderColor] = ACTIONS(1),
    [anon_sym_SetBackgroundColor] = ACTIONS(1),
    [anon_sym_DisableDropSound] = ACTIONS(1),
    [anon_sym_PlayAlertSound] = ACTIONS(1),
    [anon_sym_PlayAlertSoundPositional] = ACTIONS(1),
    [anon_sym_CustomAlertSound] = ACTIONS(1),
    [anon_sym_PlayEffect] = ACTIONS(1),
    [anon_sym_MinimapIcon] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_True] = ACTIONS(1),
    [anon_sym_False] = ACTIONS(1),
    [anon_sym_Section] = ACTIONS(1),
    [anon_sym_Style] = ACTIONS(1),
    [anon_sym_var] = ACTIONS(1),
    [anon_sym_Import] = ACTIONS(1),
    [anon_sym_Optional] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(65),
    [sym_empty_line] = STATE(2),
    [sym_standalone_comment] = STATE(2),
    [sym_statement_line] = STATE(2),
    [sym_statement] = STATE(39),
    [sym_indent] = STATE(7),
    [sym_inline_comment] = STATE(70),
    [sym_show_hide_statement] = STATE(58),
    [sym_condition_statement] = STATE(58),
    [sym_condition_name] = STATE(16),
    [sym_action_statement] = STATE(15),
    [sym_action_name] = STATE(24),
    [sym_section_declaration] = STATE(58),
    [sym_style_declaration] = STATE(58),
    [sym_variable_declaration] = STATE(58),
    [sym_import_statement] = STATE(58),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_empty_line_token1] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(7),
    [aux_sym_indent_token1] = ACTIONS(9),
    [anon_sym_Show] = ACTIONS(11),
    [anon_sym_Hide] = ACTIONS(11),
    [anon_sym_ShowD] = ACTIONS(11),
    [anon_sym_HideD] = ACTIONS(11),
    [anon_sym_Continue] = ACTIONS(11),
    [anon_sym_Cont] = ACTIONS(11),
    [anon_sym_ItemLevel] = ACTIONS(13),
    [anon_sym_DropLevel] = ACTIONS(13),
    [anon_sym_AreaLevel] = ACTIONS(13),
    [anon_sym_GemLevel] = ACTIONS(13),
    [anon_sym_StackSize] = ACTIONS(13),
    [anon_sym_Height] = ACTIONS(13),
    [anon_sym_Width] = ACTIONS(13),
    [anon_sym_Sockets] = ACTIONS(13),
    [anon_sym_LinkedSockets] = ACTIONS(13),
    [anon_sym_SocketGroup] = ACTIONS(13),
    [anon_sym_Class] = ACTIONS(13),
    [anon_sym_BaseType] = ACTIONS(13),
    [anon_sym_Rarity] = ACTIONS(13),
    [anon_sym_Quality] = ACTIONS(13),
    [anon_sym_HasInfluence] = ACTIONS(13),
    [anon_sym_HasSearingExarchImplicit] = ACTIONS(13),
    [anon_sym_HasEaterOfWorldsImplicit] = ACTIONS(13),
    [anon_sym_HasCruciblePassiveTree] = ACTIONS(13),
    [anon_sym_HasExplicitMod] = ACTIONS(13),
    [anon_sym_HasImplicitMod] = ACTIONS(13),
    [anon_sym_ShapedMap] = ACTIONS(13),
    [anon_sym_ElderMap] = ACTIONS(13),
    [anon_sym_BlightedMap] = ACTIONS(13),
    [anon_sym_UberBlightedMap] = ACTIONS(13),
    [anon_sym_MapTier] = ACTIONS(13),
    [anon_sym_EnchantmentPassiveNode] = ACTIONS(13),
    [anon_sym_EnchantmentPassiveNum] = ACTIONS(13),
    [anon_sym_BaseArmour] = ACTIONS(13),
    [anon_sym_BaseDefencePercentile] = ACTIONS(13),
    [anon_sym_BaseEnergyShield] = ACTIONS(13),
    [anon_sym_BaseEvasion] = ACTIONS(13),
    [anon_sym_BaseWard] = ACTIONS(13),
    [anon_sym_Mirrored] = ACTIONS(13),
    [anon_sym_Corrupted] = ACTIONS(13),
    [anon_sym_Identified] = ACTIONS(13),
    [anon_sym_Synthesised] = ACTIONS(13),
    [anon_sym_ShaperItem] = ACTIONS(13),
    [anon_sym_ElderItem] = ACTIONS(13),
    [anon_sym_AnyEnchantment] = ACTIONS(13),
    [anon_sym_FracturedItem] = ACTIONS(13),
    [anon_sym_Replica] = ACTIONS(13),
    [anon_sym_Scourged] = ACTIONS(13),
    [anon_sym_TransfiguredGem] = ACTIONS(13),
    [anon_sym_AlternateQuality] = ACTIONS(13),
    [anon_sym_CorruptedMods] = ACTIONS(13),
    [anon_sym_SynthesisedItem] = ACTIONS(13),
    [anon_sym_SetFontSize] = ACTIONS(15),
    [anon_sym_SetTextColor] = ACTIONS(15),
    [anon_sym_SetBorderColor] = ACTIONS(15),
    [anon_sym_SetBackgroundColor] = ACTIONS(15),
    [anon_sym_DisableDropSound] = ACTIONS(15),
    [anon_sym_PlayAlertSound] = ACTIONS(15),
    [anon_sym_PlayAlertSoundPositional] = ACTIONS(15),
    [anon_sym_CustomAlertSound] = ACTIONS(15),
    [anon_sym_PlayEffect] = ACTIONS(15),
    [anon_sym_MinimapIcon] = ACTIONS(15),
    [anon_sym_Section] = ACTIONS(17),
    [anon_sym_Style] = ACTIONS(19),
    [anon_sym_var] = ACTIONS(21),
    [anon_sym_Import] = ACTIONS(23),
  },
  [2] = {
    [sym_empty_line] = STATE(3),
    [sym_standalone_comment] = STATE(3),
    [sym_statement_line] = STATE(3),
    [sym_statement] = STATE(39),
    [sym_indent] = STATE(7),
    [sym_inline_comment] = STATE(70),
    [sym_show_hide_statement] = STATE(58),
    [sym_condition_statement] = STATE(58),
    [sym_condition_name] = STATE(16),
    [sym_action_statement] = STATE(15),
    [sym_action_name] = STATE(24),
    [sym_section_declaration] = STATE(58),
    [sym_style_declaration] = STATE(58),
    [sym_variable_declaration] = STATE(58),
    [sym_import_statement] = STATE(58),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(25),
    [aux_sym_empty_line_token1] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(7),
    [aux_sym_indent_token1] = ACTIONS(9),
    [anon_sym_Show] = ACTIONS(11),
    [anon_sym_Hide] = ACTIONS(11),
    [anon_sym_ShowD] = ACTIONS(11),
    [anon_sym_HideD] = ACTIONS(11),
    [anon_sym_Continue] = ACTIONS(11),
    [anon_sym_Cont] = ACTIONS(11),
    [anon_sym_ItemLevel] = ACTIONS(13),
    [anon_sym_DropLevel] = ACTIONS(13),
    [anon_sym_AreaLevel] = ACTIONS(13),
    [anon_sym_GemLevel] = ACTIONS(13),
    [anon_sym_StackSize] = ACTIONS(13),
    [anon_sym_Height] = ACTIONS(13),
    [anon_sym_Width] = ACTIONS(13),
    [anon_sym_Sockets] = ACTIONS(13),
    [anon_sym_LinkedSockets] = ACTIONS(13),
    [anon_sym_SocketGroup] = ACTIONS(13),
    [anon_sym_Class] = ACTIONS(13),
    [anon_sym_BaseType] = ACTIONS(13),
    [anon_sym_Rarity] = ACTIONS(13),
    [anon_sym_Quality] = ACTIONS(13),
    [anon_sym_HasInfluence] = ACTIONS(13),
    [anon_sym_HasSearingExarchImplicit] = ACTIONS(13),
    [anon_sym_HasEaterOfWorldsImplicit] = ACTIONS(13),
    [anon_sym_HasCruciblePassiveTree] = ACTIONS(13),
    [anon_sym_HasExplicitMod] = ACTIONS(13),
    [anon_sym_HasImplicitMod] = ACTIONS(13),
    [anon_sym_ShapedMap] = ACTIONS(13),
    [anon_sym_ElderMap] = ACTIONS(13),
    [anon_sym_BlightedMap] = ACTIONS(13),
    [anon_sym_UberBlightedMap] = ACTIONS(13),
    [anon_sym_MapTier] = ACTIONS(13),
    [anon_sym_EnchantmentPassiveNode] = ACTIONS(13),
    [anon_sym_EnchantmentPassiveNum] = ACTIONS(13),
    [anon_sym_BaseArmour] = ACTIONS(13),
    [anon_sym_BaseDefencePercentile] = ACTIONS(13),
    [anon_sym_BaseEnergyShield] = ACTIONS(13),
    [anon_sym_BaseEvasion] = ACTIONS(13),
    [anon_sym_BaseWard] = ACTIONS(13),
    [anon_sym_Mirrored] = ACTIONS(13),
    [anon_sym_Corrupted] = ACTIONS(13),
    [anon_sym_Identified] = ACTIONS(13),
    [anon_sym_Synthesised] = ACTIONS(13),
    [anon_sym_ShaperItem] = ACTIONS(13),
    [anon_sym_ElderItem] = ACTIONS(13),
    [anon_sym_AnyEnchantment] = ACTIONS(13),
    [anon_sym_FracturedItem] = ACTIONS(13),
    [anon_sym_Replica] = ACTIONS(13),
    [anon_sym_Scourged] = ACTIONS(13),
    [anon_sym_TransfiguredGem] = ACTIONS(13),
    [anon_sym_AlternateQuality] = ACTIONS(13),
    [anon_sym_CorruptedMods] = ACTIONS(13),
    [anon_sym_SynthesisedItem] = ACTIONS(13),
    [anon_sym_SetFontSize] = ACTIONS(15),
    [anon_sym_SetTextColor] = ACTIONS(15),
    [anon_sym_SetBorderColor] = ACTIONS(15),
    [anon_sym_SetBackgroundColor] = ACTIONS(15),
    [anon_sym_DisableDropSound] = ACTIONS(15),
    [anon_sym_PlayAlertSound] = ACTIONS(15),
    [anon_sym_PlayAlertSoundPositional] = ACTIONS(15),
    [anon_sym_CustomAlertSound] = ACTIONS(15),
    [anon_sym_PlayEffect] = ACTIONS(15),
    [anon_sym_MinimapIcon] = ACTIONS(15),
    [anon_sym_Section] = ACTIONS(17),
    [anon_sym_Style] = ACTIONS(19),
    [anon_sym_var] = ACTIONS(21),
    [anon_sym_Import] = ACTIONS(23),
  },
  [3] = {
    [sym_empty_line] = STATE(3),
    [sym_standalone_comment] = STATE(3),
    [sym_statement_line] = STATE(3),
    [sym_statement] = STATE(39),
    [sym_indent] = STATE(7),
    [sym_inline_comment] = STATE(70),
    [sym_show_hide_statement] = STATE(58),
    [sym_condition_statement] = STATE(58),
    [sym_condition_name] = STATE(16),
    [sym_action_statement] = STATE(15),
    [sym_action_name] = STATE(24),
    [sym_section_declaration] = STATE(58),
    [sym_style_declaration] = STATE(58),
    [sym_variable_declaration] = STATE(58),
    [sym_import_statement] = STATE(58),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(27),
    [aux_sym_empty_line_token1] = ACTIONS(29),
    [anon_sym_POUND] = ACTIONS(32),
    [aux_sym_indent_token1] = ACTIONS(35),
    [anon_sym_Show] = ACTIONS(38),
    [anon_sym_Hide] = ACTIONS(38),
    [anon_sym_ShowD] = ACTIONS(38),
    [anon_sym_HideD] = ACTIONS(38),
    [anon_sym_Continue] = ACTIONS(38),
    [anon_sym_Cont] = ACTIONS(38),
    [anon_sym_ItemLevel] = ACTIONS(41),
    [anon_sym_DropLevel] = ACTIONS(41),
    [anon_sym_AreaLevel] = ACTIONS(41),
    [anon_sym_GemLevel] = ACTIONS(41),
    [anon_sym_StackSize] = ACTIONS(41),
    [anon_sym_Height] = ACTIONS(41),
    [anon_sym_Width] = ACTIONS(41),
    [anon_sym_Sockets] = ACTIONS(41),
    [anon_sym_LinkedSockets] = ACTIONS(41),
    [anon_sym_SocketGroup] = ACTIONS(41),
    [anon_sym_Class] = ACTIONS(41),
    [anon_sym_BaseType] = ACTIONS(41),
    [anon_sym_Rarity] = ACTIONS(41),
    [anon_sym_Quality] = ACTIONS(41),
    [anon_sym_HasInfluence] = ACTIONS(41),
    [anon_sym_HasSearingExarchImplicit] = ACTIONS(41),
    [anon_sym_HasEaterOfWorldsImplicit] = ACTIONS(41),
    [anon_sym_HasCruciblePassiveTree] = ACTIONS(41),
    [anon_sym_HasExplicitMod] = ACTIONS(41),
    [anon_sym_HasImplicitMod] = ACTIONS(41),
    [anon_sym_ShapedMap] = ACTIONS(41),
    [anon_sym_ElderMap] = ACTIONS(41),
    [anon_sym_BlightedMap] = ACTIONS(41),
    [anon_sym_UberBlightedMap] = ACTIONS(41),
    [anon_sym_MapTier] = ACTIONS(41),
    [anon_sym_EnchantmentPassiveNode] = ACTIONS(41),
    [anon_sym_EnchantmentPassiveNum] = ACTIONS(41),
    [anon_sym_BaseArmour] = ACTIONS(41),
    [anon_sym_BaseDefencePercentile] = ACTIONS(41),
    [anon_sym_BaseEnergyShield] = ACTIONS(41),
    [anon_sym_BaseEvasion] = ACTIONS(41),
    [anon_sym_BaseWard] = ACTIONS(41),
    [anon_sym_Mirrored] = ACTIONS(41),
    [anon_sym_Corrupted] = ACTIONS(41),
    [anon_sym_Identified] = ACTIONS(41),
    [anon_sym_Synthesised] = ACTIONS(41),
    [anon_sym_ShaperItem] = ACTIONS(41),
    [anon_sym_ElderItem] = ACTIONS(41),
    [anon_sym_AnyEnchantment] = ACTIONS(41),
    [anon_sym_FracturedItem] = ACTIONS(41),
    [anon_sym_Replica] = ACTIONS(41),
    [anon_sym_Scourged] = ACTIONS(41),
    [anon_sym_TransfiguredGem] = ACTIONS(41),
    [anon_sym_AlternateQuality] = ACTIONS(41),
    [anon_sym_CorruptedMods] = ACTIONS(41),
    [anon_sym_SynthesisedItem] = ACTIONS(41),
    [anon_sym_SetFontSize] = ACTIONS(44),
    [anon_sym_SetTextColor] = ACTIONS(44),
    [anon_sym_SetBorderColor] = ACTIONS(44),
    [anon_sym_SetBackgroundColor] = ACTIONS(44),
    [anon_sym_DisableDropSound] = ACTIONS(44),
    [anon_sym_PlayAlertSound] = ACTIONS(44),
    [anon_sym_PlayAlertSoundPositional] = ACTIONS(44),
    [anon_sym_CustomAlertSound] = ACTIONS(44),
    [anon_sym_PlayEffect] = ACTIONS(44),
    [anon_sym_MinimapIcon] = ACTIONS(44),
    [anon_sym_Section] = ACTIONS(47),
    [anon_sym_Style] = ACTIONS(50),
    [anon_sym_var] = ACTIONS(53),
    [anon_sym_Import] = ACTIONS(56),
  },
  [4] = {
    [sym_statement_line] = STATE(5),
    [sym_statement] = STATE(39),
    [sym_indent] = STATE(7),
    [sym_inline_comment] = STATE(70),
    [sym_show_hide_statement] = STATE(58),
    [sym_condition_statement] = STATE(58),
    [sym_condition_name] = STATE(16),
    [sym_action_statement] = STATE(15),
    [sym_action_name] = STATE(24),
    [sym_section_declaration] = STATE(58),
    [sym_style_declaration] = STATE(58),
    [sym_variable_declaration] = STATE(58),
    [sym_import_statement] = STATE(58),
    [aux_sym_block_repeat1] = STATE(5),
    [aux_sym_empty_line_token1] = ACTIONS(59),
    [anon_sym_POUND] = ACTIONS(61),
    [aux_sym_indent_token1] = ACTIONS(9),
    [anon_sym_Show] = ACTIONS(11),
    [anon_sym_Hide] = ACTIONS(11),
    [anon_sym_ShowD] = ACTIONS(11),
    [anon_sym_HideD] = ACTIONS(11),
    [anon_sym_Continue] = ACTIONS(11),
    [anon_sym_Cont] = ACTIONS(11),
    [anon_sym_ItemLevel] = ACTIONS(13),
    [anon_sym_DropLevel] = ACTIONS(13),
    [anon_sym_AreaLevel] = ACTIONS(13),
    [anon_sym_GemLevel] = ACTIONS(13),
    [anon_sym_StackSize] = ACTIONS(13),
    [anon_sym_Height] = ACTIONS(13),
    [anon_sym_Width] = ACTIONS(13),
    [anon_sym_Sockets] = ACTIONS(13),
    [anon_sym_LinkedSockets] = ACTIONS(13),
    [anon_sym_SocketGroup] = ACTIONS(13),
    [anon_sym_Class] = ACTIONS(13),
    [anon_sym_BaseType] = ACTIONS(13),
    [anon_sym_Rarity] = ACTIONS(13),
    [anon_sym_Quality] = ACTIONS(13),
    [anon_sym_HasInfluence] = ACTIONS(13),
    [anon_sym_HasSearingExarchImplicit] = ACTIONS(13),
    [anon_sym_HasEaterOfWorldsImplicit] = ACTIONS(13),
    [anon_sym_HasCruciblePassiveTree] = ACTIONS(13),
    [anon_sym_HasExplicitMod] = ACTIONS(13),
    [anon_sym_HasImplicitMod] = ACTIONS(13),
    [anon_sym_ShapedMap] = ACTIONS(13),
    [anon_sym_ElderMap] = ACTIONS(13),
    [anon_sym_BlightedMap] = ACTIONS(13),
    [anon_sym_UberBlightedMap] = ACTIONS(13),
    [anon_sym_MapTier] = ACTIONS(13),
    [anon_sym_EnchantmentPassiveNode] = ACTIONS(13),
    [anon_sym_EnchantmentPassiveNum] = ACTIONS(13),
    [anon_sym_BaseArmour] = ACTIONS(13),
    [anon_sym_BaseDefencePercentile] = ACTIONS(13),
    [anon_sym_BaseEnergyShield] = ACTIONS(13),
    [anon_sym_BaseEvasion] = ACTIONS(13),
    [anon_sym_BaseWard] = ACTIONS(13),
    [anon_sym_Mirrored] = ACTIONS(13),
    [anon_sym_Corrupted] = ACTIONS(13),
    [anon_sym_Identified] = ACTIONS(13),
    [anon_sym_Synthesised] = ACTIONS(13),
    [anon_sym_ShaperItem] = ACTIONS(13),
    [anon_sym_ElderItem] = ACTIONS(13),
    [anon_sym_AnyEnchantment] = ACTIONS(13),
    [anon_sym_FracturedItem] = ACTIONS(13),
    [anon_sym_Replica] = ACTIONS(13),
    [anon_sym_Scourged] = ACTIONS(13),
    [anon_sym_TransfiguredGem] = ACTIONS(13),
    [anon_sym_AlternateQuality] = ACTIONS(13),
    [anon_sym_CorruptedMods] = ACTIONS(13),
    [anon_sym_SynthesisedItem] = ACTIONS(13),
    [anon_sym_SetFontSize] = ACTIONS(15),
    [anon_sym_SetTextColor] = ACTIONS(15),
    [anon_sym_SetBorderColor] = ACTIONS(15),
    [anon_sym_SetBackgroundColor] = ACTIONS(15),
    [anon_sym_DisableDropSound] = ACTIONS(15),
    [anon_sym_PlayAlertSound] = ACTIONS(15),
    [anon_sym_PlayAlertSoundPositional] = ACTIONS(15),
    [anon_sym_CustomAlertSound] = ACTIONS(15),
    [anon_sym_PlayEffect] = ACTIONS(15),
    [anon_sym_MinimapIcon] = ACTIONS(15),
    [anon_sym_Section] = ACTIONS(17),
    [anon_sym_Style] = ACTIONS(19),
    [anon_sym_var] = ACTIONS(21),
    [anon_sym_Import] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(63),
  },
  [5] = {
    [sym_statement_line] = STATE(6),
    [sym_statement] = STATE(39),
    [sym_indent] = STATE(7),
    [sym_inline_comment] = STATE(70),
    [sym_show_hide_statement] = STATE(58),
    [sym_condition_statement] = STATE(58),
    [sym_condition_name] = STATE(16),
    [sym_action_statement] = STATE(15),
    [sym_action_name] = STATE(24),
    [sym_section_declaration] = STATE(58),
    [sym_style_declaration] = STATE(58),
    [sym_variable_declaration] = STATE(58),
    [sym_import_statement] = STATE(58),
    [aux_sym_block_repeat1] = STATE(6),
    [aux_sym_empty_line_token1] = ACTIONS(59),
    [anon_sym_POUND] = ACTIONS(61),
    [aux_sym_indent_token1] = ACTIONS(9),
    [anon_sym_Show] = ACTIONS(11),
    [anon_sym_Hide] = ACTIONS(11),
    [anon_sym_ShowD] = ACTIONS(11),
    [anon_sym_HideD] = ACTIONS(11),
    [anon_sym_Continue] = ACTIONS(11),
    [anon_sym_Cont] = ACTIONS(11),
    [anon_sym_ItemLevel] = ACTIONS(13),
    [anon_sym_DropLevel] = ACTIONS(13),
    [anon_sym_AreaLevel] = ACTIONS(13),
    [anon_sym_GemLevel] = ACTIONS(13),
    [anon_sym_StackSize] = ACTIONS(13),
    [anon_sym_Height] = ACTIONS(13),
    [anon_sym_Width] = ACTIONS(13),
    [anon_sym_Sockets] = ACTIONS(13),
    [anon_sym_LinkedSockets] = ACTIONS(13),
    [anon_sym_SocketGroup] = ACTIONS(13),
    [anon_sym_Class] = ACTIONS(13),
    [anon_sym_BaseType] = ACTIONS(13),
    [anon_sym_Rarity] = ACTIONS(13),
    [anon_sym_Quality] = ACTIONS(13),
    [anon_sym_HasInfluence] = ACTIONS(13),
    [anon_sym_HasSearingExarchImplicit] = ACTIONS(13),
    [anon_sym_HasEaterOfWorldsImplicit] = ACTIONS(13),
    [anon_sym_HasCruciblePassiveTree] = ACTIONS(13),
    [anon_sym_HasExplicitMod] = ACTIONS(13),
    [anon_sym_HasImplicitMod] = ACTIONS(13),
    [anon_sym_ShapedMap] = ACTIONS(13),
    [anon_sym_ElderMap] = ACTIONS(13),
    [anon_sym_BlightedMap] = ACTIONS(13),
    [anon_sym_UberBlightedMap] = ACTIONS(13),
    [anon_sym_MapTier] = ACTIONS(13),
    [anon_sym_EnchantmentPassiveNode] = ACTIONS(13),
    [anon_sym_EnchantmentPassiveNum] = ACTIONS(13),
    [anon_sym_BaseArmour] = ACTIONS(13),
    [anon_sym_BaseDefencePercentile] = ACTIONS(13),
    [anon_sym_BaseEnergyShield] = ACTIONS(13),
    [anon_sym_BaseEvasion] = ACTIONS(13),
    [anon_sym_BaseWard] = ACTIONS(13),
    [anon_sym_Mirrored] = ACTIONS(13),
    [anon_sym_Corrupted] = ACTIONS(13),
    [anon_sym_Identified] = ACTIONS(13),
    [anon_sym_Synthesised] = ACTIONS(13),
    [anon_sym_ShaperItem] = ACTIONS(13),
    [anon_sym_ElderItem] = ACTIONS(13),
    [anon_sym_AnyEnchantment] = ACTIONS(13),
    [anon_sym_FracturedItem] = ACTIONS(13),
    [anon_sym_Replica] = ACTIONS(13),
    [anon_sym_Scourged] = ACTIONS(13),
    [anon_sym_TransfiguredGem] = ACTIONS(13),
    [anon_sym_AlternateQuality] = ACTIONS(13),
    [anon_sym_CorruptedMods] = ACTIONS(13),
    [anon_sym_SynthesisedItem] = ACTIONS(13),
    [anon_sym_SetFontSize] = ACTIONS(15),
    [anon_sym_SetTextColor] = ACTIONS(15),
    [anon_sym_SetBorderColor] = ACTIONS(15),
    [anon_sym_SetBackgroundColor] = ACTIONS(15),
    [anon_sym_DisableDropSound] = ACTIONS(15),
    [anon_sym_PlayAlertSound] = ACTIONS(15),
    [anon_sym_PlayAlertSoundPositional] = ACTIONS(15),
    [anon_sym_CustomAlertSound] = ACTIONS(15),
    [anon_sym_PlayEffect] = ACTIONS(15),
    [anon_sym_MinimapIcon] = ACTIONS(15),
    [anon_sym_Section] = ACTIONS(17),
    [anon_sym_Style] = ACTIONS(19),
    [anon_sym_var] = ACTIONS(21),
    [anon_sym_Import] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(65),
  },
  [6] = {
    [sym_statement_line] = STATE(6),
    [sym_statement] = STATE(39),
    [sym_indent] = STATE(7),
    [sym_inline_comment] = STATE(70),
    [sym_show_hide_statement] = STATE(58),
    [sym_condition_statement] = STATE(58),
    [sym_condition_name] = STATE(16),
    [sym_action_statement] = STATE(15),
    [sym_action_name] = STATE(24),
    [sym_section_declaration] = STATE(58),
    [sym_style_declaration] = STATE(58),
    [sym_variable_declaration] = STATE(58),
    [sym_import_statement] = STATE(58),
    [aux_sym_block_repeat1] = STATE(6),
    [aux_sym_empty_line_token1] = ACTIONS(67),
    [anon_sym_POUND] = ACTIONS(70),
    [aux_sym_indent_token1] = ACTIONS(73),
    [anon_sym_Show] = ACTIONS(76),
    [anon_sym_Hide] = ACTIONS(76),
    [anon_sym_ShowD] = ACTIONS(76),
    [anon_sym_HideD] = ACTIONS(76),
    [anon_sym_Continue] = ACTIONS(76),
    [anon_sym_Cont] = ACTIONS(76),
    [anon_sym_ItemLevel] = ACTIONS(79),
    [anon_sym_DropLevel] = ACTIONS(79),
    [anon_sym_AreaLevel] = ACTIONS(79),
    [anon_sym_GemLevel] = ACTIONS(79),
    [anon_sym_StackSize] = ACTIONS(79),
    [anon_sym_Height] = ACTIONS(79),
    [anon_sym_Width] = ACTIONS(79),
    [anon_sym_Sockets] = ACTIONS(79),
    [anon_sym_LinkedSockets] = ACTIONS(79),
    [anon_sym_SocketGroup] = ACTIONS(79),
    [anon_sym_Class] = ACTIONS(79),
    [anon_sym_BaseType] = ACTIONS(79),
    [anon_sym_Rarity] = ACTIONS(79),
    [anon_sym_Quality] = ACTIONS(79),
    [anon_sym_HasInfluence] = ACTIONS(79),
    [anon_sym_HasSearingExarchImplicit] = ACTIONS(79),
    [anon_sym_HasEaterOfWorldsImplicit] = ACTIONS(79),
    [anon_sym_HasCruciblePassiveTree] = ACTIONS(79),
    [anon_sym_HasExplicitMod] = ACTIONS(79),
    [anon_sym_HasImplicitMod] = ACTIONS(79),
    [anon_sym_ShapedMap] = ACTIONS(79),
    [anon_sym_ElderMap] = ACTIONS(79),
    [anon_sym_BlightedMap] = ACTIONS(79),
    [anon_sym_UberBlightedMap] = ACTIONS(79),
    [anon_sym_MapTier] = ACTIONS(79),
    [anon_sym_EnchantmentPassiveNode] = ACTIONS(79),
    [anon_sym_EnchantmentPassiveNum] = ACTIONS(79),
    [anon_sym_BaseArmour] = ACTIONS(79),
    [anon_sym_BaseDefencePercentile] = ACTIONS(79),
    [anon_sym_BaseEnergyShield] = ACTIONS(79),
    [anon_sym_BaseEvasion] = ACTIONS(79),
    [anon_sym_BaseWard] = ACTIONS(79),
    [anon_sym_Mirrored] = ACTIONS(79),
    [anon_sym_Corrupted] = ACTIONS(79),
    [anon_sym_Identified] = ACTIONS(79),
    [anon_sym_Synthesised] = ACTIONS(79),
    [anon_sym_ShaperItem] = ACTIONS(79),
    [anon_sym_ElderItem] = ACTIONS(79),
    [anon_sym_AnyEnchantment] = ACTIONS(79),
    [anon_sym_FracturedItem] = ACTIONS(79),
    [anon_sym_Replica] = ACTIONS(79),
    [anon_sym_Scourged] = ACTIONS(79),
    [anon_sym_TransfiguredGem] = ACTIONS(79),
    [anon_sym_AlternateQuality] = ACTIONS(79),
    [anon_sym_CorruptedMods] = ACTIONS(79),
    [anon_sym_SynthesisedItem] = ACTIONS(79),
    [anon_sym_SetFontSize] = ACTIONS(82),
    [anon_sym_SetTextColor] = ACTIONS(82),
    [anon_sym_SetBorderColor] = ACTIONS(82),
    [anon_sym_SetBackgroundColor] = ACTIONS(82),
    [anon_sym_DisableDropSound] = ACTIONS(82),
    [anon_sym_PlayAlertSound] = ACTIONS(82),
    [anon_sym_PlayAlertSoundPositional] = ACTIONS(82),
    [anon_sym_CustomAlertSound] = ACTIONS(82),
    [anon_sym_PlayEffect] = ACTIONS(82),
    [anon_sym_MinimapIcon] = ACTIONS(82),
    [anon_sym_Section] = ACTIONS(85),
    [anon_sym_Style] = ACTIONS(88),
    [anon_sym_var] = ACTIONS(91),
    [anon_sym_Import] = ACTIONS(94),
    [anon_sym_RBRACE] = ACTIONS(97),
  },
  [7] = {
    [sym_statement] = STATE(42),
    [sym_inline_comment] = STATE(64),
    [sym_show_hide_statement] = STATE(58),
    [sym_condition_statement] = STATE(58),
    [sym_condition_name] = STATE(16),
    [sym_action_statement] = STATE(15),
    [sym_action_name] = STATE(24),
    [sym_section_declaration] = STATE(58),
    [sym_style_declaration] = STATE(58),
    [sym_variable_declaration] = STATE(58),
    [sym_import_statement] = STATE(58),
    [aux_sym_empty_line_token1] = ACTIONS(99),
    [anon_sym_POUND] = ACTIONS(101),
    [anon_sym_Show] = ACTIONS(11),
    [anon_sym_Hide] = ACTIONS(11),
    [anon_sym_ShowD] = ACTIONS(103),
    [anon_sym_HideD] = ACTIONS(103),
    [anon_sym_Continue] = ACTIONS(103),
    [anon_sym_Cont] = ACTIONS(11),
    [anon_sym_ItemLevel] = ACTIONS(105),
    [anon_sym_DropLevel] = ACTIONS(105),
    [anon_sym_AreaLevel] = ACTIONS(105),
    [anon_sym_GemLevel] = ACTIONS(105),
    [anon_sym_StackSize] = ACTIONS(105),
    [anon_sym_Height] = ACTIONS(105),
    [anon_sym_Width] = ACTIONS(105),
    [anon_sym_Sockets] = ACTIONS(105),
    [anon_sym_LinkedSockets] = ACTIONS(105),
    [anon_sym_SocketGroup] = ACTIONS(105),
    [anon_sym_Class] = ACTIONS(105),
    [anon_sym_BaseType] = ACTIONS(105),
    [anon_sym_Rarity] = ACTIONS(105),
    [anon_sym_Quality] = ACTIONS(105),
    [anon_sym_HasInfluence] = ACTIONS(105),
    [anon_sym_HasSearingExarchImplicit] = ACTIONS(105),
    [anon_sym_HasEaterOfWorldsImplicit] = ACTIONS(105),
    [anon_sym_HasCruciblePassiveTree] = ACTIONS(105),
    [anon_sym_HasExplicitMod] = ACTIONS(105),
    [anon_sym_HasImplicitMod] = ACTIONS(105),
    [anon_sym_ShapedMap] = ACTIONS(105),
    [anon_sym_ElderMap] = ACTIONS(105),
    [anon_sym_BlightedMap] = ACTIONS(105),
    [anon_sym_UberBlightedMap] = ACTIONS(105),
    [anon_sym_MapTier] = ACTIONS(105),
    [anon_sym_EnchantmentPassiveNode] = ACTIONS(105),
    [anon_sym_EnchantmentPassiveNum] = ACTIONS(105),
    [anon_sym_BaseArmour] = ACTIONS(105),
    [anon_sym_BaseDefencePercentile] = ACTIONS(105),
    [anon_sym_BaseEnergyShield] = ACTIONS(105),
    [anon_sym_BaseEvasion] = ACTIONS(105),
    [anon_sym_BaseWard] = ACTIONS(105),
    [anon_sym_Mirrored] = ACTIONS(105),
    [anon_sym_Corrupted] = ACTIONS(13),
    [anon_sym_Identified] = ACTIONS(105),
    [anon_sym_Synthesised] = ACTIONS(13),
    [anon_sym_ShaperItem] = ACTIONS(105),
    [anon_sym_ElderItem] = ACTIONS(105),
    [anon_sym_AnyEnchantment] = ACTIONS(105),
    [anon_sym_FracturedItem] = ACTIONS(105),
    [anon_sym_Replica] = ACTIONS(105),
    [anon_sym_Scourged] = ACTIONS(105),
    [anon_sym_TransfiguredGem] = ACTIONS(105),
    [anon_sym_AlternateQuality] = ACTIONS(105),
    [anon_sym_CorruptedMods] = ACTIONS(105),
    [anon_sym_SynthesisedItem] = ACTIONS(105),
    [anon_sym_SetFontSize] = ACTIONS(107),
    [anon_sym_SetTextColor] = ACTIONS(107),
    [anon_sym_SetBorderColor] = ACTIONS(107),
    [anon_sym_SetBackgroundColor] = ACTIONS(107),
    [anon_sym_DisableDropSound] = ACTIONS(107),
    [anon_sym_PlayAlertSound] = ACTIONS(15),
    [anon_sym_PlayAlertSoundPositional] = ACTIONS(107),
    [anon_sym_CustomAlertSound] = ACTIONS(107),
    [anon_sym_PlayEffect] = ACTIONS(107),
    [anon_sym_MinimapIcon] = ACTIONS(107),
    [anon_sym_Section] = ACTIONS(109),
    [anon_sym_Style] = ACTIONS(111),
    [anon_sym_var] = ACTIONS(113),
    [anon_sym_Import] = ACTIONS(115),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(117),
    [aux_sym_empty_line_token1] = ACTIONS(119),
    [anon_sym_POUND] = ACTIONS(119),
    [aux_sym_indent_token1] = ACTIONS(117),
    [anon_sym_Show] = ACTIONS(119),
    [anon_sym_Hide] = ACTIONS(119),
    [anon_sym_ShowD] = ACTIONS(119),
    [anon_sym_HideD] = ACTIONS(119),
    [anon_sym_Continue] = ACTIONS(119),
    [anon_sym_Cont] = ACTIONS(119),
    [anon_sym_ItemLevel] = ACTIONS(119),
    [anon_sym_DropLevel] = ACTIONS(119),
    [anon_sym_AreaLevel] = ACTIONS(119),
    [anon_sym_GemLevel] = ACTIONS(119),
    [anon_sym_StackSize] = ACTIONS(119),
    [anon_sym_Height] = ACTIONS(119),
    [anon_sym_Width] = ACTIONS(119),
    [anon_sym_Sockets] = ACTIONS(119),
    [anon_sym_LinkedSockets] = ACTIONS(119),
    [anon_sym_SocketGroup] = ACTIONS(119),
    [anon_sym_Class] = ACTIONS(119),
    [anon_sym_BaseType] = ACTIONS(119),
    [anon_sym_Rarity] = ACTIONS(119),
    [anon_sym_Quality] = ACTIONS(119),
    [anon_sym_HasInfluence] = ACTIONS(119),
    [anon_sym_HasSearingExarchImplicit] = ACTIONS(119),
    [anon_sym_HasEaterOfWorldsImplicit] = ACTIONS(119),
    [anon_sym_HasCruciblePassiveTree] = ACTIONS(119),
    [anon_sym_HasExplicitMod] = ACTIONS(119),
    [anon_sym_HasImplicitMod] = ACTIONS(119),
    [anon_sym_ShapedMap] = ACTIONS(119),
    [anon_sym_ElderMap] = ACTIONS(119),
    [anon_sym_BlightedMap] = ACTIONS(119),
    [anon_sym_UberBlightedMap] = ACTIONS(119),
    [anon_sym_MapTier] = ACTIONS(119),
    [anon_sym_EnchantmentPassiveNode] = ACTIONS(119),
    [anon_sym_EnchantmentPassiveNum] = ACTIONS(119),
    [anon_sym_BaseArmour] = ACTIONS(119),
    [anon_sym_BaseDefencePercentile] = ACTIONS(119),
    [anon_sym_BaseEnergyShield] = ACTIONS(119),
    [anon_sym_BaseEvasion] = ACTIONS(119),
    [anon_sym_BaseWard] = ACTIONS(119),
    [anon_sym_Mirrored] = ACTIONS(119),
    [anon_sym_Corrupted] = ACTIONS(119),
    [anon_sym_Identified] = ACTIONS(119),
    [anon_sym_Synthesised] = ACTIONS(119),
    [anon_sym_ShaperItem] = ACTIONS(119),
    [anon_sym_ElderItem] = ACTIONS(119),
    [anon_sym_AnyEnchantment] = ACTIONS(119),
    [anon_sym_FracturedItem] = ACTIONS(119),
    [anon_sym_Replica] = ACTIONS(119),
    [anon_sym_Scourged] = ACTIONS(119),
    [anon_sym_TransfiguredGem] = ACTIONS(119),
    [anon_sym_AlternateQuality] = ACTIONS(119),
    [anon_sym_CorruptedMods] = ACTIONS(119),
    [anon_sym_SynthesisedItem] = ACTIONS(119),
    [anon_sym_SetFontSize] = ACTIONS(119),
    [anon_sym_SetTextColor] = ACTIONS(119),
    [anon_sym_SetBorderColor] = ACTIONS(119),
    [anon_sym_SetBackgroundColor] = ACTIONS(119),
    [anon_sym_DisableDropSound] = ACTIONS(119),
    [anon_sym_PlayAlertSound] = ACTIONS(119),
    [anon_sym_PlayAlertSoundPositional] = ACTIONS(119),
    [anon_sym_CustomAlertSound] = ACTIONS(119),
    [anon_sym_PlayEffect] = ACTIONS(119),
    [anon_sym_MinimapIcon] = ACTIONS(119),
    [anon_sym_Section] = ACTIONS(119),
    [anon_sym_Style] = ACTIONS(119),
    [anon_sym_var] = ACTIONS(119),
    [anon_sym_Import] = ACTIONS(119),
    [anon_sym_RBRACE] = ACTIONS(119),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(121),
    [aux_sym_empty_line_token1] = ACTIONS(123),
    [anon_sym_POUND] = ACTIONS(123),
    [aux_sym_indent_token1] = ACTIONS(121),
    [anon_sym_Show] = ACTIONS(123),
    [anon_sym_Hide] = ACTIONS(123),
    [anon_sym_ShowD] = ACTIONS(123),
    [anon_sym_HideD] = ACTIONS(123),
    [anon_sym_Continue] = ACTIONS(123),
    [anon_sym_Cont] = ACTIONS(123),
    [anon_sym_ItemLevel] = ACTIONS(123),
    [anon_sym_DropLevel] = ACTIONS(123),
    [anon_sym_AreaLevel] = ACTIONS(123),
    [anon_sym_GemLevel] = ACTIONS(123),
    [anon_sym_StackSize] = ACTIONS(123),
    [anon_sym_Height] = ACTIONS(123),
    [anon_sym_Width] = ACTIONS(123),
    [anon_sym_Sockets] = ACTIONS(123),
    [anon_sym_LinkedSockets] = ACTIONS(123),
    [anon_sym_SocketGroup] = ACTIONS(123),
    [anon_sym_Class] = ACTIONS(123),
    [anon_sym_BaseType] = ACTIONS(123),
    [anon_sym_Rarity] = ACTIONS(123),
    [anon_sym_Quality] = ACTIONS(123),
    [anon_sym_HasInfluence] = ACTIONS(123),
    [anon_sym_HasSearingExarchImplicit] = ACTIONS(123),
    [anon_sym_HasEaterOfWorldsImplicit] = ACTIONS(123),
    [anon_sym_HasCruciblePassiveTree] = ACTIONS(123),
    [anon_sym_HasExplicitMod] = ACTIONS(123),
    [anon_sym_HasImplicitMod] = ACTIONS(123),
    [anon_sym_ShapedMap] = ACTIONS(123),
    [anon_sym_ElderMap] = ACTIONS(123),
    [anon_sym_BlightedMap] = ACTIONS(123),
    [anon_sym_UberBlightedMap] = ACTIONS(123),
    [anon_sym_MapTier] = ACTIONS(123),
    [anon_sym_EnchantmentPassiveNode] = ACTIONS(123),
    [anon_sym_EnchantmentPassiveNum] = ACTIONS(123),
    [anon_sym_BaseArmour] = ACTIONS(123),
    [anon_sym_BaseDefencePercentile] = ACTIONS(123),
    [anon_sym_BaseEnergyShield] = ACTIONS(123),
    [anon_sym_BaseEvasion] = ACTIONS(123),
    [anon_sym_BaseWard] = ACTIONS(123),
    [anon_sym_Mirrored] = ACTIONS(123),
    [anon_sym_Corrupted] = ACTIONS(123),
    [anon_sym_Identified] = ACTIONS(123),
    [anon_sym_Synthesised] = ACTIONS(123),
    [anon_sym_ShaperItem] = ACTIONS(123),
    [anon_sym_ElderItem] = ACTIONS(123),
    [anon_sym_AnyEnchantment] = ACTIONS(123),
    [anon_sym_FracturedItem] = ACTIONS(123),
    [anon_sym_Replica] = ACTIONS(123),
    [anon_sym_Scourged] = ACTIONS(123),
    [anon_sym_TransfiguredGem] = ACTIONS(123),
    [anon_sym_AlternateQuality] = ACTIONS(123),
    [anon_sym_CorruptedMods] = ACTIONS(123),
    [anon_sym_SynthesisedItem] = ACTIONS(123),
    [anon_sym_SetFontSize] = ACTIONS(123),
    [anon_sym_SetTextColor] = ACTIONS(123),
    [anon_sym_SetBorderColor] = ACTIONS(123),
    [anon_sym_SetBackgroundColor] = ACTIONS(123),
    [anon_sym_DisableDropSound] = ACTIONS(123),
    [anon_sym_PlayAlertSound] = ACTIONS(123),
    [anon_sym_PlayAlertSoundPositional] = ACTIONS(123),
    [anon_sym_CustomAlertSound] = ACTIONS(123),
    [anon_sym_PlayEffect] = ACTIONS(123),
    [anon_sym_MinimapIcon] = ACTIONS(123),
    [anon_sym_Section] = ACTIONS(123),
    [anon_sym_Style] = ACTIONS(123),
    [anon_sym_var] = ACTIONS(123),
    [anon_sym_Import] = ACTIONS(123),
    [anon_sym_RBRACE] = ACTIONS(123),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(125),
    [aux_sym_empty_line_token1] = ACTIONS(127),
    [anon_sym_POUND] = ACTIONS(127),
    [aux_sym_indent_token1] = ACTIONS(125),
    [anon_sym_Show] = ACTIONS(127),
    [anon_sym_Hide] = ACTIONS(127),
    [anon_sym_ShowD] = ACTIONS(127),
    [anon_sym_HideD] = ACTIONS(127),
    [anon_sym_Continue] = ACTIONS(127),
    [anon_sym_Cont] = ACTIONS(127),
    [anon_sym_ItemLevel] = ACTIONS(127),
    [anon_sym_DropLevel] = ACTIONS(127),
    [anon_sym_AreaLevel] = ACTIONS(127),
    [anon_sym_GemLevel] = ACTIONS(127),
    [anon_sym_StackSize] = ACTIONS(127),
    [anon_sym_Height] = ACTIONS(127),
    [anon_sym_Width] = ACTIONS(127),
    [anon_sym_Sockets] = ACTIONS(127),
    [anon_sym_LinkedSockets] = ACTIONS(127),
    [anon_sym_SocketGroup] = ACTIONS(127),
    [anon_sym_Class] = ACTIONS(127),
    [anon_sym_BaseType] = ACTIONS(127),
    [anon_sym_Rarity] = ACTIONS(127),
    [anon_sym_Quality] = ACTIONS(127),
    [anon_sym_HasInfluence] = ACTIONS(127),
    [anon_sym_HasSearingExarchImplicit] = ACTIONS(127),
    [anon_sym_HasEaterOfWorldsImplicit] = ACTIONS(127),
    [anon_sym_HasCruciblePassiveTree] = ACTIONS(127),
    [anon_sym_HasExplicitMod] = ACTIONS(127),
    [anon_sym_HasImplicitMod] = ACTIONS(127),
    [anon_sym_ShapedMap] = ACTIONS(127),
    [anon_sym_ElderMap] = ACTIONS(127),
    [anon_sym_BlightedMap] = ACTIONS(127),
    [anon_sym_UberBlightedMap] = ACTIONS(127),
    [anon_sym_MapTier] = ACTIONS(127),
    [anon_sym_EnchantmentPassiveNode] = ACTIONS(127),
    [anon_sym_EnchantmentPassiveNum] = ACTIONS(127),
    [anon_sym_BaseArmour] = ACTIONS(127),
    [anon_sym_BaseDefencePercentile] = ACTIONS(127),
    [anon_sym_BaseEnergyShield] = ACTIONS(127),
    [anon_sym_BaseEvasion] = ACTIONS(127),
    [anon_sym_BaseWard] = ACTIONS(127),
    [anon_sym_Mirrored] = ACTIONS(127),
    [anon_sym_Corrupted] = ACTIONS(127),
    [anon_sym_Identified] = ACTIONS(127),
    [anon_sym_Synthesised] = ACTIONS(127),
    [anon_sym_ShaperItem] = ACTIONS(127),
    [anon_sym_ElderItem] = ACTIONS(127),
    [anon_sym_AnyEnchantment] = ACTIONS(127),
    [anon_sym_FracturedItem] = ACTIONS(127),
    [anon_sym_Replica] = ACTIONS(127),
    [anon_sym_Scourged] = ACTIONS(127),
    [anon_sym_TransfiguredGem] = ACTIONS(127),
    [anon_sym_AlternateQuality] = ACTIONS(127),
    [anon_sym_CorruptedMods] = ACTIONS(127),
    [anon_sym_SynthesisedItem] = ACTIONS(127),
    [anon_sym_SetFontSize] = ACTIONS(127),
    [anon_sym_SetTextColor] = ACTIONS(127),
    [anon_sym_SetBorderColor] = ACTIONS(127),
    [anon_sym_SetBackgroundColor] = ACTIONS(127),
    [anon_sym_DisableDropSound] = ACTIONS(127),
    [anon_sym_PlayAlertSound] = ACTIONS(127),
    [anon_sym_PlayAlertSoundPositional] = ACTIONS(127),
    [anon_sym_CustomAlertSound] = ACTIONS(127),
    [anon_sym_PlayEffect] = ACTIONS(127),
    [anon_sym_MinimapIcon] = ACTIONS(127),
    [anon_sym_Section] = ACTIONS(127),
    [anon_sym_Style] = ACTIONS(127),
    [anon_sym_var] = ACTIONS(127),
    [anon_sym_Import] = ACTIONS(127),
    [anon_sym_RBRACE] = ACTIONS(127),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(129),
    [aux_sym_empty_line_token1] = ACTIONS(132),
    [anon_sym_POUND] = ACTIONS(132),
    [aux_sym_indent_token1] = ACTIONS(129),
    [anon_sym_Show] = ACTIONS(132),
    [anon_sym_Hide] = ACTIONS(132),
    [anon_sym_ShowD] = ACTIONS(132),
    [anon_sym_HideD] = ACTIONS(132),
    [anon_sym_Continue] = ACTIONS(132),
    [anon_sym_Cont] = ACTIONS(132),
    [anon_sym_ItemLevel] = ACTIONS(132),
    [anon_sym_DropLevel] = ACTIONS(132),
    [anon_sym_AreaLevel] = ACTIONS(132),
    [anon_sym_GemLevel] = ACTIONS(132),
    [anon_sym_StackSize] = ACTIONS(132),
    [anon_sym_Height] = ACTIONS(132),
    [anon_sym_Width] = ACTIONS(132),
    [anon_sym_Sockets] = ACTIONS(132),
    [anon_sym_LinkedSockets] = ACTIONS(132),
    [anon_sym_SocketGroup] = ACTIONS(132),
    [anon_sym_Class] = ACTIONS(132),
    [anon_sym_BaseType] = ACTIONS(132),
    [anon_sym_Rarity] = ACTIONS(132),
    [anon_sym_Quality] = ACTIONS(132),
    [anon_sym_HasInfluence] = ACTIONS(132),
    [anon_sym_HasSearingExarchImplicit] = ACTIONS(132),
    [anon_sym_HasEaterOfWorldsImplicit] = ACTIONS(132),
    [anon_sym_HasCruciblePassiveTree] = ACTIONS(132),
    [anon_sym_HasExplicitMod] = ACTIONS(132),
    [anon_sym_HasImplicitMod] = ACTIONS(132),
    [anon_sym_ShapedMap] = ACTIONS(132),
    [anon_sym_ElderMap] = ACTIONS(132),
    [anon_sym_BlightedMap] = ACTIONS(132),
    [anon_sym_UberBlightedMap] = ACTIONS(132),
    [anon_sym_MapTier] = ACTIONS(132),
    [anon_sym_EnchantmentPassiveNode] = ACTIONS(132),
    [anon_sym_EnchantmentPassiveNum] = ACTIONS(132),
    [anon_sym_BaseArmour] = ACTIONS(132),
    [anon_sym_BaseDefencePercentile] = ACTIONS(132),
    [anon_sym_BaseEnergyShield] = ACTIONS(132),
    [anon_sym_BaseEvasion] = ACTIONS(132),
    [anon_sym_BaseWard] = ACTIONS(132),
    [anon_sym_Mirrored] = ACTIONS(132),
    [anon_sym_Corrupted] = ACTIONS(132),
    [anon_sym_Identified] = ACTIONS(132),
    [anon_sym_Synthesised] = ACTIONS(132),
    [anon_sym_ShaperItem] = ACTIONS(132),
    [anon_sym_ElderItem] = ACTIONS(132),
    [anon_sym_AnyEnchantment] = ACTIONS(132),
    [anon_sym_FracturedItem] = ACTIONS(132),
    [anon_sym_Replica] = ACTIONS(132),
    [anon_sym_Scourged] = ACTIONS(132),
    [anon_sym_TransfiguredGem] = ACTIONS(132),
    [anon_sym_AlternateQuality] = ACTIONS(132),
    [anon_sym_CorruptedMods] = ACTIONS(132),
    [anon_sym_SynthesisedItem] = ACTIONS(132),
    [anon_sym_SetFontSize] = ACTIONS(132),
    [anon_sym_SetTextColor] = ACTIONS(132),
    [anon_sym_SetBorderColor] = ACTIONS(132),
    [anon_sym_SetBackgroundColor] = ACTIONS(132),
    [anon_sym_DisableDropSound] = ACTIONS(132),
    [anon_sym_PlayAlertSound] = ACTIONS(132),
    [anon_sym_PlayAlertSoundPositional] = ACTIONS(132),
    [anon_sym_CustomAlertSound] = ACTIONS(132),
    [anon_sym_PlayEffect] = ACTIONS(132),
    [anon_sym_MinimapIcon] = ACTIONS(132),
    [anon_sym_Section] = ACTIONS(132),
    [anon_sym_Style] = ACTIONS(132),
    [anon_sym_var] = ACTIONS(132),
    [anon_sym_Import] = ACTIONS(132),
  },
  [12] = {
    [aux_sym_empty_line_token1] = ACTIONS(135),
    [anon_sym_POUND] = ACTIONS(135),
    [aux_sym_indent_token1] = ACTIONS(137),
    [anon_sym_Show] = ACTIONS(135),
    [anon_sym_Hide] = ACTIONS(135),
    [anon_sym_ShowD] = ACTIONS(135),
    [anon_sym_HideD] = ACTIONS(135),
    [anon_sym_Continue] = ACTIONS(135),
    [anon_sym_Cont] = ACTIONS(135),
    [anon_sym_ItemLevel] = ACTIONS(135),
    [anon_sym_DropLevel] = ACTIONS(135),
    [anon_sym_AreaLevel] = ACTIONS(135),
    [anon_sym_GemLevel] = ACTIONS(135),
    [anon_sym_StackSize] = ACTIONS(135),
    [anon_sym_Height] = ACTIONS(135),
    [anon_sym_Width] = ACTIONS(135),
    [anon_sym_Sockets] = ACTIONS(135),
    [anon_sym_LinkedSockets] = ACTIONS(135),
    [anon_sym_SocketGroup] = ACTIONS(135),
    [anon_sym_Class] = ACTIONS(135),
    [anon_sym_BaseType] = ACTIONS(135),
    [anon_sym_Rarity] = ACTIONS(135),
    [anon_sym_Quality] = ACTIONS(135),
    [anon_sym_HasInfluence] = ACTIONS(135),
    [anon_sym_HasSearingExarchImplicit] = ACTIONS(135),
    [anon_sym_HasEaterOfWorldsImplicit] = ACTIONS(135),
    [anon_sym_HasCruciblePassiveTree] = ACTIONS(135),
    [anon_sym_HasExplicitMod] = ACTIONS(135),
    [anon_sym_HasImplicitMod] = ACTIONS(135),
    [anon_sym_ShapedMap] = ACTIONS(135),
    [anon_sym_ElderMap] = ACTIONS(135),
    [anon_sym_BlightedMap] = ACTIONS(135),
    [anon_sym_UberBlightedMap] = ACTIONS(135),
    [anon_sym_MapTier] = ACTIONS(135),
    [anon_sym_EnchantmentPassiveNode] = ACTIONS(135),
    [anon_sym_EnchantmentPassiveNum] = ACTIONS(135),
    [anon_sym_BaseArmour] = ACTIONS(135),
    [anon_sym_BaseDefencePercentile] = ACTIONS(135),
    [anon_sym_BaseEnergyShield] = ACTIONS(135),
    [anon_sym_BaseEvasion] = ACTIONS(135),
    [anon_sym_BaseWard] = ACTIONS(135),
    [anon_sym_Mirrored] = ACTIONS(135),
    [anon_sym_Corrupted] = ACTIONS(135),
    [anon_sym_Identified] = ACTIONS(135),
    [anon_sym_Synthesised] = ACTIONS(135),
    [anon_sym_ShaperItem] = ACTIONS(135),
    [anon_sym_ElderItem] = ACTIONS(135),
    [anon_sym_AnyEnchantment] = ACTIONS(135),
    [anon_sym_FracturedItem] = ACTIONS(135),
    [anon_sym_Replica] = ACTIONS(135),
    [anon_sym_Scourged] = ACTIONS(135),
    [anon_sym_TransfiguredGem] = ACTIONS(135),
    [anon_sym_AlternateQuality] = ACTIONS(135),
    [anon_sym_CorruptedMods] = ACTIONS(135),
    [anon_sym_SynthesisedItem] = ACTIONS(135),
    [anon_sym_SetFontSize] = ACTIONS(135),
    [anon_sym_SetTextColor] = ACTIONS(135),
    [anon_sym_SetBorderColor] = ACTIONS(135),
    [anon_sym_SetBackgroundColor] = ACTIONS(135),
    [anon_sym_DisableDropSound] = ACTIONS(135),
    [anon_sym_PlayAlertSound] = ACTIONS(135),
    [anon_sym_PlayAlertSoundPositional] = ACTIONS(135),
    [anon_sym_CustomAlertSound] = ACTIONS(135),
    [anon_sym_PlayEffect] = ACTIONS(135),
    [anon_sym_MinimapIcon] = ACTIONS(135),
    [anon_sym_Section] = ACTIONS(135),
    [anon_sym_Style] = ACTIONS(135),
    [anon_sym_var] = ACTIONS(135),
    [anon_sym_Import] = ACTIONS(135),
    [anon_sym_RBRACE] = ACTIONS(135),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(139),
    [aux_sym_empty_line_token1] = ACTIONS(141),
    [anon_sym_POUND] = ACTIONS(141),
    [aux_sym_indent_token1] = ACTIONS(139),
    [anon_sym_Show] = ACTIONS(141),
    [anon_sym_Hide] = ACTIONS(141),
    [anon_sym_ShowD] = ACTIONS(141),
    [anon_sym_HideD] = ACTIONS(141),
    [anon_sym_Continue] = ACTIONS(141),
    [anon_sym_Cont] = ACTIONS(141),
    [anon_sym_ItemLevel] = ACTIONS(141),
    [anon_sym_DropLevel] = ACTIONS(141),
    [anon_sym_AreaLevel] = ACTIONS(141),
    [anon_sym_GemLevel] = ACTIONS(141),
    [anon_sym_StackSize] = ACTIONS(141),
    [anon_sym_Height] = ACTIONS(141),
    [anon_sym_Width] = ACTIONS(141),
    [anon_sym_Sockets] = ACTIONS(141),
    [anon_sym_LinkedSockets] = ACTIONS(141),
    [anon_sym_SocketGroup] = ACTIONS(141),
    [anon_sym_Class] = ACTIONS(141),
    [anon_sym_BaseType] = ACTIONS(141),
    [anon_sym_Rarity] = ACTIONS(141),
    [anon_sym_Quality] = ACTIONS(141),
    [anon_sym_HasInfluence] = ACTIONS(141),
    [anon_sym_HasSearingExarchImplicit] = ACTIONS(141),
    [anon_sym_HasEaterOfWorldsImplicit] = ACTIONS(141),
    [anon_sym_HasCruciblePassiveTree] = ACTIONS(141),
    [anon_sym_HasExplicitMod] = ACTIONS(141),
    [anon_sym_HasImplicitMod] = ACTIONS(141),
    [anon_sym_ShapedMap] = ACTIONS(141),
    [anon_sym_ElderMap] = ACTIONS(141),
    [anon_sym_BlightedMap] = ACTIONS(141),
    [anon_sym_UberBlightedMap] = ACTIONS(141),
    [anon_sym_MapTier] = ACTIONS(141),
    [anon_sym_EnchantmentPassiveNode] = ACTIONS(141),
    [anon_sym_EnchantmentPassiveNum] = ACTIONS(141),
    [anon_sym_BaseArmour] = ACTIONS(141),
    [anon_sym_BaseDefencePercentile] = ACTIONS(141),
    [anon_sym_BaseEnergyShield] = ACTIONS(141),
    [anon_sym_BaseEvasion] = ACTIONS(141),
    [anon_sym_BaseWard] = ACTIONS(141),
    [anon_sym_Mirrored] = ACTIONS(141),
    [anon_sym_Corrupted] = ACTIONS(141),
    [anon_sym_Identified] = ACTIONS(141),
    [anon_sym_Synthesised] = ACTIONS(141),
    [anon_sym_ShaperItem] = ACTIONS(141),
    [anon_sym_ElderItem] = ACTIONS(141),
    [anon_sym_AnyEnchantment] = ACTIONS(141),
    [anon_sym_FracturedItem] = ACTIONS(141),
    [anon_sym_Replica] = ACTIONS(141),
    [anon_sym_Scourged] = ACTIONS(141),
    [anon_sym_TransfiguredGem] = ACTIONS(141),
    [anon_sym_AlternateQuality] = ACTIONS(141),
    [anon_sym_CorruptedMods] = ACTIONS(141),
    [anon_sym_SynthesisedItem] = ACTIONS(141),
    [anon_sym_SetFontSize] = ACTIONS(141),
    [anon_sym_SetTextColor] = ACTIONS(141),
    [anon_sym_SetBorderColor] = ACTIONS(141),
    [anon_sym_SetBackgroundColor] = ACTIONS(141),
    [anon_sym_DisableDropSound] = ACTIONS(141),
    [anon_sym_PlayAlertSound] = ACTIONS(141),
    [anon_sym_PlayAlertSoundPositional] = ACTIONS(141),
    [anon_sym_CustomAlertSound] = ACTIONS(141),
    [anon_sym_PlayEffect] = ACTIONS(141),
    [anon_sym_MinimapIcon] = ACTIONS(141),
    [anon_sym_Section] = ACTIONS(141),
    [anon_sym_Style] = ACTIONS(141),
    [anon_sym_var] = ACTIONS(141),
    [anon_sym_Import] = ACTIONS(141),
  },
  [14] = {
    [aux_sym_empty_line_token1] = ACTIONS(143),
    [anon_sym_POUND] = ACTIONS(143),
    [anon_sym_Show] = ACTIONS(145),
    [anon_sym_Hide] = ACTIONS(145),
    [anon_sym_ShowD] = ACTIONS(143),
    [anon_sym_HideD] = ACTIONS(143),
    [anon_sym_Continue] = ACTIONS(143),
    [anon_sym_Cont] = ACTIONS(145),
    [anon_sym_ItemLevel] = ACTIONS(143),
    [anon_sym_DropLevel] = ACTIONS(143),
    [anon_sym_AreaLevel] = ACTIONS(143),
    [anon_sym_GemLevel] = ACTIONS(143),
    [anon_sym_StackSize] = ACTIONS(143),
    [anon_sym_Height] = ACTIONS(143),
    [anon_sym_Width] = ACTIONS(143),
    [anon_sym_Sockets] = ACTIONS(143),
    [anon_sym_LinkedSockets] = ACTIONS(143),
    [anon_sym_SocketGroup] = ACTIONS(143),
    [anon_sym_Class] = ACTIONS(143),
    [anon_sym_BaseType] = ACTIONS(143),
    [anon_sym_Rarity] = ACTIONS(143),
    [anon_sym_Quality] = ACTIONS(143),
    [anon_sym_HasInfluence] = ACTIONS(143),
    [anon_sym_HasSearingExarchImplicit] = ACTIONS(143),
    [anon_sym_HasEaterOfWorldsImplicit] = ACTIONS(143),
    [anon_sym_HasCruciblePassiveTree] = ACTIONS(143),
    [anon_sym_HasExplicitMod] = ACTIONS(143),
    [anon_sym_HasImplicitMod] = ACTIONS(143),
    [anon_sym_ShapedMap] = ACTIONS(143),
    [anon_sym_ElderMap] = ACTIONS(143),
    [anon_sym_BlightedMap] = ACTIONS(143),
    [anon_sym_UberBlightedMap] = ACTIONS(143),
    [anon_sym_MapTier] = ACTIONS(143),
    [anon_sym_EnchantmentPassiveNode] = ACTIONS(143),
    [anon_sym_EnchantmentPassiveNum] = ACTIONS(143),
    [anon_sym_BaseArmour] = ACTIONS(143),
    [anon_sym_BaseDefencePercentile] = ACTIONS(143),
    [anon_sym_BaseEnergyShield] = ACTIONS(143),
    [anon_sym_BaseEvasion] = ACTIONS(143),
    [anon_sym_BaseWard] = ACTIONS(143),
    [anon_sym_Mirrored] = ACTIONS(143),
    [anon_sym_Corrupted] = ACTIONS(145),
    [anon_sym_Identified] = ACTIONS(143),
    [anon_sym_Synthesised] = ACTIONS(145),
    [anon_sym_ShaperItem] = ACTIONS(143),
    [anon_sym_ElderItem] = ACTIONS(143),
    [anon_sym_AnyEnchantment] = ACTIONS(143),
    [anon_sym_FracturedItem] = ACTIONS(143),
    [anon_sym_Replica] = ACTIONS(143),
    [anon_sym_Scourged] = ACTIONS(143),
    [anon_sym_TransfiguredGem] = ACTIONS(143),
    [anon_sym_AlternateQuality] = ACTIONS(143),
    [anon_sym_CorruptedMods] = ACTIONS(143),
    [anon_sym_SynthesisedItem] = ACTIONS(143),
    [anon_sym_SetFontSize] = ACTIONS(143),
    [anon_sym_SetTextColor] = ACTIONS(143),
    [anon_sym_SetBorderColor] = ACTIONS(143),
    [anon_sym_SetBackgroundColor] = ACTIONS(143),
    [anon_sym_DisableDropSound] = ACTIONS(143),
    [anon_sym_PlayAlertSound] = ACTIONS(145),
    [anon_sym_PlayAlertSoundPositional] = ACTIONS(143),
    [anon_sym_CustomAlertSound] = ACTIONS(143),
    [anon_sym_PlayEffect] = ACTIONS(143),
    [anon_sym_MinimapIcon] = ACTIONS(143),
    [anon_sym_Section] = ACTIONS(143),
    [anon_sym_Style] = ACTIONS(143),
    [anon_sym_var] = ACTIONS(143),
    [anon_sym_Import] = ACTIONS(143),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    STATE(22), 1,
      sym_comparison_op,
    STATE(26), 1,
      aux_sym_value_list_repeat1,
    STATE(28), 1,
      sym_boolean,
    STATE(31), 1,
      aux_sym_string_list_repeat1,
    STATE(40), 1,
      sym_quoted_string,
    STATE(46), 1,
      sym_value_list,
    STATE(47), 1,
      sym_string_list,
    STATE(48), 1,
      sym_condition_value,
    ACTIONS(147), 2,
      sym_number,
      sym_identifier,
    ACTIONS(149), 2,
      aux_sym_empty_line_token1,
      anon_sym_POUND,
    ACTIONS(157), 2,
      anon_sym_True,
      anon_sym_False,
    ACTIONS(151), 3,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(153), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [51] = 13,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    STATE(22), 1,
      sym_comparison_op,
    STATE(26), 1,
      aux_sym_value_list_repeat1,
    STATE(28), 1,
      sym_boolean,
    STATE(31), 1,
      aux_sym_string_list_repeat1,
    STATE(40), 1,
      sym_quoted_string,
    STATE(46), 1,
      sym_value_list,
    STATE(47), 1,
      sym_string_list,
    STATE(48), 1,
      sym_condition_value,
    ACTIONS(147), 2,
      sym_number,
      sym_identifier,
    ACTIONS(157), 2,
      anon_sym_True,
      anon_sym_False,
    ACTIONS(151), 3,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(153), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [98] = 3,
    STATE(18), 3,
      sym_quoted_string,
      sym_boolean,
      aux_sym_action_values_repeat1,
    ACTIONS(159), 7,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      sym_number,
      sym_identifier,
      anon_sym_True,
      anon_sym_False,
    ACTIONS(161), 7,
      aux_sym_empty_line_token1,
      anon_sym_POUND,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_DQUOTE,
  [122] = 6,
    ACTIONS(170), 1,
      anon_sym_DQUOTE,
    ACTIONS(163), 2,
      sym_number,
      sym_identifier,
    ACTIONS(173), 2,
      anon_sym_True,
      anon_sym_False,
    ACTIONS(168), 3,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
    STATE(18), 3,
      sym_quoted_string,
      sym_boolean,
      aux_sym_action_values_repeat1,
    ACTIONS(166), 6,
      aux_sym_empty_line_token1,
      anon_sym_POUND,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [152] = 2,
    ACTIONS(178), 7,
      aux_sym_empty_line_token1,
      anon_sym_POUND,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_DQUOTE,
    ACTIONS(176), 8,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      sym_number,
      sym_identifier,
      anon_sym_True,
      anon_sym_False,
      anon_sym_Optional,
  [172] = 2,
    ACTIONS(180), 7,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      sym_number,
      sym_identifier,
      anon_sym_True,
      anon_sym_False,
    ACTIONS(182), 7,
      aux_sym_empty_line_token1,
      anon_sym_POUND,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_DQUOTE,
  [191] = 2,
    ACTIONS(184), 7,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      sym_number,
      sym_identifier,
      anon_sym_True,
      anon_sym_False,
    ACTIONS(186), 7,
      aux_sym_empty_line_token1,
      anon_sym_POUND,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_DQUOTE,
  [210] = 10,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    STATE(26), 1,
      aux_sym_value_list_repeat1,
    STATE(28), 1,
      sym_boolean,
    STATE(31), 1,
      aux_sym_string_list_repeat1,
    STATE(40), 1,
      sym_quoted_string,
    STATE(53), 1,
      sym_value_list,
    STATE(55), 1,
      sym_string_list,
    STATE(62), 1,
      sym_condition_value,
    ACTIONS(147), 2,
      sym_number,
      sym_identifier,
    ACTIONS(157), 2,
      anon_sym_True,
      anon_sym_False,
  [243] = 2,
    ACTIONS(190), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_DQUOTE,
    ACTIONS(188), 7,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      sym_number,
      sym_identifier,
      anon_sym_True,
      anon_sym_False,
  [260] = 5,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    STATE(21), 1,
      sym_action_values,
    ACTIONS(157), 2,
      anon_sym_True,
      anon_sym_False,
    ACTIONS(192), 2,
      sym_number,
      sym_identifier,
    STATE(17), 3,
      sym_quoted_string,
      sym_boolean,
      aux_sym_action_values_repeat1,
  [280] = 4,
    ACTIONS(194), 2,
      sym_number,
      sym_identifier,
    ACTIONS(197), 2,
      aux_sym_empty_line_token1,
      anon_sym_POUND,
    ACTIONS(199), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(25), 2,
      sym_boolean,
      aux_sym_value_list_repeat1,
  [297] = 4,
    ACTIONS(157), 2,
      anon_sym_True,
      anon_sym_False,
    ACTIONS(202), 2,
      sym_number,
      sym_identifier,
    ACTIONS(204), 2,
      aux_sym_empty_line_token1,
      anon_sym_POUND,
    STATE(25), 2,
      sym_boolean,
      aux_sym_value_list_repeat1,
  [314] = 4,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    ACTIONS(157), 2,
      anon_sym_True,
      anon_sym_False,
    ACTIONS(206), 2,
      sym_number,
      sym_identifier,
    STATE(59), 2,
      sym_quoted_string,
      sym_boolean,
  [330] = 2,
    ACTIONS(210), 2,
      aux_sym_empty_line_token1,
      anon_sym_POUND,
    ACTIONS(208), 4,
      sym_number,
      sym_identifier,
      anon_sym_True,
      anon_sym_False,
  [341] = 5,
    ACTIONS(213), 1,
      aux_sym_standalone_comment_token1,
    ACTIONS(215), 1,
      anon_sym_DOLLAR,
    ACTIONS(217), 1,
      anon_sym_PERCENT,
    STATE(36), 1,
      aux_sym_metadata_repeat1,
    STATE(78), 2,
      sym_metadata,
      sym_comment_text,
  [358] = 2,
    ACTIONS(221), 1,
      anon_sym_DQUOTE,
    ACTIONS(219), 4,
      sym_number,
      sym_identifier,
      anon_sym_True,
      anon_sym_False,
  [368] = 3,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    ACTIONS(223), 2,
      aux_sym_empty_line_token1,
      anon_sym_POUND,
    STATE(32), 2,
      sym_quoted_string,
      aux_sym_string_list_repeat1,
  [380] = 3,
    ACTIONS(227), 1,
      anon_sym_DQUOTE,
    ACTIONS(225), 2,
      aux_sym_empty_line_token1,
      anon_sym_POUND,
    STATE(32), 2,
      sym_quoted_string,
      aux_sym_string_list_repeat1,
  [392] = 2,
    ACTIONS(232), 1,
      anon_sym_DQUOTE,
    ACTIONS(230), 4,
      sym_number,
      sym_identifier,
      anon_sym_True,
      anon_sym_False,
  [402] = 4,
    ACTIONS(234), 1,
      aux_sym_empty_line_token1,
    ACTIONS(236), 1,
      anon_sym_DOLLAR,
    ACTIONS(239), 1,
      anon_sym_PERCENT,
    STATE(34), 1,
      aux_sym_metadata_repeat1,
  [415] = 3,
    ACTIONS(244), 1,
      anon_sym_LBRACE,
    STATE(50), 1,
      sym_block,
    ACTIONS(242), 2,
      aux_sym_empty_line_token1,
      anon_sym_POUND,
  [426] = 4,
    ACTIONS(246), 1,
      aux_sym_empty_line_token1,
    ACTIONS(248), 1,
      anon_sym_DOLLAR,
    ACTIONS(250), 1,
      anon_sym_PERCENT,
    STATE(34), 1,
      aux_sym_metadata_repeat1,
  [439] = 3,
    ACTIONS(244), 1,
      anon_sym_LBRACE,
    STATE(51), 1,
      sym_block,
    ACTIONS(252), 2,
      aux_sym_empty_line_token1,
      anon_sym_POUND,
  [450] = 2,
    ACTIONS(256), 1,
      anon_sym_Optional,
    ACTIONS(254), 2,
      aux_sym_empty_line_token1,
      anon_sym_POUND,
  [458] = 3,
    ACTIONS(99), 1,
      aux_sym_empty_line_token1,
    ACTIONS(101), 1,
      anon_sym_POUND,
    STATE(64), 1,
      sym_inline_comment,
  [468] = 2,
    ACTIONS(261), 1,
      anon_sym_DQUOTE,
    ACTIONS(258), 2,
      aux_sym_empty_line_token1,
      anon_sym_POUND,
  [476] = 3,
    ACTIONS(213), 1,
      aux_sym_standalone_comment_token1,
    ACTIONS(263), 1,
      aux_sym_indent_token1,
    STATE(75), 1,
      sym_comment_text,
  [486] = 3,
    ACTIONS(101), 1,
      anon_sym_POUND,
    ACTIONS(265), 1,
      aux_sym_empty_line_token1,
    STATE(73), 1,
      sym_inline_comment,
  [496] = 1,
    ACTIONS(234), 3,
      aux_sym_empty_line_token1,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
  [502] = 3,
    ACTIONS(263), 1,
      aux_sym_indent_token1,
    ACTIONS(267), 1,
      aux_sym_standalone_comment_token1,
    STATE(75), 1,
      sym_comment_text,
  [512] = 1,
    ACTIONS(269), 3,
      aux_sym_empty_line_token1,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
  [518] = 1,
    ACTIONS(271), 2,
      aux_sym_empty_line_token1,
      anon_sym_POUND,
  [523] = 1,
    ACTIONS(271), 2,
      aux_sym_empty_line_token1,
      anon_sym_POUND,
  [528] = 1,
    ACTIONS(271), 2,
      aux_sym_empty_line_token1,
      anon_sym_POUND,
  [533] = 2,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    STATE(38), 1,
      sym_quoted_string,
  [540] = 1,
    ACTIONS(273), 2,
      aux_sym_empty_line_token1,
      anon_sym_POUND,
  [545] = 1,
    ACTIONS(275), 2,
      aux_sym_empty_line_token1,
      anon_sym_POUND,
  [550] = 1,
    ACTIONS(277), 2,
      aux_sym_empty_line_token1,
      anon_sym_POUND,
  [555] = 1,
    ACTIONS(279), 2,
      aux_sym_empty_line_token1,
      anon_sym_POUND,
  [560] = 1,
    ACTIONS(281), 2,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [565] = 1,
    ACTIONS(279), 2,
      aux_sym_empty_line_token1,
      anon_sym_POUND,
  [570] = 2,
    ACTIONS(283), 1,
      anon_sym_SPACE,
    ACTIONS(285), 1,
      sym_number,
  [577] = 1,
    ACTIONS(287), 2,
      aux_sym_empty_line_token1,
      anon_sym_POUND,
  [582] = 1,
    ACTIONS(149), 2,
      aux_sym_empty_line_token1,
      anon_sym_POUND,
  [587] = 1,
    ACTIONS(289), 2,
      aux_sym_empty_line_token1,
      anon_sym_POUND,
  [592] = 1,
    ACTIONS(291), 2,
      aux_sym_empty_line_token1,
      anon_sym_POUND,
  [597] = 1,
    ACTIONS(293), 2,
      aux_sym_empty_line_token1,
      anon_sym_POUND,
  [602] = 1,
    ACTIONS(279), 2,
      aux_sym_empty_line_token1,
      anon_sym_POUND,
  [607] = 1,
    ACTIONS(295), 1,
      sym_identifier,
  [611] = 1,
    ACTIONS(265), 1,
      aux_sym_empty_line_token1,
  [615] = 1,
    ACTIONS(297), 1,
      ts_builtin_sym_end,
  [619] = 1,
    ACTIONS(299), 1,
      sym_identifier,
  [623] = 1,
    ACTIONS(301), 1,
      sym_identifier,
  [627] = 1,
    ACTIONS(303), 1,
      aux_sym_empty_line_token1,
  [631] = 1,
    ACTIONS(305), 1,
      anon_sym_DQUOTE,
  [635] = 1,
    ACTIONS(99), 1,
      aux_sym_empty_line_token1,
  [639] = 1,
    ACTIONS(307), 1,
      aux_sym_quoted_string_token1,
  [643] = 1,
    ACTIONS(309), 1,
      aux_sym_empty_line_token1,
  [647] = 1,
    ACTIONS(311), 1,
      aux_sym_empty_line_token1,
  [651] = 1,
    ACTIONS(313), 1,
      sym_identifier,
  [655] = 1,
    ACTIONS(315), 1,
      aux_sym_empty_line_token1,
  [659] = 1,
    ACTIONS(317), 1,
      sym_identifier,
  [663] = 1,
    ACTIONS(319), 1,
      sym_identifier,
  [667] = 1,
    ACTIONS(321), 1,
      aux_sym_empty_line_token1,
  [671] = 1,
    ACTIONS(323), 1,
      anon_sym_EQ,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(15)] = 0,
  [SMALL_STATE(16)] = 51,
  [SMALL_STATE(17)] = 98,
  [SMALL_STATE(18)] = 122,
  [SMALL_STATE(19)] = 152,
  [SMALL_STATE(20)] = 172,
  [SMALL_STATE(21)] = 191,
  [SMALL_STATE(22)] = 210,
  [SMALL_STATE(23)] = 243,
  [SMALL_STATE(24)] = 260,
  [SMALL_STATE(25)] = 280,
  [SMALL_STATE(26)] = 297,
  [SMALL_STATE(27)] = 314,
  [SMALL_STATE(28)] = 330,
  [SMALL_STATE(29)] = 341,
  [SMALL_STATE(30)] = 358,
  [SMALL_STATE(31)] = 368,
  [SMALL_STATE(32)] = 380,
  [SMALL_STATE(33)] = 392,
  [SMALL_STATE(34)] = 402,
  [SMALL_STATE(35)] = 415,
  [SMALL_STATE(36)] = 426,
  [SMALL_STATE(37)] = 439,
  [SMALL_STATE(38)] = 450,
  [SMALL_STATE(39)] = 458,
  [SMALL_STATE(40)] = 468,
  [SMALL_STATE(41)] = 476,
  [SMALL_STATE(42)] = 486,
  [SMALL_STATE(43)] = 496,
  [SMALL_STATE(44)] = 502,
  [SMALL_STATE(45)] = 512,
  [SMALL_STATE(46)] = 518,
  [SMALL_STATE(47)] = 523,
  [SMALL_STATE(48)] = 528,
  [SMALL_STATE(49)] = 533,
  [SMALL_STATE(50)] = 540,
  [SMALL_STATE(51)] = 545,
  [SMALL_STATE(52)] = 550,
  [SMALL_STATE(53)] = 555,
  [SMALL_STATE(54)] = 560,
  [SMALL_STATE(55)] = 565,
  [SMALL_STATE(56)] = 570,
  [SMALL_STATE(57)] = 577,
  [SMALL_STATE(58)] = 582,
  [SMALL_STATE(59)] = 587,
  [SMALL_STATE(60)] = 592,
  [SMALL_STATE(61)] = 597,
  [SMALL_STATE(62)] = 602,
  [SMALL_STATE(63)] = 607,
  [SMALL_STATE(64)] = 611,
  [SMALL_STATE(65)] = 615,
  [SMALL_STATE(66)] = 619,
  [SMALL_STATE(67)] = 623,
  [SMALL_STATE(68)] = 627,
  [SMALL_STATE(69)] = 631,
  [SMALL_STATE(70)] = 635,
  [SMALL_STATE(71)] = 639,
  [SMALL_STATE(72)] = 643,
  [SMALL_STATE(73)] = 647,
  [SMALL_STATE(74)] = 651,
  [SMALL_STATE(75)] = 655,
  [SMALL_STATE(76)] = 659,
  [SMALL_STATE(77)] = 663,
  [SMALL_STATE(78)] = 667,
  [SMALL_STATE(79)] = 671,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_line, 2, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement_line, 2, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_line, 3, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement_line, 3, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_line, 4, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement_line, 4, 0, 0),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_empty_line, 1, 0, 0), REDUCE(sym_statement_line, 1, 0, 0),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_empty_line, 1, 0, 0), REDUCE(sym_statement_line, 1, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement_line, 1, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_line, 1, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_standalone_comment, 3, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_standalone_comment, 3, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indent, 1, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indent, 1, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action_values, 1, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action_values, 1, 0, 0),
  [163] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_action_values_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_action_values_repeat1, 2, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_action_values_repeat1, 2, 0, 0),
  [170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_action_values_repeat1, 2, 0, 0), SHIFT_REPEAT(71),
  [173] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_action_values_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 3, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 3, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action_statement, 2, 0, 2),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action_statement, 2, 0, 2),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition_name, 1, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition_name, 1, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [194] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_list_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_list_repeat1, 2, 0, 0),
  [199] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_list_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_list, 1, 0, 0),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_list_repeat1, 1, 0, 0),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_condition_value, 1, 0, 0), REDUCE(aux_sym_value_list_repeat1, 1, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparison_op, 2, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_op, 2, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_list, 1, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_list_repeat1, 2, 0, 0),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_list_repeat1, 2, 0, 0), SHIFT_REPEAT(71),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action_name, 1, 0, 0),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action_name, 1, 0, 0),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_metadata_repeat1, 2, 0, 0),
  [236] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_metadata_repeat1, 2, 0, 0), SHIFT_REPEAT(74),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_metadata_repeat1, 2, 0, 0), SHIFT_REPEAT(77),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_declaration, 2, 0, 0),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata, 1, 0, 0),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_declaration, 2, 0, 0),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 2, 0, 0),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [258] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_condition_value, 1, 0, 0), REDUCE(aux_sym_string_list_repeat1, 1, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_list_repeat1, 1, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_metadata_repeat1, 4, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition_statement, 2, 0, 1),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_declaration, 3, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_declaration, 3, 0, 0),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 3, 0, 0),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition_statement, 3, 0, 3),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4, 0, 0),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_show_hide_statement, 1, 0, 0),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [297] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment_text, 1, 0, 0),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_comment, 2, 0, 0),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_comment, 3, 0, 0),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
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

TS_PUBLIC const TSLanguage *tree_sitter_filter(void) {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
