//#include<iostream>
//using namespace std;
//#define N 10
//int main()
//{
//	//冒泡排序
//	//1.创建数组
//	int arr[N] = { 5,2,9,1,3,6,8,10,4,7 };
//	int temp = 0;//媒介
//	
//	//2.未排序前的数组
//	cout << "未排序前的数组为: " << endl;
//	for (int i = 0; i < N; i++)
//	{
//		
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//	
//	//3.按升序排序
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
//	//4.排序后的数组为
//	cout << "排序后的数组为: " << endl;
//	for (int i = 0; i < N; i++)
//	{
//		
//		cout << arr[i] << " ";
//	}
//	
//	system("pause");
//}