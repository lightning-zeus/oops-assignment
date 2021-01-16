#include <bits/stdc++.h>
using namespace std;
class vector1{
int data;
int *p,*ref;
int s;
public:
vector1(int size){
    ref = new int[size];
    p = ref;
    s = size;
}
void push_back(int data){
*(p) = data;
p++;
}void display(){
    p = ref;
    for(int i=0;i<s;i++)
      cout<<*(p+i)<<" ";

      cout<<endl;
}void add(int pos1,int pos2){
    // add two elements of a vector
    p = ref;
    cout<<"The sum of the two numbers: "<<*(p+pos1-1)+*(p+pos2-1)<<endl;
}void subtract(int pos1,int pos2){
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
   vector1 v(5);
   for(int i=0;i<5;i++)
      v.push_back(i+1);
      v.add(3,5);
      v.subtract(1,3);
      v.compare(1,2);
    
    return 0;
}