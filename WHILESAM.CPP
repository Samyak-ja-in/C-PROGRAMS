#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("enter a");
scanf("%d",&a);
while (!(a==1))
{
printf("enter a again");
scanf("%d",&a);
}
getch();
}