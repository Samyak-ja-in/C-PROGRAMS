#include"stdio.h"
#include<conio.h>
void main()
{
clrscr();
int n,i,sum=0;
printf("enter any number ");
scanf("%d",&n);
for(i=1;i<=n/2;i++)
{
if(n%i==0)
sum=sum+i;
}
if(sum==n)
printf("\n%d is perfect number",n);
else
printf("\n%d is not perfect number",n);
getch();
}