#include "binary_trees.h"
/**
 * binary_tree_balance -  function that measures
 * the balance factor of a binary tree
 * @tree:  a pointer to the root node of the tree to measure the balance factor
 * Return:  0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (left_height - right_height);
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

		l += 1 + binary_tree_height(tree->left);
		r += 1 + binary_tree_height(tree->right);
		if (l > r)
			return (l);

		return (r);
	}
	return (0);
}
