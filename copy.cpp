#include <bits/stdc++.h>
using namespace std;

class student
{
public:
    string name;
    double *cgpaptr; // pointing to nowhere
    student(string name, double cgpa)
    {
        this->name = name;
        cgpaptr = new double; // points to float variable.(new Memory)
        *cgpaptr = cgpa;
        // this->cgpa = cgpa;
    }

    /* Custom Constructor */
    student(student &orgObj)
    {
        this->name = orgObj.name;
        cgpaptr = new double;       // creating copy of the pointer
        *cgpaptr = *orgObj.cgpaptr; // putting same values in both of it.
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
    student s2(s1);
    *(s2.cgpaptr) = 9.32;
    s1.getInfo();
    return 0;
}

/*
 * A Shallow Copy of an object copies all the memeber values from one object to another
   -> It Simply Copies the data of one object into other .
 * A Deep copy does not only copies the member values but alos make copies of the pointers
    -> It makes the copies of the addressess also (i.e any dynamically allocated memeory that the members point to.)
    -> default Copy constructor makes the shallow copy while for deep copy we had to write our custom copy constructor. 
  * Destructor ::
     -> Opposite of constructor as constructor allocates the memory to the objects while destrcuctor deallocates the memory allocated to the objects ..    
     -> It deallocates the statically allocated memory.
     -> the compiler provides us the default constructor.
     * delete ptr // It means deleting the memory to which the ptr points .
  */