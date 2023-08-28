#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts node at the right
 * @parent: the parent
 * @value: the value
 * Return: node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *tm;
	binary_tree_t *nd;

	if (parent)
	{
		nd = binary_tree_node(parent, value);
		tm = parent->right;
		parent->right = nd;
		if (tm)
		{
			tm->parent = nd;
			nd->right = tm;
		}

	}
	return (NULL);
}
