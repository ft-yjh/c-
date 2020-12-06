#include<iostream>
using namespace std;
#include<math.h>

/* 
//全局函数做友元
class Point
{
	public: 
	friend double Distance(const Point & p1, const Point & p2);
	Point(double x, double y):m_x(x), m_y(y){
	}
	
	void get();
    public:
		double m_x;
		double m_y;
 } ;
 
 void Point::get()
 {
		cout << "(" << m_x << "," << m_y << ")" <<endl;
	}
 
 double Distance(const Point &p1, const Point &p2)
 {
 	double dx = p1.m_x - p2.m_x;
 	double dy = p1.m_y - p2.m_y;
 	return (sqrt(dx*dx + dy*dy));
 }

int main()
{
	Point p1(3.0,4.0);
	Point p2(6.0,8.0);
	p1.get();
	p2.get();
	double d = Distance(p1,p2);
	cout << "dis = " << d <<endl;	
	return 0;
 } 
 */
 
 //成员函数做友元
 
 /*前向声明，是一种不完全型（forward declaration）声明，即只需提供类名(无需提供
类实现)即可。正因为是（incomplete type）功能也很有限:
(1)不能定义类的对象。
(2)可以用于定义指向这个类型的指针或引用。
(3)用于声明(不是定义)，使用该类型作为形参类型或者函数的返回值类型。*/
class Point; //前向声明 
 class ManagerPoint
 {
 	public:
    double Distance(const Point &p1, const Point &p2);
 };
 
    class Point
    {
	public: 
	friend double ManagerPoint::Distance(const Point & p1, const Point & p2);
	Point(double x, double y):m_x(x), m_y(y){
	}
	
	void get();
    private:
		double m_x;
		double m_y;
 } ;
 
 void Point::get()
 {
		cout << "(" << m_x << "," << m_y << ")" <<endl;
}
	
double ManagerPoint::Distance(const Point &p1, const Point &p2)
 {
 	double dx = p1.m_x - p2.m_x;
 	double dy = p1.m_y - p2.m_y;
 	return (sqrt(dx*dx + dy*dy));
 }
	
	int main()
	{
	Point p1(3.0,4.0);
	Point p2(6.0,8.0);
	p1.get();
	p2.get();
	ManagerPoint mp;
	double d = mp.Distance(p1,p2);
	cout << "dis = " << d <<endl;
	}
 



