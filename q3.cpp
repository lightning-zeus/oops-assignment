#include <iostream>

using namespace std;
int factorial(int n){
    int factorial=1;
    for(int i=n;i>1;i--)
    factorial *= i;
      
      return factorial;
}
int main(){
   for(int i=1;i<=6;i++)
     cout<<"The factorial of "<<i<<" "<<"is "<<factorial(i)<<endl;

     return 0;
}