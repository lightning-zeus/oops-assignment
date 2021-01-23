#include <iostream>
#define endl "\n"
using namespace std;

class Employee {
    string name;
    double salary; 

   public:
    Employee() {
        name = "";
        salary = 0;
    }

    Employee(string name, double salary) {
        this->name = name;
        this->salary = salary;
    }

    string getName() { 
        return name; 
        }
    void setName(string name) { 
        this->name = name; 
        }

    double getSalary() { 
        return salary; 
        }
    void setSalary() { 
        this->salary = salary; 
        }

    virtual void printDetails() {
        cout << "Name   : " << name << endl
             << "Salary : " << salary << " Rs." << endl;
    }
};

class Manager : public Employee {
    string type;

   public:
    Manager() { 
        type = ""; 
        }

    Manager(string name, double salary, string type) : Employee(name, salary) {
        this->type = type;
    }

    string getType() { return type; }
    void setType(string type) { this->type = type; }

    void printDetails() {
        Employee::printDetails();
        cout << "Type   : " << type << endl;
    }
};

class Clerk : public Employee {
    double allowance;

   public:
    Clerk() { 
        allowance = 0; 
        }

    Clerk(string name, double salary, double allowance)
        : Employee(name, salary) {
        this->allowance = allowance;
    }
    double getAllowance() { 
        return allowance; 
        }
    void setAllowance() { 
        this->allowance = allowance; 
        }

    void printDetails() {
        Employee::printDetails();
        cout << "Allowance : " << allowance << " Rs." << endl;
    }
};

int main() {
    Manager m("Manager 1", 326000, "Engineering");
    m.printDetails();
    cout << endl;
    Clerk c("Clerk 1", 55500, 2200);
    c.printDetails();
    cout << endl;
    double totalSal = 0;
    Employee *er[6];
    er[0] = new Employee("Employee 1", 80000);
    er[1] = new Employee("Employee 2", 95000);
    er[2] = new Manager("Manager 1", 253000, "Engineering");
    er[3] = new Manager("Manager 2", 200600, "Engineering");
    er[4] = new Clerk("Clerk 1", 45000, 5000);
    er[5] = new Clerk("Clerk 2", 48000, 5000);
    for (int i = 0; i < 6; i++) {
        er[i]->printDetails();
        totalSal += er[i]->getSalary();
        cout << endl;
    }
    cout << "Total salary drawn by all employees: " << totalSal << endl;
}