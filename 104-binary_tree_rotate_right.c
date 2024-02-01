#include "binary_trees.h"

/**
 * binary_tree_rotate_right - Performs a right-rotation.
 * @tree: A pointer to the root node.
 * Return: A pointer to the new root node.
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *tmp = NULL, *new;

	if (!tree || !tree->left)
		return (NULL);

	tmp = tree;
	new = tree->left;
	tree = tree->left;
	tree->parent = NULL;

	if (tree->right)
	{
		tmp->left = tree->right;
		tree->right->parent = tmp;
	}
	else
	{
		tmp->left = NULL;
	}

	tmp->parent = tree;
	tree->right = tmp;

	if (new->parent)
	{
		new->parent->left = tree;
	}

	tree->parent = new->parent;

	return (tree);
}
