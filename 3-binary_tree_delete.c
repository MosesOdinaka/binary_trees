#include "binary_trees.h"

/**
 * binary_tree_delete - Free the entire tree using recursion
 * it free the node when the node left and right are NULL
 * @tree: Tree to free.
 * Return: Nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
	{
		return;
	}

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
