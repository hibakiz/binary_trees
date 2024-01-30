#include "binary_trees.h"
/**
* binary_tree_insert_left -  creates a binary tree node
* @parent:  a pointer to the parent node of the node to create
* @value: the value to put in the new node
* Return:  pointer to the new node, or NULL on failure
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new, *old_left;

		new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);
	new->n = value;
	new->right = NULL;
	new->parent = parent;
	if (parent->left == NULL)
	{
		parent->left = new;
		new->left = NULL;
	}
	else
	{
		old_left = parent->left;
		parent->left = new;
		new->left = old_left;
	}
	return (new);
}
