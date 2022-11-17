#include "binary_trees.h"

/**
 * binary_tree_node - create a binary tree node
 * @parent: Pointer to parent of node
 * @value: Value to assign node
 *
 * Return: pointer to created node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));

	node->parent = parent;
	(*node).n = value;

	return node;
}
