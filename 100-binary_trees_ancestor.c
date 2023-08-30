#include "binary_trees.h"

/**
 * depth - get depth
 * @tree: tree
 * Return: the height
 */
size_t depth(const binary_tree_t *tree)
{
	if (tree && tree->parent)
		return (depth(tree->parent) + 1);
	else
		return (0);
}

/**
 * binary_trees_ancestor - get ancestor
 * @first: first node
 * @second: second node
 * Return: ancestor
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
	const binary_tree_t *second)
{
	const binary_tree_t *small, *big;

	if (!first || !second)
		return (NULL);
	small = (depth(first) > depth(second)) ? second : first;
	big = (depth(first) > depth(second)) ? first : second;
	const binary_tree_t *j = big;

	while (small)
	{
		j = big;
		while (j)
		{
			if (small == j)
				return ((binary_tree_t *)small);
			j = j->parent;
		}
		small = small->parent;
	}
	return (NULL);
}
