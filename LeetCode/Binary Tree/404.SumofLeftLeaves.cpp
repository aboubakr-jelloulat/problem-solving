
class Solution
{
private:
	bool _isLeaf(TreeNode* root)
	{
		return root && !root->left&& !root->right;
	}

public:
	int sumOfLeftLeaves(TreeNode *root)
	{
		if (!root)
			return 0;

		int sum = 0;
		if (_isLeaf_left(root->left))
			sum += root->left->val;

		return sum + sumOfLeftLeaves(root->left) + sumOfLeftLeaves(root->right);
	}
};