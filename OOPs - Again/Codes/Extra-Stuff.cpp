// Encapsulation
/*
* Encapsulation is the process of wrapping data (variables) and methods (functions) into a single unit, typically a class.
-> It helps in:
   : Restricting direct access to some of the object's components.
   : Achieving data hiding by using access specifiers (private, protected, public).
Key Features:
 : Data can only be accessed through member functions.
 : Protects the integrity of the data.
 */

#include <bits/stdc++.h>
using namespace std;

class Person
{
private:
    // Private data members (cannot be accessed directly outside the class)
    string name;
    int age;

public:
    // Setter function to set the name
    void setName(string n)
    {
        name = n;
    }

    // Getter function to get the name
    string getName()
    {
        return name;
    }

    // Setter function to set the age
    void setAge(int a)
    {
        if (a > 0)
        { // Ensuring valid age
            age = a;
        }
    }

    // Getter function to get the age
    int getAge()
    {
        return age;
    }
};

int main()
{
    Person person;

    // Setting values using setter functions
    person.setName("John");
    person.setAge(25);

    // Accessing values using getter functions
    cout << "Name: " << person.getName() << endl;
    cout << "Age: " << person.getAge() << endl;

    return 0;
}

//------------------------------------------------------------------------------------------------------------------------------------

// Static Members

/*
 *Static members in C++ are variables and functions that belong to the class itself, rather than to instances (objects) of the class. This means that there is only one copy of the static member shared by all instances of the class.

  : Key Points:
    -> Static Variables: Shared by all objects of the class. All instances refer to the same static variable.
    -> Static Functions: Can be called using the class name and do not need an object to be called.Can only access static members of the class.

 */
#include <bits/stdc++.h>
using namespace std;

class MyClass
{
public:
    static int count; // Static variable to keep track of object count

    MyClass()
    {
        count++; // Increment the count whenever a new object is created
    }

    // Static function to access the static variable
    static void displayCount()
    {
        cout << "Object count: " << count << endl;
    }
};

// Initialize the static variable outside the class
int MyClass::count = 0;

int main()
{
    MyClass obj1; // Object 1 is created
    MyClass obj2; // Object 2 is created
    MyClass obj3; // Object 3 is created

    // Display the count using the static function
    MyClass::displayCount(); // Output: Object count: 3

    return 0;
}
