//#include<iostream>
//using namespace std;
//#include<string>
//
////类对象作为类成员
//
////手机类
//class Phone
//{
//public:
//	Phone(string pname)
//	{
//		cout << "Phone的构造函数" << endl;
//		m_pname = pname;
//	}
//	~Phone()
//	{
//		cout << "Phone的析构函数" << endl;
//	}
//
//
//	string m_pname;
//};
//
//
////人类
//class Person
//{
//public:
//	//Phone m_phone = pname;
//	Person(string name, string pname) : m_name(name), m_phone(pname)
//	{
//		cout << "Person的构造函数" << endl;
//	}
//	~Person()
//	{
//		cout << "Person的析构函数调用" << endl;
//	}
//	
//	//姓名
//	string m_name;
//	//手机
//	Phone m_phone;
//};
//
////当其他类对象作为本类成员,先构造其他类对象,在构造自身;析构的顺序与构造相反;
//
//void test01()
//{
//	Person p("张三", "苹果MAX");
//	cout << p.m_name << "拿着" << p.m_phone.m_pname << "手机" << endl;
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}