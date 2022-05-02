#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("enter a and b");
scanf("%d%d",&a,&b);
if(a==b)
printf("a is equal to b");
else
if(a>b)
printf("a is greater");
else
printf("b is greater");
getch();
}