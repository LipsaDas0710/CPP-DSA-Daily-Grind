#include<bits/stdc++.h>
#include<iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

Node* sort012LL(Node* head){

    if( head ==NULL || head->next==NULL){
        return head;
    }   
    Node* temp = head;
    //Dummy nodes!! Dummy linked list!!
    Node* zeroHead=new Node(-1);
    Node* oneHead=new Node(-1);
    Node* twoHead=new Node(-1);

    Node* zero= zeroHead;
    Node* one= oneHead;
    Node* two= twoHead;

    while (temp){
        if(temp->data==0){
            zero->next=temp;
            zero=zero->next;
        }
        else if (temp->data==1){
            one->next=temp;
            one=one->next;
        }
        else{
            two->next=temp;
            two=two->next;
        }
        temp=temp->next;
    }
    // connect lists properly
    if (oneHead->next) {
        zero->next = oneHead->next;
    } else {
        zero->next = twoHead->next;
    }
    // zero->next=(oneHead->next)? oneHead->next: twoHead->next;
    one->next=twoHead->next;
    two->next=NULL;

    return zeroHead->next;
    delete zeroHead;
    delete oneHead;
    delete twoHead;
    
}

void printList(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout << temp->data << " ";  
        temp=temp->next; 
    }
    cout << endl;
}

int main(){

    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(0);
    head->next->next->next = new Node(0);
    head->next->next->next->next = new Node(1);
    head->next->next->next->next->next = new Node(2);

    cout << "Original List: ";
    printList(head);

    head =sort012LL(head);
    cout << "Modified List: ";
    printList(head);

    return 0;
}