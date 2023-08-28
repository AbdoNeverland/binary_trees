#include "binary_trees.h"

/**
 * binary_tree_postorder -  post-order traversal
 * @tree: tree
 * @func: function to apply
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
if (!tree)
	return;
binary_tree_inorder(tree->left, func);
binary_tree_inorder(tree->right, func);
func(tree->n);
}