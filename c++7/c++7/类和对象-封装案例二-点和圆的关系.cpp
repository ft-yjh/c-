//���һ��Բ��(Circle)�͵���(Point),�жϵ��Բ�Ĺ�ϵ
#include<iostream>
using namespace std;
#include"Circle.h"


//���һ������
//class Point 
//{
//public:
//	//����x
//	void set_x(int x)
//	{
//		m_x = x;
//	}
//	//��ȡx
//	int get_x()
//	{
//		return m_x;
//	}
//	//����y
//	void set_y(int y)
//	{
//		m_y = y;
//	}
//	//��ȡy
//	int get_y()
//	{
//		return m_y;
//	}
//
//private:
//	int m_x;
//	int m_y;
//};

//���һ��Բ��
//class Circle
//{
//public:
//	//���ð뾶
//	void set_r(int r)
//	{
//		m_r = r;
//	}
//	//��ȡ�뾶
//	int get_r()
//	{
//		return m_r;
//	}
//	//����Բ��
//	void setCenter(Point center)
//	{
//		m_center = center;
//	}
//	//��ȡԲ��
//	Point getCenter()
//	{
//		return m_center;
//	}
//
//private:
//	//�뾶
//	int m_r;
//	//Բ��
//	Point m_center;
//};

//���õ��Բ�ĵ��жϺ���
void Is_InCircle(Circle & ci, Point & po)
{
	
	//�㵽Բ�ľ����ƽ��
	int distance = 
	(po.get_x() - ci.getCenter().get_x()) *
	(po.get_x() - ci.getCenter().get_x()) +
	(po.get_y() - ci.getCenter().get_y()) *
	(po.get_y() - ci.getCenter().get_y());

	//�뾶��ƽ��
	int Rdistance = ci.get_r() * ci.get_r();
	//�ж�

	if (distance == Rdistance)
	{
		cout << "����Բ��" << endl;
	}
	else if (distance > Rdistance)
	{
		cout << "����Բ��" << endl;

	}
	else
		cout << "����Բ��" << endl;

}

int main()
{
	//�����������
	Point po;
	//����Բ�����
	Circle ci;
	//��������һ��
	po.set_x(10);
	po.set_y(10);
	//����Բ��
	Point center;
	center.set_x(10);
	center.set_y(0);
	ci.setCenter(center);
	//����뾶
	ci.set_r(10);

	Is_InCircle(ci, po);

	system("pause");
	return 0;
}