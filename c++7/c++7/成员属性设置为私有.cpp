//#include<iostream>
//using namespace std;
//#include<string>
//
////成员属性设置为私有
////1.可以自己控制读写权限
////2.对于写可以检测数据的有效性
//
////设计人类
//class Person
//{
//public:
//
//	//设置姓名
//	void setName(string name)
//	{
//		m_Name = name;
//	}
//	//获取姓名
//	string getName()
//	{
//		return m_Name;
//	}
//	//获取年龄  改为可读可写(范围 0 - 150 )
//	int getAge()
//	{
//		//m_Age = 0;
//		return m_Age;
//	}
//	//设置年龄
//	void setAge(int age)
//	{
//		if (age < 0 || age > 150)
//		{
//			m_Age = 0;
//			cout << "你这个老妖精" << endl;
//		}
//		m_Age = age;
//	}
//	//设置情人
//	void setLover(string lover)
//	{
//		m_Lover = lover;
//	}
//
//private:
//	//姓名 可读可写
//	string m_Name;
//	//年龄 可读
//	int m_Age;
//	//情人 只写
//	string m_Lover;
//};
//
//int main()
//{
//	Person p;
//	p.setName("张三");
//	cout << "姓名为:" << p.getName() << endl;
//
//	p.setAge(1000);
//	cout << "年龄为:" << p.getAge() << endl;
//
//
//	p.setLover("苍井");//设置情人
//	
//	system("pause");
//	return 0;
//}