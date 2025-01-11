/*
 * Objects are entities in real world
 * Classes is Like bueprint for these entities
 * eg : Topyota created a blueprint for making cars -> using that they can create as many cars they want.
 * Cars -> entities , Blueprint -> classes (group of objects)

 * Teacher (name,dept.,subject,salary , [change dept]) (properties , Methods(funtions written inside the class))


Class:
Think of a class as a blueprint or template.
It defines the structure or design of something but doesn’t exist on its own.
It contains attributes (data) and behaviors (methods/functions).
Example: Imagine a blueprint of a house. It describes:

How many rooms the house will have.
The size of the rooms.
Where the doors and windows will be.
But it’s not an actual house yet.
--------------------------------------------------------------
Object:
An object is a specific, real-world instance of a class.
It is created based on the blueprint (class) and has all the properties and behaviors defined by that blueprint.
Example: If a class is a blueprint of a house, an object is an actual house built using that blueprint. You can have multiple houses (objects) from the same blueprint (class).

 */

/*
 * OOP allows encapsulation, meaning data (attributes) and methods (functions) are bundled together in a class.
 * OOP allows you to represent real-world entities (like cars, animals, or students) in your code.
 * OOP promotes code reuse through inheritance, where one class can inherit properties and behaviors of another class.
 * OOP organizes code into classes, making it modular. This makes it easier to:
     -> Debug
     -> Update
     -> Extend functionality
     -> Why it matters: Changes in one part of the code don't affect other parts, reducing the risk of breaking the system.
 * In OOP, different developers can work on different objects or classes independently.


  * Access Modifiers
   -> Private -> Data & Methods that are accessible inside the class.
   -> Public -> Data & Methods that are accessible to everyone.
   -> Protected -> Data & Methods accessible inside the class & to its derived class.
 */

#include <bits/stdc++.h>
using namespace std;

class Teacher
{
    float salary;

public:
    // properties / attributes
    string name;
    string dept;
    string subject;

    // methods / member functions

    void changeDept(string d)
    {
        dept = d;
    }

    // setter -> Private Values ko set Karna
    void setSalary(float s)
    {
        salary = s;
    }
    // getter -> Private Values ko get Karna
    float getSalary()
    {
        return salary;
    }
};
int main()
{
    Teacher t1;
    t1.name = "Amit";
    t1.subject = "Maths";
    // t1.salary = 2500.78; (private)
    t1.setSalary(35000.89);
    cout << t1.getSalary() << endl;
    t1.dept = "CS";
    return 0;
}