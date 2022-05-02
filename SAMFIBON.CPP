#include<stdio.h>
#include<conio.h>
void main()
{
int a=0,b=1,i,n,u;
clrscr();
printf("number upto which series is to be printed");
scanf("%d",&u);
printf("\n0");
printf("\n1\n");
for(i=3;i<=u;i++)
{
n=a+b;
a=b;
b=n;
printf("%d\n",b);
}
getch();
}