#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_height - geting the height function.
 * @tree: pointer to node.
 * Return: value of the height.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return ((left_height > right_height ? left_height : right_height) + 1);
}

