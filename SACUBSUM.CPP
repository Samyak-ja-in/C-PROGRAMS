#include<stdio.h>
#include"conio.h"
void main()
{
clrscr();
int i,n,sum=0;
printf("enter number upto which cube to be displayed");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("\ncube of %d is%d",i,i*i*i);
sum=sum+i*i*i;
}
printf("\nsum=%d",sum);
getch();
}