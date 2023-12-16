#include "binary_trees.h"

size_t height_helper(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	size_t left_height = height_helper(node->left);
	size_t right_height = height_helper(node->right);
		return (1 + (left_height > right_height ? left_height : right_height));
}

size_t binary_tree_height(const binary_tree_t *tree)
{
	return (height_helper(tree));
}
