#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include"mystring.h" 
using namespace std;

int main()
{
	MyString s("China");
	MyString s1(NULL);
	s1.dis();
	s.dis();
	MyString s2(s);
	s2.dis();
	MyString s3 = s;
	s3.dis();

	MyString s4;
	s4 = s3 = s;
	s4.dis();
	MyString s5;
	s5.operator=(s);
	s5.dis();


	return 0;
}