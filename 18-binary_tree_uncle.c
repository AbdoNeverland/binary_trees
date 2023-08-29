#include "binary_trees.h"
/**
 * _binary_tree_sibling - get sibling
 * @node: node
 * Return: node
 */
binary_tree_t *_binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	return (node->parent->left == node ?
		node->parent->right : node->parent->left);
}

/**
 * binary_tree_uncle - get uncle
 * @node: node
 * Return: node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	return (_binary_tree_sibling(node->parent));
}
