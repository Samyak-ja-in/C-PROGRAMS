#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a=5,b=6,c=0;
b=(b--)+(--b);
printf("%d%d%d",a,b,c);
getch();
}