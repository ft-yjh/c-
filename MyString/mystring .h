#include <stddef.h>
#include <iostream>
using namespace std;
class MyString {
public:
MyString(const char *str=NULL);
MyString(const MyString & other);
MyString & operator=(const MyString & another);
MyString operator+(const MyString & other);
bool operator==(const MyString &other);
bool operator>(const MyString &other);
bool operator<(const MyString &other);
char& operator[](int idx);
void dis();

//Îö¹¹ 
virtual ~MyString();


private:
char * _str;
};

