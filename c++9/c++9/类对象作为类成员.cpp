//#include<iostream>
//using namespace std;
//#include<string>
//
////�������Ϊ���Ա
//
////�ֻ���
//class Phone
//{
//public:
//	Phone(string pname)
//	{
//		cout << "Phone�Ĺ��캯��" << endl;
//		m_pname = pname;
//	}
//	~Phone()
//	{
//		cout << "Phone����������" << endl;
//	}
//
//
//	string m_pname;
//};
//
//
////����
//class Person
//{
//public:
//	//Phone m_phone = pname;
//	Person(string name, string pname) : m_name(name), m_phone(pname)
//	{
//		cout << "Person�Ĺ��캯��" << endl;
//	}
//	~Person()
//	{
//		cout << "Person��������������" << endl;
//	}
//	
//	//����
//	string m_name;
//	//�ֻ�
//	Phone m_phone;
//};
//
////�������������Ϊ�����Ա,�ȹ������������,�ڹ�������;������˳���빹���෴;
//
//void test01()
//{
//	Person p("����", "ƻ��MAX");
//	cout << p.m_name << "����" << p.m_phone.m_pname << "�ֻ�" << endl;
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}