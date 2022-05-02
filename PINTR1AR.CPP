#include<conio.h>
#include<iostream.h>
void main()
{
int a[50],*p,i,n;
cout<<"enter number of elements in array";
cin>>n;
cout<<"enter elements of array";
for(i=0;i<n;i++)
cin>>a[i];
p=a;
int sum=0;
for(i=0;i<n;i++)
{
if(*p%2==0)
sum=sum+*p;
p++;
}
cout<<sum;
getch();
}