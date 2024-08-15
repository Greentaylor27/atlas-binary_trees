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

	binary_tree_delete(current->left);
	binary_tree_delete(current->right);
	free(current);
}

