#include "binary_trees.h"

/**
 * binary_tree_balance - Determines the balance factor of a tree (helper func)
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
 * binary_tree_height - helper function to determine height of (helper func)
 *
 * @tree: pointer to the root node
 * Return: the hieght of the sub tree
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

/**
 * binary_tree_is_full - checks if a binary tree is full (helper func)
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
	return (1);
}


/**
 * binary_tree_is_perfect - checks to see if a binary tree is perfect
 *
 * @tree: pointer to the root node
 * Return: 1 if perfect. 0 if not.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left = 1, right = 1;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
		left = binary_tree_is_perfect(tree->left);
	if (tree->right != NULL)
		right = binary_tree_is_perfect(tree->right);

	if ((binary_tree_is_full(tree) == 1) &&
	(binary_tree_balance(tree) == 0))
		return (left * right);
	return (0);
}
