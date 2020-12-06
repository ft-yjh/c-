#include<iostream>
using namespace std;

class Complex
{
	public:
		friend Complex &operator++(Complex &com);
		Complex(float x,float y):_x(x),_y(y){}
		/*Complex &operator++()
		{
			this->_x++;
			this->_y++;
			return *this;
		}*/
		void dis()
		{
			cout << "(" << this->_x << "," << this->_y << ")" << endl;
		}
		
		private:
			float _x;
			float _y;
};

Complex &operator++(Complex &com)
{
	++com._x;
	++com._y;
	return com;
}

int main()
{
	/*Complex c1(2,3);
	c1.dis();
	Complex c2 = c1.operator++();
	c2.dis();
	c2 = c1.operator++().operator++();
	c2.dis();*/
	Complex c1(2,3);
	c1.dis();
	Complex c2 = ++c1;
	c2.dis();
	c2 = ++c1;
	c2.dis();
	
	return 0;
 } 
