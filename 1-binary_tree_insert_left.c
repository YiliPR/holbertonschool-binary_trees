#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_left - function for creating a left child.
 * @parent: pointer;
 * @value: argument;
 * Return: result of function.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{

	binary_tree_t *nodeB;

	if (parent == NULL)
		return (NULL);

	nodeB = malloc(sizeof(binary_tree_t));

	if (nodeB == NULL)
		return (NULL);

	nodeB->n = value;
	nodeB->parent = parent;
	nodeB->left = NULL;
	nodeB->right = NULL;

	if (parent->left != NULL)
	{
		nodeB->left = parent->left;
		parent->left->parent = nodeB;
	}

	parent->left = nodeB;

	return (nodeB);

}
