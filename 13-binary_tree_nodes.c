#include "binary_trees.h"

/**
 * binary_tree_nodes - return the size of a binary tree
 *
 * @tree: the tree to calculate it's size
 *
 * Return: the size of the tree otherwise 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int left_nodes;
	int right_nodes;

	if (!tree || (!tree->left && !tree->right))
		return (0);
	left_nodes = binary_tree_nodes(tree->left);
	right_nodes = binary_tree_nodes(tree->right);

	return (left_nodes + right_nodes + 1);
}
