#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct TreeNode
{
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

class Solution
{
public:
    bool isCompleteTree(TreeNode *root)
    {
        queue<TreeNode *> q;
        q.push(root);
        bool no_more_allowed = false;

        while (!q.empty())
        {
            TreeNode *cur = q.front();
            q.pop();

            if (cur == nullptr)
                no_more_allowed = true;
            else
            {
                if (no_more_allowed)
                    return false;

                q.push(cur->left);
                q.push(cur->right);
            }
        }
        return true;
    }
};

