#include "binary_trees.h"
#include <stdio.h>

int power(int base, int exponent);

/**
 * binary_tree_is_perfect - a function that checks if
 * a binary tree is perfect
 * @tree: a pointer to the root node of the tree
 *
 * Return: 1 if the tree is perfect or 0 if not.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height, nodes, perf_nodes;

	if (tree == NULL)
		return (0);

	height = binary_tree_height(tree);
	nodes = binary_tree_size(tree);

	perf_nodes = power(2, height + 1) - 1;

	if (nodes == perf_nodes)
		return (1);

	return (0);
}

/**
 * binary_tree_size - a function that measures the size of a binary tree
 * @tree: a pointer to the root node of the tree to measure the size
 *
 * Return: the size of the tree or zero on error
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_size, right_size;

	if (tree == NULL)
		return (0);

	left_size = binary_tree_size(tree->left);
	right_size = binary_tree_size(tree->right);

	return ((left_size + right_size) + 1);
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

	height = 0;

	if (tree->left != NULL || tree->right != NULL)
		height += 1;

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

/**
 * power - a function to find the value of an exponential calculation.
 * @base: the base value .
 * @exponent: a non-negative value.
 *
 * Return: the result of the base raised to the power of the exponent.
 */

int power(int base, int exponent)
{
	if (exponent == 0)
		return (1);

	return (base * power(base, exponent - 1));
}
