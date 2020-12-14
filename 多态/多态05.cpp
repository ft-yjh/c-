
//依赖倒置原则 
#include<iostream>
using namespace std;

class IReader
{
	public:
		virtual string Getcontents() = 0;
 } ;
 
 class Mother
 {
 	public:
 		void tellstory(IReader * ir)
 		{
 			cout << ir->Getcontents() << endl;
		 }
 };
 
 class Book:public IReader
 {
 	protected:
		virtual string Getcontents()
		{
			return "从前有座山,山上有座庙,庙里有个和尚......"; 
		}
 };
 
 class Newspaper:public IReader
 {
 	protected:
 		virtual string Getcontents()
 		{
 			return "哈登要练手大哥与欧文"; 
		 }
 };
 
 int main()
{
	Mother m;
	Book b;
	Newspaper n;
	m.tellstory(&b);
	m.tellstory(&n);
	
	return 0;
}
 
 
 
 
 
 
 
 
 
