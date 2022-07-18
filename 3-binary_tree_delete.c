#include "binary_trees.h"

/**
 * binary_tree_delete - deletes an entire binary tree
 * @tree:pointer to the root node of the tree to delete
 * Return: 0
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	if (tree->left == NULL && tree->right == NULL)
	{
		free(tree);
		return;
	}
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
