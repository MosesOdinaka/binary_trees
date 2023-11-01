#include "binary_trees.h"

/**
 * binary_tree_preorder - Executes a function on each node of a binary tree
 * using pre-order traversal
 * @tree: The binary tree to traverse
 * @func: The function to execute on each node
 * Return: None
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
	{
		return;
	}

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
