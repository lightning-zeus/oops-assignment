#include <bits/stdc++.h>
using namespace std;

class Person {
    string name;
    int age;
    double height;

   public:
    Person() : name(""), age(0), height(0) {}
    Person(string s, double h, int a) : name(s), height(h), age(a) {}
    string getName() { return name; }
    void setName(string s) { name = s; }
    int getAge() { return age; }
    void setAge(int a) { age = a; }
    double getHieght() { return height; }
    void setHieght(double h) { height = h; }
    virtual void printDetails() {
        cout << "Name: " << name << "\nAge: " << age << "\nHeight: " << height
             << "\n";
    }
};

class Student : public Person {
    int roll, year;

   public:
    Student() : roll(0), year(0) {}
    Student(string n, double h, int a, int r, int y)
        : Person(n, h, a), roll(r), year(y) {}

    int getRoll() { return roll; }
    void setRoll(int r) { roll = r; }

    int getYear() { return year; }
    void setYear(int y) { year = y; }
    void printDetails() override {
        Person::printDetails();
        cout << "Roll: " << roll << "\nYear of admission: " << year << "\n";
    }
};

int main() {
    Person p("QUI GONN", 187.5, 21);
    Student s("Tim", 169.2, 19, 12, 2017);
    cout << "From person object: \n";
    p.printDetails();
    cout << endl;
    cout << "From student object: \n";
    s.printDetails();
    cout << endl;

    Person *arr[4];
    arr[0] = new Person("Obi", 175.5, 15);
    arr[1] = new Person("Pete", 171.5, 14);
    arr[2] = new Student("Juli", 168, 19, 123, 2019);
    arr[3] = new Student("Anakin", 174.5, 20, 1, 2018);
    cout << "Details of person objects: \n";
    arr[0]->printDetails();
    cout << endl;
    arr[1]->printDetails();
    cout << endl;
    cout << "Details of student objects: \n";
    arr[2]->printDetails();
    cout << endl;
    arr[3]->printDetails();
    cout << endl;
}