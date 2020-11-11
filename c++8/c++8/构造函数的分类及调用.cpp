//#include<iostream>
//using namespace std;
//
////构造函数的分类及调用
////分类
////按照参数分类  无参构造(默认构造) 和 有参构造
//// 按照类型分类 普通构造  拷贝构造
//class Person
//{
//public:
//	//构造函数
//	Person()
//	{
//		cout << "Person的无参构造函数的调用" << endl;
//	}
//	Person(int a)
//	{
//		age = a;
//		cout << "Person的有参构造函数的调用" << endl;
//	}
//	//拷贝构造函数
//	Person(const Person & p)
//	{
//		age = p.age;//将传入的人身上的所有属性,拷贝到我身上
//		cout << "Person的拷贝函数的调用" << endl;
//	}
//	~Person()
//	{
//		cout << "Person 的析构函数的调用" << endl;
//	}
//	int age;
//};
//
////调用
//void test01()
//{
//	//括号法
//	//Person p1;            //默认构造函数的调用
//	//Person p2(10);        //有参构造函数的调用
//	//Person p3(p2);        //拷贝构造函数
//
//	//注意事项
//	//调用默认构造函数的时候,不要加();
//	//下面这行代码,编译器认定为一个函数的声明,不会认为在创建对象
//	//Person p1();
//	/*cout << "p2 的年龄" << p2.age << endl;
//	cout << "p3 的年龄" << p3.age << endl;*/
//	//显示法
//	//Person p1;
//	//Person p2 = Person(10);//有参构造
//	//Person p3 = Person(p2);
//	//Person(10);//匿名对象 特点:当前执行结束后,系统立即回收掉匿名对象
//	//注意事项2
//	//不要利用拷贝构造函数初始化匿名对象(如下),编译器会认为是对象声明  Person (p3) == Person p3
//	//Person(p3);
//	
//	//隐式转化法
//	Person p4 = 10;  //相当于 Person p4 = Person(10);
//	Person p5 = p4; //拷贝构造
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}