#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i,j,n,a,t=0;
printf("enter order");
scanf("%d",&n);
for(i=1;i<=n;i=i+1)
{
for(j=1;j<=n;j=j+1)
{
printf("enter a");
scanf("%d",&a);
if(i==j)
t=t+a;
else
t=t;
}
}
printf(" Trace of entered matrix is=%d",t);
getch();
}