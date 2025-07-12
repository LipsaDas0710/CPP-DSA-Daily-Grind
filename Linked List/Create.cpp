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
    Node* head=new Node(arr[0],nullptr);// Create the head node with the first element of the array
    Node* mover=head;// Create a mover pointer that will help in linking the nodes
    //never loose HEAD pointer as it is the entry point to the linked list.
    // The mover pointer will always point to the last node in the linked list as we are
    for(int i=0;i<arr.size();i++){
        Node* temp=new Node(arr[i],nullptr);// Create a new node for each element at random memory location
        mover->next = temp; // Link the previous node to the new node(for the first time connect head to the next so here the mover is poniting to head so in head's next i need the addresss of temp(new node)) 
        mover=temp; // Move the mover pointer to the new node(temp) so that in the next iteration we can link the next node to this new node
    }
    return head; // Return the head of the linked list
}

int main(){
    vector<int> v={10,2,3,4,5};
    Node* head= create(v);
    cout<< "Linked List head: "<<head->data << endl; // Output the head node's data
    cout<<endl;
    Node* temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next; // Traverse through the linked list and print each node's data
    }
}