#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Check if the node is a leaf, that means that the node
 * does not have any child neither left nor right.
 * @node: node to check.
 * Return: 1 if it is a leaf or 0 if it is not.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	return (node && !node->left && !node->right);
}
