#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;

public:
    Node(int data1,Node* next1){
        data=data1;
        next=next1;
    }
};

Node* create(vector<int> &arr){
    Node* head=new Node(arr[0],nullptr);
    Node* mover=head; 
    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i],nullptr);
        mover->next = temp;
        mover=temp;
    }
    return head; 
}
Node* DeleteTail(Node* head){
    if(head==NULL || head->next== nullptr){
        return NULL;
    }
    Node* temp=head;
    while(temp->next->next != nullptr){
        temp=temp->next;
    }
    delete temp->next;
    temp->next=nullptr;
}

int main(){
    vector<int> v={1,2,3,4,5};
    Node* head= create(v);
    cout << "Linked List before deleting head: ";
    Node* temp=head;
    while(temp){
        cout << temp->data << " ";
        temp=temp->next;
    }
    cout << endl;
    head = DeleteTail(head); // Delete the head node
    cout << "Linked List after deleting head: ";
    temp=head;
    while(temp){
        cout << temp->data << " ";
        temp=temp->next;
    }
    cout << endl; // Output the linked list after deleting the head node.
    
}