#include "binary_trees.h"

/**
 * binary_tree_is_root - Determines if a node is a root node
 * @node: The node to evaluate
 * Return: 0 if the node is not a root, 1 if it is
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	return (node && !node->parent);
}
