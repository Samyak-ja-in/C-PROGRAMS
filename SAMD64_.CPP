#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a;
printf("enter number a");
scanf("%d",&a);
if((a%6==0) && (a%4==0))
printf("a is divisible by 6 and 4");
else
printf("a is indivisible by 6 and 4");
getch();
}