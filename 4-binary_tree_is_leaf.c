#include "binary_trees.h"
/**
 * binary_tree_is_leaf - checks if a node is a leaf
 *
 * @node: node to check if leaf
 * Return: If leaf: 1
 * If Not Leaf: 0
 **/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	return ((node->left == NULL && node->right == NULL) ? 1 : 0);
}
