#include "binary_trees.h"

/**
 * binary_tree_insert_left - Write a function that
 * inserts a node as the right-child of another node
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in the new node
 * Return: node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);
	if (!parent->right)
	{
		parent->right = binary_tree_node(parent, value);
		return (parent->right);
	}
	else
	{
		node = binary_tree_node(parent, value);
		if (!node)
			return (NULL);
		node->right = parent->right;
		node->right->parent = node;
		parent->right = node;
		return (node);
	}
}
