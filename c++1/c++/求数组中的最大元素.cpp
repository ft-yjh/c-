#include<iostream>
using namespace std;
int main()
{
	//��ֻС�������,������ص�С��
	//1.��������
	int arr[] = { 300, 350, 200, 400 ,250 };

	//2.�Ƚ�
	int max = 0;
	for (int i = 0; i < 5; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}

	//3.������ص�С��
	cout << "���ص�С��Ϊ: " << max << endl;


	system("pause");
}