#include<conio.h>
#include<iostream.h>
void main()
{
float r,q;
int n,p;
cin>>n>>p;
r=n%p;
cout<<"r="<<n%p;
q=(n-r)/p;
cout<<"q="<<q;
getch();
}