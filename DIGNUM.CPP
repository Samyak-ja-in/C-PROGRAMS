#include<stdio.h>
#include<iostream.h>
#include<conio.h>
void main()
{
long int n;
int count=0;
cout<<"\n enter number";
cin>>n;
while(n!=0)
{
n=n/10;
count++;
}
cout<<"\n"<<count;
getch();
}