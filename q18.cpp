#include <bits/stdc++.h>
using namespace std;

class point{
private:
int xCo;
int yCo;
int zCo;

public:
point(int x,int y,int z): xCo(x),yCo(y),zCo(z)
{}
void distance(point p){
    int distance = sqrt((p.xCo*p.xCo  - (xCo*xCo))+(p.yCo*p.yCo  - (yCo*yCo))+(p.zCo*p.zCo  - (zCo*zCo)));
    cout<<"The distace between the two points is: "<<distance<<endl;
}
};

int main() {
point p1(3,4,5);
point p2(8,9,10);

p2.distance(p1);
    
    return 0;
}