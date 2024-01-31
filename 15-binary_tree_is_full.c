#include "binary_trees.h"

/**
 * binary_tree_is_full - a function that checks
 * if a binary tree is full
 * @tree: a pointer to the root node of the tree
 *
 * Return: 1 if the tree is full or zero if not.
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int l_full, r_full;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left != NULL && tree->right != NULL)
	{
		l_full = binary_tree_is_full(tree->left);
		r_full = binary_tree_is_full(tree->right);
		if (l_full == 1 && r_full == 1)
			return (1);
		return (0);
	}
	return (0);
}
