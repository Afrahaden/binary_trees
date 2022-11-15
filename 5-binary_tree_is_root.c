#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if given nodes is a root
 * @node: pointer to the node to check
 *
 * Return: 1 if root, otherwise 0, 0 if NULL
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node || node->parent)
		return (0);
	return (1);
}
