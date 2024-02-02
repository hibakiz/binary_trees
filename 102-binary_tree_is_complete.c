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
	size = tree_size(tree);

	return (helper_comple(tree, 0, size));
}
/**
 * helper_comple - hrlp to check
 * @tree: a pointer to the root node
 * @index: node index to check
 * @size: number of nodes in the tree
 *
 * Return: 1 if the tree is complete
 *         0 otherwise
 */
int helper_comple(const binary_tree_t *tree, size_t index, size_t size)
{
	if (!tree)
		return (1);

	if (index >= size)
		return (0);

	return (helper_comple(tree->left, 2 * index + 1, size) &&
			helper_comple(tree->right, 2 * index + 2, size));
}

/**
 * tree_size - check size of a binary tree
 * @tree: tree to measure the size of
 *
 * Return: size of the tree
 *         0 otherwise
 */
size_t tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (tree_size(tree->left) +
			tree_size(tree->right) + 1);
}
