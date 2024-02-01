#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_levelorder - This for using level-order traversal
 * @tree: Pointer to the root node
 * @func: Pointer to a function to call
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || !func)
		return;

	binary_tree_t **queue = malloc(sizeof(binary_tree_t *) * 1024);

	if (!queue)
		return;

	int a = 0, b = 0;
	binary_tree_t *current;

	queue[b++] = (binary_tree_t *)tree;

	while (a < b)
	{
		current = queue[a++];
		func(current->n);

		if (current->left)
			queue[b++] = current->left;
		if (current->right)
			queue[b++] = current->right;
	}

	free(queue);
}
