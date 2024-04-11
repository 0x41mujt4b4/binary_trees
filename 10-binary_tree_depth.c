#include "binary_trees.h"

/**
 * binary_tree_depth - return the height of a binary tree
 *
 * @tree: the tree to calculate it's depth
 *
 * Return: the depth of the tree otherwise 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int left_depth;
	int right_depth;

	if (!tree)
		return (0);
	left_depth = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	right_depth = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	return (left_depth > right_height ? left_height : right_height);
}
