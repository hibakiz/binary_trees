#include "binary_trees.h"
/**
 * binary_tree_is_perfect -  function that  checks if a binary tree is perfect
 * @tree:  a pointer to the root node of the tree to check
 * Return:  0 or 1
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree)
	{
		if (get_height(tree))
			return (1);
		return (0);
	}
	return (0);
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
		if (l == r)
			return (l);

		return (0);
	}
	return (0);
}
