#include <iostream>
#define endl "\n"
using namespace std;

class Index
{
    int i;

public:
    Index() : i(0) {}
    Index(int n) : i(n) {}
    Index(Index &in) : i(in.i) {}

    int getIndex() { return i; }

    operator int()
    {
        return i;
    }
    Index operator+(Index in)
    {
        return Index(i + in.i);
    }

    friend ostream &operator<<(ostream &, Index &);
};

ostream &operator<<(ostream &dout, Index &in)
{
    dout << in.i;
    return dout;
}

class Integer
{
    int n;

public:
    Integer() { n = 0; }
    Integer(int num) { n = num; }
    Integer(Integer &i) { n = i.n; }
    operator int()
    {
        return n;
    }
        void operator=(Index in)
    {
        n = in.getIndex();
    }

    friend ostream &operator<<(ostream &, Integer &);
};

ostream &operator<<(ostream &dout, Integer &i)
{
    dout << i.n;
    return dout;
}

int main()
{
    cout << "Hello world" << endl;

    Index in(4), out(10);
    cout << "in= " << in << ",  out= " << out << endl;
    int x = in;
    int y = in + out;
    cout << "x= " << x << ",   y(in+out) = " << y << endl;
    in = 2;
    Integer i;
    i = in;
    cout << "i= " << i;

    cout << "\n\n";

    return 0;
}