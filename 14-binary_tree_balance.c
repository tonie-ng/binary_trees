#include "binary_trees.h"
#include <stdio.h>

size_t binary_tree_left(const binary_tree_t *tree);
size_t binary_tree_right(const binary_tree_t *tree);
/**
 * binary_tree_balance - a function that measures the
 * balance factor of a binary tree
 * @tree: a pointer to the root node of the tree
 *
 * Return: the balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return ((binary_tree_left(tree)) - (binary_tree_right(tree)));
}

/**
 * binary_tree_left - a function that measures the height of the
 * left side of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 *
 * Return: the height
 */

size_t binary_tree_left(const binary_tree_t *tree)
{
	size_t height, l_height;

	if (tree == NULL)
		return (0);

	height = 0;

	if (tree->left != NULL)
		height += 1;

	l_height = binary_tree_left(tree->left);
	height += l_height;
	return (height);

}

/**
 * binary_tree_right - a function that measures the height of the
 * right side of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 *
 * Return: the height
 */
size_t binary_tree_right(const binary_tree_t *tree)
{
	size_t height, r_height;

	if (tree == NULL)
		return (0);

	height = 0;

	if (tree->right != NULL)
		height += 1;

	r_height = binary_tree_right(tree->right);
	height += r_height;
	return (height);

}
