/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution
{
public:
    ListNode *deleteDuplicates(ListNode *head)
    {
        for (ListNode *cur = head; cur; cur = cur->next)
        {
            ListNode *prev = cur;
            ListNode *cur2 = cur->next;
            while (cur2)
            {
                if (cur2->val == cur->val)
                {
                    prev->next = cur2->next; // remove cur2
                    delete cur2;
                    cur2 = prev->next; // update cur2 after deletion
                }
                else
                {
                    prev = cur2;
                    cur2 = cur2->next;
                }
            }
        }
        return head;
    }
};
