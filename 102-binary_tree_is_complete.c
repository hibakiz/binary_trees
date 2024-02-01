#include "binary_trees.h"
int binary_tree_is_complete(const binary_tree_t *tree);
/**
 * binary_tree_is_complete - function that checks if a binary tree is complete.
 * @tree: pointer to the root node of the tree to check.
 *
 * Return: 0 or 1 .
 */

int binary_tree_is_complete(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (1);
	}

	int node_depth = 0;
	binary_tree_t *current;

	current = (binary_tree_t *)tree;

	while (current->left)
	{
		current = current->left;
		node_depth++;
	}

	while (current)
	{
		if (current->left == NULL && current->right != NULL)
		{
			return (0);
		}

		for (int i = 0; i < (1 << (node_depth - 1)); i++)
		{
			if (current->right == NULL)
			{
				return (1);
			}
			current = current->right;
		}


		if (current->right->left)
		{
			current = current->right->left;
		}
		else
		{
			current = current->right;
		}
		node_depth--;
	}

	return (1);
}
