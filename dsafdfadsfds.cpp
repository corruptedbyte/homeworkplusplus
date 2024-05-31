#include <iostream>
using namespace std;

namespace Company {

    class Person
    {
    private:
        string name;
        int age;
    public:
        Person() : name("Anon"), age(0) {}

        Person(const string& studentName, int studentAge) : name(studentName), age(studentAge) {}

        void setName(const string& setName) {
            name = setName;
        }

        string getName() const {
            return name;
        }

        void setAge(int setAge) {
            age = setAge;
        }

        int getAge() const {
            return age;
        }

        void display() const
        {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
        }
    };

    class Employee : public Person
    {
    protected:
        int id;
        float salary;

    public:
        Employee() : Person(), id(0), salary(1000) {}

        Employee(const string& name, int age, int idPer, float salaryPar) : Person(name, age), id(idPer), salary(salaryPar) {}

        void setId(int newId) {
            id = newId;
        }

        int getId() const {
            return id;
        }

        void setSalary(float newSalary) {
            salary = newSalary;
        }

        float getSalary() const {
            return salary;
        }

        void raiseSalary(float amount) {
            salary += amount;
        }


    };

    class Manager : public Employee
    {
    private:
        int department;

    public:
        Manager() : Employee(), department(0) {}

        Manager(const string& name, int age, int id, float salary, int dep) : Employee(name, age, id, salary), department(dep) {}

        void changeDepartment(int newDep) {
            department = newDep;
        }

        void profitSalary(float profit) {
            salary += profit * 0.1;
        }


    };

}

namespace MathOperations {

    class Fraction
    {
    private:
        int a;
        int b;

    public:
        Fraction(int a = 1, int b = 1) : a(a), b(b) {}

        void initNumber()
        {
            cout << "Enter the first number: ";
            cin >> a;
            cout << "Enter the second number: ";
            cin >> b;
        }

        void addition() const
        {
            int sum = a + b;
            cout << "Addition of numbers: " << sum << endl;
        }

        void subtraction() const
        {
            int sub = a - b;
            cout << "Subtraction of numbers: " << sub << endl;
        }

        void multiplication() const
        {
            int mul = a * b;
            cout << "Multiplication of numbers: " << mul << endl;
        }

        void division() const
        {
            if (b == 0) {
                cout << "Division by zero is not allowed." << endl;
            }
            else {
                int div = a / b;
                cout << "Division of numbers: " << div << endl;
            }
        }

        Fraction operator+(const Fraction& other) const
        {
            return Fraction(a + other.a, b + other.b);
        }

        Fraction operator-(const Fraction& other) const
        {
            return Fraction(a - other.a, b - other.b);
        }

        Fraction operator*(const Fraction& other) const
        {
            return Fraction(a * other.a, b * other.b);
        }

        Fraction operator/(const Fraction& other) const
        {
            if (other.a == 0 || other.b == 0) {
                cout << "Division by zero is not allowed." << endl;
                return Fraction(0, 0);
            }
            else {
                return Fraction(a / other.a, b / other.b);
            }
        }
    };

}
