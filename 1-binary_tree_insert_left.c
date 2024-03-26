#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as a left-child of
 * @parent: A pointer to the node to insert the left-child in.
 * @value: The value to store in the new node.
 *
 * Return: If parent is NULL or an error occurs - NULL.
 * Otherwise - a pointer to the new node.
 *
 * Description: If parent already has a left-child, the new node
 * takes its place and the old left-child is set as
 * the left-child of the new node.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *_nuw;

	if (parent == NULL)
		return (NULL);

	_nuw = binary_tree_node(parent, value);
	if (_nuw == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		_nuw->left = parent->left;
		parent->left->parent = _nuw;
	}
	parent->left = _nuw;

	return (_nuw);
}
