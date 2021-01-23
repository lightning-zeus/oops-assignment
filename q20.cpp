#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <string>
using namespace std;

class Point2D
{
private:
    double x;
    double y;

public:
    Point2D(double x = 0, double y = 0)
    {
        this->x = x;
        this->y = y;
    }
    static double distance(Point2D p1, Point2D p2)
    {
        return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
    }
};

class Device
{
private:
    /* data */
    Point2D location;
    string id;
    double range;

public:
    Device();
    Device(Point2D location, string id, double range);
    void neighbors(Device devices[], int no_of_devices);
};

Device::Device() // default constructor
{
    this->location = Point2D(0, 0);
    this->id = "";
    this->range = 0.0;
}
Device::Device(Point2D location, string id, double range) // parameterized constructor
{
    this->location = location;
    this->id = id;
    this->range = range;
}

void Device::neighbors(Device devices[], int no_of_devices)
{
    cout << "finding neighboring devices of device with id " << this->id << "\n";
    for (int i = 0; i < no_of_devices; i++)
    {
        if (this->id != devices[i].id)
        {
            if (Point2D::distance(this->location, devices[i].location) <= this->range)
                cout << "neighboring device found with id " << devices[i].id << "\n";
        }
    }
}

int main()
{
    // random device generation
    int no_of_devices = 10;
    Device devices[no_of_devices];

    for (int i = 0; i < no_of_devices; i++)
    {
        devices[i] = Device(Point2D(rand() * 0.58, rand() * 0.45), "device" + to_string(i), rand() * 0.8);
    }

    for (int i = 0; i < no_of_devices; i++)
    {
        devices[i].neighbors(devices, no_of_devices);
    }
}