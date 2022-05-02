#include<stdio.h>
#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
int b[8],count=7,decimal=0,i;
cout<<"enter 8 bit binary";
for(i=7;i>=0;i--)
cin>>b[i];
while(count>=0)
{
decimal=decimal+(b[count])*pow(2,count);
count--;
}
cout<<decimal;
getch();
}
