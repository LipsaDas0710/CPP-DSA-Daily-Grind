#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;

    Node(int val) : data(val), prev(nullptr), next(nullptr) {}
};

Node* reverseDLL(Node * head){
    if (head== NULL || head->next== NULL){
        return  NULL;
    }
    Node* current= head;
    Node* prev=NULL;
    while(current->next!= NULL){
        prev = current->prev;
        current->prev= current->next;
        current->next=prev;
        current=current->prev;
    }
    return prev->prev;
}


    // Utility: print DLL forward
void printDLL(Node* head) {
    Node* temp = head;
    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

    // Utility: insert at end
void insertTail(Node*& head, int val) {
    Node* newNode = new Node(val);
    if (!head) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next) temp = temp->next;
    temp->next = newNode;
    newNode->prev = temp;
}
  
int main() {
    Node* head = nullptr;

    // Create DLL: 10 <-> 20 <-> 30 <-> 40
    insertTail(head, 10);
    insertTail(head, 20);
    insertTail(head, 30);
    insertTail(head, 40);

    cout << "Original DLL: ";
    printDLL(head);

    head = reverseDLL(head);

    cout << "Reversed DLL: ";
    printDLL(head);

    return 0;
}