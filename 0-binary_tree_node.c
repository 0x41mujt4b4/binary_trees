#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - create a node
 *
 * @parent: pointer to the parent node
 * @value: the value of parent node
 *
 * Return: the node containing the value
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	if (!node)
		return (NULL);

	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;

	return (node);
}
