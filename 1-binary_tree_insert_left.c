#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts node at the left
 * @parent: the parent
 * @value: the value
 * Return: node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *tm;
	binary_tree_t *nd;

	if (parent)
	{
		nd = binary_tree_node(parent, value);
		tm = parent->left;
		parent->left = nd;
		if (tm)
		{
			tm->parent = nd;
			nd->left = tm;
		}

	}
	return (NULL);
}
