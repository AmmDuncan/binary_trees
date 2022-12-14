#include "binary_trees.h"

/**
 * array_to_bst - converts an array to bst
 * @array: array to be converted to binary tree
 * @size: size_t size of the array
 * Return: pointer to the root node of the created BST
 * or NULL
 */
bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *tree = NULL;
	size_t i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < i; j++)
		{
			if (array[j] == array[i])
				break;
		}
		if (j == i)
		{
			if (bst_insert(&tree, array[i]) == NULL)
				return (NULL);
		}
	}
	return (tree);
}
