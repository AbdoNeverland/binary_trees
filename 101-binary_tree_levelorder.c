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
 * pr -  pre-order traversal
 * @tree: tree
 * @h: height
 * @func: function to apply
 */
void pr(const binary_tree_t *tree, size_t h, void (*func)(int))
{
if (!tree || !func)
	return;
if (depth(tree) == h)
func(tree->n);
pr(tree->left, h, func);
pr(tree->right, h, func);
}

/**
 * binary_tree_levelorder - level order
 * @tree: tree
 * @func: function to apply
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	size_t i, h = height(tree);

	for (i = 0; i < h + 1; i++)
		pr(tree, i, func);
}
