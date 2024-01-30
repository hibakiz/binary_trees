#include "binary_trees.h"

/**
 * max - Calculate max.
 * @l: First value.
 * @r: Second value.
 *
 * Return: max .
 */
size_t max(size_t l, size_t r)
{
	return (l > r ? l : r);
}

/**
 * binary_tree_height - This measures the height of a binary tree.
 * @tree: pointer to the root node of the tree to measure the height.
 *
 * Return: hight otherwise,  0 if it is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l = 0, r = 0;

		l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return (max(l, r));
	}
	return (0);
}
