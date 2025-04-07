#include <iostream>
using namespace std;

struct ListNode
{
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

class Solution
{

public:
	void deleteNode(ListNode *node)
	{
		node->val = node->next->val;
		node->next = node->next->next;
	}
};

//   1 ->  2  ->  42 -> 3  ->  4  ->  5

//   1 ->  2 ->  *3 -> skip the next -> 4 -> 5