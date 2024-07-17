#include <bits/stdc++.h>
using namespace std;

class Teacher
{
private:
    double salary;

public:
    // Properties
    string name;
    string dept;
    string subject;

    // Methods (Function written indise the class) -> Member Functions
    void changeDept(string newDept)
    {
        dept = newDept;
    }

    /* setter ->  To set private values */
    void setSalry(double s)
    {
        salary = s;
    }

    /* getter ->  To get private values */
    double getSalry()
    {
        return salary;
    }

    // We cant access salary direvtly as its private but yes we can access them with the help of these public functions ..
};

int main()
{
    // object creation -> className objectName;
    Teacher t1;
    t1.name = "Amit";
    t1.subject = "Maths";
    t1.dept = "Computer Science";
    t1.setSalry(12550);
    /*  In Order to excess t1's info we can do that with the help of dot operator
     * t1.name =""; To excess t1's name;
     * t1.dept;
     * t1.subject;
     * t1.changeDept();
     */
    cout << "Name : " << t1.name << endl;
    cout << "Salary : " << t1.getSalry() << endl;
    // Teacher t2;
    // Teacher t3;
    return 0;
}

/*
 ********** Access Modifiers **********
  * By default all properties and member functions are private in nature.
  *  (ByDefault) private : Data and methods that we want that they should be accessible inside the class.. // Make them Private.
  *  public : Data and methods that we want that they should be accessible to everyone.. // Make them Private.
  *  protected : Data and methods are accessible inside the class and its derived class.. // Make them Private.

*/