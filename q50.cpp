include <bits/stdc++.h>

class Complex {
   private:
    float real, img;

   public:
    Complex() = default;
    Complex(float real, float imaginary) : real(real), img(imaginary) {}
    void setReal(float real) { this->real = real; }
    float getReal() { return this->real; }
    void setImg(float img) { this->img = img; }
    float getImg() { return this->img; }
    void disp() {
        (img >= 0) ? std::cout << real << "+" << img << "i"
                   : std::cout << real << img << "i";
    }
    double getMag() { return sqrt(real * real + img * img); }
    Complex operator+(Complex &c) {
        return Complex(real + c.real, img + c.img);
    }
    Complex operator-(Complex &c) {
        return Complex(real - c.real, img - c.img);
    }
    Complex operator*(Complex &c) {
        Complex res(real * c.real - img * c.img, real * c.img + img * c.real);
        return res;
    }
    Complex operator*(Complex c) {
        Complex res(real * c.real - img * c.img, real * c.img + img * c.real);
        return res;
    }
    Complex operator-() {
        Complex res(real, -img);
        return res;
    }

    Complex operator/(Complex &c) {
        Complex num = (*this) * -c;
        Complex den = (c) * (-c);
        Complex res(num.real / den.real, num.img / den.real);
        return res;
    }
    bool operator>(Complex c) {
        bool res = this->getMag() > c.getMag();
        return res;
    }
};
class Stack {
    int *buffer, top, capacity;

   public:
    Stack(int);      // create a stack with specified size
    void push(int);  // push the specified item
    int pop();       // return the top element
    void disp();     // displays elements in the stack in top to bottom order
    // ~Stack();
    class OverFlow {};
    class UnderFlow {};
};

Stack::Stack(int capacity) : top(-1), capacity(capacity) {
    buffer = new int[capacity];
}
void Stack::push(int data) {
    if (top == capacity - 1) throw OverFlow();
    buffer[++top] = data;
}
int Stack::pop() {
    if (top == -1) throw UnderFlow();
    return buffer[top--];
}
void Stack::disp() {
    for (int i = top; i >= 0; i--) {
        std::cout << buffer[i] << " ";
    }
};

template <typename T>

void swap(T &T1, T &T2) {
    T tmp = T1;
    T1 = T2;
    T2 = tmp;
}

void swap(Stack &a, Stack &b) {
    Stack temp = a;
    a = b;
    b = temp;
}

int main() {
    int a = 1, b = 2;
    std::cout << "a & b before swap: " << a << " " << b << "\n";
    swap(a, b);
    std::cout << "a & b after swap: " << a << " " << b << "\n";

    Complex c1(1, 1), c2(2, 3);
    std::cout << "c1 & c2 before swap: ";
    c1.disp();
    std::cout << " ";
    c2.disp();
    std::cout << "\n";
    swap(c1, c2);
    std::cout << "c1 & c2 after swap: ";
    c1.disp();
    std::cout << " ";
    c2.disp();
    std::cout << "\n";
    Stack s1(5), s2(5);
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s2.push(-1);
    s2.push(-2);
    s2.push(-3);
    std::cout << "s1 & s2 before swap: ";
    s1.disp();
    std::cout << ", ";
    s2.disp();
    std::cout << "\n";
    swap(s1, s2);
    std::cout << "s1 & s2 after swap: ";
    s1.disp();
    std::cout << ", ";
    s2.disp();
}