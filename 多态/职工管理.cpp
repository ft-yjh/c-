#include<iostream>
using namespace std;

int startNum = 1;

class Employee
{
	public:
		virtual void init() = 0;
		virtual void promote() = 0;
		virtual void getPay() = 0;
		virtual void disInfo() = 0;
		
		protected:
			string _name;
			int _num;
			int _grade;
			int _salary;
			static int startNum;
		
};

class Technian:public Employee
{
	public:
	Technian()
	{
		_moneyperhour = 100;
	}
	protected:
		
	virtual void init()
	{
		cout << "请输入技术人员的姓名: " << endl;
		cin >> _name;
		cout << "请输入技术人员的编号" <<endl;
		cin >>_num; 
		cout << "请输入本月工作的时长" <<endl;
		cin >> _houramount; 
	}
		
	virtual void promote()
	{
		_grade = 3;
	}
	virtual void getPay()
	{
		_salary = _houramount * _moneyperhour;
	}
	virtual void disInfo()
	{
		cout << "编号: " << _num << " 级别:" << _grade
		<<" 姓名: " << _name << " 工资: " << _salary<<endl; 
	}
	
	int _moneyperhour;
	int _houramount;
	
};

class Manager:virtual public Employee
{
	public:
	protected:
		
	virtual void init()
	{
		cout << "请输入经理的姓名: " << endl;
		cin >> _name;
		cout << "请输入经理的编号" <<endl;
		cin >>_num;
	}
		
	virtual void promote()
	{
		_grade = 4; 
	}
	virtual void getPay()
	{
		_salary = 8000; 
	}
	virtual void disInfo()
	{
		cout << "编号: " << _num << " 级别:" << _grade 
		<<" 姓名: " << _name << " 工资: " << _salary<<endl; 
	} 
};

class Salesman:virtual public Employee
{
	public:
	Salesman()
	{
		_rate = 0.04;
	} 
	protected:	
	virtual void init()
	{
		cout << "请输入推销员的姓名: " << endl;
		cin >> _name;
		cout << "请输入推销员的编号" <<endl;
		cin >>_num; 
		cout << "请输入本月的销售额" <<endl;
		cin >> _monthsale; 
	}
		
	virtual void promote()
	{
	    _grade = 1;
	}
	virtual void getPay()
	{
		_salary = _rate * _monthsale ;
	}
	virtual void disInfo()
	{
		cout << "编号: " << _num << " 级别: " << _grade  
		<<" 姓名: " << _name << " 工资: " << _salary<<endl; 
	}
	int _monthsale;
	float _rate;
};

class SalesManager:public Manager,public Salesman
{
	public:
		SalesManager()
		{
			_fixsalary = 5000;
			_rate = 0.05;
		}
	virtual void init()
	{
		cout << "请输入销售经理的姓名: " << endl;
		cin >> _name;
		cout << "请输入销售经理的编号" <<endl;
		cin >>_num;
		cout << "请输入本月的销售额"<<endl;
		cin >> _monthsale; 
	}
		
	virtual void promote()
	{
		_grade = 4; 
	}
	virtual void getPay()
	{
		_salary = _fixsalary + _monthsale * _rate; 
	}
	virtual void disInfo()
	{
		cout << "编号: " << _num << " 级别:" << _grade 
		<<" 姓名: " << _name << " 工资: " << _salary<<endl; 
	} 
	
	int _fixsalary;
};

int main()
{
	Employee *emp[] = {new Technian,new Manager,new Salesman,new SalesManager};
	int i = 0;
	int len = sizeof(emp)/sizeof(emp[0]);
	for (i = 0; i < len; i++)
	{
		emp[i]->init();
	    emp[i]->promote();
	    emp[i]->getPay();
	    emp[i]->disInfo();
	    cout << "+++++++++++++++++"<<endl;
	}
 } 
