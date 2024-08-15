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
	binary_tree_t *NewNode = malloc(sizeof(binary_tree_t));

	if (NewNode == NULL)
		return (NULL);
	if (parent == NULL)
		return (NULL);

	NewNode->n = value;
	NewNode->parent = parent;
	NewNode->left = parent;
	NewNode->right = NULL;

	return (NewNode);
}
