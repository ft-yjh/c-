//#include<iostream>
//using namespace std;
//
//int main()
//{
//	
//	//实现数组元素逆置
//	
//	//1.创建数组
//	int arr[5] = { 1,3,2,5,4 };
//	
//	cout << "逆置前的数组为:  " << endl;
//	for ( int i = 0; i < 5; i++)
//	{
//		cout << arr[i] << endl;
//	}
//
//
//	//2.实现逆置
//	//2.1 记录起始位置的下标
//	int start = 0;
//	//2.2 记录结束位置的下标
//	int end = sizeof(arr) / sizeof(arr[0]) - 1;
//	//2.3 逆置
//	int temp = 0;// 媒介
//
//	for (start = 0; start < end; start++)
//	{
//		temp = arr[start];
//		arr[start] = arr[end];
//		arr[end] = temp;
//		end--;
//	}
//
//	//3.打印逆置后的数组
//
//	cout << "逆置后的数组为:  " << endl;
//	for (int i = 0; i < 5; i++)
//	{
//		cout << arr[i] << endl;
//	}
//	system("pause");
//}