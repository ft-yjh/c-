#include<iostream>
using namespace std;
 
class Animal
{
public:
Animal();
virtual ~Animal();
virtual void voice() = 0;
};

Animal::Animal()
{
cout<<"Animal::Animal()"<<endl;
}

Animal::~Animal()
{
cout<<"Animal::~Animal()"<<endl;
}

class Dog:public Animal
{
public:
Dog();
~Dog();
virtual void voice();
};

Dog::Dog()
{
cout<<"Dog::Dog()"<<endl;
}
Dog::~Dog()
{
cout<<"Dog::~Dog()"<<endl;
}
void Dog:: voice()
{
cout<<"wang wang"<<endl;
}


class Cat:public Animal
{
public:
Cat();
~Cat();
virtual void voice();
};

Cat::Cat()
{
cout<<"Cat::Cat()"<<endl;
}
Cat::~Cat()
{
cout<<"Cat::~Cat()"<<endl;
}
void Cat::voice()
{
cout<<"miao miao "<<endl;
}

int main()

{
// Animal ani; 抽象基类，不能实例化。
Animal * pa = new Dog;
pa->voice();
delete pa;
cout<<"---------------"<<endl;
pa = new Cat;
pa->voice();
delete pa;
return 0;
}
