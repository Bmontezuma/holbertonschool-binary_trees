#include "binary_trees.h"

/**
 * calculate_depth - Calculate the depth of the tree
 * @node: Pointer to the root of the tree
 * Return: Depth of the tree
 */
int calculate_depth(const binary_tree_t *node)
{
	int depth = 0;

	while (node != NULL)
	{
		depth++;
		node = node->left;
	}
	return (depth);
}

/**
 * binary_tree_is_perfect - Check if a binary tree is perfect
 * @tree: Pointer to the root of the tree
 * Return: 1 if perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	const binary_tree_t *queue[1024];
	int front = 0, rear = 0;

	queue[rear++] = tree;
	int depth = calculate_depth(tree);

	while (front < rear)
	{
		const binary_tree_t *node = queue[front++];

		if (node->left == NULL && node->right == NULL)
		{
			if (front != depth)
				return (0);
		}
		else if (node->left != NULL && node->right != NULL)
		{
			queue[rear++] = node->left;
			queue[rear++] = node->right;
		}
		else
		{
			return (0);
		}
	}

	return (1);
}

