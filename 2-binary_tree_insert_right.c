#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_right - function to insert a node as a right child.
 * @parent: pointer.
 * @value: argument.
 * Return: value of the node.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{

	binary_tree_t *nodeC;

	if (parent == NULL)
		return (NULL);

	nodeC = malloc(sizeof(binary_tree_t));

	if (nodeC == NULL)
		return (NULL);

	nodeC->n = value;
	nodeC->parent = parent;
	nodeC->left = NULL;
	nodeC->right = NULL;

	if (parent->right != NULL)
	{
		nodeC->right = parent->right;
		parent->right->parent = nodeC->right;
	}

	parent->right = nodeC;

	return (nodeC);
}
