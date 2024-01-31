#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_balance - a function that measures the
 * balance factor of a binary tree
 * @tree: a pointer to the root node of the tree
 *
 * Return: the balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int right, left;

	if (tree == NULL)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	return (left - right);
}

/**
 * binary_tree_height - a function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 *
 * Return: the height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height, l_height, r_height;

	if (tree == NULL)
		return (0);

	height = 1;

	l_height = binary_tree_height(tree->left);
	r_height = binary_tree_height(tree->right);

	if (l_height > r_height)
	{
		height += l_height;
		return (height);
	}

	height += r_height;
	return (height);
}
