#include<iostream>
using namespace std;

//深拷贝与浅拷贝

class Person
{
public:

	Person()
	{
		cout << "Person的默认构造函数" << endl;
	}
	Person(int age, int height)
	{
		m_age = age;
		m_height = new int(height);
		cout << "Person的有参构造函数" << endl;
	}

	//自己实现拷贝构造函数,解决浅拷贝带来的问题
	Person(const Person &p)
	{
		cout << "Person拷贝构造函数调用" << endl;
		m_age = p.m_age;
		//m_height = p.m_height; 编译器默认实现
		//深拷贝操作
		m_height = new int(*p.m_height);
	}

	~Person()
	{
		//析构代码,将堆区开辟的数据做释放操作
		if (m_height != NULL)
		{
			delete m_height;
			m_height = NULL;
		}
		cout << "Person的析构函数" << endl;
	}


	int m_age;
	int * m_height;
};

void test01()
{
	Person p1(18, 160);
	cout << "p1的年龄为: " << p1.m_age << " 身高为: " << *p1.m_height << endl;
	Person p2(p1);//编译器做了浅拷贝
	cout << "p2的年龄为: " << p2.m_age << " 身高为: " << *p2.m_height << endl;
}

int main()
{
	test01();

	system("pause");
	return 0;
}
//总结:如果属性有在堆区开辟的,一定要自己提供拷贝构造函数,防止浅拷贝带来的问题
