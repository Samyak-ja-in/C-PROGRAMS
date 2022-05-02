#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a;
printf("enter number a");
scanf("%d",&a);
if((a%6)==0)
{
if((a%4)==0)
{
printf("%d is divisible by 6 and 4");
}
}
else
{
printf("%d  is indivisible by 6 and 4");
}
getch();
}
