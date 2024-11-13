#ifndef BANK_H_
#define BANK_H_

#include <iostream>

using namespace std;

class Bank
{
private:
    double mBalance = 0;
public:
    double virtual getBalance();
};

class BankA : public Bank
{
private:
    double mBalance = 2000;
public:
    double getBalance();
};

class BankB : public Bank
{
private:
    double mBalance = 600;
public:
    double getBalance();
};

class BankC : public Bank
{
private:
    double mBalance = 400;
public:
    double getBalance();
};

#endif /* BANK_H_ */
