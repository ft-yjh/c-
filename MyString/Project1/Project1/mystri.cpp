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
	//this->_str = other._str;//不能用赋值, 会引发断点
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

MyString MyString:: operator+(const MyString & other)
{
	int len = strlen(this->_str) + strlen(other._str);
	MyString ms;
	delete []ms._str;
	ms._str = new char[len + 1];
    memset(ms._str, 0, len + 1);//缺少 会引发断点

	strcat(strcat(ms._str, this->_str), other._str);
	return ms;
}

MyString & MyString:: operator+=(const MyString & other)
{
	int srclen = strlen(this->_str);
	int deslen = strlen(other._str);
	
	int len = srclen + deslen;
	this->_str = (char *)realloc(this->_str, len + 1);
	memset(this->_str + srclen, 0 , deslen);

	strcat(this->_str, other._str);
	return *this;
}


bool MyString:: operator==(const MyString &other)
{
	return (strcmp(this->_str, other._str) == 0);
}

bool MyString:: operator>(const MyString &other)
{
	return (strcmp(this->_str, other._str) > 0);
}

bool MyString:: operator<(const MyString &other)
{
	return (strcmp(this->_str, other._str) < 0);
}

char& MyString:: operator[](int idx)
{
	return this->_str[idx];
}

MyString::~MyString()
{
	delete []this->_str;
}

void MyString::dis()
{
	cout << this->_str << endl;
}