
#include <iostream>
#include <algorithm>

using namespace std;

class IntArray
{
    int *a, size;

public:
    IntArray()
    {
        a = NULL;
        size = 0;
    }
    IntArray(int size)
    {
        this->size = size;
        a = new int[size];
        for (long long i = 0; i < size; i++)
        {
            a[i] = 0;
        }
    }

    ~IntArray()
    {
        delete a;
    }

    int &operator[](int i)
    {
        if (i < 0 || i >= size)
        {
            cout << "\nOut of bound error\n";
            exit(1);
        }

        return a[i];
    }
    friend ostream &operator<<(ostream &, IntArray &);
};

ostream &operator<<(ostream &os, IntArray &arr)
{
    os << arr.a[0];
    for (long long i = 1; i < arr.size; i++)
    {
        os << ", " << arr.a[i];
    }
    return os;
}
int main()
{
    IntArray i(10);
    for (int k = 0; k < 10; k++)
        i[k] = k;
    cout << i;
    return 0;
}