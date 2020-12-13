#include<iostream>
using namespace std;

class Shape
{
	public:
		Shape(int x = 0, int y = 0):_x(x), _y(y){}
		
		void draw()
		{
			cout << "draw shape" << endl;
			cout << "start" <<"(" << _x << "," << _y << ")" << endl;
		}
		protected:
			int _x;
		    int _y;
		
};

class Cycle:public Shape
{
	public:
		Cycle(int x = 0, int y = 0, int r = 0):Shape(x,y),_r(r){}
		void draw()
		{
			cout << "draw Cycle" << endl;
			cout << "start" <<"(" << _x << "," << _y << ")" << endl;
			cout << "r = " << _r <<endl;
		}
		
	private:
		int _r;
		
};

int main()
{
	Shape s(3,5);
	//s.draw();
	Cycle c(1,2,4);
	//c.draw();
	
	s = c;
	s.draw();
	
	Shape &rs = c;
	rs.draw();
	
	Shape *ps = &c;
	ps->draw();
	
	return 0;
 } 
