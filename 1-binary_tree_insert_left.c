#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert node to the left of parent
 *
 * @parent: pointer to the parent node
 * @value: the value of parent node
 *
 * Return: the node containing the value
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (!parent)
		return (NULL);

	node = binary_tree_node(parent, value);

	if (!node)
		return (NULL);
	if (parent->left)
	{
		node->left = parent->left;
		parent->left->parent = node;
	}
	parent->left = node;

	return (node);
}
