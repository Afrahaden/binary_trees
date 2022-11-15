#include "binary_trees.h"

/**
 * binary_tree_postorder - traverses in post-order
 * @tree: pointer to the tree
 * @func: pointer to function to call for each node
 *
 * Return: void
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
