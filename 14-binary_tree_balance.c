#include "binary_trees.h"

/**
 * binary_tree_balance - return the balance of a binary tree
 *
 * @tree: the tree to calculate it's balance
 *
 * Return: the balance of the tree otherwise 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_balance;
	int right_balance;

	if (!tree)
		return (0);
	left_balance = tree->left ? binary_tree_balance(tree->left) : -1;
	right_balance = tree->right ? binary_tree_balance(tree->right) : -1;

	return (left_balance - right_balance);
}
