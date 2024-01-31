16-binary_tree_is_perfect.c
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l = 0, r = 0;

		l += 1 + binary_tree_is_full(tree->left);
		r += 1 + binary_tree_is_full(tree->right);
		if (l == r)
			return (1);

		return (0);
	}
	return (0);
}
