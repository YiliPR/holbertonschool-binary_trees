#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_preorder - traversal function.
 * @binary_tree_t: struct.
 * @func: function pointer.
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{

	if (tree == NULL || func == NULL)
		return;

	func(tree->n);

	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);

}
