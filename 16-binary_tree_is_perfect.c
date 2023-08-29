#include "binary_trees.h"
/**
 * height - get height
 * @tree: tree
 * Return: the height
 */
size_t height(const binary_tree_t *tree)
{
	size_t h_right = 0, h_left = 0;

	if (!tree)
		return (0);
	if (tree->left)
		h_left = height(tree->left) + 1;
	if (tree->right)
		h_right = height(tree->right) + 1;
	return (h_left <= h_right ? h_right : h_left);
}
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
 * nb_onechild - get number of node with one leaf
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
 * is_leaves_have_same_height - if all leaves have the same height
 * @tree: tree
 * @ht: hight of tree
 * Return: the number of leaves
 */
size_t is_leaves_have_same_height(const binary_tree_t *tree, size_t ht)
{
	if (!tree)
		return (1);
	if (!tree->left && !tree->right)
	{
		if (depth(tree) != ht)
			return (0);
	}
	if (!is_leaves_have_same_height(tree->left, ht))
		return (0);

	if (!is_leaves_have_same_height(tree->right, ht))
		return (0);

	return (1);
}

/**
 * binary_tree_is_perfect - is perfect
 * @tree: tree
 * Return: 1 if perfect 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t ht = height(tree);

	if (!tree)
		return (0);
	if (nb_onechild(tree) == 0 && is_leaves_have_same_height(tree, ht))
		return (1);
	else
		return (0);
}
