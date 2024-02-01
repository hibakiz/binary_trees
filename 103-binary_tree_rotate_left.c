#include "binary_trees.h"

/**
 * binary_tree_rotate_left - Performs a left-rotation.
 * @tree: A pointer to the root node.
 * Return: A pointer to the new root node.
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	if (!tree || !tree->right)
		return (NULL);

	binary_tree_t *new = tree->right;
	binary_tree_t *temp = new->left;

	new->left = tree;
	tree->right = temp;

	if (temp != NULL)
		temp->parent = tree;

	new->parent = tree->parent;
	tree->parent = new;

	return (new);
}
