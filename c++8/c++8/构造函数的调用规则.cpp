//#include<iostream>
//using namespace std;
//
////���캯���ĵ��ù��� 
////1.����һ����,c++���������ÿ���������������
////Ĭ�Ϲ���  (��ʵ��)
////��������  (��ʵ��)
////��������  (ֵ����)
//
////2.�������д���вι��캯��,�����������ṩĬ�Ϲ���,��Ȼ�ṩ��������
////�������д�˿������캯��,�����������ṩ������ͨ���캯����
//
//class Person
//{
//public:
//
//	/*Person()
//	{
//		cout << "Person��Ĭ�Ϲ��캯������" << endl;
//	}*/
//	Person(int age)
//	{
//		m_age = age;
//		cout << "Person���вι��캯������" << endl;
//
//	}
//	/*Person(const Person & p)
//	{
//		m_age = p.m_age;
//		cout << "Person�Ŀ������캯������" << endl;
//
//	}*/
//	~Person()
//	{
//		cout << "Person��������������" << endl;
//
//	}
//	int m_age;
//};
//
////void test01()
////{
////	Person p1;
////	p1.m_age = 18;
////	//��������  (ֵ����)
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