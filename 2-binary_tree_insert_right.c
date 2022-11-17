#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert node as right of
 * @parent: Pointer to parent node
 * @value: Integer to assign node
 * Return: Pointer to created node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);
	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);

	node->n = value;
	node->parent = parent;
	node->right = parent->right;
	node->right = NULL;

	if (node->right != NULL)
		node->right->parent = node;

	parent->right = node;

	return (node);
}
