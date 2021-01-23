#include <cmath>
#include <iostream>
#define endl "\n"
using namespace std;

class complexNo {
    double real;
    double imaginary;

   public:
    complexNo() {
        real = 0;
        imaginary = 0;
    }
    complexNo(double real, double imaginary) {
        this->real = real;
        this->imaginary = imaginary;
    }

    void setReal(double real) { 
        this->real = real; 
        }
    void setImg(double imaginary) { 
        this->imaginary = imaginary; 
        }
    double getReal() { 
        return real; 
        }
    double getImaginary() { 
        return imaginary; 
        }

    void disp() const {
        if (real != 0) std::cout << real;
        if (real != 0 && imaginary > 0) std::cout << " + ";
        if (real != 0 && imaginary < 0) std::cout << " - ";
        if (imaginary > 0) std::cout << imaginary << "i";
        if (imaginary < 0) std::cout << -imaginary << "i";
        if (real == 0 && imaginary == 0) std::cout << "0";
    }

    complexNo conjugate() const { return complexNo(real, -imaginary); }
    double modulus() const { return sqrt(real * real + imaginary * imaginary); }

    complexNo operator-() { return complexNo(-real, -imaginary); }

    complexNo operator+(double d) { return complexNo(real + d, imaginary); }
    complexNo operator+(const complexNo& c) {
        return complexNo(real + c.real, imaginary + c.imaginary);
    }

    complexNo operator-(double d) { return complexNo(real - d, imaginary); }
    complexNo operator-(const complexNo& c) {
        return complexNo(real - c.real, imaginary - c.imaginary);
    }

    complexNo operator*(double d) { return complexNo(real * d, imaginary * d); }
    complexNo operator*(const complexNo& c) {
        return complexNo((real * c.real) - (imaginary * c.imaginary),
                       (real * c.imaginary) + (imaginary * c.real));
    }

    complexNo operator/(double d) { return complexNo(real / d, imaginary / d); }
    complexNo operator/(const complexNo& c) {
        return (*this * c.conjugate()) / (c.modulus() * c.modulus());
    }

    bool operator>(const complexNo& c) {
        if (modulus() > c.modulus()) return true;
        return false;
    }

    friend ostream& operator<<(ostream& cout, const complexNo& c) {
        c.disp();
        return cout;
    }
};

class StackOverFlow{};
class StackUnderFlow{};

template <class T>
class Stack {
    T* buffer;
    int top;
    int size;
   public : 
    Stack(int size = 0) {
        this->size = size;
        buffer = new T[size];
        top = -1;
    }
    
    void push(T data) {
        if (top == size - 1) throw StackOverFlow();
        buffer[++top] = data;
    }

    T pop() {    
        if (top == -1) throw StackUnderFlow();
        return buffer[top--];
    }

    void disp() {
        for (int i = top; i >= 0; i--) cout << buffer[i] << ",  ";
        cout << endl;
    }
};

int main() {
    Stack<int> s(10);
    for (int i = 10; i < 20; i++) s.push(i);
    cout << "Popped from int stack : " << s.pop() << endl;
    cout << "Popped from int stack : " << s.pop() << endl;
    cout << "Popped from int stack : " << s.pop() << endl;

    Stack<complexNo> s1(10);
    for (int i = 110; i < 120; i++) s1.push(complexNo(i, i-2));
    cout << "Popped from Complex stack : " << s1.pop() << endl;
    cout << "Popped from Complex stack : " << s1.pop() << endl;
    cout << "Popped from Complex stack : " << s1.pop() << endl;

    cout << "int Stack : ";
    s.disp();
    cout << "Complex Stack : ";
    s1.disp();
}