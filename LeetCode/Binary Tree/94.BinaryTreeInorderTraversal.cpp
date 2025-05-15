#include <iostream>
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
private:
	void inorder(TreeNode* root, vector<int>& res)
	{
		if (!root) return;
		inorder(root->left, res);
		res.push_back(root->val);
		inorder(root->right, res);
	}

public:
	vector<int> inorderTraversal(TreeNode* root)
	{
		vector<int> res;
		inorder(root, res);
		return res;
	}
};

// int main()
// {
// 	TreeNode* root = new TreeNode(1);
// 	root->right = new TreeNode(2);
// 	root->right->left = new TreeNode(3);

// 	Solution sol;
// 	vector<int> res = sol.inorderTraversal(root);

// 	for (int val : res)
// 		cout << val << " ";
// 	cout << endl;

// 	return 0;
// }
