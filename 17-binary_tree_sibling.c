#include "binary_trees.h"

/**
 * binary_tree_sibling -a function that finds the sibling of a node
 * @node: a pointer to the node to find its sibling
 *
 * Return: a pointer to the sibling node or NULL
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *brother, *sister;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	brother = node->parent->left;
	sister = node->parent->right;

	if (brother == node)
		return (sister);
	return (brother);
}
