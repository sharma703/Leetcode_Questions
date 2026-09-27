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
            ListNode* front = curr -> next;
            curr -> next = pre;
            pre = curr;
            curr = front;
        }
        return pre;
    }
    bool isPalindrome(ListNode* head) {
        if(head == nullptr || head -> next == nullptr) return true;

        //brute
        // ListNode* temp = head;
        // stack<int> st;
        // while(temp){
        //     st.push(temp-> val);
        //     temp = temp -> next;
        // }
        // temp = head;
        // while(temp){
        //     if(temp -> val != st.top()){
        //         return false;
        //     }
        //     temp = temp -> next;
        //     st.pop();
        // }
        // return true;


        //Better
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != nullptr && fast -> next != nullptr){
            slow = slow -> next;
            fast = fast -> next -> next;
        }
        ListNode* newHead = reverse(slow);    

        ListNode* first = head;
        ListNode* second = newHead;

        while(second){
            if(first -> val != second -> val){
                return false;
            }
            first = first -> next;
            second = second -> next;
        }    
        return true;
    }
};