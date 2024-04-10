#include "binary_trees.h"

/**
 * binary_tree_postorder - traverse binary tree in postorder
 *
 * @tree: the tree to be traversed
 * @func: a pointer to a function to call for each node
 *
 * Return: Nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
