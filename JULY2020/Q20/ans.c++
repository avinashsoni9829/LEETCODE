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
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(head == NULL)
        return head;

    struct ListNode *current = (struct ListNode*)calloc(1,sizeof(struct ListNode));
    current -> next = head;
    head = current;

    while(current -> next)
    {
        if(current -> next -> val == val && current -> next -> next == NULL)
            current -> next = NULL;

        else if(current -> next -> val == val)
            current -> next = current -> next -> next;

        else
            current = current -> next;
    }
    return head -> next;
        
    }
};
