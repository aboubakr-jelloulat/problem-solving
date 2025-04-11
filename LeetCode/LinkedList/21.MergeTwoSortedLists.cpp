#include <iostream>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution
{
private:
    bool _MergeFromAnotherList(int value1, int value2)
    {
        return (value1 >= value2);
    }

    void link(ListNode *first, ListNode *second)
    {
        if (first && second)
            first->next = second;
    }

public:
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        if (!list1)
            return list2;
        if (!list2)
            return list1;

        ListNode *head = nullptr;
        ListNode *last = nullptr;

        while (list1 && list2)
        {
            ListNode *next;
            if (_MergeFromAnotherList(list1->val, list2->val))
            {
                next = list2;
                list2 = list2->next;
            }
            else
            {
                next = list1;
                list1 = list1->next;
            }

            if (!head)
            {
                head = next;
                last = next;
            }
            else
            {
                last->next = next;
                last = next;
            }
        }

        if (list1)
            last->next = list1;
        if (list2)
            last->next = list2;

        return head;
    }
};
