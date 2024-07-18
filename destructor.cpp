#include <bits/stdc++.h>
using namespace std;

class student
{
public:
    string name;
    double *cgpaptr; // pointing to nowhere
    /* Constructor */
    student(string name, double cgpa)
    {
        cout << "I allocate Everything !!" << endl;
        this->name = name;
        cgpaptr = new double; // points to float variable.(new Memory)
        *cgpaptr = cgpa;
        // this->cgpa = cgpa;
    }

    /* Destructor */
    ~student()
    {
        cout << "I Deallocate Everything !!" << endl;
        // To delete dynamic allocated memory
        delete cgpaptr; // To avoid memory leak
    }

    void getInfo()
    {
        cout << "name : " << name << endl;
        cout << "cgpa : " << *cgpaptr << endl;
    }
};
int main()
{
    student s1("rahul", 8.65);
    // s1.getInfo();
    s1.getInfo();

    return 0;
}
