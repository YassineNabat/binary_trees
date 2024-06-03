#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node.
 * @parent: A pointer to the parent of the node to create.
 * @value: The value to put in the new node.
 *
 * Return:Null if an error occurs.
 *         Otherwise - a pointer to the new node.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *np;

	np = malloc(sizeof(binary_tree_t));
	if (!np)
		return (NULL);

	np->n = value;
	np->parent = parent;
	np->left = NULL;
	np->right = NULL;

	return (np);
}
