//#include<iostream>
//using namespace std;
//
////静态成员函数
////所有对象共享一个函数
////静态成员函数只能访问静态成员变量
//class Person 
//{
//public:
//
//	//静态成员函数
//	static void func()
//	{
//		m_a = 100;//静态成员函数可以访问 静态成员变量
//		//m_b = 100;//静态成员函数不可以访问非静态变量(无法区分是哪个对象的)
//		cout << "static void func的调用" << endl;
//	}
//
//	static int m_a;//静态成员变量
//	int m_b;      //非静态成员变量
//	
//	//静态成员函数有访问权限
//private:
//	static void func2()
//	{
//		cout << "static void func2的调用" << endl;
//	}
//
//};
// int Person:: m_a = 0;
//
//void test01()
//{
//	//1.通过对象访问
//	Person p1;
//	p1.func();
//
//	//2.通过类名访问
//	Person::func();
//	
//	//Person::func2(); 类外访问不到静态成员函数
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}