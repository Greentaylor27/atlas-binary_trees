#include "binary_trees.h"
/**
 * binary_tree_delete - deletes an entire binary tree
 *
 * @tree: Pointer to the root of a tree
 */

void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *current = tree;

	if (current == NULL)
		return;

	current->left = NULL;
	current->right = NULL;
	current->parent = NULL;
	current = NULL;

	tree->left = NULL;
	tree->right = NULL;
	tree->parent = NULL;
	tree = NULL;

	free(current);
}

