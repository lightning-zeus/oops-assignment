#include <bits/stdc++.h>
using namespace std;
class IntArray{
int data;
int *p,*ref;
int s;
public:
IntArray(int size){
    ref = new int[size];
    p = ref;
    s = size;
}IntArray(const IntArray &a){
    ref = new int[a.s];
    p = ref;
    s = a.s;
    for(int i=0;i<a.s;i++){
        *(ref+i) = *(a.ref+i);
    }
}
void push_back(int data){
*(p) = data;
p++;
}void display(){
    for(int i=0;i<s;i++)
      cout<<*(ref+i)<<" ";

      cout<<endl;
}void add(int pos1,int pos2){
    // add two elements of a vector
    p = ref;
    cout<<"The sum of the two numbers: "<<*(p+pos1-1)+*(p+pos2-1)<<endl;
}void add(const IntArray &a){
    for(int i=0;i<a.s;i++)
     *(ref+i) += *(a.ref+i);
}
void reverse(){
    int temp;
    for(int i=0;i<s/2;i++){
        temp = *(ref+s-1-i);
        *(ref+s-1-i) = *(ref+i);
        *(ref+i) = temp; 
    }
}

void subtract(int pos1,int pos2){
    //subtract two elements of the vector and output the absolute value of the operation
    
    p = ref;
    int first= *(p+pos1-1);
    int second = *(p+pos2-1);
    cout<<"The difference of the two numbers: "<<abs(second-first)<<endl;
}void compare(int pos1,int pos2){
    p = ref;
    if(*(p+pos1-1)==*(p+pos2-1))
       cout<<"The two elements are equal."<<endl;
    else if(*(p+pos1-1)<*(p+pos2-1))
        cout<<"The second element is greater than the first."<<endl;
    else
      cout<<"The first element is greater than the first element."<<endl;
}
};

int main() {
   IntArray v(3);
   for(int i=0;i<3;i++)
      v.push_back(i+1);
    v.display();
    IntArray s(v);
    s.display();
    s.reverse();
    s.display();
    
    
    return 0;
}