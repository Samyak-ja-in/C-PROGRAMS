#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,b;
a=5;
b=a++;
printf("\n%d",a);
printf("\n%d",b);
b=++a;
printf("\n%d",a);
printf("\n%d",b);
getch();
}