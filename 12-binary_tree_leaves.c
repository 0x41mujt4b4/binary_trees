#include "binary_trees.h"

/**
 * binary_tree_leaves - return the leaves of a binary tree
 *
 * @tree: the tree to calculate it's leaves
 *
 * Return: the leaves of the tree otherwise 0
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return ((tree->left && 1) + (tree->right && 1));
}
