
#include<iostream>
using namespace std;

class Student 
{
	public:
	Student(string n, int nm):name(n), num(nm){}
	
	string name;
	int num;
};

class Student2
{
	public:
		Student2(string n, int nm):name(n), num(nm){ }
		void dis()
		{
			cout << "name " << name << " num " << num <<endl;
		}
		
	private:
		string name;
		int num;
		
};


void func(int a)
{
	cout << a <<endl;
}

void test01()
{
	int a = 1;
	int * p = &a;
	cout <<(*p)<<endl;
	//指向函数的指针 
	void (*fp)(int a) = func;
	fp(a); 
}

void test02()
{
	Student s1("zhangsan", 1002);
	Student s2("lisi", 1001);
	//指向类成员的指针 
	string Student::*ps = &Student::name;
	
	cout << s1.*ps <<endl;
	cout << s2.*ps <<endl;
	
	Student * p = new Student("wangwu",1003);
	cout << p->*ps<<endl;
}

void test03()
{
	Student2 s1("zhangsan", 1002);
	Student2 s2("lisi", 1003);
	Student2 * p = new Student2("wangwu", 1004);
	//指向类成员函数的指针 
	void (Student2::*ps)() = &Student2::dis; 
	(s1.*ps)();
	(s2.*ps)();
	(p->*ps)();
}

int main()
{
	//test01();
	//test02();
	test03();
	return 0;
 } 
 
 
 

