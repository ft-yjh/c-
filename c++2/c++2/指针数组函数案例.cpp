#include<iostream>
using namespace std;
void print_arr(int *p, int len)
{
	cout << "����������Ϊ: " << endl;
	for (int i = 0; i < len; i++)
		cout << p[i] << endl;
}

void bubble_sort(int *p, int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - 1 - i; j++)
		{
			if (p[j] > p[j + 1])
			{
				int temp = p[j];
				p[j] = p[j + 1];
				p[j + 1] = temp;
			}
		}
	}
}


int main()
{
	//��װһ������,����ð������,ʵ�ֶ������������������
	//1.����һ������
	int arr[10] = { 4, 3, 6 ,9, 1,2, 10, 8, 7, 5 };
	int len = sizeof(arr) / sizeof(arr[0]);
	//2.����һ������,ʵ����������
	bubble_sort(arr, len);

	//3.���ú�����ӡ����������
	print_arr(arr, len);//���ô�ӡ����

	system("pause");
}