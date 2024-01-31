#include "binary_trees.h"
/**
 * binary_tree_is_perfect -  function that  checks if a binary tree is perfect
 * @tree:  a pointer to the root node of the tree to check
 * Return:  0 or 1
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node && node->parent)
	{
		if (node == node->parent->left)
			return (node->parent->right);

		return (node->parent->left);
	}
	return (NULL);
}
