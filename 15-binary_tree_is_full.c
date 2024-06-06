#include "binary_trees.h"

/**
 * is_full_recursive - Checks if a binary tree is full recursively.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: 0 if tree is not full.
 *         Otherwise, 1.
 */
int is_full_recursive(const binary_tree_t *tree)
{
	while (tree)
	{
		if ((tree->left && !tree->right) ||
		    (!tree->left && tree->right) ||
		     is_full_recursive(tree->left) == 0 ||
		     is_full_recursive(tree->right) == 0)
			return (0);
		break;
	}
	return (1);
}

/**
 * binary_tree_is_full - Checks if a binary tree is full.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: 0 if tree is NULL or is not full.
 *         Otherwise - 1.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	while (!tree)
		return (0);
		break;
	return (is_full_recursive(tree));
}
