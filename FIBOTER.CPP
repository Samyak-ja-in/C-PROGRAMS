//finding nth digit of fibonacci series using recursion
#include<conio.h>
#include<iostream.h>
int fib(int);
void main()
{
int n;
cout<<"enter the index you wnat to find";
cin>>n;
cout<<n<<"th term is"<<fib(n);
getch();
}
int fib(int n)
{
//fib(1)==0;//fib(2)==1;
if(n==1)
return(0);
if(n==2)
return(1);
else
return(fib(n-1)+fib(n-2));
}


