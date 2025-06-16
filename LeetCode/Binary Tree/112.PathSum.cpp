#include <iostream>
#include <algorithm>
#include <cassert>
#include <vector>
using namespace std;

struct TreeNode
{
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode() : val(0), left(nullptr), right(nullptr) {}
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
	TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};


class Solution
{
private :
	
	bool _is_leaf(TreeNode *root)
	{
		return !root->left && !root->right;
	}

public:
	    bool hasPathSum(TreeNode* root, int targetSum) 
		{
			if (!root)
				return false;
			
			if (_is_leaf(root))
				return	root->val == targetSum;

			return hasPathSum(root->left, targetSum - root->val) || hasPathSum(root->right, targetSum - root->val);
    	}
};