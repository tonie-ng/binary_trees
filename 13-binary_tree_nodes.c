#include "binary_trees.h"

/**
 * binary_tree_nodes - a function that counts the nodes
 * with at least 1 child in a binary tree
 * @tree: a pointer to the root node of the tree to count.
 *
 * Return: number of nodes or 0 on error.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count;

	if (tree == NULL)
		return (0);

	count = 0;
	if (tree->left != NULL || tree->right != NULL)
		count += 1;

	count += binary_tree_nodes(tree->left);
	count += binary_tree_nodes(tree->right);
	return (count);
}
