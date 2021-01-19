#include <bits/stdc++.h>
using namespace std;
class stack1{
int *buffer, top;
int capacity;
public:
stack1(){
    top = -1;
    buffer = 0;
    capacity = 0;
}stack1(int capacity){
    this->capacity = capacity;
    buffer = new int[capacity];
    top = -1;
}
void push(int data){
    if(top==capacity-1){
        cout<<"The stack is already full and will lead to overflow if more elements are added."<<endl;
        cout<<"Exiting..."<<endl;
        return;
    }
    top++;
    *(buffer+top) = data;

}
int pop(){
    if(top==-1){
        cout<<"The stack is empty and removal of elements will lead to underflow conditon."<<endl;
        cout<<"Exiting..."<<endl;
        return (-1);

    }
    top--;
    return (*(buffer+top+1));
}
void display(){
    cout<<"The elements of the stack are : \n";
    for(int i=0;i<=top;i++){
        cout<<*(buffer+i)<<" ";
    }cout<<endl;
}
}; 

int main() {
     stack1 s(10);
     s.push(2);
     s.push(3);
     s.push(4);
     s.push(5);
     s.pop();
     s.display();

     
     
    
    return 0;
}
