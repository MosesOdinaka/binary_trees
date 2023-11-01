#include "binary_trees.h"

/**
 * binary_tree_postorder - Executes a function on each node of a binary tree
 *                         in a post-order manner.
 * @tree: The binary tree to traverse.
 * @func: The function to apply to each node's data.
 * Return: None.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
