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
        ListNode* curr = head;
        ListNode* pre = nullptr;

        while(curr){
            ListNode* front = curr -> next;
            curr -> next = pre;
            pre = curr;
            curr = front;
        }
        return pre;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* l1new = reverse(l1);
        ListNode* l2new = reverse(l2);
        
        ListNode dummy(0);
        ListNode* pre = &dummy;

        ListNode* t1 = l1new;
        ListNode* t2 = l2new;

        int carry = 0;
        while(t1 != nullptr || t2 != nullptr){
            int sum = carry;

            if(t1){
                sum += t1 -> val;
                t1 = t1 -> next;
            }
            if(t2){
                sum += t2 -> val;
                t2 = t2 -> next;
            }

            ListNode* newNode = new ListNode(sum % 10, nullptr);
            carry = sum / 10;
            pre -> next = newNode;
            pre = newNode;
        }
        if(carry){
            pre -> next = new ListNode(carry);
        }
        ListNode* newhead = reverse(dummy.next);

        return newhead;
    }
};