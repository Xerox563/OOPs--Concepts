// Abstraction
/*
 * Process of Hiding the implementation details and showing only the essential features of an object.
 * Achieved Through Abstract Classes (classes with pure virtual function).
 * Interfaces (classes where all methods are pure virtual).
 * Allows focusing on what an object does rather than how it does it.
 */

/*
 * The Shape class defines what needs to be done (having an area() function) without revealing how it will be done.
 * The derived classes (Circle and Rectangle) hide the implementation details of how they calculate the area and only expose the necessary functionality (the area() function).
 * As a user, you interact with the Shape class's interface (calling area()), and the implementation details are hidden from you, thus achieving abstraction.*/
#include <bits/stdc++.h>
using namespace std;

// Abstract Class
class Shape
{
public:
    virtual void area() = 0; // Pure virtual function
};

class Circle : public Shape
{
    int radius;

public:
    Circle(int r) : radius(r) {}
    void area() override
    {
        cout << "Circle Area: " << 3.14 * radius * radius << endl;
    }
};

class Rectangle : public Shape
{
    int length, width;

public:
    Rectangle(int l, int w) : length(l), width(w) {}
    void area() override
    {
        cout << "Rectangle Area: " << length * width << endl;
    }
};

int main()
{
    Shape *shape;

    Circle circle(5);
    Rectangle rect(4, 6);

    shape = &circle;
    shape->area(); // Circle's area implementation

    shape = &rect;
    shape->area(); // Rectangle's area implementation

    return 0;
}

/*
In the code, abstraction is demonstrated by the Shape class and its derived classes (Circle and Rectangle). Here's how abstraction hides the implementation details and exposes only the necessary functionality:

1. Shape Class (Abstract Class)

class Shape {
public:
    virtual void area() = 0; // Pure virtual function
};
The Shape class defines a contract that all derived classes must follow. It declares a virtual function area(), but does not provide any implementation for it.
The purpose of the Shape class is not to define how to calculate the area of a shape but to specify that every shape must have an area() function.
Abstraction in Action:
The Shape class hides the implementation details of how to calculate the area of a shape.
The Shape class does not care how the area is calculated, it just expects that any derived class (like Circle or Rectangle) will implement its own specific area() function.

2. Derived Classes (Circle and Rectangle)

class Circle : public Shape {
    int radius;
public:
    Circle(int r) : radius(r) {}
    void area() override {
        cout << "Circle Area: " << 3.14 * radius * radius << endl;
    }
};

class Rectangle : public Shape {
    int length, width;
public:
    Rectangle(int l, int w) : length(l), width(w) {}
    void area() override {
        cout << "Rectangle Area: " << length * width << endl;
    }
};
Both Circle and Rectangle provide specific implementations of the area() function, focusing on how to calculate the area for their respective shapes.
Abstraction in Action:
The implementation details of how to calculate the area are hidden within the derived classes.
The user of the Shape class does not need to know how the area is calculated for each shape (whether it's π * r² for a circle or length * width for a rectangle). They only need to know that calling area() on any shape will give them the area of that shape.
The implementation (e.g., the formula for calculating the area) is not exposed to the outside world, but only the necessary functionality (i.e., calling area()).

3. Main Function (Using the Abstract Class)

int main() {
    Shape *shape;

    Circle circle(5);
    Rectangle rect(4, 6);

    shape = &circle;
    shape->area(); // Circle's area implementation

    shape = &rect;
    shape->area(); // Rectangle's area implementation

    return 0;
}

In the main() function, the pointer shape is of type Shape. It is used to point to different types of objects (Circle, Rectangle).
The user of the Shape class does not need to know the specific type of object (Circle or Rectangle) they are dealing with. They just call shape->area() and get the area of the specific shape.
Abstraction in Action:
The abstraction hides the complexity of how the area is calculated, leaving only the necessary functionality exposed: calling the area() function on any shape.
The Shape class provides the interface (the method signature) for area(), and the derived classes provide the implementation details.

*/
