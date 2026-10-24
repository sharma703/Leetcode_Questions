class Solution {
public:
    TreeNode* sortedListToBST(ListNode* head) {
        if (head == nullptr) return nullptr;

        if (head->next == nullptr) {
            return new TreeNode(head->val);
        }

        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* slowpre = nullptr;

        while (fast && fast->next) {
            slowpre = slow;
            slow = slow->next;
            fast = fast->next->next;
        }

        TreeNode* root = new TreeNode(slow->val);
        ListNode* rightHead = slow->next;

        if (slowpre) slowpre->next = nullptr;
        slow->next = nullptr;

        root->left = sortedListToBST(head);
        root->right = sortedListToBST(rightHead);

        return root;
    }
};