//#include<iostream>
//using namespace std;
//#include<string>
//
////��Ա��������Ϊ˽��
////1.�����Լ����ƶ�дȨ��
////2.����д���Լ�����ݵ���Ч��
//
////�������
//class Person
//{
//public:
//
//	//��������
//	void setName(string name)
//	{
//		m_Name = name;
//	}
//	//��ȡ����
//	string getName()
//	{
//		return m_Name;
//	}
//	//��ȡ����  ��Ϊ�ɶ���д(��Χ 0 - 150 )
//	int getAge()
//	{
//		//m_Age = 0;
//		return m_Age;
//	}
//	//��������
//	void setAge(int age)
//	{
//		if (age < 0 || age > 150)
//		{
//			m_Age = 0;
//			cout << "�����������" << endl;
//		}
//		m_Age = age;
//	}
//	//��������
//	void setLover(string lover)
//	{
//		m_Lover = lover;
//	}
//
//private:
//	//���� �ɶ���д
//	string m_Name;
//	//���� �ɶ�
//	int m_Age;
//	//���� ֻд
//	string m_Lover;
//};
//
//int main()
//{
//	Person p;
//	p.setName("����");
//	cout << "����Ϊ:" << p.getName() << endl;
//
//	p.setAge(1000);
//	cout << "����Ϊ:" << p.getAge() << endl;
//
//
//	p.setLover("�Ծ�");//��������
//	
//	system("pause");
//	return 0;
//}