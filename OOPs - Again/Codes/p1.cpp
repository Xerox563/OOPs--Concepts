#include <bits/stdc++.h>
using namespace std;
class Student
{
private:
    string passwd;

public:
    string name;
    int roll;
    void setpasswd(string p, string n)
    {
        passwd = p;
        name = n;
    }
    int setRollno(int x);
    void printpasswd()
    {
        cout << "Password is ::" << passwd << endl;
    }
};

int Student::setRollno(int x)
{
    roll = x;
}

int main()
{
    Student s1;
    s1.setpasswd("nCoderr33@", "Raju");
    s1.setRollno(233);
    cout << s1.roll << endl;
    s1.printpasswd();
    cout << s1.name << endl;
    return 0;
}

/*
 * Public : Members declared as public can be accessed from outside the class.
 * Private : Members declared as private can be accessed inside the class.
 * Protected : Members declared as public can be accessed within the class and by dervied class.
 */