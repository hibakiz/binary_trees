#include "binary_trees.h"

/**
 * binary_tree_nodes - this counts nodes in a binary tree.
 * @tree: pointer to the root node of the tree.
 *
 * Return: The number of nodes with at least one child.
 *         otherwise 0.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	size_t left_nodes = binary_tree_nodes(tree->left);
	size_t right_nodes = binary_tree_nodes(tree->right);

	if (tree->left || tree->right)
		return (left_nodes + right_nodes + 1);
	else
		return (left_nodes + right_nodes);
}
