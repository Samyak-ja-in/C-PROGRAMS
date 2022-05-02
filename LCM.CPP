//LCM OF TWO NUMBERS.
#include<conio.h>
#include<iostream.h>
void main()
{
clrscr();
int n,p;
cout<<"enter two numbers";
cin>>n>>p;
int max=((n>p?n:p));
while(1)
{
if(max % n==0 && max %p==0)
{cout<<"lcm is"<<max;
break;}
else
max++;
}
getch();
}


