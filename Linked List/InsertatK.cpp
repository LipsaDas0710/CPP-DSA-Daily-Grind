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

Node* InsertatK(Node* head, int pos , int val){
    if(head==nullptr){
        return new Node(val,nullptr);
    }
    if(pos==1){
        Node* temp=new Node(val,head);
        return temp;
    }
    Node* temp=head;
    int cnt=0;
    while(temp!=NULL){
        cnt++;
        if(cnt==pos-1){
            Node* newNode=new Node(val,nullptr);
            newNode->next = temp->next;
            temp->next=newNode;
            return head;
        }
        temp=temp->next;

    }
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
    head = InsertatK(head, 1, 100); // Delete the head node
    cout << "Linked List after deleting head: ";
    temp=head;
    while(temp){
        cout << temp->data << " ";
        temp=temp->next;
    }
    cout << endl; // Output the linked list after deleting the head node.
    
}