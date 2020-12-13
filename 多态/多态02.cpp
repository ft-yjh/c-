#include <iostream>
using namespace std;

class Base
{
public:
virtual void func()
{
cout<<"Base"<<endl;
}
};

class Derive:public Base
{
private:
virtual void func()
{
cout<<"Derive"<<endl;
}
};

int main()
{
Derive d;
//d.func();
Base*p = &d;
p->func();
return 0;
}
