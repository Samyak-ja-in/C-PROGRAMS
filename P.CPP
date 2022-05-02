#include<stdio.h>
#include<conio.h>
#include<iostream.h>
void main()
{
clrscr();
int a[5],*p,i;
cout<<"enter values of array";
for(i=0;i<5;i++)
{
cin>>a[i];
}
p=&a[0];
cout<<"\n&a="<<p;
cout<<"\n&a[0]="<<&a[0];
p=p+1;
cout<<"\nvalue at address p+1="<<*p;
p++;
cout<<"\nvalue at address p+2="<<*p;
getch();
}