#include<iostream>
using namespace std; 

class Student
{
public:
Student(string sn,int n,char s);
Student(const Student & another);
~Student();
void dis();
private:
string name;
int num;
char sex;
};

Student::Student(string sn, int n, char s)
:name(sn),num(n),sex(s)
{
}
Student::~Student()
{
}
void Student:: dis()
{

cout<<name<<endl;
cout<<num<<endl;
cout<<sex<<endl;
}
Student::Student(const Student & another)
{
name = another.name;
num = another.num;
sex = another.sex;
}

class Graduate:public Student
{
public:
Graduate(string sn,int in,char cs,float fs);
~Graduate();
//Graduate(const Graduate & another);
void dump()
{
dis();
cout<<salary<<endl;
}
private:
float salary;
};

Graduate::Graduate(string sn, int in, char cs, float fs)
:Student(sn,in,cs),salary(fs)
{
}
Graduate::~Graduate()
{
}
/*
Graduate::Graduate(const Graduate & another)
:Student(another),salary(another.salary)
{
}
*/
int main()
{

Graduate g("liuneng",2001,'x',2000);
g.dump();
Graduate gg = g;
gg.dump();
return 0;
}
