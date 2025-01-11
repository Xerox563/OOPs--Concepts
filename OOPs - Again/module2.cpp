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
    string username;
};

