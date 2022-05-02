#include<conio.h>
#include<iostream.h>
#include<math.h>
void main()
{
int n,i=0,rem,sum=0;
cout<<"\n enter binary number";
cin>>n;              //1111
while(n!=0)
{
rem=n%10;
sum=sum+rem*(pow(2,i));
n=n/10;
i++;
}
cout<<sum;
getch();
}


