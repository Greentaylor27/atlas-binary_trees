#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts child at left of parent
 *
 * @parent: parent node
 * @value: value of child node
 * Return: On Success: pointer to child node
 * On Failure: NULL
 **/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = NULL;

	if (parent == NULL)
		return (NULL);
	newNode = malloc(sizeof(binary_tree_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = value;
	newNode->parent = parent;
	newNode->left = NULL;
	newNode->right = NULL;

	if (parent->left != NULL)
	{
		newNode->left = parent->left;
		newNode->left->parent = newNode;
	}

	parent->left = newNode;
	return (newNode);
}
