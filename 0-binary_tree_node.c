#include "binary_trees.h"
/**
* binary_tree_node :  creates a binary tree node
* @parent:  a pointer to the parent node of the node to create
* @value: the value to put in the new node
* Return:  pointer to the new node, or NULL on failure
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;

	if (!parent)
		return (NULL);
	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL)
	new->parent = parent;
	new->n = value;
	if (value > parent->n)
		parent->right = new;
	else
		parent->left = new;	

}