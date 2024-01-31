#include "binary_trees.h"

/**
 * binary_tree_balance - a function that measures the
 * balance factor of a binary tree
 * @tree: a pointer to the root node of the tree
 *
 * Return: the balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int b_factor;

	if (tree == NULL)
		return (0);

	b_factor = 0;

	if (tree->left != NULL && tree->right == NULL)
	{
		b_factor += 1;
		return (b_factor);
	} else if (tree->left == NULL && tree->right != NULL)
	{
		b_factor -= 1;
		return (b_factor);
	}

	b_factor +=
		binary_tree_balance(tree->left) - binary_tree_balance(tree->right);
	return (b_factor);
}
