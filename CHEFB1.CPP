#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<math.h>
void main()
{
float i,w;
clrscr();
cout<<"enter your account balance";
cin>>i;
cout<<"Enter the withdrawl amount";
cin>>w;
if(fmod(w,5)==0)
{
 if(i>w)
  cout<<"remaining bal="<<i-w-0.5;
 if(i<w)
  cout<<"Account balance low"<<i;
}
else
cout<<"Multiples of 5 can be withdrawn rem bal="<<i;
getch();
}
