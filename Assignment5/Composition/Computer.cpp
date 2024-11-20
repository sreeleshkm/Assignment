#include "Computer.h"

Computer::Computer(double clkSpeed, int core, int cache) : cpu(clkSpeed, core, cache)
{
}

void Computer::display()
{
    cpu.display();
}


CPU::CPU(double clkSpeed, int core, int cache) : 
    m_clockSpeed(clkSpeed), m_cores(core), m_cacheSize(cache)
{
}

void CPU::display()
{
    cout << "Clock Speed : " << m_clockSpeed << endl;
    cout << "Number of cores : " << m_cores << endl;
    cout << "Cache size : " << m_cacheSize << endl;
}