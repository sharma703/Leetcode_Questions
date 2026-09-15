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
        while(head != nullptr && head -> val == val){
            ListNode* temp = head;
            head = head -> next;
            delete temp;
        }
        if(head == nullptr) return nullptr;
        
        ListNode* temp = head;
        ListNode* pre = nullptr;
        while(temp != nullptr){
            if(temp -> val == val){
                pre -> next = pre -> next -> next;
                delete temp;
                temp = pre -> next;
            }
            else{
                pre = temp;
                temp = temp -> next;
            }
        }
        return head;
    }
};