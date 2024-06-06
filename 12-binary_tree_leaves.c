#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a binary tree.
 * @tree: A pointer to the root node of the tree to count the leaves of.
 *
 * Return: leaves numbers in the tree.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t l = 0;

	while (tree)
	{
		l += (!tree->left && !tree->right) ? 1 : 0;
		l += binary_tree_leaves(tree->left);
		l += binary_tree_leaves(tree->right);
		break;
	}
	return (l);
}
