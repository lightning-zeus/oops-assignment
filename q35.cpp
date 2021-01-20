#include <iostream>
#include <algorithm>

using namespace std;

class Integer
{
    int n;

public:
    Integer() { n = 0; }
    Integer(int num) { n = num; }
    Integer(const Integer &i) { n = i.n; }

    
    Integer operator++(int)
    {
        return Integer(n++);
    }

    //**Conversion function
    operator int()
    {
        return n;
    }
    // //**Overloaded assignment operator for conversion
    // void operator=(int x)
    // {
    //     n = x;
    // }

    friend ostream &operator<<(ostream &, Integer &);
};

ostream &operator<<(ostream &os, Integer &i)
{
    os << i.n;
    return os;
}

int main()
{
    Integer a = 4, b = a, c;
    c = a + b++;
    int i = a;
    cout << "a = " << a << ", b = " << b << ",  c = " << c;
    return 0;
}