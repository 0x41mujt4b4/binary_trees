#include "binary_trees.h"

/**
 * binary_tree_uncle - find the uncle of a node
 *
 * @node: the node to find it's uncle
 *
 * Return: a pointer to the uncle node otherwise NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (0);
	if (node->parent->parent == NULL)
		return (0);
	if (node->parent->parent->left != node->parent)
		return (node->parent->parent->left);
	else
		return (node->parent->parent->right);
}
