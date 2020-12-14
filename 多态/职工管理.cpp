#include<iostream>
using namespace std;

class Employee
{
	public:
		Employee()
		{
			
		}
		virtual ~Employee() = 0;
		virtual void promote(int increment = 0) = 0;
		virtual void getpay() = 0;
		virtual void disinfo() = 0;
	
	protected:
		string _name;
		int _num;
		int _grade;
		float _salary;
};

class Manager:virtual public Employee
{
	Manager()
	{
		
	}
	virtual ~Manager() = 0;
	virtual void promote(int crement = 0)
	{
		
	}
	virtual void getpay()
	{
		
	}
	virtual void disinfo()
	{
		
	}
	
	protected:
		float _fixsalary;
};

class Technian:public Employee
{
	public: 
	Technian()
	{
		
	}
	virtual ~Technian()
	{
		
	}
	virtual void promote(int incredent = 0)
	{
	}
	virtual void getpay()
	{
	}
	virtual void disinfo()
	{
	}
	protected:
		int moneyperhour;
		int hourcount;
	
};

class Salesman
{
	Salesman(){
	}
	virtual ~Salesman(){
	}
	virtual void promote(int incredent = 0)
	{
	}
	virtual void getpay()
	{
	}
	virtual void disinfo()
	{
	}
	protected:
		float saleamount;
		float persent;
};

class SaleManager:public Salesman,public Manager
{
	SalesManager(){
	}
	virtual ~SalesManager(){
    }
    virtual void promote(int incredent = 0)
	{
	}
	virtual void getpay()
	{
	}
	virtual void disinfo()
	{
	}
	
};

int main()
{
	int i = 0;
	Employee *p[] = {new Manager,new Technian,new Salesman,SaleManager};
	int len = sizeof(p)/sizeof(p[0]);
	for (i = 0; i < len; i++)
	{
		p[i]->promote();
		p[i]->getpay();
		p[i]->disinfo();
	}
	
	
	return 0;
 } 
