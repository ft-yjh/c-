/*#include <iostream>
using namespace std;

class Student
{
friend ostream &operator<<(ostream & out, Student & stu);

private:
int a;
int b;
};

ostream &operator<<(ostream & out, Student & stu)
{
out<<stu.a<<"--"<<stu.b<<endl;
}

class Graduate:public Student
{
friend ostream &operator<<(ostream & out, Graduate & gra);
private:
int c;
int d;
};

ostream &operator<<(ostream & out, Graduate & gra)
{
out<<(Student&)gra<<endl;
out<<gra.c<<"**"<<gra.d<<endl;
}

int main()
{
// Student a;
// cout<<a<<endl;
Graduate g;
cout<<g<<endl;
return 0;
}


#include <iostream>
using namespace std;
class Base
{
public:
void func(int)
{
cout<<"haha"<<endl;
}
};
class Drive:public Base
{
public:
void func()
{
 //func(); //func 死循环
 //Base::func(3); //被 shadow 的成员，可以这样访问
cout<<"hehe"<<endl;
}
};
//
int main()
{
Drive d;
//d.func(); // 访问派生类成员
 d.Base::func(3); //访问基类成员
return 0;
}


#include<iostream>
using namespace std;

class Bed
{
public:
Bed();
~Bed();
void sleep();
};

Bed::Bed()
{
}
Bed::~Bed()
{
}
void Bed::sleep()
{
cout<<"take a good sleep"<<endl;
}

class Sofa
{
public:
Sofa();
~Sofa();
void sit();
};

Sofa::Sofa()
{
}
Sofa::~Sofa()
{
}
void Sofa::sit()
{

cout<<"take a rest"<<endl;
}


class SofaBed:public Sofa,public Bed
{
public:
SofaBed();
~SofaBed();
};

SofaBed::SofaBed()
{
}
SofaBed::~SofaBed()
{
}

int main()
{
Sofa s;
s.sit();
Bed b;
b.sleep();
SofaBed sb;
sb.sit();
sb.sleep();
return 0;
}

#include <iostream>
using namespace std;
class X
{
public:
	
X(int d)
:_data(d){}

void setData(int i)
{
_data = i;
}
int _data;
};

class Y
{
public:
Y(int d)
:_data(d){}
int getData()
{
return _data;
}
int _data;
};

class Z:public X,public Y
{
public:
Z():X(2),Y(3)
{}
void dis()
{
cout<<X::_data<<endl;
cout<<Y::_data<<endl;
}
};
int main()
{
Z z;
z.dis();
z.setData(2000);
cout<<z.getData()<<endl;
return 0;
}

#include <iostream>
using namespace std;

class M
{
public:
M(int i)
:_data(i){}
int _data;
};

class X:public M
{
public:
X(int d)
:M(d){}

void setData(int i)
{
_data = i;

}
};

class Y:public M
{
public:
Y(int d)
:M(d){}
int getData()
{
return _data;
}
};

class Z:public X,public Y
{
public:
Z():X(2),Y(3)
{}

void dis()
{
cout<<X::_data<<endl;
cout<<Y::_data<<endl;
}
};

int main()
{
Z z;
z.dis();
z.setData(2000);
cout<<z.getData()<<endl;
z.dis();
return 0;
}


#include <iostream>
using namespace std;
class M
{
public:
M(int d)
:_data(d)
{}
int _data;
};
class X :virtual public M
{

public:
X(int d)
:M(d){}
void setD(float d)
{
_data = d;
}
};
class Y:virtual public M
{
public:
Y(int d)
:M(d){}
int getD()
{
return _data;
}
};
class Z:public X,public Y
{
public:
Z(int _x,int _y):X(_x),Y(_y),M(100)
{}
void dis()
{
// cout<<X::_data<<endl;
// cout<<Y::_data<<endl;
cout<<_data<<endl;
}
};

int main()
{
Z z(100,200);
z.dis();
z.setD(2000);
cout<<z.getD()<<endl;
return 0;
}
*/


