#include "binary_trees.h"

/**
 * binary_tree_is_heap - checks if  tree is Heap
 * @tree: a pointer to the root node of the tree
 *
 * Return: 1 if tree is a  Heap
 *         0 if tree is NULL
 *         0 otherwise
 */

int binary_tree_is_heap(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (helper(tree));
}

/**
 * helper - help to check Heap
 * @tree: a pointer to the root node
 *
 * Return: 1 if tree is Heap
 *         1 if tree is NULL
 *         0 otherwise
 */
int helper(const binary_tree_t *tree)
{
	if (!tree)
		return (1);

	if (!complete(tree))
		return (0);

	if (tree->left)
		if (tree->left->n > tree->n)
			return (0);
	if (tree->right)
		if (tree->right->n > tree->n)
			return (0);

	return (helper(tree->left) &&
			helper(tree->right));
}

/**
 * complete - checks if tree is complete
 * @tree: a pointer to the root node of the tree
 *
 * Return: 1 if the tree is complete
 *         0 other wise
 */
int complete(const binary_tree_t *tree)
{
	size_t size;

	if (!tree)
		return (0);
	size = tree_size(tree);

	return (btic_helper(tree, 0, size));
}

/**
 * btic_helper - checks if a binary tree is complete
 * @tree: a pointer to the root node
 * @index: node index to check
 * @size: number of nodes in the tree
 *
 * Return: 1 if the tree is complete
 *         0 otherwise
 */
int btic_helper(const binary_tree_t *tree, size_t index, size_t size)
{
	if (!tree)
		return (1);

	if (index >= size)
		return (0);

	return (btic_helper(tree->left, 2 * index + 1, size) &&
			btic_helper(tree->right, 2 * index + 2, size));
}

/**
 * tree_size -  size of a binary tree
 * @tree: tree to check size of
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
