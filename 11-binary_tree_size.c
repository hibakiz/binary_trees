#include "binary_trees.h"

/**
 * binary_tree_size - This measures the size of a binary tree.
 * @tree: pointer to the root node of the tree to measure the size.
 *
 * Return: The size of the tree. otherwise , 0 if the tree is NULL.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	size_t r = binary_tree_size(tree->right);
	size_t l = binary_tree_size(tree->left);

	return (1 + l + r);
}
