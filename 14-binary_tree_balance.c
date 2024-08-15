#include "binary_trees.h"

/**
 * binary_tree_balance - Determines the balance factor of a tree
 *
 * @tree: pointer to the root node in a binary tree
 * Return: 0 on equal, +1 on the left subtree being greater
 * -1 the right subtree is greater, anything else on unbalanced
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0;
	int right = 0;

	if (!tree)
		return (0);
	if (tree->left != NULL)
		left = binary_tree_height(tree->left);
	if (tree->right != NULL)
		right = binary_tree_height(tree->right);

	return (left - right);

	
}
/**
 * binary_tree_height - helper function to determine height of 
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l = 1, r = 1;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
		l = binary_tree_height(tree->left) + 1;
	if (tree->right != NULL)
		r = binary_tree_height(tree->right) + 1;
	return (l > r ? l : r);
}
