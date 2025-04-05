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
	/*
		* The idea is simple but smart!
		* use 2 pointers
		* The first (slow) moves normally step by step
		* The second (fast) jump 2 steps each time!
	*/
	ListNode *middleNode(ListNode *head)
	{
		// Tortoise and the Hare Algorithm
		ListNode *slow, *fast;

		for (slow = fast = head ; fast && fast->next ; slow = slow->next, fast = fast->next->next)
			;
		return slow;
	}
};

int main(void)
{
	Solution	sol;

	ListNode *l1 = new ListNode;
	ListNode *l2 = new ListNode;
	ListNode *l3 = new ListNode;

	l1->next = l2;
	l2->next = l3;
	l3->next = nullptr;

	l1->val = 13;
	l2->val = 42;
	l3->val = 19;

	ListNode *this_ =  sol.middleNode(l1);

	cout << this_->val << endl; // 42

	return 0;
}
