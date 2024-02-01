#include "binary_trees.h"

/**
 * bst_search - this searches for a value in Tree
 * @tree: A pointer to the root node
 * @value: The value to search tree
 *
 * Return: A pointer to the node containing the value, or NULL if not found
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	if (tree == NULL)
		return (NULL);

	if (tree->n == value)
		return ((bst_t *)tree);
	else if (value < tree->n)
		return (bst_search(tree->left, value));
	else
		return (bst_search(tree->right, value));
}
