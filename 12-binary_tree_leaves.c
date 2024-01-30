#include "binary_trees.h"

/**
 * binary_tree_leaves - This counts the leaves in a binary tree.
 * @tree: pointer to the root node of the tree.
 *
 * Return: The number of leaves in the binary tree. otherwise 0.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{

	if (!tree)
		return (0);
	if (tree->left == NULL && !tree->right)
		return (1);
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
