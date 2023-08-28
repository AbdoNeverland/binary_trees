#include "binary_trees.h"

/**
 * binary_tree_is_leaf - is a leaf
 * @node: node to check
 * Return: 1 if node is a leaf 0 otherwise
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node || node->left || node->right)
		return (0);
	else
		return (1);
}
