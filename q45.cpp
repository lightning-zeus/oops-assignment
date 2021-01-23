#include <algorithm>
#include <iostream>

using namespace std;

class Base {
    int size;
    int *a;

   public:
    Base() : size(0), a(NULL) {
        cout << "Base class default constructor is called\n";
    }
    Base(int n) : size(n) {
        cout << "Base class parameterized constructor is called\n";

        a = new int[size];
    }

    virtual ~Base() {
        cout << "Base class destructor is called\n";
        delete[] a;
    }
};

class Derived : public Base {
    int sz, *b;

   public:
    Derived() : Base(), sz(0), b(NULL) {
        cout << "Derived class default constructor is called\n";
    }
    Derived(int n) : Base(n), sz(n) {
        b = new int[n];
        cout << "Derived class parameterized constructor is called\n";
    }

    ~Derived() {
        cout << "Derived class destructor is called\n";
        delete[] b;
    }
};

int main() {
    cout << "Creating & deleting object of base class using pointer of base "
            "class.\n";
    Base *pb = new Base(5);
    delete pb;
    cout << "Creating & deleting object of derived class using pointer of base "
            "class\n";
    Base *pb2 = new Derived(10);
    delete pb2;
}