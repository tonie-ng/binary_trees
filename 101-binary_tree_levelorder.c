#include "binary_trees.h"

void level_helper(const binary_tree_t *node, int level, void (*func)(int));

/**
 * binary_tree_levelorder -  a function that goes through
 * a binary tree using level-order traversal
 * @tree: a pointer to the root node of the tree to traverse
 * @func:  pointer to a function to call for each node
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int height, level = 0;

	if (tree == NULL || func == NULL)
		return;

	height = binary_tree_height(tree);

	while (level <= height)
	{
		level_helper(tree, level, func);
		level++;
	}
}

/**
 * level_helper - traverses a level of teh binary tree.
 * @node: a node in the tree
 * @level: the level of that node in the tree
 * @func: the generic function to execute
 *
 * Return: Nothing
 */
void level_helper(const binary_tree_t *node, int level, void (*func)(int))
{
	if (node == NULL)
		return;

	if (level == 0)
		func(node->n);

	level_helper(node->left, level - 1, func);
	level_helper(node->right, level - 1, func);
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
