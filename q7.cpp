#include <iostream>
#include <string>
using namespace std;
int factorial(const int n){
    int factorial =1;
    for(int i=n;i>1;i--)
     factorial *= i;

     return factorial;
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;
cout<<"Input the number that you want the factorial of: "<<endl;
cin>>n;

cout<<"The factorial is: "<<factorial(n)<<endl;
return 0;
}