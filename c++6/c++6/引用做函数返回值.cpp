//#include<iostream>
//using namespace std;
//
////引用做函数返回值
////1.不要返回局部变量的引用
//int & test01()
//{
//	int a = 10;//局部变量存放在四区中的栈区
//	return a;
//}
//
////2.函数的调用可以作为左值
//int& test02()
//{
//	static int a = 10;//静态变量,存放在全局区,在程序结束后自动释放
//	return a;
//}
//
//
//
//int main()
//{
//	//int& ret1 = test01();
//	//cout << "ret1 = " << ret1 << endl;//第一次输出正常因为编译器保留了一次
//	//cout << "ret1 = " << ret1 << endl;//内存已释放
//	//cout << "ret1 = " << ret1 << endl;
//	int &ret2 = test02();
//	cout << "ret2 = " << ret2 << endl;
//	cout << "ret2 = " << ret2 << endl;
//	test02() = 1000;//如果函数的返回值是引用,这个函数的调用可以作为左值
//	cout << "ret2 = " << ret2 << endl;
//	cout << "ret2 = " << ret2 << endl;
//
//	system("pause");
//	return 0;
//}