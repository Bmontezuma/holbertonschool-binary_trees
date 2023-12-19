#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
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

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

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
			{
				return (0);
			}
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

