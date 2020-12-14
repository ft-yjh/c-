#include <iostream>
using namespace std;

class A
{
public:
virtual void func()
{
cout<<"aaaaaaaaaaa"<<endl;
}
int a;
};

class B:virtual public A
{
public:
// void func()
// {
// cout<<"bbbbbbbbbbb"<<endl;
// }
};

class C:virtual public A
{
public:
// void func()
// {
// cout<<"cccccccccc"<<endl;
// }
};

class D:public B,public C
{
public:
// void func()
// {
// cout<<"ddddddddddd"<<endl;
// }
void func()
{
cout<<"cccccccccccccc"<<endl;
}
};

int main()
{
D d;
B *pb = &d;
pb->func();
C *pc = &d;
pc->func();
A * pa = &d;
pa->func();
return 0;
}
