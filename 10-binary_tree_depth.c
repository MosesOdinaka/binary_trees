#include "binary_trees.h"

/**
 * binary_tree_depth - Computes the depth of a node in a binary tree.
 * @tree: The node whose depth is to be calculated.
 * Return: The depth of the tree, or 0 if it is the root.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
