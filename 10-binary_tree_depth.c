#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a binary tree
 *
 * @tree: pointer to the node used to measure the depth
 * Return: the depth of a binary tree on success. 0 on failure
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t i;

	if (tree == NULL)
		return (0);
	for (i = -1; tree != NULL; i++)
		tree = tree->parent;
	return (i);
}
