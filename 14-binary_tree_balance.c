#include "binary_trees.h"

/**
 * binary_tree_balance - calculate the balance factor of binary tree
 *
 * @tree: the tree the calculate it's balance
 *
 * Return: the balance factor otherwise 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
