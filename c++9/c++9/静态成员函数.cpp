//#include<iostream>
//using namespace std;
//
////��̬��Ա����
////���ж�����һ������
////��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����
//class Person 
//{
//public:
//
//	//��̬��Ա����
//	static void func()
//	{
//		m_a = 100;//��̬��Ա�������Է��� ��̬��Ա����
//		//m_b = 100;//��̬��Ա���������Է��ʷǾ�̬����(�޷��������ĸ������)
//		cout << "static void func�ĵ���" << endl;
//	}
//
//	static int m_a;//��̬��Ա����
//	int m_b;      //�Ǿ�̬��Ա����
//	
//	//��̬��Ա�����з���Ȩ��
//private:
//	static void func2()
//	{
//		cout << "static void func2�ĵ���" << endl;
//	}
//
//};
// int Person:: m_a = 0;
//
//void test01()
//{
//	//1.ͨ���������
//	Person p1;
//	p1.func();
//
//	//2.ͨ����������
//	Person::func();
//	
//	//Person::func2(); ������ʲ�����̬��Ա����
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}