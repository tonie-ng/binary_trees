#include "binary_trees.h"

/**
 * binary_trees_ancestor - a function that finds the
 * lowest common ancestor of two nodes
 * @first: a pointer to the first node
 * @second: a pointer to the second node
 *
 * Return: a pointer to the lowest common
 * ancestor node of the two given nodes or NULL
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	const binary_tree_t *temp;

	if (first == NULL || second == NULL)
		return (NULL);

	if (first == second)
		return ((binary_tree_t *)first);

	if (first->parent == second->parent)
		return (first->parent);

	for (; first != NULL; first = first->parent)
	{
		temp = second;
		do {
			if (first == temp)
				return ((binary_tree_t *)first);
			temp = temp->parent;
		} while (temp != NULL);
	}
	return (NULL);
}
