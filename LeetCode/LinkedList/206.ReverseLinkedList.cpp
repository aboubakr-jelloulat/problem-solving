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
    ListNode *reverseList(ListNode *head)
    {
        if (!head)
            return nullptr;
        
        ListNode *prev = nullptr;
        ListNode *next = nullptr;

        while (head)
        {
            next = head->next;
            head->next = prev;


            prev = head;
            head = next;
        }
        head = prev;
        
        return head;
    }
};

