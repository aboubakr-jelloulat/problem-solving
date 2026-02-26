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
public:
    static ListNode* reverseList(ListNode* head) 
    {
        if (!head || !head->next)
            return head;
    
        ListNode *prev = nullptr;
        ListNode *cur = head;

        while (cur)
        {
            ListNode *next = cur->next;
            cur->next = prev;

            prev = cur;
            cur = next;
        }
        return prev;
    }
};


int main()
{

    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    
    head = Solution::reverseList(head);

    while (head)
    {
        std::cout << head->val << " ";
        head = head->next;
    }

    return 0;
}

