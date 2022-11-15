#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a
 *	binary tree
 * @tree: pointer to the root node of the tree
 *
 * Return: 0 if tree is NULL, otherwise the count
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree || (!tree->left && !tree->right))
		return (0);

	return (binary_tree_nodes(tree->left) +
			binary_tree_nodes(tree->right) + 1);
}
