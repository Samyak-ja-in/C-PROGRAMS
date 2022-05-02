#include<stdio.h>
#include<conio.h>
#include<iostream.h>
void main()
{
int i,n;
cout<<"ENTER NUMBER";
cin>>n;
cout<<"prime factors are\n";
for(i=1;i<=n/2;i++)
{
if(n%i==0)
cout<<i<<"\n";
}
getch();
}
