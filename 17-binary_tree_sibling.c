#include "binary_trees.h"

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
