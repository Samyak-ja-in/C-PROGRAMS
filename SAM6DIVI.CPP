#include<stdio.h>
#include<conio.h>
main()
{
clrscr();
int a;
printf("enter number a");
scanf("%d",&a);
if((a%6)==0)
{
printf("input %d is divisible by 6");
}
else
{
printf("input %d is not divisible by 6");
}
getch();
}