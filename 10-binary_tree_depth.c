#include "binary_trees.h"

/**
 * binary_tree_depth - get depth
 * @tree: tree
 * Return: the height
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree && tree->parent)
		return (binary_tree_depth(tree->parent) + 1);
	else
		return (0);
}
