#include <iostream>
#include <cassert>
#include <vector>
#include <queue>
#include <stack>
#include <algorithm>
using namespace std;

// struct TreeNode
// {
// 	int val { };
// 	TreeNode *left { };
// 	TreeNode *right { };
// 	TreeNode(int val) :
// 			val(val) {}
// };

class Solution
{
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode *root)
    {
        vector<vector<int>> result;
        if (!root)
            return result;

        deque<TreeNode *> nodeDeque;
        nodeDeque.push_back(root);

        bool leftToRight = true;

        while (!nodeDeque.empty())
        {
            int levelSize = nodeDeque.size();
            vector<int> currentLevel;

            for (int i = 0; i < levelSize; ++i)
            {
                TreeNode *currentNode;

                if (leftToRight)
                {
                    currentNode = nodeDeque.front();
                    nodeDeque.pop_front();

                    if (currentNode->left)
                        nodeDeque.push_back(currentNode->left);
                    if (currentNode->right)
                        nodeDeque.push_back(currentNode->right);
                }
                else
                {
                    currentNode = nodeDeque.back();
                    nodeDeque.pop_back();

                    if (currentNode->right)
                        nodeDeque.push_front(currentNode->right);
                    if (currentNode->left)
                        nodeDeque.push_front(currentNode->left);
                }

                currentLevel.push_back(currentNode->val);
            }

            result.push_back(currentLevel);
            leftToRight = !leftToRight;
        }

        return result;
    }
};

