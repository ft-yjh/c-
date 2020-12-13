#include<iostream>
using namespace std;

class Shape
{
	public:
	Shape(int x, int y):_x(x),_y(y)	{}
		virtual void draw() = 0;
		 
		public:
			int _x;
			int _y;
};

class Circle:public Shape
{
public:
Circle(int x, int y, int r)
:Shape(x,y),_r(r){}
protected:	
virtual void draw()
{
cout<<"draw Circle ";
cout<<"start ("<<_x<<","<<_y<<") ";
cout<<"radio r = "<<_r<<endl;
}
	int _r;
};

class Rectr:public Shape
{
	public:
		Rectr(int x,int y,int len,int wide)
		:Shape(x,y),_len(len),_wide(wide){}
	
	protected: 
	virtual void draw()
	{
		 cout<<"draw Rectr ";
         cout<<"start ("<<_x<<","<<_y<<") ";
         cout<<"len = "<<_len << "wide = " << _wide <<endl;
	} 
	
	int _len;
	int _wide;
};

int main()
{
//Shape s(1,2); //函数纯虚函数的类称为抽象基类 不能实例化对象 
Circle c(1,2,3);
Rectr r(1,2,3,5);
Shape *pc = &c;
pc->draw();
pc = &r;
pc->draw();
return 0;
}
