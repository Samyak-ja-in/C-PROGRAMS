#include<conio.h>
#include<iostream.h>
#include<math.h>
void digit(int);
void main()
{
 int n;
 cout<<"\n enter the number";
 cin>>n;
 digit(n);
 getch();
}
void digit(int n)
{
int a=n;
int p=0,count=0;
while(a>0)
{count++;
a=a/10;}
  while(n>0)
{
cout<<(n%10)*pow(10,p);
p++;
n=n/10;
if(p==count)
break;
cout<<"+";
}
}




















/*void digit(int a)
{
int p=a;
while(a>0)
{count++;
a=a/10;}
//cout<<"\n number of digits in a are  "<<count;
while(p>0)
{
cout<<(p%10)*(pow(10,count-place))<<"+";
place++;
p=p/10;
digit(p);
}
}   */

