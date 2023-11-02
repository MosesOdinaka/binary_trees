#include "binary_trees.h"

/**
 * binary_tree_sibling - Identifies the sibling of a node in a binary tree.
 * @node: The node to find the sibling of.
 * Return: The sibling node if it exists, NULL otherwise.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	parent = node->parent;
	if (parent->left == node)
		return (parent->right);
	else
		return (parent->left);
}
