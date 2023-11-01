#include "binary_trees.h"

/**
 * binary_tree_node - Create a binary tree node.
 * @parent: parent node.
 * @value: node value.
 * Return: new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = calloc(1, sizeof(binary_tree_t));

	if (!new_node)
	{
		return (NULL);
	}
	new_node->n = value;
	new_node->parent = parent;
	return (new_node);
}
