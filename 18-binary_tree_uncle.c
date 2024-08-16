#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling node in a binary tree (helper func)
 *
 * @node: pointer to the node you trying to find the sibling of
 * Return: pointer to sibling node. NULL on failure or empty
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *sibling;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left != NULL && node->parent->left == node)
		sibling = node->parent->right;
	if (node->parent->right != NULL && node->parent->right == node)
		sibling = node->parent->left;
	return (sibling);
}

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
