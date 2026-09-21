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
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* pre = nullptr;


        while(fast != nullptr && fast -> next != nullptr){
            pre = slow;
            slow = slow -> next;
            fast = fast -> next -> next;
        }
        if(pre != nullptr) pre -> next = nullptr;

         return slow;
    }
};