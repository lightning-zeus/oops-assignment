#include <iostream>
#define endl "\n"
using namespace std;

class StackOverFlow{};
class StackUnderFlow{};

class Stack {
    int* buffer;
    int top;
    int length;
   public : 
    Stack(int size = 0) {
        this->length = size;
        buffer = new int[size];
        top = -1;
    }
    
    void push(int data) {
        if (top == length - 1) throw StackOverFlow();
        buffer[++top] = data;
    }

    int pop() {    
        if (top == -1) throw StackUnderFlow();
        return buffer[top--];
    }

    void disp() {
        for (int i = top; i >= 0; i--) cout << buffer[i] << " ";
        cout << endl;
    }
};

int main() {
    Stack s(10);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    cout << "Popped : " << s.pop() << endl;
    s.disp();
}