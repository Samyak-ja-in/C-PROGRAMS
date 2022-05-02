//finding factorial of number using recursion;
#include<conio.h>
#include<iostream.h>
int fact(int);
void main()
{
int n;
cout<<"enter number";
cin>>n;
cout<<"factorial of "<<n<<"="<<fact(n);
getch();
}
int fact(int n)
{
if(n==1)
return(n);
else
return(n*fact(n-1));
}