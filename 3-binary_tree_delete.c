#include "binary_trees.h"
/**
 * binary_tree_delete - deletes an entire binary tree
 *
 * @tree: Pointer to the root of a tree
 */

void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *curr = tree;

	if (tree == NULL)
		return;
	binary_tree_delete(curr->left);
	binary_tree_delete(curr->left);
	free(curr);
}

