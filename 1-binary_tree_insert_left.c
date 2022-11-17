#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert node as left of
 * @parent: Pointer to parent node
 * @value: Integer to assign node
 * Return: Pointer to created node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));
	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;

	if (parent->left == NULL)
		parent->left = node;
	else
	{
		node->left = parent->left;
		parent->left = node;
	}

	return node;
}
