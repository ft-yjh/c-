//#include<iostream>
//using namespace std;
//
//int main()
//{
//	
//	//ʵ������Ԫ������
//	
//	//1.��������
//	int arr[5] = { 1,3,2,5,4 };
//	
//	cout << "����ǰ������Ϊ:  " << endl;
//	for ( int i = 0; i < 5; i++)
//	{
//		cout << arr[i] << endl;
//	}
//
//
//	//2.ʵ������
//	//2.1 ��¼��ʼλ�õ��±�
//	int start = 0;
//	//2.2 ��¼����λ�õ��±�
//	int end = sizeof(arr) / sizeof(arr[0]) - 1;
//	//2.3 ����
//	int temp = 0;// ý��
//
//	for (start = 0; start < end; start++)
//	{
//		temp = arr[start];
//		arr[start] = arr[end];
//		arr[end] = temp;
//		end--;
//	}
//
//	//3.��ӡ���ú������
//
//	cout << "���ú������Ϊ:  " << endl;
//	for (int i = 0; i < 5; i++)
//	{
//		cout << arr[i] << endl;
//	}
//	system("pause");
//}