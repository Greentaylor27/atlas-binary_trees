#include "binary_trees.h"
/**
 * binary_tree_sibling - finds the sibling node in a binary tree
 *
 * @node: pointer to the node you trying to find the sibling of
 * Return: pointer to sibling node. NULL on failure or empty
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *sibling;

	if (node == NULL || (node->parent) == NULL)
		return (NULL);
	
	sibling = node->parent->left;
	if (sibling != NULL)
		return (sibling);
	sibling = node->parent->right;
	if (sibling != NULL)
		return (sibling);
	return (NULL);
}
