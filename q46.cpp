#include <iostream>
#define endl "\n"
using namespace std;

class DivisionByZero {
    public:
    const string msg = "Invalid!! Division By Zero";
};

double division(int a, int b) {
    if (b == 0)
        throw DivisionByZero();
    else
        return (double)a / b;
}

int main() {
    int a, b;
    cout << "Enter Numerator : ";
    cin >> a;
    cout << "Enter Denominator : ";
    cin >> b;
    try {
        double r = division(a, b);
        cout << a << " / " << b << " = " << r << endl;
    } catch (DivisionByZero d) {
        cout << d.msg << endl;
    }
}