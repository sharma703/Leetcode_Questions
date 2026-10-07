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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp = head;
        ListNode dummy(0);
        dummy.next = head;
        ListNode* curr = &dummy;

        while(temp){
            if(temp -> next && temp -> val == temp -> next -> val){
                int value = temp -> val;

                while(temp && temp -> val == value){
                    ListNode* del = temp;
                    temp = temp -> next;
                    delete del;
                }
                curr -> next = temp;
            }
            else{
                curr = temp;
                temp = temp -> next;
            }
        }
        return dummy.next;
    }
};