#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a;
printf("enter a");
scanf("%d",&a);
printf("month is\t");
switch(a)
{
case 1: printf("jan:");break;
case 2: printf("feb"); break;
case 3: printf("march"); break;
case 4: printf("april"); break;
case 5: printf("may"); break;
case 6: printf("june"); break;
case 7: printf("july"); break;
case 8: printf("august"); break;
case 9: printf("september"); break;
case 10: printf("october"); break;
case 11: printf("november"); break;
case 12: printf("december"); break;
default: printf("entered month is wrong");
}
getch();
}