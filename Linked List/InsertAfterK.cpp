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

Node* InsertAfterVal(Node* head, int ele, int val){
    if (head==nullptr){
        return NULL;
    }
    if(head->data==ele){
        Node* newNode=new Node(val,head);
        return newNode;
    }
    Node* temp=head;
    while(temp->next!=NULL){
        if(temp->data == ele){
            // connectto next
            Node* newNode= new Node(val,nullptr);
            newNode->next = temp->next;
            temp->next=newNode;
            return head;
        }
        temp=temp->next;
    }
    return head;
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
    head = InsertAfterVal(head, 2,100); // Delete the head node
    cout << "Linked List after deleting head: ";
    temp=head;
    while(temp){
        cout << temp->data << " ";
        temp=temp->next;
    }
    cout << endl; // Output the linked list after deleting the head node.
    
}