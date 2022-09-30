class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count=1;
        ListNode* start=new ListNode();
        start->next=head;
        ListNode* fast=start;
        ListNode* slow=start;
        while(count<=n)
        {
            count++;
            fast=fast->next;
        }
        
        while(fast->next)
        {
            slow=slow->next;
            fast=fast->next;
        }
        slow->next=slow->next->next;
        return start->next;
    }
};
