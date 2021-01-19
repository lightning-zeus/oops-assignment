#include <bits/stdc++.h>
using namespace std;
class queue1{
int *data;
int capacity;
int front;
int rear;
public:
queue1(){
    front = rear = -1;
    data = 0;
    capacity = 0;
}queue1(int capacity){
    this->capacity = capacity;
    front = rear = -1;
    data = new int[capacity];
}
~queue1(){
    delete []data;
}
void enqueue(int element){
    if(front==rear==-1){
       front++;
       rear++;
       *(data+rear) = element;
       return;
    }
if(rear>=capacity){
    cout<<"The queue is full and will lead to overflow."<<endl;
    return;
}rear++;
*(data+rear) = element;
}
void dequeue(){
    if(front==rear==-1){
        cout<<"The queue is already empty and will lead to undeflow"<<endl;
        return;
    }if(front>rear){
        cout<<"The stack is empty"<<endl;
        return;
    }front++;
}void display(){
    for(int i=front+1;i<=rear;i++)
       cout<<*(data+i)<<" ";

       cout<<endl;
}
};

int main() {
      queue1 q(10);
     
      q.enqueue(2);
      q.enqueue(3);
      q.enqueue(4);
      q.enqueue(5);
      q.dequeue();
      q.dequeue();
      
      q.display();
    
    return 0;
}