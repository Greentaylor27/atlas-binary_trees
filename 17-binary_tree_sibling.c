#include "binary_trees.h"
/**
 * binary_tree_sibling - finds the sibling node in a binary tree
 *
 * @node: pointer to the node you trying to find the sibling of
 * Return: pointer to sibling node. NULL on failure or empty
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent = node->parent;
	binary_tree_t *Rsibling = parent->right;
	binary_tree_t *Lsibling = parent->left;

	if (node == NULL || (node->parent) == NULL)
		return (NULL);
	
	if (Rsibling != NULL)
		return (Rsibling);
	if (Lsibling != NULL)
		return (Lsibling);
	return (NULL);
}
