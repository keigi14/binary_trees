#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree.
 * @tree: A pointer to the root node of de tree to measure de size of.
 * Return: The size of the tree.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t de_size = 0;

	if (tree)
	{
		de_size += 1;
		de_size += binary_tree_size(tree->left);
		de_size += binary_tree_size(tree->right);
	}
	return (de_size);
}
