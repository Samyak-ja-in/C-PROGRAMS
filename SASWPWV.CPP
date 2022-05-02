#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,b;
printf("enter values of a,b");
scanf("%d%d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("swapped values of a and b is %d%d",a,b);
getch();
}
