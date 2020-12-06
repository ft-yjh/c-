#include<iostream>
using namespace std;

class Complex
{
	public:
		//friend const Complex operator++(Complex &c1,int);
		Complex(float x, float y):_x(x),_y(y){}
		
		const Complex operator++(int)  //哑元 
		{
			Complex temp = *this;
			this->_x++;
			this->_y++;
			return temp;
		 } 
		void dis()
		{
			cout << "(" << this->_x << "," << this->_y << ")" << endl;
		}
		
		private:
			float _x;
			float _y;
 } ;

/*const Complex operator++(Complex &c1,int)
{
	Complex temp(c1._x,c1._y);
	c1._x++;
	c1._y++;
	return temp;
}*/ 

int main()
{
	
	//int a = 3;
	//cout <<a++<<endl;
	//cout <<a <<endl;
	//cout << a++++<<endl;a++返回的是const 
	//int b = a++;
	//cout << a <<endl;
	//cout << b <<endl;
	
	Complex c1(2,3);
	c1.dis();
	Complex c2 = c1++;
	c1.dis();
	c2.dis();
	//c2 = c1++++;
	
	
	
	return 0;
}


