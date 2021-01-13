#include <bits/stdc++.h>
using namespace std;
inline int add(int n1,int n2,int n3){
    return (n1+n2+n3);
}

int main() {
int n1,n2,n3;
cout<<"Input the three integers you want to add: "<<endl;
cin>>n1>>n2>>n3;
int sum = add(n1,n2,n3);
cout<<"The sum of the three integers is: "<<sum<<endl;
    
    return 0;
}