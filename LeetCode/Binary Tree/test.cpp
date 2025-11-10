#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution
{
public:
	int maxDepth(TreeNode *root)
	{
		if (!root)
			return 0;
		int l = maxDepth(root->left);
		int r = maxDepth(root->right);
		return max(l, r) + 1;
	}

	bool is_perfect(TreeNode *root, int h)
	{
		if (isLeaf(root)) // All leaves must be on the same last level
			return h == 0;

		if (!root->left && root->right || root->left && !root->right)
			return false; // one child!

		// perfect on level h is perfect on h-1 for children
		return is_perfect(root->left, h - 1) && is_perfect(root->right, h - 1);
	}

	bool is_perfect(TreeNode *root)
	{
		return is_perfect(root, maxDepth(root) - 1);
	}

	bool isLeaf(TreeNode *node)
	{
		return node && !node->left && !node->right;
	}

};
