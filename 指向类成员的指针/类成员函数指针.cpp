#include<iostream>
using namespace std;

class Widget
{
	public:
		Widget()
		{
		fptr[0] = &Add;
		fptr[1] = &Min;
		fptr[2] = &Mul;
		fptr[3] = &Div;
		}
		
		
		void select(int cdx, int va1,int va2)
		{
			if (cdx < 0 || cdx >= cnt)
			return ;
			(this->*fptr[cdx])(va1,va2);
		}
		
		int count()
		{
			return cnt;
		}
		
	private:
		void Add(int va1, int va2)
		{
		cout << va1 << "+" << va2 
		<< "=" << va1+va2 <<endl;
		}
		void Min(int va1, int va2)
		{
			cout << va1 << "-" << va2 
			<< "=" << va1-va2 << endl;
		}
		void Mul(int va1, int va2)
		{
			cout << va1 << "*" <<va2
			<< "=" << va1*va2 << endl;
		}
		void Div(int va1, int va2)
		{
			cout << va1 << "/" <<va2
			<< "=" << va1/va2 <<endl;
		}
		
		enum{cnt = 4
		};
		void (Widget::*fptr[cnt])(int,int);
};

int main()
{
	Widget w;
	int i = 0;
	cout << "20Óë5µÄ¼Ó¼õ³Ë³ý" <<endl; 
	for (i = 0; i < w.count(); i++)
	{
		w.select(i, 20, 5); 
	}
	return 0;
}
