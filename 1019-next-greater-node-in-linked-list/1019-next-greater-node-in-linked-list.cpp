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
    ListNode* reverse_ll(ListNode* head){
        if(head == nullptr || head -> next == nullptr) return head;

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
    vector<int> nextLargerNodes(ListNode* head) {

        head = reverse_ll(head);
        ListNode* temp = head;
        vector<int> ans;
        stack<int> st;

        while(temp){
            while(!st.empty() && st.top() <= temp -> val){
                st.pop();
            }
            if(st.empty()) ans.push_back(0);
            else{
                ans.push_back(st.top());
            }
            st.push(temp -> val);
            temp = temp -> next;

        }
        reverse(ans.begin(), ans.end());
        
        return ans;

    }
};