#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
clrscr();
int a,b;
int d;
printf("enter values of a,b");
scanf("%d%d",&a,&b);
printf("case1:add\ncase2:sub\ncase3:multiplication\ncase4:modulo\ncase5:exit");
printf("\nenter case");
scanf("%d",&d);
switch(d)
{
case 1:printf("addition is %d",a+b);break;
case 2:printf("subtraction is %d",a-b);break;
case 3:printf("multiplication is %d",a*b); break;
case 4:printf("modulo is %d",a%b);  break;
case 5:exit(1);
default:printf("case didnt match");
}
getch();
}
