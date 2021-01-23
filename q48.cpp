#include <bits/stdc++.h>
using namespace std;

class Car {
   public:
    string license;
    int lane;
    int dir;  // 0-> stoppped 1,-1->resp. directions
    Car(string license, int lane, int direction);
};

class Collision {
    static unordered_map<int, int> laneDir;

   public:
    class CollisionException {
       public:
        int lane;
        string license;
        CollisionException(int lane, string license)
            : lane(lane), license(license) {}
    };
    static void collisionChecker(Car &c) {
        if (laneDir.find(c.lane) != laneDir.end()) {
            if (c.dir != 0 && c.dir != laneDir[c.lane])
                throw CollisionException(c.lane, c.license);
        } else {
            if (c.dir != 0) laneDir[c.lane] = c.dir;
        }
    }
};
unordered_map<int, int> Collision::laneDir;
Car::Car(string license, int lane, int direction)
    : license(license), lane(lane), dir(direction) {
    Collision::collisionChecker(*this);
}

int main() {
    try {
        Car c1("a", 1, 1);
        Car c2("b", 1, -1);
        cout << "No collsions" << endl;
    } catch (Collision::CollisionException &e) {
        cout << "Adding Car with license no. " << e.license
             << " will cause a collision on lane " << e.lane << endl;
    }
}