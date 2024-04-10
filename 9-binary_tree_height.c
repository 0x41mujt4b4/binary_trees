#include "binary_trees.h"

/**
 * binary_tree_height - return the height of a binary tree
 *
 * @tree: the tree to calculate it's height
 *
 * Return: the height of the tree otherwise 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int left_height;
	int right_height;

	if (!tree)
		return (-1);
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return ((left_height > right_height ? left_height : right_height) + 1);
}
