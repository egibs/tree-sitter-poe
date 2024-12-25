/**
 * @file Tree-sitter plugin for Path of Exile .filter files.
 * @author egibs <evan@egibs.xyz>
 * @license Apache License 2.0
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "filter",

  extras: ($) => [
    /[ \t]/, // Only whitespace, not newlines
  ],

  conflicts: ($) => [
    [$.empty_line, $.statement_line],
    [$.condition_value, $.string_list],
    [$.value_list, $.condition_value],
  ],

  word: ($) => $.identifier,

  rules: {
    source_file: ($) =>
      repeat(choice($.statement_line, $.empty_line, $.standalone_comment)),

    empty_line: ($) => token(/\n/),

    standalone_comment: ($) => prec.left(1, seq("#", /[^\n]*/, /\n/)),

    statement_line: ($) =>
      seq(
        choice(
          seq($.indent, optional($.statement)),
          seq(optional($.statement)),
        ),
        optional($.inline_comment),
        /\n/,
      ),

    statement: ($) =>
      choice(
        $.show_hide_statement,
        $.condition_statement,
        $.action_statement,
        $.section_declaration,
        $.style_declaration,
        $.variable_declaration,
        $.import_statement,
      ),

    indent: ($) => /[ \t]+/,

    // Comments and metadata
    inline_comment: ($) =>
      choice(
        seq("#", /[ \t]+/, choice($.metadata, $.comment_text)),
        seq("#", $.comment_text),
      ),

    metadata: ($) =>
      repeat1(
        choice(
          seq("$", $.identifier, choice("->", "=>"), $.identifier),
          seq("%", $.identifier),
        ),
      ),

    comment_text: ($) => /[^\n]*/,

    // Show/Hide statements
    show_hide_statement: ($) =>
      choice("Show", "Hide", "ShowD", "HideD", "Continue", "Cont"),

    // Conditions
    condition_statement: ($) =>
      choice(
        // Basic condition: Name Value(s)
        seq(
          field("name", choice($.action_statement, $.condition_name)),
          field(
            "value",
            choice(
              prec(2, $.value_list),
              prec(1, $.condition_value),
              $.string_list,
            ),
          ),
        ),
        // Comparison condition: Name Operator Value(s)
        seq(
          field("name", choice($.action_statement, $.condition_name)),
          field("operator", $.comparison_op),
          field(
            "value",
            choice(
              prec(2, $.value_list),
              prec(1, $.condition_value),
              $.string_list,
            ),
          ),
        ),
      ),

    condition_name: ($) =>
      choice(
        // Level and Size conditions
        "ItemLevel",
        "DropLevel",
        "AreaLevel",
        "GemLevel",
        "StackSize",
        "Height",
        "Width",

        // Socket conditions
        "Sockets",
        "LinkedSockets",
        "SocketGroup",

        // Item type conditions
        "Class",
        "BaseType",
        "Rarity",
        "Quality",

        // Influence and Implicit conditions
        "HasInfluence",
        "HasSearingExarchImplicit",
        "HasEaterOfWorldsImplicit",
        "HasCruciblePassiveTree",
        "HasExplicitMod",
        "HasImplicitMod",

        // Map conditions
        "ShapedMap",
        "ElderMap",
        "BlightedMap",
        "UberBlightedMap",
        "MapTier",

        // Special item conditions
        "EnchantmentPassiveNode",
        "EnchantmentPassiveNum",
        "BaseArmour",
        "BaseDefencePercentile",
        "BaseEnergyShield",
        "BaseEvasion",
        "BaseWard",

        // Item state conditions
        "Mirrored",
        "Corrupted",
        "Identified",
        "Synthesised",
        "ShaperItem",
        "ElderItem",
        "AnyEnchantment",
        "FracturedItem",
        "Replica",
        "Scourged",
        "TransfiguredGem",
        "AlternateQuality",
        "CorruptedMods",
        "SynthesisedItem",
      ),

    comparison_op: ($) =>
      prec.right(
        seq(
          choice("=", "==", "!=", "<", "<=", ">", ">=", "="),
          choice(" ", $.number),
        ),
      ),

    // Support both single values and space-separated lists
    value_list: ($) =>
      prec.right(repeat1(choice($.identifier, $.number, $.boolean))),

    condition_value: ($) =>
      choice($.number, $.quoted_string, $.identifier, $.boolean),

    // String lists for BaseType etc
    string_list: ($) => prec.left(1, repeat1(seq($.quoted_string))),

    quoted_string: ($) => seq('"', /[^"]+/, '"'),

    // Actions
    action_statement: ($) =>
      seq(field("name", $.action_name), field("values", $.action_values)),

    action_name: ($) =>
      choice(
        "SetFontSize",
        "SetTextColor",
        "SetBorderColor",
        "SetBackgroundColor",
        "DisableDropSound",
        "PlayAlertSound",
        "PlayAlertSoundPositional",
        "CustomAlertSound",
        "PlayEffect",
        "MinimapIcon",
      ),

    action_values: ($) =>
      prec.left(
        1,
        repeat1(choice($.number, $.quoted_string, $.identifier, $.boolean)),
      ),

    // Basic types
    number: ($) => /\d+/,

    identifier: ($) => /[a-zA-Z0-9_][a-zA-Z0-9_-]*/,

    boolean: ($) => choice("True", "False"),

    // Other declarations
    section_declaration: ($) => seq("Section", $.identifier, optional($.block)),

    style_declaration: ($) => seq("Style", $.identifier, optional($.block)),

    variable_declaration: ($) =>
      seq(
        "var",
        $.identifier,
        "=",
        choice($.number, $.quoted_string, $.identifier, $.boolean),
      ),

    import_statement: ($) =>
      seq("Import", $.quoted_string, optional("Optional")),

    block: ($) => seq("{", repeat($.statement_line), "}"),
  },
});
