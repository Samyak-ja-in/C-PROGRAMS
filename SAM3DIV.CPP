#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("enter njmber a");
scanf("%d",&a);
if(!((a%3)==0))
printf("%d is not divisible by 3");
else
printf("%d is divisible by 3");
getch();
}

