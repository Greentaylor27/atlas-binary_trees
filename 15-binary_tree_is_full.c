#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 *
 * @tree: pointer to root node
 *
 * Return: 1 if full. 0 if not.
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int result = 1;

	if (tree == NULL)
		return (0);
	if ((tree->left == NULL && tree->right != NULL) 
	|| (tree->right == NULL && tree->left != NULL))
		return (0);

	if (result == 1 && tree->left != NULL)
	{
		result = binary_tree_is_full(tree->left);
			if (result == 0)
				return (0);
	}
	if (result == 1 && tree->right != NULL)
	{
		result = binary_tree_is_full(tree->right);
			if (result == 0)
				return (0);
	}
}
