#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t cl = 0, cr = 0;

	if (tree == NULL)
		return (0);
	if (tree->left)
	{
		cl = binary_tree_height(tree->left);
		cl = cl + 1;
	}
	if (tree->right)
	{
		cr = binary_tree_height(tree->right);
		cr = cr + 1;
	}
	if (cl >= cr)
		return (cl);
	else
		return (cr);
}
