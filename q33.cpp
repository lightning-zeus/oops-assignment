#include <iostream>
#include <algorithm>

using namespace std;
class INT
{
    int i;

public:
    INT(int a) : i(a) {}
    ~INT() {}

    INT operator++() 
    {
        return INT(++i);
    }
    INT operator++(int) 
    {
        return INT(i++);
    }
    operator int() 
    {
        return i;
    }
};

int main()
{
    int x = 3;
    INT y = x;
    y++ = ++y;
    x = y;
    return 0;
}