#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes.
 * @first: Pointer to the first node.
 * @second: Pointer to the second node.
 *
 * Return: If no common ancestors return NULL, else return common ancestor.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *mumy, *pappy;

	if (!first || !second)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);

	mumy = first->parent, pappy = second->parent;
	if (first == pappy || !mumy || (!mumy->parent && pappy))
		return (binary_trees_ancestor(first, pappy));
	else if (mumy == second || !pappy || (!pappy->parent && mumy))
		return (binary_trees_ancestor(mumy, second));
	return (binary_trees_ancestor(mumy, pappy));
}
