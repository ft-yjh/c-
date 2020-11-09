#include<iostream>
using namespace std;

//打印函数
void show_value(const int & val)
{
	//val = 1000;  加上const后不可修改
	cout << "val = " << val << endl;
}
int main()
{
	//常量引用
	//修饰形参,防止误操作
	int a = 10;
	show_value(a);
	system("pause");
	return 0;
}