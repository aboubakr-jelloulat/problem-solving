#include <iostream>
using namespace std;

// struct TreeNode
// {
// 	int val;
// 	TreeNode *left;
// 	TreeNode *right;
// 	TreeNode() : val(0), left(nullptr), right(nullptr) {}
// 	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
// 	TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
// };



// Two nodes in a binary tree are cousins if:

// 		They are at the same depth.

// 		They have different parents.

class Solution
{

	int	_getNodeDepth(TreeNode *root, int value, int depth)
	{
		if (!root)	return 0;

		if (root->val == value) return depth;

		if (int left_depth = _getNodeDepth(root->left, value, depth + 1))
			return left_depth;

		return _getNodeDepth(root->right, value, depth + 1);
	}

	TreeNode *_get_Parent(TreeNode *root, int value)
	{
		if (!root  || root->val == value)	return nullptr;

		if ((root->left && root->left->val == value) || (root->right
			&& root->right->val == value))
				return root;

		if (TreeNode *left_parent = _get_Parent(root->left, value))
			return left_parent;

		return _get_Parent(root->right, value);
	}

public:
	bool isCousins(TreeNode *root, int x, int y)
	{
		return ((_getNodeDepth(root, x, 0) == _getNodeDepth(root, y, 0)) && _get_Parent(root, x) != _get_Parent(root, y));
	}
};
