#include<iostream>
using namespace std;
#include<vector>


// int main(){
//     vector<int> v;
//     v.push_back(10);
//     v.push_back(20);
//     v.push_back(30);    
//     // stack
//     v.erase(v.end()-1); // removes the last element

//     //queue
//     v.erase(v.begin()); // removes the first element 
//     v.insert(v.begin(),40); // adds 40 at the front

//     return 0;
// }

class Stack{
    public:
    vector<int> v;
    void top(int val){
        v.push_back(val);
    }
    void pop(){
        v.erase(v.end()-1);
    }
};

class Queue{
    public: 
    vector<int> v;
    void enqueue(int val){
        v.push_back(val);
    }
    void dequeue(){
        v.erase(v.begin());
        
    }
};

int main(){
    Stack s;
    s.top(10);
    s.top(20);
    s.top(30);  
    s.pop();

    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.dequeue();
    
}