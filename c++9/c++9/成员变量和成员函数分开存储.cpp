//#include<iostream>
//using namespace std;
//
////成员变量和成员函数分开存储
//
//class Person
//{
//
//	int m_a;//非静态成员变量 属于类对象   4
//
//	static int m_b;//静态成员变量 不属于类对象
//
//	void func() {};//非静态成员函数 不属于类对象
//
//	static void func2() {};//静态成员函数 不属于类对象上
//};
//
//void test01()
//{
//	Person p;//空对象占用的内存空间为: 
//	//c++编译器会给每个空对象分配一个字节空间,是为了区分空对象占用内存位置
//	//每个空对象也应该有一个独一无二的内存地址
//	cout << "size of " << sizeof(p) << endl;
//}
//
//void test02()
//{
//	Person p;
//	cout << "size of " << sizeof(p) << endl;
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