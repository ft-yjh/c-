//#include<iostream>
//using namespace std;
//
////�������캯���ĵ���ʱ��
//
//class Person
//{
//public:
//	Person()
//	{ 
//		cout << "Person��Ĭ�Ϲ��캯��" << endl;
//	}
//	Person(int age)
//	{
//		m_age = age;
//		cout << "Person�вι��캯������" << endl;
//	}
//	Person(const Person & p)
//	{
//		m_age = p.m_age;
//		cout << "Person�������캯���ĵ���" << endl;
//	}
//	~Person()
//	{
//		cout << "Person��������������" << endl;
//	}
//	int m_age;
//
//};
//
//
////1.ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
//
//void test01()
//{
//	Person p1(20);
//	Person p2(p1);
//	cout << "p2������: " << p2.m_age << endl;
//}
////2.ֵ���ݵķ�ʽ������������ֵ
//void doWork(Person p)
//{
//
//}
//void test02()
//{
//	Person p;
//	doWork(p);
//}
//
////3.ֵ��ʽ���ؾֲ�����(����ͬһ������)
//Person doWork2()
//{
//	Person p1;
//	return p1;
//}
//void test03()
//{
//	Person p = doWork2();
//}
//
//
//int main()
//{
//	//test01();
//	//test02();
//	test03();
//	system("pause");
//	return 0;
//}