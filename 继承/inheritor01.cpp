	#include <iostream>
	#include <typeinfo>
	using namespace std;
	class A
	{
	public:
	A()
	{
	cout<<this<<endl;
	cout<<typeid(this).name()<<endl;
	}
	int a;
	};
	class B:public A
	{
	public:
	B()
	{
	cout<<this<<endl;
	cout<<typeid(this).name()<<endl;
	}
	int b;
	
	};
	class C:public B
	{
	public:
	C()
	{
	cout<<this<<endl;
	cout<<typeid(this).name()<<endl;
	}
	void func()
	{
	cout<<&a<<endl;
	cout<<&b<<endl;
	cout<<&c<<endl;
	}
	int c;
	};
	int main()
	{
	C c;
	cout<<"&c "<<&c<<endl;
	cout<<"*************"<<endl;
	c.func();
	return 0;
	}
