#ifndef COMPUTER_H_
#define COMPUTER_H_

#include <iostream> 

using namespace std;

class CPU
{
private:
    double m_clockSpeed;
    int m_cores;
    int m_cacheSize;
public:
    CPU(double clkSpeed, int core, int cache);
    void display();
};

class Computer
{
private:
    CPU cpu;
public:
    Computer(double clkSpeed, int core, int cache);
    void display();
};



#endif /* COMPUTER_H_ */
