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

	max_level = binary_tree_height2(tree) + 1;

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
 * binary_tree_height2 - This measures the height of a binary tree.
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: hight otherwise,  0 if it is NULL.
 */
int binary_tree_height2(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	int l, r;
	l = tree->left ? 1 + binary_tree_height2(tree->left) : 0;
	r = tree->right ? 1 + binary_tree_height2(tree->right) : 0;

	return (max(l, r));
}

/**
 * max - Calculates the maximum
 * @l: First number
 * @r: Second number
 *
 * Return: maximum
 */
int max(int l, int r)
{
	return (l > r ? l : r);
}
