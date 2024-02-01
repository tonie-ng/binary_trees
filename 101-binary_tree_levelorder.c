#include "binary_trees.h"

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);
	func(tree->left->n);
	func(tree->right->n);

	binary_tree_levelorder(tree->left, func);
	binary_tree_levelorder(tree->right, func);
}
