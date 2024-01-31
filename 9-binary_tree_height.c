#include "binary_trees.h"

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
