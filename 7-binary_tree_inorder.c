#include "binary_trees.h"
/**
 * binary_tree_inorder - searching a tree using in-order traversal
 *
 * @tree: tree to be searched
 * @func: pointer to function to apply value to tree
 **/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;
	if (func == NULL)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
