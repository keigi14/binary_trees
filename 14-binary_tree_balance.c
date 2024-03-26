#include "binary_trees.h"

/**
 * binary_tree_balance - Measures de balance factor of a binary tree.
 * @tree: A pointer to de root node of the tree to measure de balance factor.
 * Return: If tree is NULL, return 0, else return balance factor.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	return (0);
}

/**
 * binary_tree_height - Measures de height of a binary tree.
 * @tree: A pointer to the root node of de tree to measure the height.
 * Return: If tree is NULL, your function must return 0, else return height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t p = 0, v = 0;

		p = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		v = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return ((p > v) ? p : v);
	}
	return (0);
}
