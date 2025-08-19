/*

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution {
  public:
  Node* reverse( Node* head){
    if (head == NULL || head->next == NULL) return head;  // base case
      Node* newHead= reverse(head->next);
      Node* front = head->next;
      
      front->next= head;
      head->next = NULL;
      return newHead;
  }
    Node* addOne(Node* head) {
        // Your Code here
        head= reverse(head);
        Node* temp=head;
        int carry=1;
        while(temp!=NULL){
            temp->data=temp->data+1;
            if ( temp->data < 10){
                carry=0;
                break;
            }
            else{
                temp->data=0;
                carry=1;
            }
            temp=temp->next;
        }
        if(carry==1){
            Node* newNode= new Node(1);
            head=reverse(head);
            newNode->next=head;
            return newNode;
        }
        head= reverse(head);
        return head;
        // return head of list after adding one
    }
};