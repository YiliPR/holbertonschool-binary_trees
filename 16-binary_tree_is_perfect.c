#include "binary_trees.h"
#include <stdlib.h>

int check_perfect(const binary_tree_t *tree, int depth, int level);

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is perfect, otherwise 0. Returns 0 if tree is NULL.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (check_perfect(tree, 0, binary_tree_height(tree)));
}

/**
 * check_perfect - Recursively checks if a binary tree is perfect
 * @tree: Pointer to the current node of the tree
 * @depth: Current depth of the node
 * @level: Expected depth of the tree (max depth of the root node)
 *
 * Return: 1 if the tree is perfect, otherwise 0
 */

int check_perfect(const binary_tree_t *tree, int depth, int level)
{
	if (tree == NULL)
		return (1);

	if (tree->left == NULL && tree->right == NULL)
		return (depth == level);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	return (check_perfect(tree->left, depth + 1, level) &&
			check_perfect(tree->right, depth + 1, level));
}

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree
 *
 * Return: The height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	size_t left_height = 0;
	size_t right_height = 0;

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return ((left_height > right_height ? left_height : right_height) + 1);
}
