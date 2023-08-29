#include "binary_trees.h"

/**
 * binary_tree_leaves - get leaves
 * @tree: tree
 * Return: the number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t s = 0;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		s = binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right) + 1;
	else
		s = binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);
	return (s);
}
