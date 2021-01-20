#include <bits/stdc++.h>
using namespace std;
class quadratic{
    int a;
    int b;
    int c;
    public:
    quadratic(){
        a = 0;
        b = 0;
        c = 0;
    }quadratic(int a, int b,  int c){
        this->a = a;
        this->b = b;
        this->c = c;
    }
    quadratic operator+(const quadratic q){
        quadratic temp;
        temp.a = this->a + a;
        temp.b = this->b + b;
        temp.c = this->c + c;


    }
    void value(int x){
        int val = (this->a) * x * x + ((this->b)*x) + this->c;
        cout<< "The value of the polynimal is: "<<endl;
        cout<<val<<endl;
    }
    void root(){
        float x1,x2;
        float discriminant = (float)b*(float)b - 4*(float)a*(float)c;
        float realPart,imaginaryPart;
    
    if (discriminant > 0) {
        x1 = (-b + sqrt(discriminant)) / (2*a);
        x2 = (-b - sqrt(discriminant)) / (2*a);
        cout << "Roots are real and different." << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    
    else if (discriminant == 0) {
        cout << "Roots are real and same." << endl;
        x1 = -b/(2*a);
        cout << "x1 = x2 =" << x1 << endl;
    }

    else {
        realPart = -b/(2*a);
        imaginaryPart =sqrt(-discriminant)/(2*a);
        cout << "Roots are complex and different."  << endl;
        cout << "x1 = " << realPart << "+" << imaginaryPart << "i" << endl;
        cout << "x2 = " << realPart << "-" << imaginaryPart << "i" << endl;
    }
    }
    friend ostream & operator << (ostream &out, const quadratic &q);
    friend istream & operator >> (istream &in, quadratic &q);
};
ostream & operator << (ostream &out, const quadratic &c) 
{ 
    out<< "The quadratic equation is: \n";
    out << c.a; 
    out << "x^2 + " << c.b <<"x + "<< c.c<< endl; 
    return out; 
} 
istream & operator >> (istream &in, quadratic &c) 
{ 
    cout << "Enter coefficient of x^2: \n"; 
    in >> c.a; 
    cout << "Enter coefficient of x: \n"; 
    in >> c.b; 
    cout << "Enter the constant term: \n";
    in >> c.c;
    return in; 
} 
 

int main() {
     quadratic q;
     cin >> q;
     cout<<q;
     q.root();
    
    return 0;
}