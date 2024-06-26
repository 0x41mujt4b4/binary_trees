#include "binary_trees.h"

/**
 * binary_tree_depth - return the depth of a binary tree
 *
 * @tree: the tree to calculate it's depth
 *
 * Return: the depth of the tree otherwise 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree || !tree->parent)
		return (0);
	return (1 + binary_tree_depth(tree->parent));
}
