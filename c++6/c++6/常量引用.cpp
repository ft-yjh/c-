#include<iostream>
using namespace std;

//��ӡ����
void show_value(const int & val)
{
	//val = 1000;  ����const�󲻿��޸�
	cout << "val = " << val << endl;
}
int main()
{
	//��������
	//�����β�,��ֹ�����
	int a = 10;
	show_value(a);
	system("pause");
	return 0;
}