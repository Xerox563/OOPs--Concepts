// * Constructor is a Special member function thats called automatically when an object of the class is created .
/*
 * Same name as class name
 * no return type.
 * called automatically when object is created .
 */

#include <bits/stdc++.h>
using namespace std;
class Student
{
    int salary;
    int age;

public:
    string name;
    string company;

    // Default Constructor
    Student(int x)
    {
        salary = x;
    }

    Student(const Student &obj)
    {
        salary = obj.salary;
    }
    // Student()
    // {
    //     cout << "Default constructor Called !!" << endl;
    // }

    // Student(int x, int y)
    // {
    //     cout << "Parameterised constructor Called !!" << endl;
    //     salary = x;
    //     age = y;
    //     cout << salary << endl;
    //     cout << age << endl;
    // }
    ~Student()
    {
        cout << "Destrcutor Called !!" << endl;
    }
};

int main()
{
    Student s1(25000);
    Student s2(s1);
    //  Student s1(25000, 21);
    return 0;
}

/*
Destructor is another special member function that is called by the compiler when the scope of the object ends. It deallocates all the memory previously used by the object of the class so that there will be no memory leaks. The destructor also have the same name as the class but with tilde(~) as prefix.
 */
