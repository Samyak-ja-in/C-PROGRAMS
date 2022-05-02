#include<stdio.h>
#include<conio.h>
void main()
{
char c;
clrscr();
printf("enter a character");
scanf("%c",&c);
if(c>65&&c<92||c>97&&c<123)
printf("is alphabet");
else
printf("not alphabet");
getch();
}