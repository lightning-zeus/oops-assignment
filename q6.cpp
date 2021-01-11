#include <iostream>
#include <string>
using namespace std;
#define pi 3.14
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
double radius;
cout<<"Input the radius of the cirlce"<<endl;
cin>>radius;
double area = pi * radius * radius;
cout<<"The area of the circle is "<<area<<endl;
return 0;
}