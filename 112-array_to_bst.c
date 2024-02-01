#include "binary_trees.h"

/**
 * array_to_bst - to builds Tree from an array
 * @array: A pointer to the first element of the array
 * @size: The number of elements in the array
 * Return: A pointer to the root node, ortherwise NULL
 */
bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *root = NULL;
	size_t t = 0;

	if (array == NULL || size == 0)
		return (NULL);

	while (t < size)
	{
		bst_insert(&root, array[t]);
		t++;
	}
	return (root);
}
