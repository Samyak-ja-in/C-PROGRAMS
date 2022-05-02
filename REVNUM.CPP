#include<conio.h>
#include<iostream.h>
void main()
{
clrscr();
int n,p=0;
cout<<"\n enter number to be reversed\n";
cin>>n;
do
{
p=p*10;
p=p+(n%10);
n=n/10;
}
while(n!=0);
cout<<"reversed number is="<<p;
getch();
}

