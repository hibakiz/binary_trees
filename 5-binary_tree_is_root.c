#include "binary_trees.h"

/**
 * binary_tree_is_root - This to checks if a given node is a root.
 * @node: Is pointer to the node to check.
 *
 * Return: Return 1 if the node is a root, otherwise 0 is null.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);

	return (node->parent == NULL);
}
