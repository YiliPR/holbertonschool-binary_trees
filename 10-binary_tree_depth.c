#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree
 * @node: Pointer to the node to measure the depth
 *
 * Return: The depth of the node, or 0 if tree is NULL
 */

size_t binary_tree_depth(const binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (0);

	return (binary_tree_depth(node->parent) + 1);
}

