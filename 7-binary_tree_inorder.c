#include "binary_trees.h"

/**
 * binary_tree_inorder - Executes a function on each node of a binary tree
 *                       in an in-order manner.
 * @tree: The binary tree to traverse.
 * @func: The function to apply to each node's data.
 * Return: None.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
