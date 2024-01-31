#include "binary_trees.h"
/**
 * binary_tree_is_full -  function that check if the tree is full
 * @tree:  a pointer to the tree to check
 * Return:  0 or 1
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l = 0, r = 0;

		l += 1 + binary_tree_is_full(tree->left);
		r += 1 + binary_tree_is_full(tree->right);
		if (l == r)
			return (1);

		return (0);
	}
	return (0);
}
