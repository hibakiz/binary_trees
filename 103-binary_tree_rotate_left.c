#include "binary_trees.h"

/**
 * binary_tree_rotate_left - Performs a left-rotation.
 * @tree: A pointer to the root node.
 * Return: A pointer to the new root node.
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *tmp = NULL, *new;

	if (!tree || !tree->right)
		return (NULL);

	tmp = tree;
	new = tree->right;
	tree = tree->right;
	tree->parent = NULL;

	if (tree->left)
	{
		tmp->right = tree->left;
		tree->left->parent = tmp;
	}
	else
	{
		tmp->right = NULL;
	}

	tmp->parent = tree;
	tree->left = tmp;

	if (new->parent)
	{
		new->parent->right = tree;
	}

	tree->parent = new->parent;

	return (tree);
}
