#include<bits/stdc++.h>
using namespace std;

  
    struct Node{
        int data;
        Node* next;
        Node* prev;

        public:
        Node(int data1, Node* next1, Node* prev1){
            data=data1;
            next=next1;
            prev=prev1;
        }

        public:
        Node(int data1){
            data=data1;
            next=nullptr;
            prev=nullptr;
        }
    };
  


Node* Convert(int arr[], int n){
    Node* head=new Node(arr[0]);
    Node*prev=head;
for(int i=1;i<n;i++){
    Node* temp=new Node(arr[i],nullptr, prev);
    prev->next=temp;
    prev=temp;

}

    return head;

};

