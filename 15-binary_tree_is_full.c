#include "binary_trees.h"

/**
 * nb_onechild - get leaves
 * @tree: tree
 * Return: the number of leaves
 */
size_t nb_onechild(const binary_tree_t *tree)
{
	size_t s = 0;

	if (!tree)
		return (0);
	if ((tree->left && !tree->right) || (!tree->left && tree->right))
		s = nb_onechild(tree->left) + nb_onechild(tree->right) + 1;
	else
		s = nb_onechild(tree->left) + nb_onechild(tree->right);
	return (s);
}

/**
 * binary_tree_is_full - is full
 * @tree: tree
 * Return: 1 if full 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree || nb_onechild(tree))
		return (0);
	return (1);
}
