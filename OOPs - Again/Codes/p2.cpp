/*
  * A friend function in C++ is a function that is not a member of a class
 *  but can access the private and protected members of that class.
  * To make a function a friend, the friend keyword is used inside the class.

Why Use a Friend Function?
Sometimes, you may need a function to access private/protected members of a class,
 but it doesn't logically belong to the class itself. A friend function solves this problem.
 * A friend function is not a member of the class but still has access to its private and protected members.
*/

#include <bits/stdc++.h>
using namespace std;

class Box
{
private:
    int length;

public:
    Box(int l)
    {
        length = l;
    }

    // declare the friend function
    friend void getLength(Box y);
};

void getLength(Box x)
{
    cout << x.length << endl;
}

int main()
{
    Box b(5);
    getLength(b);
    return 0;
}
