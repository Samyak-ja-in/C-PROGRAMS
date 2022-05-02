#include<conio.h>
#include<iostream.h>
class A
{
private:
int a;
public:
A()
{cout<<"\nsamyak class A";}
~A()
{cout<<"\n hello from Destructor A";}
};
class B:public A
{
private:                     //baby class me pahele parent class ka
int b;                      //constructor chalta h call pahele baby
public:                      //class ka hota h
B()
{cout<<"\nhello samyak from B";}
~B()
{cout<<"\nhello from destructor B";}
};
void main()
{
clrscr();
A obj1;
B obj2;
getch();
}