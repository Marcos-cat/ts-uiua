/**
 * @file A tree-sitter parser for the Uiua programming language
 * @author Marcos
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "uiua",

  rules: {
    // TODO: add the actual grammar rules
    source_file: $ => "hello"
  }
});
