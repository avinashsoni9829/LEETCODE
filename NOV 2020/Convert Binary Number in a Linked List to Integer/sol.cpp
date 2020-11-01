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
    int getDecimalValue(ListNode* head) {
        int len=0;
        ListNode* curr=head;
        
        while(curr!=NULL)
        {
            curr=curr->next;
            len++;
        }
        
        
        ListNode* ptr=head;
        int ans=0;
        
        while(ptr!=NULL)
        {
            ans+=ptr->val*pow(2,len-1);
            ptr=ptr->next;
            len-=1;
        }
        return ans;
    }
};
