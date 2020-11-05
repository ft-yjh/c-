#include<iostream>
using namespace std;
void print_arr(int *p, int len)
{
	cout << "排序后的数组为: " << endl;
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
	//分装一个函数,利用冒泡排序,实现对整型数组的升序排序
	//1.创建一个数组
	int arr[10] = { 4, 3, 6 ,9, 1,2, 10, 8, 7, 5 };
	int len = sizeof(arr) / sizeof(arr[0]);
	//2.创建一个函数,实现升序排序
	bubble_sort(arr, len);

	//3.利用函数打印排序后的数组
	print_arr(arr, len);//调用打印函数

	system("pause");
}