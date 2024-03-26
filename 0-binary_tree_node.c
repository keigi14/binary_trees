#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node.
 * @parent: A pointer to the parent of the node to create.
 * @value: The value to put in the nuw node.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new node.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *_nuw;

	_nuw = malloc(sizeof(binary_tree_t));
	if (_nuw == NULL)
		return (NULL);

	_nuw->n = value;
	_nuw->parent = parent;
	_nuw->left = NULL;
	_nuw->right = NULL;

	return (_nuw);
}
