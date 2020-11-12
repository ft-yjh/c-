//#include<iostream>
//using namespace std;
//
////this指针
//class Person
//{
//public:
//	Person(int age)
//	{
//		//this指针指向 被调用的成员函数 所属的对象
//		this->age = age;
//	}
//
//	Person & PersonAddAge(Person &p) //返回P2的本体
//	{
//		this->age += p.age;
//		return *this;
//	}
//
//	int age;
//};
////1.解决名称冲突
//void test01()
//{
//	Person p(18);
//	cout << "p的年龄为: " << p.age << endl;
//}
//
////2.返回对象本身*this
//void test02()
//{
//	Person p1(10);
//	Person p2(10);
//	
//	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);
//
//	cout << "p2的年龄为: " << p2.age << endl;
//}
//
//int main()
//{
//	//test01();
//	test02();
//
//	system("pause");
//	return 0;
//}