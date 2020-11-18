#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include"mystring.h" 
using namespace std;

void test01()
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
}

void test02()
{
	MyString d = "China";
	MyString d1 = "dhina";
	MyString a = "bmerica";
	MyString a1 = "america";
	MyString c = "Canada";
	MyString c1 = "Canada";
	if (a > a1)
		cout << ">" << endl;
	if (d < d1)
		cout << "<" << endl;
	if (c == c1)
		cout << "==" << endl;
}

void test03()
{
	MyString t ("China");
	MyString t1(" is great");
	MyString t2;
	t += t1;
	////t2 = t + t1;
	//t2.dis();
	//cout << t2[2] << endl;
	t.dis();
	
}

int main()
{
	//test01();
	//test02();
	test03();
	return 0;
}