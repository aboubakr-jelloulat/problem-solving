#include <stdio.h>

struct TreeNode
{
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
};

#define MAX(a, b) ((a) > (b) ? (a) : (b))

int max_sofar = 0;

int height(struct TreeNode *root)
{
	if (!root)
		return 0;

	int left_height = height(root->left);
	int right_height = height(root->right);

	max_sofar = MAX(max_sofar, right_height + left_height);

	return (1 + MAX(right_height, left_height));
}

int diameterOfBinaryTree(struct TreeNode *root)
{
	if (!root)
		return 0;

	max_sofar = 0;
	height(root);
	return max_sofar;
}
