#include<stdio.h>
#include<conio.h>
main()
{
int a;
clrscr();
printf("enter number a");
scanf("%d",&a);
if((a%6)==0)
{
printf(" a is divisible by 6");
}
else
{
printf(" a is indivisible by 6");
}
getch();
}