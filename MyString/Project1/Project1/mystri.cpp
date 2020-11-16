#define _CRT_SECURE_NO_WARNINGS 1
#include"mystring.h"

MyString::MyString(const char *str )//默认参数做标志位 
{
	if (str)
	{
		int len = strlen(str);
		this->_str = new char[len + 1];
		strcpy(this->_str, str);
	}
	else
	{
		this->_str = new char[2];
		strcpy(this->_str, "1\0");
	}
}

MyString::MyString(const MyString & other)
{
	int len = strlen(other._str);
	this->_str = new char[len + 1];
	//this->_str = other._str;
	strcpy(this->_str , other._str);
}
MyString & MyString:: operator=(const MyString & another)
{
	if (this == &another)
	{
		return *this;
	}
	else
	{
		delete[]this->_str;
		int len = strlen(another._str);
		this->_str = new char[len + 1];
		strcpy(this->_str, another._str);
		return *this;

	}
}
//MyString MyString:: operator+(const MyString & other)
//{
//
//}
//bool MyString:: operator==(const MyString &other)
//{
//
//}
//bool MyString:: operator>(const MyString &other)
//{
//
//}
//bool MyString:: operator<(const MyString &other)
//{
//
//}
//char& MyString:: operator[](int idx)
//{
//
//}

MyString::~MyString()
{
	delete[]this->_str;
}

void MyString::dis()
{
	cout << this->_str << endl;
}