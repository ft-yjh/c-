#include<iostream>
using namespace std;
int main()
{
	//五只小猪称体重,求出最重的小猪
	//1.创建数组
	int arr[] = { 300, 350, 200, 400 ,250 };

	//2.比较
	int max = 0;
	for (int i = 0; i < 5; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}

	//3.输出最重的小猪
	cout << "最重的小猪为: " << max << endl;


	system("pause");
}