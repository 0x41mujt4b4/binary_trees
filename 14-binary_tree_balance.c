#include "binary_trees.h"


/**
 * _binary_tree_height - return the height of a binary tree
 *
 * @tree: the tree to calculate it's height
 *
 * Return: the height of the tree otherwise 0
 */
size_t _binary_tree_height(const binary_tree_t *tree)
{
	int left_height;
	int right_height;

	if (!tree)
		return (0);
	left_height = tree->left ? 1 + _binary_tree_height(tree->left) : 1;
	right_height = tree->right ? 1 + _binary_tree_height(tree->right) : 1;

	return (left_height > right_height ? left_height : right_height);
}

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
	left_balance = (int)_binary_tree_height(tree->left);
	right_balance = (int)_binary_tree_height(tree->right);

	return (left_balance - right_balance);
}
