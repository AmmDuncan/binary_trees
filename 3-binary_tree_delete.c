#include "binary_trees.h"

/**
 * binary_tree_delete - delete a binary tree
 * @tree: pointer to root node of tree
 */
void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *left;
	binary_tree_t *right;

	if (tree == NULL)
		return;

	left = tree->left;
	right = tree->right;

	/* Take left path and delete nodes*/
	if (left == NULL)
	{
		if (right == NULL)
		{
			free(tree);
		}
		else
		{
			binary_tree_delete(right);
		}
	}
	else
	{
		binary_tree_delete(left);
	}
}
