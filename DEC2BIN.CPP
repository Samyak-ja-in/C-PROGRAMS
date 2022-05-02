#include<stdio.h>
#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
int i,j,n,b=0,count=1;
cout<<"Enter the decimal number";
cin>>n;
while(n!=0)
{
b=n%2*pow(10,count-1)+b;
n=n/2;
count++;
}
cout<<"Binary number is"<<b;
getch();
}