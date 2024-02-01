#include "binary_trees.h"

/**
 * binary_tree_uncle - a function that finds the uncle of a node
 * @node: a pointer to the node to find the uncle
 *
 * Return: sibling of the parent or NULL
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	return (binary_tree_sibling(node->parent));
}

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
