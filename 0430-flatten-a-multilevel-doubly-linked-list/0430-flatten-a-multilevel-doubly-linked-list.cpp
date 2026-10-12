/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/
class Solution {
public:
    Node* flatten(Node* head) {
        Node* temp = head;

        while(temp) {
            if(temp->child) {
                Node* nextNode = temp->next;
                Node* childNode = flatten(temp->child);

                temp->next = childNode;
                childNode->prev = temp;
                temp->child = nullptr;

                Node* tail = childNode;
                while(tail->next) {
                    tail = tail->next;
                }

                if(nextNode) {
                    tail->next = nextNode;
                    nextNode->prev = tail;
                }
            }

            temp = temp->next;
        }

        return head;
    }
};
