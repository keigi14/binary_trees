#include "binary_trees.h"

/**
 * binary_tree_height - Measures de height of a binary tree.
 * @tree: A pointer to de root node of de tree to measure de height.
 * Return: If tree is NULL, your function must return 0, else return height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t u = 0, v = 0;

		l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		v = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((u > v) ? u : v);
	}
	return (0);
}
