#include "binary_trees.h"

/**
 * binary_tree_insert_right - Insert a node as de right-child
 * of another in a binary tree.
 * @parent: A pointer to de node to insert de right-child in.
 * @value: de value to storein de new node.
 *
 * Return: If parent is NULLor an error occurs - NULL.
 * Otherwise - a pointer to de new node.
 *
 * Description: If parent already has a right-child, de new node
 * takes its place and de old right-child is set as
 * the right-child of de new node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *_nuw;

	if (parent == NULL)
		return (NULL);

	_nuw = binary_tree_node(parent, value);
	if (_nuw == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		_nuw->right = parent->right;
		parent->right->parent = _nuw;
	}
	parent->right = _nuw;

	return (_nuw);
}
