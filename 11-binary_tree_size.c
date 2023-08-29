#include "binary_trees.h"

/**
 * binary_tree_size - get size
 * @tree: tree
 * Return: the size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t s;

	if (!tree)
		return (0);
	s = binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1;
	return (s);
}
