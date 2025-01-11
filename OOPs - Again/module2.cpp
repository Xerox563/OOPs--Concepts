/*
 * Encapsulation  -> It is wrapping up of data + member Functions in  a Single unit called class.
 -> Ek Class Banana and usmae data members + Methods ko declare karna hi Encapsulation hota hai .

 Data Hiding -> Senitive Info ko Private bnado
 class bnayi -> Tabhi Access Modifiers ko use kia -> jb use kia (private AM) tbhi hide kr paaye .
 */
#include <bits/stdc++.h>
using namespace std;
class Account
{
private:
    double balance;
    string password;

public:
    Account()
    {
        cout << "HI !! , I am Constructor" << endl;
    }
    string username;
};

int main()
{
    Account a1;
    return 0;
}

/*
-> Constructor -> Special Method invoked automatically at the time of Object creation -> Used For Initialization of Object.
 * Same Name as Class Name.
 * Do not have a return type. (always declared Public).
 * Only called once (during Object Creation)
 * Memory Allocation Happens When Constructor is Called .
 * Memory Allocation Occurs for Objects not for classes (Only when the Object is Created and Constructor is called (automatically)).
 * One class can have multiple constructors (But there parameters should be different .) -> Means Different constructors of different types -> Constructor Overloading (eg. of Polymorphism)
 * this -> prop : *(this).prop : obj.prop
 */