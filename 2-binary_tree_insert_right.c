#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node to the right of a parent node
 *
 * @parent: Pointer to the parent node
 * @value: the value to be stored in the node
 *
 * Return: on success - a pointer to the new node
 * on failure - NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (!parent)
		return (NULL);

	newNode = binary_tree_node(parent, value);

	if(!newNode)
		return (NULL);

	if (parent->right != NULL)
	{
		newNode->right = parent->right;
		parent->right->parent = newNode;
	}
	parent->right = newNode;
	return (newNode);
}
