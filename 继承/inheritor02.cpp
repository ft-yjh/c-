#include<iostream>
using namespace std;

class Student
{
public:
Student(string sn,int nchar s);
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

class Graduate:public Student
{

public:
Graduate(string sn,int in,char cs,float fs);
~Graduate();
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

class Birthday
{
public:
Birthday(int y,int m,int d);
~Birthday();
void print();
private:
int year;
int month;
int day;
};

Birthday::Birthday(int y, int m, int d)
:year(y),month(m),day(d)
{
}
Birthday::~Birthday()
{
}
void Birthday::print()
{

cout<<year<<month<<day<<endl;
}

class Doctor:public Graduate
{
public:
Doctor(string sn,int in,char cs,float fs,string st,int iy,int im,int id);
~Doctor();
void disdump();
private:
string title; //调用的默认构造器，初始化为”” Birthday birth; //类中声明的类对象
Birthday birth;
};

Doctor::Doctor(string sn, int in, char cs, float fs, string st, int iy,int im, int id)
:Graduate(sn,in,cs,fs),birth(iy,im,id),title(st)
{
}
Doctor::~Doctor()
{
}
void Doctor::disdump()
{
dump();
cout<<title<<endl;
birth.print();
}
 
int main()
{
Student s("zhaosi",2001,'m');
s.dis();
cout<<"----------------"<<endl;
Graduate g("liuneng",2001,'x',2000);
g.dump(); 
cout<<"----------------"<<endl;
Doctor d("qiuxiang",2001,'y',3000,"doctor",2001,8,16);
d.disdump(); 
return 0;
}
