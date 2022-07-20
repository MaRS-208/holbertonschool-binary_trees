#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 * Return: int
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int c = 0;
	
	if (tree == NULL)
		return (0);
	if (tree->left)
		c += binary_tree_is_full(tree->left);
	if (tree->right)
		c += binary_tree_is_full(tree->right);
	if (tree->left && !tree->right)
		return (1);
	if (tree->right && !tree->left)
		return (1);
	if (!tree->left && !tree->right)
		return (0);
	if (c >= 1)
		return (0);
	return (1);
}
