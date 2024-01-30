#include "binary_trees.h"
/**
* binary_tree_balance -  function that measures
* the balance factor of a binary tree
* @tree:  a pointer to the root node of the tree to measure the balance factor
* Return:  0
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0;
	const binary_tree_t *node = tree;

	if (tree == NULL)
		return (0);

	while (node->left != NULL)
	{
		left_height++;
		node = node->left;
	}
	node = tree;
	while (node->right != NULL)
	{
		right_height++;
		node = node->right;

	}
	return (left_height - right_height);
}
