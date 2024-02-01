#include "binary_trees.h"

/**
 * binary_trees_ancestor - This finds the lowest ancestor of two nodes
 * @first: pointer to first node
 * @second: pointer to second
 *
 * Return: Pointer to the lowest common ancestor,
 * otherwise NULL
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
									 const binary_tree_t *second)
{
	binary_tree_t *anc;

	if (first == NULL || second == NULL)
		return (NULL);

	anc = (binary_tree_t *)first;

	while (anc)
	{
		if (binary_tree_help(anc, second))
			return (anc);
		anc = anc->parent;
	}

	return (NULL);
}

/**
 * binary_tree_help - Checks if is an ancestor
 * @anc: pointer to ancestor node
 * @node: pointer to descendant node
 *
 * Return: 1 if ancestor, 0 otherwise
 */
int binary_tree_help(const binary_tree_t *anc, const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (anc == node)
		return (1);

	return (binary_tree_help(anc, node->parent));
}
