//#include<iostream>
//using namespace std;
//#define N 10
//int main()
//{
//	//ð������
//	//1.��������
//	int arr[N] = { 5,2,9,1,3,6,8,10,4,7 };
//	int temp = 0;//ý��
//	
//	//2.δ����ǰ������
//	cout << "δ����ǰ������Ϊ: " << endl;
//	for (int i = 0; i < N; i++)
//	{
//		
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//	
//	//3.����������
//	for (int i = 0; i < N - 1; i++)
//	{
//		for (int j = 0; j < N - 1 - i; j++)
//		{
//			if (arr[j] > arr[j+1])
//			{
//				temp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1] = temp;
//			}
//
//		}
//	}
//	//4.����������Ϊ
//	cout << "����������Ϊ: " << endl;
//	for (int i = 0; i < N; i++)
//	{
//		
//		cout << arr[i] << " ";
//	}
//	
//	system("pause");
//}