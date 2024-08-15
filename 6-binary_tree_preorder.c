#include "binary_trees.h"

/**
 * binary_tree_preorder - Traverses a binary tree using preorder traversal alog
 *
 * @tree: a pointer to the root node
 * @func: a pointer to a function call.
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
