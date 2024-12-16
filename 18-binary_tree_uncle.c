#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_uncle - Finds the uncle of a given node in a binary tree
 * @node: A pointer to the node to find the uncle for
 *
 * Return: A pointer to the uncle node, or NULL if the node has no uncle,
 *         or if the node or its parent is NULL
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	if (node->parent == node->parent->parent->left)
		return (node->parent->parent->right);
	else
		return (node->parent->parent->left);
}

