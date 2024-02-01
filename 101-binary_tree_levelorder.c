#include "binary_trees.h"
/**
 * binary_tree_levelorder - Performs level-order traversal of a binary tree
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int level, max_level;

	if (!tree || !func)
		return;

	max_level = get_height(tree) + 1;

	for (level = 1; level <= max_level; level++)
		levelorder_help(tree, func, level);
}

/**
 * levelorder_help - Helpe levelorder func
 * @tree: Pointer to the current node
 * @func: Pointer to a function to call for each node
 * @level: Current level in tree
 */
void levelorder_help(const binary_tree_t *tree,
					 void (*func)(int), int level)
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
 * get_height -  function to find the height
 * @tree:  a pointer to the root node of the tree to check
 * Return:  0 or 1
 */
size_t get_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l = 0, r = 0;

		l += 1 + get_height(tree->left);
		r += 1 + get_height(tree->right);

		return (max(l, r));
	}
	return (0);
}

/**
 * max - Calculates the maximum
 * @l: First number
 * @r: Second number
 *
 * Return: maximum
 */
size_t max(int l, int r)
{
	return (l > r ? l : r);
}
