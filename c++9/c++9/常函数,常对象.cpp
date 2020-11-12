#include<iostream>
using namespace std;

//常函数
class Person
{
public:
	//this指针 指正常量 指针的指向是不可以修改的
	//const Person * const this
	void  showPerson() const
	{
		//this->m_a = 100; 加const后值也不可修改
		//this = NULL; 指向不可改
		this->m_b = 100;
	}
	int m_a;
	mutable int m_b;//特殊变量,即使在常函数中也可修改(加关键字mutable)
	void func()
	{

	}
};

void test01()
{
	Person p;
	p.showPerson();
}

//常对象
void test02()
{
	const Person p2;//在对象前加const
	//p2.m_a = 100;
	p2.m_b = 100;//m_b是特殊值,在常对象下可修改

	//常对象只能调用常函数
	p2.showPerson();
	//p2.func(); 常对象不可调用普通函数
}

int main()
{


	system("pause");
	return 0;
}