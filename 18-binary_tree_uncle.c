#include "binary_trees.h"
/**
 * binary_tree_uncle -  function that finds the uncle of a node
 * @node:  a pointer to the node to check
 * Return:  a pointer to the sibling node or NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node && node->parent && node->parent->parent)
	{
		/*if (node == node->parent->parent->left)
			return (node->parent->parent->right);

		return (node->parent->parent->left);*/
        printf("%d\n", node->parent->parent->right->n);
	}
	return (NULL);
}
