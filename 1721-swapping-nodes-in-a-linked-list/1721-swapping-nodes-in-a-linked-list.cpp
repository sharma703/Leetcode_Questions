class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* prev = head;
        ListNode* temp = head;

        int n = 0;
        while (temp) {
            n++;
            temp = temp->next;
        }

        temp = head;
        for (int i = 1; i < k; i++) {
            prev = prev->next;
        }

        for (int i = 0; i < n - k; i++) {
            temp = temp->next;
        }

        swap(prev->val, temp->val);

        return head;
    }
};