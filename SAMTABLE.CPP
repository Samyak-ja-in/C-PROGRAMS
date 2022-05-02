#include<stdio.h>
#include"conio.h"
void main()
{
int i,n,j;
printf("enter number upto which table is to be found");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("\ntable of %d is",i);
for(j=1;j<11;j++)
printf("\n%d*%d=%d",i,j,i*j);
}
getch();
}