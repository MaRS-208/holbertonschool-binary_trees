#include "binary_trees.h"

/**
 * binary_tree_insert_left - Write a function that
 * inserts a node as the left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 * Return: node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);
	if (!parent->left)
	{
		parent->left = binary_tree_node(parent, value);
		return (parent->left);
	}
	else
	{
		node = binary_tree_node(parent, value);
		if (!node)
			return (NULL);
		node->left = parent->left;
		node->left->parent = node;
		parent->left = node;
		return (node);
	}
}
