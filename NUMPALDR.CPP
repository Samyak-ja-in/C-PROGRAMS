#include<iostream.h>
#include<conio.h>
void main()
{
long i=0;
int n,rem=0,o;
cout<<"enter number";
cin>>n;
o=n;
while(n>0)
{
rem=n%10;
i=rem+(10*i);
n=n/10;
}
cout<<"reversed number is"<<i;
if(i==o)
cout<<"palindrome";
else
cout<<"not palindrome";
getch();
}


