#pragma once
#include<iostream>
using namespace std;
#include"Point.h"

class Circle
{
public:
	//���ð뾶
	void set_r(int r);
	
	//��ȡ�뾶
	int get_r();
	
	//����Բ��
	void setCenter(Point center);
	
	//��ȡԲ��
	Point getCenter();
	

private:
	//�뾶
	int m_r;
	//Բ��
	Point m_center;
};
