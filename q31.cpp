#include <bits/stdc++.h>
using namespace std;

using namespace std;

class Complex
{
    float real, imag;

public:
    Complex() { real = imag = 0; }
    Complex(float x, float y)
    {
        real = x;
        imag = y;
    }
    // Complex(Complex &c)
    // {
    //     real = c.real;
    //     imag = c.imag;
    // }

    void print()
    {
        cout << "( (" << real << ")"
             << " + (" << imag << ")*i )";
    }

    float absolute()
    {
        return sqrt(real * real + imag * imag);
    }

    Complex conjugate()
    {
        return Complex((real), (-imag));
    }

    friend Complex operator+(Complex &, Complex &);
    friend Complex operator+(Complex &, float);
    friend Complex operator+(float, Complex &);

    friend Complex operator-(Complex &, Complex &);
    friend Complex operator-(Complex &, float);
    friend Complex operator-(float, Complex &);

    friend Complex operator*(Complex &, Complex &);
    friend Complex operator*(Complex &, float);
    friend Complex operator*(float, Complex &);

    friend Complex operator/(Complex, float);
    friend Complex operator/(Complex, Complex);
    friend Complex operator/(float, Complex);

    friend ostream &operator<<(ostream &dout, const Complex &);
    friend istream &operator>>(istream &din, Complex &);

    friend bool operator>(const Complex &c1, const Complex &c2);
    friend bool operator>=(const Complex &c1, const Complex &c2);
    friend bool operator<(const Complex &c1, const Complex &c2);
    friend bool operator<=(const Complex &c1, const Complex &c2);
};
//
//
//
//
///***FUNCTIONS**//
//
//
//
//

Complex operator+(Complex &a, Complex &b)
{
    return Complex((a.real + b.real), (a.imag + b.imag));
}

Complex operator+(Complex &a, float b)
{
    return Complex((a.real + b), (a.imag));
}

Complex operator+(float b, Complex &a)
{
    return Complex((b + a.real), (a.imag));
}

//
//
//
//
//

Complex operator-(Complex &a, Complex &b)
{
    return Complex((a.real - b.real), (a.imag - b.imag));
}

Complex operator-(Complex &a, float b)
{
    return Complex((a.real - b), (a.imag));
}

Complex operator-(float b, Complex &a)
{
    return Complex((b - a.real), (-a.imag));
}
//
//
//
//
//

Complex operator*(Complex &a, Complex &b)
{
    return Complex((a.real * b.real - a.imag * b.imag), (a.real * b.imag + a.imag * b.real));
}

Complex operator*(Complex &a, float b)
{
    return Complex((a.real * b), (a.imag * b));
}

Complex operator*(float b, Complex &a)
{
    return Complex((b * a.real), (b * a.imag));
}

//
//
//
//
//
Complex operator/(Complex a, float b)
{
    Complex temp;
    temp.real = a.real / b;
    temp.imag = a.imag / b;

    return temp;
}

Complex operator/(Complex a, Complex b)
{
    Complex temp;
    Complex bconjugate;
    bconjugate = b.conjugate();
    float babs = b.absolute();

    temp = (a * (bconjugate)) / (babs * babs);
    return temp;
}

Complex operator/(float b, Complex a)
{
    Complex temp(b, 0);

    return temp / a;
}

ostream &operator<<(ostream &dout, const Complex &obj)
{
    dout << "( (" << obj.real << ")"
         << " + (" << obj.imag << ")*i )";
    return dout;
}

istream &operator>>(istream &din, Complex &c)
{
    cout << "real: ";
    din >> c.real;
    cout << "imaginary: ";
    din >> c.imag;

    return din;
}

bool operator>(const Complex &c1, const Complex &c2)
{
    if (c1.real * c1.real + c1.imag * c1.imag > c2.real * c2.real + c2.imag * c2.imag)
        return true;
    else
        return false;
}

bool operator>=(const Complex &c1, const Complex &c2)
{
    if (c1.real * c1.real + c1.imag * c1.imag >= c2.real * c2.real + c2.imag * c2.imag)
        return true;
    else
        return false;
}

bool operator<(const Complex &c1, const Complex &c2)
{
    if (c1.real * c1.real + c1.imag * c1.imag < c2.real * c2.real + c2.imag * c2.imag)
        return true;
    else
        return false;
}

bool operator<=(const Complex &c1, const Complex &c2)
{
    if (c1.real * c1.real + c1.imag * c1.imag <= c2.real * c2.real + c2.imag * c2.imag)
        return true;
    else
        return false;
}

int main()
{
    Complex c1(5, 6);
    Complex c2(1, 3);

    cout << "\nc1 = ";
    c1.print();
    cout << "\nc2 = ";
    c2.print();

    ///
    //
    //
    //Sum
    //
    cout << "\n\n\nsum: ";
    Complex sum1;
    sum1 = c1 + c2;
    cout << "\n\nc1 + c2 = ";
    sum1.print();

    Complex sum2;
    sum2 = c1 + 5;
    cout << "\n\nc1 + 5 = ";
    sum2.print();

    Complex sum3;
    sum3 = 10 + c1;
    cout << "\n\n10 + c1 = ";
    sum3.print();
    //
    //
    //
    //subtraction
    //
    cout << "\n\n\nsubtraction: ";
    Complex diff1;
    diff1 = c1 - c2;
    cout << "\n\nc1 - c2 = ";
    diff1.print();

    Complex diff2;
    diff2 = c1 - 5;
    cout << "\n\nc1 - 5 = ";
    diff2.print();

    Complex diff3;
    diff3 = 10 - c1;
    cout << "\n\n10 - c1 = ";
    diff3.print();

    //
    //
    //
    //Multiplication
    //
    cout << "\n\n\nMultiplication: ";
    Complex res;
    res = c1 * c2;
    cout << "\n\nc1 * c2 = ";
    res.print();

    res = c1 * 5;
    cout << "\n\nc1 * 5 = ";
    res.print();

    res = 10 * c1;
    cout << "\n\n10 * c1 = ";
    res.print();

    //
    //
    //
    //Division
    //
    cout << "\n\n\nDivision: ";
    res = c1 / c2;
    cout << "\n\nc1 / c2 = ";
    res.print();

    res = c1 / 5;
    cout << "\n\nc1 / 5 = ";
    res.print();

    res = 10 / c1;
    cout << "\n\n10 / c1 = ";
    res.print();

    return 0;
}
//TODO