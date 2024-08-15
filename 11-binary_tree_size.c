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
	size_t right = binary_tree_size(tree->right);
	size_t left = binary_tree_size(tree->left);
	size_t tree_size = 0;

	if (tree == NULL)
		return (0);
	else
	{
		tree_size = right + left + 1;
		return (tree_size);
	}
}
