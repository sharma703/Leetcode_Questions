class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        int cnt = 1;
        ListNode* temp = list1;

        while (cnt < a) {
            temp = temp->next;
            cnt++;
        }

        ListNode* front = temp->next;

        for (int i = a; i <= b; i++) {
            ListNode* del = front;
            front = front->next;
            delete del;
        }

        temp->next = list2;

        ListNode* pre = list2;
        while (pre->next) {
            pre = pre->next;
        }

        pre->next = front;

        return list1;
    }
};