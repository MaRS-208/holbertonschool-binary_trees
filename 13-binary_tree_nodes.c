#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree to count the number of nodes
 * Return: nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t c = 0;

	if (tree == NULL)
		return (0);
	if (tree->left || tree->right)
	{
		if (tree->left)
			c += binary_tree_nodes(tree->left);
		if (tree->right)
			c += binary_tree_nodes(tree->right);
		return (c + 1);
	}
	return (c);
}
