//* Refers -> "many forms" -> Refers to the ability of the object ,function to bahve differently based on the context.

/* Types :

1. Compile-Time Polymorphism (Static Binding):
: Resolved at compile time.
: Achieved through function overloading and operator overloading.

-> Function Overloading
Function overloading occurs when multiple functions have the same name but differ in their parameter types or numbers.

2. Runtime Polymorphism (Dynamic Binding):
: Resolved at runtime.
: Achieved through virtual functions and function overriding.
: Runtime polymorphism is achieved using inheritance and virtual functions. It allows a function to behave differently based on the actual type of the object being referred to.

*/

// Function Overriding
// When a derived class redefines a base class function with the same signature, it's called function overriding. The function in the base class must be declared as virtual to enable runtime polymorphism.

// #include <bits/stdc++.h>
// using namespace std;
// class Student
// {
//     string name;

// public:
//     virtual void setName() // enables run time polymorphism
//     {
//         // name = s;
//         cout << "Dog Do not Barks !!" << endl;
//     }
// };

// class Child : public Student
// {
// public:
//     void setName() override
//     {
//         cout << "Dog Barks !!" << endl;
//     }
//     // void setName ()
//     // {
//     //     cout << "Dog Barks !!" << endl;
//     // }
// };
// int main()
// {
//     Student *s1;
//     //  s1.setName("Doberman");
//     Child s2;
//     s1 = &s2;
//     s1->setName();
//     return 0;
// }

// Virtual Function :
// : Function declared in the base class (with the additon of virtual keywod) and overridden in the derived class .

// Pure Virtual function
// : Function with no implementation in the base class;
// : Class containing a Pure Virtual Function is called abstract class .

// {virtual void functionName() = 0;}

#include <bits/stdc++.h>
using namespace std;
class Shape
{
public:
    virtual void area() = 0; // pure virtual function
};

class Circle : public Shape
{
    int r;

public:
    Circle(int radius)
    {
        r = radius;
    }
    void area() override
    {
        cout << "Area(Circle) :: " << 3.14 * r * r << endl;
    }
};
int main()
{
    Shape *s;
    Circle cir(7);
    s = &cir;
    s->area();
    return 0;
}

// Compile Time Poly. -> Faster and does not require Inheritance
// RunTime Poly. -> Slower and require Inheritance
