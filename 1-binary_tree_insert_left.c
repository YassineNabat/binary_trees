#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as a left-child of
 *                           of another in a binary tree.
 * @parent: A pointer to the node to insert the left-child in.
 * @value: The value to store in the new node.
 *
 * Return:Null if parent is NULL or an error occurs.
 *         Otherwise - a pointer to the new node.
 *
 * Description: If parent already has a left-child, the new node
 *              takes its place and the old left-child is set as
 *              the left-child of the new node.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *np;

	if (parent == NULL)
		return (NULL);

	np = binary_tree_node(parent, value);
	if (np == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		np->left = parent->left;
		parent->left->parent = np;
	}
	parent->left = np;

	return (np);
}
