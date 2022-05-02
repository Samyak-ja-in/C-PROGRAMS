#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,r,c;
printf("enter rows & columns");
scanf("%d%d",&r,&c);
for(i=1;i<=r;i++)
{
for(j=1;j<=c;j++)
{
if(j>=(r-i+1)&&j<=(i+r-1))
printf("*");
else
printf(" ");
}
printf("\n");
}
getch();
}