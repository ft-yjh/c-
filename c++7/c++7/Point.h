#pragma once
#include<iostream>
using namespace std;

class Point
{
public:
	//设置x
	void set_x(int x);
	
	//获取x
	int get_x();
	
	//设置y
	void set_y(int y);
	
	//获取y
	int get_y();
	

private:
	int m_x;
	int m_y;
};
