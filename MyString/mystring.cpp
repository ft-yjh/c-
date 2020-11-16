#include"mystring.h"
 
MyString::MyString(const char *str=NULL)
{
	if (str)
	{
		cout << *str << endl;
	}
	else
	{
		cunt << "NULL" << endl;
	}
	
}
MyString::MyString(const MyString & other)
{
	MyString ms._str = new char[strlen(other._str) + 1];
	
}
MyString & MyString:: operator=(const MyString & another)
{
	
}
MyString MyString:: operator+(const MyString & other)
{
	
}
bool MyString:: operator==(const MyString &other)
{
	
}
bool MyString:: operator>(const MyString &other)
{
	
}
bool operator<(const MyString &other)
{

} 
char& MyString:: operator[](int idx)
{
	
}
 
void MyString:: dis()
{
	
} 
