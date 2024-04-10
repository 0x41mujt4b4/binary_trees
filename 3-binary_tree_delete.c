#include "binary_trees.h"

/**
 * free_bt - a function that frees a binary tree.
 * @tree: a pointer to the root node of the tree to be freed
 *
 * Return: Nothing
 */
void free_bt(binary_tree_t *tree)
{
    if (tree == NULL)
        return;

    free_bt(tree->left);
    free_bt(tree->right);

    free(tree);
}

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
		free_bt(tree);
	}

}
