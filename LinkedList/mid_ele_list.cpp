//  --------------------------------------   Reverse a Linked List    ------------------------------------------    

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

int listLength(Node* head) {
    Node* curr = head;
    int count = 0;

    while(curr != NULL) {
        count++;
        curr = curr->next;
    }

    return count;
}

//  BRUTE FORCE
Node* listMid(Node* head, int len) {
    Node* curr = head;
    Node* prev = NULL;

    int mid = len / 2;

    while(mid) {
        curr = curr->next;
        mid--;
    }

    return curr;
}


//  Optimized APPROACH - SLOW FAST POINTER
Node* midEle(Node* head, int len) {
    Node* slow = head;
    Node* fast = head;

    while(fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}


void printList(Node* head) {
    while(head != NULL) {
        cout << head->val << " -> ";
        head = head->next;
    }
    cout << "NULL\n";
}

int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);

    printList(head);

    int len = listLength(head);

    head = listMid(head, len);

    cout<<"Middle Element of list is: "<<head->val<<endl;

    return 0;
}