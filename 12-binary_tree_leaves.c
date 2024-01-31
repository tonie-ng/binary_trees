#include "binary_trees.h"

/**
 * binary_tree_leaves - a function that counts
 * the leaves in a binary tree
 * @tree: a pointer to the root node of the tree to count.
 *
 * Return: number of leaves or 0 on error.
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_count, right_count;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	left_count = binary_tree_leaves(tree->left);
	right_count = binary_tree_leaves(tree->right);
	return (left_count + right_count);
}
