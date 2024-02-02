#include "binary_trees.h"
int binary_tree_is_complete(const binary_tree_t *tree);
/**
 * binary_tree_is_complete - function that checks if a binary tree is complete.
 * @tree: pointer to the root node of the tree to check.
 *
 * Return: 0 or 1 .
 */

int binary_tree_is_complete(const binary_tree_t *tree)
{
	size_t size;

	if (!tree)
		return (0);
	size = binary_tree_size(tree);

	return (helper_comple(tree, 0, size));
}
/**
 * helper_comple - checks if a binary tree is complete
 * @tree: a pointer to the root node of the tree to check
 * @index: node index to check
 * @size: number of nodes in the tree
 *
 * Return: 1 if the tree is complete
 *         0 if the tree is not complete
 *         0 if tree is NULL
 */
int bhelper_comple(const binary_tree_t *tree, size_t index, size_t size)
{
	if (!tree)
		return (1);

	if (index >= size)
		return (0);

	return (bhelper_comple(tree->left, 2 * index + 1, size) &&
			bhelper_comple(tree->right, 2 * index + 2, size));
}
