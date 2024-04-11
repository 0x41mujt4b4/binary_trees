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
	int left_leaves;
	int right_leaves;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	left_leaves = binary_tree_leaves(tree->left);
	right_leaves = binary_tree_leaves(tree->right);

	return (left_leaves + right_leaves);
}
