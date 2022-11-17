#include "binary_trees.h"

/**
 * binary_tree_is_root - check if node is a root
 * @node: pointer to node to check
 * Return: 1 if is a root, 0 otherwise
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->left == NULL || node->right == NULL)
		return (0);
	else
		return (1);
}