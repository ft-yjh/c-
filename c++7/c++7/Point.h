#pragma once
#include<iostream>
using namespace std;

class Point
{
public:
	//����x
	void set_x(int x);
	
	//��ȡx
	int get_x();
	
	//����y
	void set_y(int y);
	
	//��ȡy
	int get_y();
	

private:
	int m_x;
	int m_y;
};
