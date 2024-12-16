#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_sibling - Finds the sibling of a given node.
 * @node: A pointer to the node whose sibling we want to find.
 *
 * Return: If the node has no sibling or is NULL, return NULL.
 *         Otherwise, return a pointer to the sibling node.
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node == node->parent->left)
		return (node->parent->right);
	else
		return (node->parent->left);
}
