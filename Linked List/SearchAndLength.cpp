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

int length(Node* head){
    int cnt=0;
    Node* temp=head;
    while(temp){
        temp=temp->next;
        cnt++;
    }
    return cnt;
}

bool search(Node* head , int val){
    Node* temp=head;
    while(temp){
        if (temp->data==val){
            return true;
        }
        temp=temp->next;
    }
    return false;
}

int main(){
    vector<int> v={1,2,3,4,5};
    Node* head= create(v);
    cout<< length(head) << endl; 
    cout<< search(head,3)<< endl;
    cout<< search(head,30)<< endl; 
    
}