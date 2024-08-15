#include "binary_trees.h"

/**
 * binary_tree_node - creates a new node for a binary tree
 *
 * @parent: A pointer to the parent node
 * @value: The value to put in the new node
 *
 * Return: the pointer to the new node on success or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *NewNode = malloc(sizeof(binary_tree_t));

	if (NewNode == NULL)
	{
		return (NULL);
	}

	NewNode->n = value;
	NewNode->parent = parent;
	NewNode->right = NULL;
	NewNode->left = NULL;

	return (NewNode);
}
