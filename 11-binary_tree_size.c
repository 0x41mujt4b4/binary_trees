#include "binary_trees.h"

/**
 * binary_tree_size - return the size of a binary tree
 *
 * @tree: the tree to calculate it's size
 *
 * Return: the size of the tree otherwise 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	int left_size;
	int right_size;

	if (!tree)
		return (0);
	left_size = binary_tree_size(tree->left);
	right_size = binary_tree_size(tree->right);

	return (left_size + right_size + 1);
}
