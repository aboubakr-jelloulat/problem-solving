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

    static ListNode* reverse_linkedlist(ListNode *head)
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

    static int get_size(ListNode *head)
    {
        if (!head)
            return 0;
        
        ListNode *cur = head;

        int counter = 0;
        while (cur)
        {
            counter++;

            cur = cur->next;
        }
        return counter;
    }

public:
    static int pairSum(ListNode* head)
    {
        if (!head || !head->next)
            return 0;

        if (get_size(head) == 2)
            return head->val + head->next->val;

        ListNode *half = head;
        ListNode *cur = head;

        int size = (get_size(head) / 2) - 1;
        
        while (half)
        {
            if (size == 0)
                break;
            
            half = half->next;
            size--;
        }
        ListNode *nd_head = reverse_linkedlist(half->next);
        half->next = nullptr;

        int sum1 = 0; int sum2 = 0;

        int maxSum = 0;

        while (cur && nd_head)
        {
            int sum = cur->val + nd_head->val;
            maxSum = std::max(maxSum, sum);

            cur = cur->next;
            nd_head = nd_head->next;
        }

        return maxSum;

    }
};


int main()
{

    ListNode* head = new ListNode(4);
    head->next = new ListNode(2);
    head->next->next = new ListNode(2);
    head->next->next->next = new ListNode(3);
    // head->next->next->next->next = new ListNode(5);

    std::cout << "Output : " <<  Solution::pairSum(head);

    // while (head->next)
    // {
    //     std::cout << head->val << " ";
    //     head = head->next;
    // }

    // std::cout << "num : " << head->val << std::endl;
    return 0;
}
