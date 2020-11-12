#include<iostream>
using namespace std;

//空指针调用成员函数

class Person
{
public:

	void showClassName()
	{
		cout << "this is Person class " << endl;
	}
	void showPersonAge()
	{
	//报错的原因是因为传入的指针是NULL
		if (this == NULL)
			return;
		cout << "年龄为: " << this->m_age << endl;
	}

	int m_age;

};

void test01()
{
	Person * p = NULL;

	p->showClassName();

	p->showPersonAge();
}

int main()
{
	test01();

	system("pause");
	return 0;
}