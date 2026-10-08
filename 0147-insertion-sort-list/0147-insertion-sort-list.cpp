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
    ListNode* insertionSortList(ListNode* head) {
        if(head == nullptr || head -> next == nullptr) return head;

        ListNode* curr = head;
        ListNode dummy(0);

        while(curr){
            ListNode* front = curr -> next;

            ListNode* temp = &dummy;

            while(temp -> next && temp -> next -> val <= curr -> val){
                temp = temp -> next;
            }
            curr -> next = temp -> next;
            temp -> next = curr;
            curr = front;
        } 
        return dummy.next;
    }
    
};