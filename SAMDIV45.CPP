#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a;
printf("enter number a ");
scanf("%d",&a);
if(a%5==0)
{
printf("\n a is divisible by 5");
}
else
{
printf("\n a is indivisible by 5");
}
if(a%4==0)
{
printf("\n a is divisible by 4");
}
else
{
printf("\n a is indivisible by 4");
}
getch();
}

