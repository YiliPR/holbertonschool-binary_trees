#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_is_leaf - function for checking leaf.
 * @node: pointer.
 * Return: value 1 (success).
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->left == NULL && node->right == NULL)
		return (1);
	else
		return (0);
}
