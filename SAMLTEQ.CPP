#include<stdio.h>
#include<conio.h>
void main()
{
int r,i,j;
printf("enter rows");
scanf("%d",&r);
for(i=1;i<=r;i++)
{
for(j=1;j<=r;j++)
{
if(j<=i)
printf("*");
else
printf(" ");
}
printf("\n");
}
getch();
}