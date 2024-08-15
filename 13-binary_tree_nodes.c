#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with atleast 1 child
 *
 * @tree: pointer to root node
 *
 * Return: number of nodes on success or 0 if empty
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	binary_tree_t *current = tree;
	size_t count;

	if (!tree)
		return (0);

	if (current->left != NULL || current->right != NULL)
	{
		count = 1;
	}

	count += binary_tree_nodes(current->left);
	count += binary_tree_nodes(current->right);

	return (count);
}
