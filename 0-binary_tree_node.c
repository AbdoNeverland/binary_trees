#include "binary_trees.h"

/**
 * binary_tree_node - creates binary tree
 * @parent: the parent
 * @value: the data value
 * Return: the bt created
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *nd = malloc(sizeof(binary_tree_t));

	if (nd)
	{
		nd->n = value;
		nd->parent = parent;
		nd->left = NULL;
		nd->right = NULL;
	}
	return (nd);
}
