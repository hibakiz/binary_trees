#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

size_t binary_tree_height(const binary_tree_t *tree);

/**
 * binary_tree_levelorder - Performs level-order traversal of a binary tree
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t level, max_level;

	if (!tree || !func)
		return;

	max_level = binary_tree_height(tree) + 1;

	for (level = 1; level <= max_level; level++)
		levelorder_help(tree, func, level);
}

/**
 * btlo_helper - Helpe levelorder func
 * @tree: Pointer to the current node
 * @func: Pointer to a function to call for each node
 * @level: Current level in tree
 */
void levelorder_help(const binary_tree_t *tree,
					 void (*func)(int), size_t level)
{
	if (level == 1)
		func(tree->n);
	else
	{
		if (tree->left)
			levelorder_help(tree->left, func, level - 1);
		if (tree->right)
			levelorder_help(tree->right, func, level - 1);
	}
}

/**
 * binary_tree_height - This measures the height of a binary tree.
 * @tree: pointer to the root node of the tree to measure the height.
 *
 * Return: hight otherwise,  0 if it is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	size_t l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	size_t r = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	return (max(l, r));
}

/**
 * max - Calculates the maximum
 * @l: First number
 * @r: Second number
 *
 * Return: maximum
 */
size_t max(size_t l, size_t r)
{
	return (l > r ? l : r);
}
