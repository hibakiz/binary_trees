#include "binary_trees.h"

/**
 * bst_insert - Inserts a value Tree
 * @tree: A double pointer to the root node of the BST
 * @value: The value to store in the node to be inserted
 * Return: A pointer to the created node,NULL otherwise
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *new_node, *current, *parent;

	if (tree == NULL)
		return (NULL);

	new_node = binary_tree_node(NULL, value);
	if (new_node == NULL)
		return (NULL);

	if (*tree == NULL)
	{
		*tree = new_node;
		return (new_node);
	}

	current = *tree;
	parent = NULL;
	while (current != NULL)
	{
		parent = current;
		if (value < current->n)
			current = current->left;
		else if (value > current->n)
			current = current->right;
		else
		{
			free(new_node);
			return (NULL);
		}
	}

	if (value < parent->n)
		parent->left = new_node;
	else
		parent->right = new_node;

	new_node->parent = parent;

	return (new_node);
}
