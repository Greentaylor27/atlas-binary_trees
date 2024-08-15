#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a left child node
 *
 * @parent: Pointer to the parent node
 * @value: The data to be stored in a node
 *
 * Return: On success - pointer to newly created node
 * on failure or if parent is invalid: NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *NewNode = NULL;

	if (!parent)
		return (NULL);
	NewNode = binary_tree_node(parent, value);
	if (!NewNode)
		return (NULL);

	if (parent->left != NULL)
	{
		NewNode->left = parent->left;
		parent->left->parent = NewNode;
	}
	parent->left = NewNode;

	return (NewNode);
}
