#include<iostream>
using namespace std;

//������
class Person
{
public:
	//thisָ�� ָ������ ָ���ָ���ǲ������޸ĵ�
	//const Person * const this
	void  showPerson() const
	{
		//this->m_a = 100; ��const��ֵҲ�����޸�
		//this = NULL; ָ�򲻿ɸ�
		this->m_b = 100;
	}
	int m_a;
	mutable int m_b;//�������,��ʹ�ڳ�������Ҳ���޸�(�ӹؼ���mutable)
	void func()
	{

	}
};

void test01()
{
	Person p;
	p.showPerson();
}

//������
void test02()
{
	const Person p2;//�ڶ���ǰ��const
	//p2.m_a = 100;
	p2.m_b = 100;//m_b������ֵ,�ڳ������¿��޸�

	//������ֻ�ܵ��ó�����
	p2.showPerson();
	//p2.func(); �����󲻿ɵ�����ͨ����
}

int main()
{


	system("pause");
	return 0;
}