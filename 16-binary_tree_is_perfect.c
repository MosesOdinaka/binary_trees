#include "binary_trees.h"

/**
 * tree_is_perfect - Determines if a binary tree is perfect.
 * A binary tree is perfect if all nodes have two or zero children and
 * all levels have the same quantity of nodes.
 * @tree: The binary tree to check.
 * Return: 0 if the tree is not perfect, otherwise returns the height level.
 */
int tree_is_perfect(const binary_tree_t *tree)
{
	int l = 0, r = 0;

	if (tree->left && tree->right)
	{
		l = 1 + tree_is_perfect(tree->left);
		r = 1 + tree_is_perfect(tree->right);
		if (r == l && r != 0 && l != 0)
			return (r);
		return (0);
	}
	else if (!tree->left && !tree->right)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: The binary tree to check.
 * Return: 1 if the tree is perfect, 0 otherwise.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int result = 0;

	if (tree == NULL)
		return (0);

	result = tree_is_perfect(tree);
	if (result != 0)
	{
		return (1);
	}
	return (0);
}
