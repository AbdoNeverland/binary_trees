#include "binary_trees.h"


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
	if (binary_tree_depth(first) > binary_tree_depth(second))
	{
		big = first;
		small = second;
	}
	else
	{
		big = second;
		small = first;
	}
	const binary_tree_t *i = small, *j = big;

	while (i)
	{
		j = big;
		while (j)
		{
			if (i == j)
				return ((binary_tree_t *)i);
			j = j->parent;
		}
		i = i->parent;
	}
	return (NULL);
}


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

