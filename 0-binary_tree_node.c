#include "binary_trees.h"

/**
* binary_tree_node - function to create a new binary tree.
*
* @parent: pointer.
*
* @value: argument.
*
* Return: result of the function.
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{

	binary_tree_t *rootA = malloc(sizeof(binary_tree_t));

	if (rootA == NULL)
		return (NULL);

	rootA->n = value;
	rootA->parent = parent;
	rootA->left = NULL;
	rootA->right = NULL;

	return (rootA);

}
