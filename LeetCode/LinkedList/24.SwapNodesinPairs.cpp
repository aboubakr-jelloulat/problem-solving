#include <iostream>
using namespace std;


struct ListNode
{
	int val;
	ListNode *next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
	ListNode *swapPairs(ListNode *head)
	{
		for (ListNode *cur = head; cur; cur = cur->next)
		{
			if (cur->next)
			{
				swap(cur->val, cur->next->val);
				cur = cur->next;
			}
		}
		return head;
	}
};
