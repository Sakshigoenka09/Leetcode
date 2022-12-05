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
    ListNode* middleNode(ListNode* head)
    {
        ListNode* current=head;
        int c = 1,i=0;
        while(current->next != NULL)
        {
           current = current->next;
            c++;
        }
       current = head;
       while(i<c/2)
       {
          current = current->next;
           i++;
       }

        return current;
    }
};