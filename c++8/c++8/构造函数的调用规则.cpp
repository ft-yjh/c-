//#include<iostream>
//using namespace std;
//
////构造函数的调用规则 
////1.创建一个类,c++编译器会给每个类添加三个函数
////默认构造  (空实现)
////析构函数  (空实现)
////拷贝构造  (值拷贝)
//
////2.如果我们写了有参构造函数,编译器不在提供默认构造,依然提供拷贝构造
////如果我们写了拷贝构造函数,编译器不在提供其他普通构造函数了
//
//class Person
//{
//public:
//
//	/*Person()
//	{
//		cout << "Person的默认构造函数调用" << endl;
//	}*/
//	Person(int age)
//	{
//		m_age = age;
//		cout << "Person的有参构造函数调用" << endl;
//
//	}
//	/*Person(const Person & p)
//	{
//		m_age = p.m_age;
//		cout << "Person的拷贝构造函数调用" << endl;
//
//	}*/
//	~Person()
//	{
//		cout << "Person的析构函数调用" << endl;
//
//	}
//	int m_age;
//};
//
////void test01()
////{
////	Person p1;
////	p1.m_age = 18;
////	//拷贝构造  (值拷贝)
////	Person p2(p1);
////	cout << "p2.m_age = " << p2.m_age << endl;
////	
//
//
//void test02()
//{
//	Person p3(20);
//	Person p4(p3);
//	cout << "p4.m_age = " << p4.m_age << endl;
//}
//
//
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}