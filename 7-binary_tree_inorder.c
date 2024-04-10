#include "binary_trees.h"

/**
 * binary_tree_inorder - traverse binary tree in inorder
 *
 * @tree: the tree to be traversed
 * @func: a pointer to a function to call for each node
 *
 * Return: Nothing
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
