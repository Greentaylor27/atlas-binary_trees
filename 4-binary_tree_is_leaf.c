#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks to see if the node is a leaf (End of the tree)
 *
 * @node: the node you are searching for
 *
 * return: 0 on success. 1 on failure
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node && node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}
