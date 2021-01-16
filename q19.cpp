#include <bits/stdc++.h>
using namespace std;
class rectangle{
int v1,v2,v3,v4;
int length,breadth;
public:
rectangle(): v1(0),v2(0),v3(0),v4(0)
{}
rectangle(int vx1,int vx2,int vx3,int vx4): v1(vx1),v2(vx2),v3(vx3),v4(vx4)
{} 

int area(){
    length = abs(v3-v1);
    breadth = abs(v4-v2);
    return (length*breadth);
}
};
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
rectangle r1(3,7,9,11);
cout<<"The area of the rectangle r1: "<<r1.area()<<endl;
rectangle r2(5,7,13,15);
cout<<"The area of the rectangle r2: "<<r2.area()<<endl;
rectangle r3(5,9,16,21);
cout<<"The area of the rectangle r3: "<<r3.area()<<endl;
rectangle r4(1,7,9,15);
cout<<"The area of the rectangle r4: "<<r4.area()<<endl;

return 0;
}