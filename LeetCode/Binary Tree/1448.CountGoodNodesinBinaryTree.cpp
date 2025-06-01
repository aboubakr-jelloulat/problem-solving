#include <iostream>
#include <cassert>
#include <algorithm>
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
	int _count_good_nodes(TreeNode *root, int max_root)
	{
		if (!root)
			return 0;

		int is_good = 0;
		if (root->val >= max_root)
		{
			++is_good;
			max_root = root->val;
		}

		is_good += _count_good_nodes(root->left, max_root);
		is_good += _count_good_nodes(root->right, max_root);

		return is_good;
	}

public:
	int goodNodes(TreeNode *root)
	{
		return _count_good_nodes(root, root->val);
	}
};
