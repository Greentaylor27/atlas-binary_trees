#include "binary_trees.h"
/**
 * binary_tree_uncle - finds the uncle node to a node in a binary tree
 *
 * @node: a pointer to the node you want to use as reference
 * Return: pointer to the uncle node. NULL on failure
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle;

	if (!node || !node->parent || !node->parent->parent)
		return (NULL);

	uncle = binary_tree_sibling(node->parent);

	if (uncle && (node->parent->parent->left == node->parent))
		return (uncle);
	if (uncle && (node->parent->parent->right == node->parent))
		return (uncle);
	return (NULL);
}
