#include <iostream>
#include <vector>

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
    int getSize(ListNode *head)
    {
        int count = 0;
        while (head)
        {
            count++;
            head = head->next;
        }
        return count;
    }

public:
    ListNode *deleteMiddle(ListNode *head)
    {
        if (!head || !head->next)
            return nullptr;

        int size = getSize(head);
        int middle = size / 2;

        ListNode *cur = head;

        for (int i = 0; i < middle - 1; i++)
            cur = cur->next;

        cur->next = cur->next->next;

        return head;
    }
};
