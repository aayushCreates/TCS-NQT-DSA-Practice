//  ----------------------------------  Merge Sorted Linked Lists ---------------------------------

#include<iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;

    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

Node* mergeLists(Node* head1, Node* head2) {
    if(head1 == NULL && head2 == NULL) return NULL;
    if(head2 == NULL) return head1;
    if(head1 == NULL) return head2;

    Node* dummy = new Node(-1);
    Node* temp = dummy;

    while(head1 != NULL && head2 != NULL) {
        if(head1->val <= head2->val) {
            temp->next = head1;
            head1 = head1->next;
        } else {
            temp->next = head2;
            head2 = head2->next;
        }
        temp = temp->next;
    }

    if(head1 != NULL) temp->next = head1;
    if(head2 != NULL) temp->next = head2;

    return dummy->next;
}

void printList(Node* head) {
    while(head != NULL) {
        cout << head->val << " -> ";
        head = head->next;
    }
    cout << "NULL\n";
}

int main() {
    Node* head1 = new Node(1);
    head1->next = new Node(2);
    head1->next->next = new Node(3);
    head1->next->next->next = new Node(4);

    Node* head2 = new Node(2);
    head2->next = new Node(7);
    head2->next->next = new Node(8);
    head2->next->next->next = new Node(9);

    printList(head1);
    printList(head2);

    Node* newHead = mergeLists(head1, head2);
    printList(newHead);

    return 0;
}