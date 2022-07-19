#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: balance
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int hl = 0, hr = 0;

	if (tree == NULL)
		return (0);
	hl = binary_tree_height(tree->left);
	hr = binary_tree_height(tree->right);
	return (hl - hr);
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
	cl = binary_tree_height(tree->left);
	cl = cl + 1;
	cr = binary_tree_height(tree->right);
	cr = cr + 1;
	if (cl >= cr)
		return (cl);
	else
		return (cr);
}
