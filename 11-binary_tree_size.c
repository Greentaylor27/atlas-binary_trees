#include "binary_trees.h"

/**
 * binary_tree_size - used to calculate all elements present in a tree
 *
 * @tree: pointer to the root node
 *
 * Return: Size of the tree on success or 0 on failure
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t right = -1;
	size_t left = -1;

	if (tree == NULL)
		return (0);

	right = binary_tree_size(tree->right);
	left = binary_tree_size(tree->left);

	return (right + left + 1);
}
