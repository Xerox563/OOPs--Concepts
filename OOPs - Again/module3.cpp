// Constructor & Destructor
#include <bits/stdc++.h>
using namespace std;
class Teacher
{
    float salary;

public:
    string name;
    string dept;
    string subject;

    Teacher(string name, string dept, float salary, string subject)
    {
        cout << "I am Parameterised Constructor !!" << endl;
        this->name = name;
        this->dept = dept;
        this->salary = salary;
        this->subject = subject;
    }

    // copy Constructor
    Teacher(Teacher &obj)
    {
        cout << "I am Custom COpy constructor !!" << endl;
        this->name = obj.name;
        this->salary = obj.salary;
    }

    void getInfo()
    {
        cout << "name : " << name << endl;
        cout << "dept : " << dept << endl;
        cout << "salary : " << salary << endl;
        cout << "subject : " << subject << endl;
    }
};
int main()
{
    Teacher t1("Raju", "ME", 54500, "ThermoDyanmics");
    t1.getInfo();
    Teacher t2(t1);
    cout << endl;
    t2.getInfo();
    return 0;
}

// * Copy Constructor -> Special Constrcuctor that is used to copy properties of one Object into Other .
