#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert node to the right of parent
 *
 * @parent: pointer to the parent node
 * @value: the value of parent node
 *
 * Return: the node containing the value
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	if (!parent)
		return (NULL);

	binary_tree_t *node = binary_tree_node(parent, value);

	if (!node)
		return (NULL);
	if (parent->right)
	{
		node->right = parent->right;
		parent->right->parent = node;
	}
	parent->right = node;

	return (node);
}
