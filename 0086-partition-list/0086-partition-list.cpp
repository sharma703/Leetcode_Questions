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
    ListNode* partition(ListNode* head, int x) {

        ListNode lessdummy(0);
        ListNode moredummy(0);

        ListNode* temp = head;

        ListNode* less = &lessdummy;
        ListNode* more = &moredummy;

        while(temp){
            if(temp -> val < x){
                less -> next = temp;
                less = less -> next;
            }
            else{
                more -> next = temp;
                more = more -> next;
            }
            temp = temp -> next;
        }

        less -> next = moredummy.next;
        more -> next = nullptr;

        return lessdummy.next;
    }
};