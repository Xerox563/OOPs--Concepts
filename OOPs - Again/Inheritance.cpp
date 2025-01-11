// Polymorphism
/*
 * It is the ability of the object to take different forms or behave in different ways depending on th context in which they are used .
 */

// #include <bits/stdc++.h>
// using namespace std;
// class Student
// {
// public:
//     Student()
//     {
//         cout << "Its Non Parameterised Constructor !!" << endl;
//     }

//     Student(string name)
//     {
//         cout << "Parameterised Constructor !!" << endl;
//         cout << name << endl;
//     }
// };
// int main()
// {
//     Student s1("Raju");
//     return 0;
// }

// Compile Time Polymorphism (Constructor Overloading)
/*
 * In function overloading, multiple functions can have the same name
 * but differ in their parameter types or the number of parameters. The compiler decides which function to call based on the arguments provided.
 */

#include <bits/stdc++.h>
using namespace std;
class Calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
    int add(int a, int b, int c)
    {
        return a + b + c;
    }
    double add(double a, double b)
    {
        return a + b;
    }
};
int main()
{
    Calculator calc;
    cout << calc.add(2, 3) << endl;
    cout << calc.add(2, 3, 4) << endl;
    cout << calc.add(2.342435, 4.43243) << endl;
    return 0;
}

// Compiler Decides which version of the add function to invoke at the compile time based on the arguments provided in the function call.