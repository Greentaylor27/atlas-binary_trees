#include "binary_trees.h"
/**
 * binary_tree_node - adds a new node
 *
 * @parent: parent node
 * @value: value at new node
 * Return: On Success: pointer to the new node
 * On Failure: NULL
 **/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = NULL;

	newNode = malloc(sizeof(binary_tree_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = value;
	newNode->parent = parent;
	newNode->left = NULL;
	newNode->right = NULL;

	return (newNode);
}
