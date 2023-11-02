#include "binary_trees.h"

/**
 * binary_tree_nodes - Calculates the total number of non-leaf
 *                     nodes in a binary tree.
 * @tree: The binary tree to measure.
 * Return: The total number of non-leaf nodes in the tree.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t  node = 0;

	if (tree == NULL)
		return (0);

	node += ((tree->left || tree->right) ? 1 : 0);
	node += binary_tree_nodes(tree->left);
	node += binary_tree_nodes(tree->right);

	return (node);
}
