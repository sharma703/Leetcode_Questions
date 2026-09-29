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

    ListNode* rotateOne(ListNode* head){
        ListNode* tail = head;
        ListNode* preNode = nullptr;
        while(tail -> next){
            preNode = tail;
            tail = tail -> next;
        }
        tail -> next = head;
        preNode -> next = nullptr;
        head = tail;
        return head;
    }

    ListNode* rotateRight(ListNode* head, int k) {
        if(head == nullptr || head -> next == nullptr) return head;

        int cnt = 0;
        ListNode* temp = head;
        while(temp){
            cnt++;
            temp = temp -> next;
        }
        k = k % cnt;
        while(k){
            head = rotateOne(head);
            k--;
        }
        return head;
    }
};