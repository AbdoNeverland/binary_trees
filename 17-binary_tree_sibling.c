#include "binary_trees.h"

/**
 * binary_tree_sibling - get sibling
 * @node: node
 * Return: node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	return (node->parent->left == node ?
		node->parent->right : node->parent->left);
}
