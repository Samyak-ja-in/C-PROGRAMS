#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i,n,sum=0,x;
printf("enter upto which number");
scanf("%d",&x);
while(i=1)
{
printf("enter number");
scanf("%d",&n);
if(n==x)
break;
else
sum=sum+n;
}
printf("%d",sum);
getch();
}