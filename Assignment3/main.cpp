#include <iostream>
#include "Circle.h"
#include "Bank.h"

#define QUESTION 3
using namespace std;

int main()
{
    cout << "Program started\n" << endl;

#if (QUESTION == 1 || QUESTION == 2)
    Circle circle1(5);
    Circle circle2(10);

    cout << "Circle1\nRadius = " << circle1.getRadius() << endl;
    cout << "Circumference = " << circle1.circumference() << endl;

    cout << "\nCircle2\nRadius = " << circle2.getRadius() << endl;
    cout << "Circumference = " << circle2.circumference() << endl;

    double bigCirRad = 0;

    bigCirRad = circle1.getRadius() + circle2.getRadius();
    Circle bigCircle(bigCirRad);
    cout << "\nBigger Circle Radius = " << bigCircle.getRadius() << endl;
    cout << "Circumference = " << bigCircle.circumference() << endl;

    ++bigCircle;
    cout << "\nBigger Circle Radius = " << bigCircle.getRadius() << endl;
    cout << "Circumference = " << bigCircle.circumference() << endl;

#elif (QUESTION == 3)

    Bank* bank = new Bank();
    cout << "Bank balance = " << bank->getBalance() << endl;

    BankA* bankA = new BankA();
    bank = bankA;
    cout << "Bank A balance = " << bank->getBalance() << endl;

    BankB* bankB = new BankB();
    bank = bankB;
    cout << "Bank B balance = " << bank->getBalance() << endl;

    BankC* bankC = new BankC();
    bank = bankC;
    cout << "Bank C balance = " << bank->getBalance() << endl;

#endif

    cout << "\nProgram end" << endl;
    return 0;
}