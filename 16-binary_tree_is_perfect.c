#include "binary_trees.h"

/* Declaration of the calculate_depth function */
int calculate_depth(const binary_tree_t *tree);

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 *
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is perfect, 0 if @tree is NULL or not perfect.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (1);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left != NULL && tree->right != NULL)
	{
		int left_depth = calculate_depth(tree->left);
		int right_depth = calculate_depth(tree->right);

		if (left_depth == right_depth)
			return (binary_tree_is_perfect(tree->left) &&
					binary_tree_is_perfect(tree->right));
	}

	return (0);
}
