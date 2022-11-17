#include "binary_trees.h"

/**
 * binary_tree_preorder - traverse a tree and run func at each node
 * @tree: poiner to root of tree
 * @func: function to run for each node
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	binary_tree_t *left;
	binary_tree_t *right;

	if (tree == NULL || func == NULL)
		return;

	left = tree->left;
	right = tree->right;

	(*func)(tree->n);
	if (left != NULL)
		binary_tree_preorder(left, func);
	if (right != NULL)
		binary_tree_preorder(right, func);
}
