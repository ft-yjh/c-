
//��������ԭ�� 
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
			return "��ǰ����ɽ,ɽ��������,�����и�����......"; 
		}
 };
 
 class Newspaper:public IReader
 {
 	protected:
 		virtual string Getcontents()
 		{
 			return "����Ҫ���ִ����ŷ��"; 
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
 
 
 
 
 
 
 
 
 
