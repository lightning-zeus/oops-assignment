#include <bits/stdc++.h>
using namespace std;
class Complex{
float img;
float real;
public:
void setReal(){
cout<<"Input the real part of the complex number: ";
float r;
cin>>r;
real = r;
}
void setImaginary(){
cout<<"Input the imaginary part of the complex number: ";
float i;
cin>>i;
img = i;
}
void display(){
    cout<<"The compex number is: "<<real<<"+"<<img<<"i"<<endl;
}
Complex sum(Complex c){
    Complex temp;
    temp.real = real + c.real;
    temp.img = img + c.img;
    return temp;

}
};
int main() {
     Complex c1,c2;
     c1.setReal();
     c1.setImaginary();
     c2.setReal();
     c2.setImaginary();
     Complex c3(c1.sum(c2));
     c3.display();

    
    return 0;
}