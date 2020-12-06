#include<iostream>
using namespace std;
#include<math.h>

/* 
//ȫ�ֺ�������Ԫ
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
 
 //��Ա��������Ԫ
 
 /*ǰ����������һ�ֲ���ȫ�ͣ�forward declaration����������ֻ���ṩ����(�����ṩ
��ʵ��)���ɡ�����Ϊ�ǣ�incomplete type������Ҳ������:
(1)���ܶ�����Ķ���
(2)�������ڶ���ָ��������͵�ָ������á�
(3)��������(���Ƕ���)��ʹ�ø�������Ϊ�β����ͻ��ߺ����ķ���ֵ���͡�*/
class Point; //ǰ������ 
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
 



