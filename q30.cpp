#include <bits/stdc++.h>
using namespace std;
class Point{
    int xCo;
    int yCo;
    public:
    Point(int x, int y): xCo(x), yCo(y)
    {}
    Point(): xCo(0), yCo(0)
    {}
    void get_point(){
        cout<<"Input the coordinates of the point: "<<endl;
        cin>>xCo>>yCo;
    }
    float operator-(const Point &p){
         float distance;
         distance  = sqrt((p.xCo  - xCo)*(p.xCo  - xCo))+((p.yCo-yCo)*(p.yCo-yCo));
         return distance;


     }
};

int main() {
Point p1,p2;
p1.get_point();
p2.get_point();
float dist = p1-p2;
cout<<"The distance between the two points: "<<dist<<endl;

    
    return 0;
}