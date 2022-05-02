#include<conio.h>
#include<iostream.h>
void main()
{
clrscr();
int rem=0;
 long n=0,i=1,bin=0;
 cout<<"\n enter the decimal number";
cin>>n;
while(n!=0)
{
rem=(n%2);
bin=bin+(rem*i);
i=i*10;
n=n/2;
}
cout<<bin;
getch();
}


