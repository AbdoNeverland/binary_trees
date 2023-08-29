#include "binary_trees.h"

/**
 * _height - get height
 * @tree: tree
 * Return: the height
 */
size_t _height(const binary_tree_t *tree)
{
	size_t h_right = 0, h_left = 0;

	if (!tree)
		return (0);
	h_left = _height(tree->left) + 1;
	h_right = _height(tree->right) + 1;
	return (h_left <= h_right ? h_right : h_left);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: tree
 * Return: the balance
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (_height(tree->left) - _height(tree->right));
	else
		return (0);
}
