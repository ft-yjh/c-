#include<iostream>
using namespace std;

//1.new的基本语法
int * func()
{
	//在堆区创建整型数据
	//new返回时该数据类型的指针
	int *p = new int(10);
	return p;
}
void test01()
{
	int *p = func();
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	//堆区的数据 由程序员管理开辟,程序员管理释放
	//如果想释放堆区的数据,利用关键字delete
	//delete p;
	cout << *p << endl;//内存已被释放,再次访问程序会报错
}
//2.在堆区利用new开辟数组
//创建10整型数据的数组,在堆区
void test02()
{
	int * arr = new int[10];//10代表10个元素
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 100;//给10个元素赋值100~109;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}
	//释放堆取数组
	//释放数组的时候,加[]才行
	delete[] arr;

}

int main()

{
	test01();
	test02();
	system("pause");
	return 0;
}