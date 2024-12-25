package tree_sitter_path_of_exile_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_path_of_exile "github/egibs/tree-sitter-poe/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_path_of_exile.Language())
	if language == nil {
		t.Errorf("Error loading PathOfExile grammar")
	}
}
