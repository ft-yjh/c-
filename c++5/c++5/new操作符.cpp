#include<iostream>
using namespace std;

//1.new�Ļ����﷨
int * func()
{
	//�ڶ���������������
	//new����ʱ���������͵�ָ��
	int *p = new int(10);
	return p;
}
void test01()
{
	int *p = func();
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	//���������� �ɳ���Ա������,����Ա�����ͷ�
	//������ͷŶ���������,���ùؼ���delete
	//delete p;
	cout << *p << endl;//�ڴ��ѱ��ͷ�,�ٴη��ʳ���ᱨ��
}
//2.�ڶ�������new��������
//����10�������ݵ�����,�ڶ���
void test02()
{
	int * arr = new int[10];//10����10��Ԫ��
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 100;//��10��Ԫ�ظ�ֵ100~109;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}
	//�ͷŶ�ȡ����
	//�ͷ������ʱ��,��[]����
	delete[] arr;

}

int main()

{
	test01();
	test02();
	system("pause");
	return 0;
}