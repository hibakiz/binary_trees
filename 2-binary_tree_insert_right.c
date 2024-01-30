#include "binary_trees.h"
/**
* binary_tree_insert_right :  creates a binary tree node
* @parent:  a pointer to the parent node of the node to create
* @value: the value to put in the new node
* Return:  pointer to the new node, or NULL on failure
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new, *old_right;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);
	new->n = value;
	new->left = NULL;
	new->parent = parent;
	if (parent->right == NULL)
	{
		parent->right = new;
		new->right = NULL;
	}
	else
	{
		old_right = parent->right;
		parent->right = new;
		new->right = old_right;
	}
	return (new);
}
