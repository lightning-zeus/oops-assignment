<<<<<<< HEAD
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
=======
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
int distance(point p){
    int distance = sqrt(pow(p.xCo-xCo,2)+pow(p.yCo-yCo,2)+pow(p.zCo-zCo,2));
    return distance;
}
};

int main() {
point p1(3,4,5);
point p2(8,9,10);

int distance = p2.distance(p1);
cout<<"The disance between the two points rounded off the nearest natural number is: "<<distance<<endl;
    
    return 0;
>>>>>>> 7be16593dcf0adb49ac486fcdf2e91e622fcd755
}