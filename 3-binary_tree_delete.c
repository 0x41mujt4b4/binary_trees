#include "binary_trees.h"

/**
 * binary_tree_delete - delete a binary tree
 *
 * @tree: the tree to be deleted
 *
 * Return: Nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
	{
		tree->n = 0;
		tree->left = NULL;
		tree->right = NULL;
	}
}
