#pragma once
#include<iostream>
using namespace std;
#include"Point.h"

class Circle
{
public:
	//设置半径
	void set_r(int r);
	
	//获取半径
	int get_r();
	
	//设置圆心
	void setCenter(Point center);
	
	//获取圆心
	Point getCenter();
	

private:
	//半径
	int m_r;
	//圆心
	Point m_center;
};
