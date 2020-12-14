#include <iostream>
using namespace std;

class HardDisk
{
public:
virtual void run() = 0;
};

class Memory
{
public:
virtual void run() = 0;
};

class Cpu
{
public:
virtual void run() =0 ;
};

class WDHardDisk:public HardDisk
{
public:
void run()
{
cout<<"我是西数硬盘，500g 5400r/m"<<endl;
}
};

class IntelCpu:public Cpu
{
public:
void run()
{
cout<<"我是 intel Cpu,3.4gh "<<endl;
}
};

class kingStonMem:public Memory
{
public:
void run()
{
cout<<"我是金士顿内存，16g 1333"<<endl;
}
};

class Computer
{
public:
Computer( Cpu *c,Memory *m,HardDisk *d)
:disk(d),mem(m),cpu(c){}
void work()
{
cpu->run();
mem->run();
disk->run();
}
private:
HardDisk *disk;
Memory * mem;
Cpu * cpu;
};

int main()
{
IntelCpu *pc = new IntelCpu;
kingStonMem *pm = new kingStonMem;
WDHardDisk *ph = new WDHardDisk;
Computer cpt(pc,pm,ph);
cpt.work();
delete pc;
delete pm;
delete ph;
return 0;
}
