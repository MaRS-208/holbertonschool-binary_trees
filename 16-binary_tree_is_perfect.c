#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1 or 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int cl = 0, cr = 0;
	
	if (tree == NULL)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	cl = binary_tree_height(tree->left);
	cr = binary_tree_height(tree->right);
	if (cl == cr)
		return (binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right));
	return (0);
}

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
