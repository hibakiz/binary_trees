#include "binary_trees.h"

/**
 * array_to_avl - defines AVL tree from an array.
 * @array: Pointer to the first element of the array.
 * @size: Number of elements.
 *
 * Return: Pointer to the root node of the created AVL tree, otherwiseNULL.
 */
avl_t *array_to_avl(int *array, size_t size)
{
	avl_t *p = NULL;
	size_t t;

	if (!array || size == 0)
		return (NULL);

	for (t = 0; t < size; t++)
	{
		if (avl_insert(&p, array[t]) == NULL)
			return (NULL);
	}

	return (p);
}
