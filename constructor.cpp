#include <bits/stdc++.h>
using namespace std;

class Account
{
    /* Data Hiding : Make the Sensitive information as private so that no one can access it..*/
private:
    double balance;
    string password;

public:
    // * Non Parameterised Costructor
    Account()
    {
        username = "Rachel";
    }
    // * Parameterised Costructor
    Account(string username)
    {
        this->username = username;
        /* *(this).username = username */
        /*  obj.property = username */
    }
    // * Copy Costructor
    Account(Account &orgObj)
    {
        this->username = orgObj.username;
    }

    string accountId;
    string username;

    // setter
    void setUser(double amount, string pass)
    {
        balance = amount;
        password = pass;
    }
    // getter
    double getUserBalance()
    {
        return balance;
    }
    string getUserPass()
    {
        return password;
    }
};
int main()
{
    // object creation -> className objectName;
    Account t1("Alexa");
    Account t2("Kraven");
    // Account t3(t2); // Default copy constructor is invoked If custom constructor is coded then its called automaitically..
    t1.setUser(20000, "aethhh537hhk28");
    cout << "Balance: " << t1.getUserBalance() << endl;
    cout << "Password: " << t1.getUserPass() << endl;
    cout << "Teacher-1 Name: " << t1.username << endl;
    cout << "Teacher-1 Name: " << t2.username << endl;
    return 0;
}

/*
    * CONSTRUCTOR -> special method invoked automatically at time of object creation.
    * Always put iniside the public .
    * Used for Initialisation.
    * same name as class
    * Constructor does not have a return type
    * Only called once(automatically),at object creation
    * Memory Allocation happens when constructor is called( when object is created )
    * Memory Allocation happens for objects not classes.
      -----> Parametereised Constructor
      -----> Non Parametereised Constructor
      -----> Copy Constructor
    ********** Constructor Overloading **********
    * Having multiple contructors with same name but different type -> Constructor Overloading (Polymorphism)
    * Copy Constructor -> Special Constructor(default) used to copy properties of one object into another .
 */