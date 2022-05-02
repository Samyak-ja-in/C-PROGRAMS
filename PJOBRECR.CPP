#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class person
{
public:
char name[20];
double rollno;
void getdata()
{
cout<<"enter name and roll no";
scanf("%s",&name);
cin>>rollno;
}
};
class account:public person
{
protected:
float s;
public:
void getsalary()
{
cout<<"\nenter salary you want";
cin>>s;
}
};
class admin:public person
{
protected:
float y;
public:
void getex()
{
cout<<"\n enter you experience in years";
cin>>y;
}
};
class master:public account,public admin
{
public:
void display()
{
cout<<"\nentered data by you is";
cout<<"\nname="<<admin::name<<"\nrollno="<<admin::rollno;
cout<<"\nsalary="<<s<<"\nexperience="<<y;
}
};
void main()
{
master M;
M.admin::getdata();
M.getsalary();
M.getex();
M.display();
getch();
}