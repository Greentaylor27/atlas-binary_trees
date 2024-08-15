#include "binary_trees.h"

/**
 * binary_tree_leaves - Calculates how many leaves there are
 *
 * @tree: pointer to root node
 *
 * Return: Number of leaves or 0 if tree is NULL
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int check = binary_tree_is_leaf(tree);
	size_t leaves = 0;

	if (!tree)
		return (0);

	if (check)
		leaves++;
	else
	{
		leaves += binary_tree_leaves(tree->left);
		leaves += binary_tree_leaves(tree->right);
	}
	return (leaves);
}
