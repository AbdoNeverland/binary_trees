#include "binary_trees.h"

/**
 * binary_tree_nodes - counts node with one child
 * @tree: tree
 * Return: the number of one child nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t s = 0;

	if (!tree)
		return (0);
	if (tree->left || tree->right)
		s = binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1;
	else
		s = binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);
	return (s);
}
