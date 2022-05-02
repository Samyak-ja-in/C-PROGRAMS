//to find gcd of two numbers using recursion
#include<conio.h>
#include<iostream.h>
int GCD(int,int);
void main()
{
clrscr();
int n,p;
cout<<"enter two numbers";
cin>>n>>p;
cout<<"GCD OF"<<n<<"and"<<p<<"is="<<GCD(n,p);
getch();
}
int GCD(int n,int p)
{
if(n==0)
return(p);
if(p==0)
return(n);
if(p==n)
return(p);
if(n>p)
return GCD(n%p,p);
if(p>n)
return GCD(n,p%n);
}