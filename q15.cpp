#include <bits/stdc++.h>
using namespace std;
int maximum(int n1,int n2,int n3){
    return (max(n1,max(n2,n3)));
}
int maximum(int arr[]){
int max=0;
for(int i=0;i<5;i++)
  if(arr[i]>=max)
    max = arr[i];
return max;
}

int main() {
int n1,n2,n3;
cout<<"Input the three integers: "<<endl;
cin>>n1>>n2>>n3;
int arr[5];
cout<<"Input the array elements: "<<endl;
    for(int i=0;i<5;i++)
     cin>>arr[i];

int max_int = maximum(n1,n2,n3);
int max_arr =  maximum(arr);
cout<<"The maximum of the three integers is: "<<max_int<<endl;
cout<<"The maximum element of the array is: "<<max_arr<<endl;
    return 0;
}