#include "binary_trees.h"

/**
 * best_helper -  recursively check if  is a valid BST
 * @tree: A pointer to the root node
 * @min: The minimum value
 * @max: The maximum value
 * Return: true if the subtree rooted at tree is a valid BST, otherwise false
 */
bool best_helper(const binary_tree_t *tree, int min, int max)
{
	if (tree == NULL)
		return (true);

	if (tree->n < min || tree->n > max)
		return (false);

	return (best_helper(tree->left, min, tree->n - 1) &&
			best_helper(tree->right, tree->n + 1, max));
}

/**
 * binary_tree_is_bst - Checks if is a valid BST
 * @tree: A pointer to the root node
 * Return: 1 if tree is a valid BST, and 0 otherwise
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (best_helper(tree, INT_MIN, INT_MAX));
}
