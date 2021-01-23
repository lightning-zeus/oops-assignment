#include <iostream>

using namespace std;

int add(int a, int b = 0, int c = 0)
{
    return a + b + c;
}

int main()
{
    cout << add(10, 20, 40) << "\n";
    cout << add(10, 20) << "\n";
    cout << add(10) << "\n";
}