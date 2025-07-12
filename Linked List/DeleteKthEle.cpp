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
Node* Deletekth(Node* head , int k){
   if(head==NULL) return nullptr;
   Node*temp=head;
   if(k==1){
        head=head->next;
        delete temp;
        return head;
   }
   int ct=0;

   Node* prev=nullptr;
   while(temp!=NULL){
    ct++;
    if(ct==k){
        // conntect to next next and delete the current
        prev->next= prev->next ->next;
        delete temp;
        return head;
    }
    prev=temp;
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
    head = Deletekth(head, 3); // Delete the head node
    cout << "Linked List after deleting head: ";
    temp=head;
    while(temp){
        cout << temp->data << " ";
        temp=temp->next;
    }
    cout << endl; // Output the linked list after deleting the head node.
    
}