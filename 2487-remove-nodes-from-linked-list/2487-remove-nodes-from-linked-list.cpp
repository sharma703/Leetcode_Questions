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

    ListNode* reverse(ListNode* head){
        ListNode* pre = nullptr;
        ListNode* curr = head;
        while(curr){
            ListNode* temp = curr -> next;
            curr -> next = pre;
            pre = curr;
            curr = temp;
        }

        return pre;
    }
    ListNode* removeNodes(ListNode* head) {
        if(head == nullptr) return nullptr;

        ListNode dummy(0);
        ListNode* curr = &dummy;

        head = reverse(head);

        ListNode* temp = head -> next;
        int maxi = head -> val;

        curr -> next = head;
        curr = curr -> next;
        while(temp){
            if(temp->val < maxi){
                curr->next = temp->next;
            }
            else{
                maxi = temp->val;
                curr = temp;
            }
            temp = temp->next;
        }
        ListNode* newhead = reverse(dummy.next);

        return newhead;
    }
};