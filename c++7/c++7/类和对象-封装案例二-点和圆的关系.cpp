//设计一个圆类(Circle)和点类(Point),判断点和圆的关系
#include<iostream>
using namespace std;
#include"Circle.h"


//设计一个点类
//class Point 
//{
//public:
//	//设置x
//	void set_x(int x)
//	{
//		m_x = x;
//	}
//	//获取x
//	int get_x()
//	{
//		return m_x;
//	}
//	//设置y
//	void set_y(int y)
//	{
//		m_y = y;
//	}
//	//获取y
//	int get_y()
//	{
//		return m_y;
//	}
//
//private:
//	int m_x;
//	int m_y;
//};

//设计一个圆类
//class Circle
//{
//public:
//	//设置半径
//	void set_r(int r)
//	{
//		m_r = r;
//	}
//	//获取半径
//	int get_r()
//	{
//		return m_r;
//	}
//	//设置圆心
//	void setCenter(Point center)
//	{
//		m_center = center;
//	}
//	//获取圆心
//	Point getCenter()
//	{
//		return m_center;
//	}
//
//private:
//	//半径
//	int m_r;
//	//圆心
//	Point m_center;
//};

//设置点和圆心的判断函数
void Is_InCircle(Circle & ci, Point & po)
{
	
	//点到圆心距离的平方
	int distance = 
	(po.get_x() - ci.getCenter().get_x()) *
	(po.get_x() - ci.getCenter().get_x()) +
	(po.get_y() - ci.getCenter().get_y()) *
	(po.get_y() - ci.getCenter().get_y());

	//半径的平方
	int Rdistance = ci.get_r() * ci.get_r();
	//判断

	if (distance == Rdistance)
	{
		cout << "点在圆上" << endl;
	}
	else if (distance > Rdistance)
	{
		cout << "点在圆外" << endl;

	}
	else
		cout << "点在圆内" << endl;

}

int main()
{
	//创建点类对象
	Point po;
	//创建圆类对象
	Circle ci;
	//传入任意一点
	po.set_x(10);
	po.set_y(10);
	//传入圆心
	Point center;
	center.set_x(10);
	center.set_y(0);
	ci.setCenter(center);
	//传入半径
	ci.set_r(10);

	Is_InCircle(ci, po);

	system("pause");
	return 0;
}