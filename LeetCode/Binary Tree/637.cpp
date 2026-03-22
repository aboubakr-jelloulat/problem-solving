#include <iostream>
#include <queue>

using namespace std;

struct Node 
{
    int value;
    Node* left;
    Node* right;
    Node(int val) : value(val), left(nullptr), right(nullptr) {}
};

void dfs(Node *root)
{
    if (!root)  return ;

    std::cout << root->value << std::endl;
    dfs(root->left);
    dfs(root->right);
}

void bfs(Node *root)
{
    if (!root)  return ;

    std::queue<Node*>  q;
    q.push(root);

    while (!q.empty())
    {
        Node *node = q.front();
        q.pop();

        std::cout << node->value << std::endl;
        if (node->left)
            q.push(node->left);
        if (node->right)
            q.push(node->right);
    }

}


/*
    BFS:
        1 2 3 4 5 6
    DFS:
        1 2 4 5 3 6
*/




vector<double> averageOfLevels(Node* root) 
{
    vector<double> nums;

    if (!root)  return nums;

    std::queue<Node*>  q;
    q.push(root);


    while (!q.empty())
    {
        int level_size = q.size();
        double sum = 0;

        for (int i = 0; i < level_size; i++)
        {
            Node *node = q.front();
            q.pop();

            sum += node->value;

            if (node->left)
                q.push(node->left);
            if (node->right)
                q.push(node->right);
        }
        nums.push_back(sum / level_size);
    }
    return nums;
}


int main() 
{
    //        1
    //       / \
    //      2   3
    //     / \   \
    //    4   5   6

    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->right = new Node(6);

    std::cout <<"dfs : " << std::endl;
    dfs(root);


    std::cout <<"\nbfs : " << std::endl;
    bfs(root);

    std::cout << "average Of Levels : " << std::endl;
    std::vector<double> nums = averageOfLevels(root);

    for (double &x : nums)
        std::cout << x << " ";
    std::cout << std::endl;

    return 0;
}

