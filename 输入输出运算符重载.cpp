#include<iostream>
using namespace std;

class Complex
{
	public:
		friend istream &operator>>(istream &is, Complex & com);
		friend ostream &operator<<(ostream &os,const Complex & com);
		Complex(float x,float y):_x(x),_y(y){}
		
		private:
			float _x;
			float _y;
};

ostream &operator<<(ostream &os,const Complex & com)
{
	os<< "(" << com._x << "," << com._y << ")" <<endl;
	return os;
 } 
 
 istream &operator>>(istream &is, Complex & com)
 {
 	is >> com._x >> com._y;
 	return is;
 }

int main()
{
	Complex c(2,3);
	cout << c;
	cin >> c;
	cout << c;
	
	return 0;
 } 
