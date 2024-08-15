#include "binary_trees.h"

/**
 * binary_tree_is_root - Used to determine if a node is a root of a binary tree
 *
 * @node: The node we are looking at
 * Return: 1 if node is root. 0 if not or NULL
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node && node->parent == NULL)
		return (1);
	return (0);
}