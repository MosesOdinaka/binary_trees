#include "binary_trees.h"

/**
 * binary_tree_insert_left - Add a node at the left of the parent, and
 * if it exists it move down one level and add the new node first.
 * @parent: parent of the key node.
 * @value: value of the node.
 * Return: NULL if it fails, or return the new node.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
	{
		return (NULL);
	}

	new_node = binary_tree_node(parent, value);
	if (!new_node)
	{
		return (NULL);
	}

	if (parent->left)
	{
		new_node->left = parent->left;
		new_node->left->parent = new_node;
	}

	parent->left = new_node;

	return (new_node);
}
