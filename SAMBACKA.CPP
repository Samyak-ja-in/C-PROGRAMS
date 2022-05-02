#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i;
char a[10];
for(i=0;i<10;i++)
{
printf("enter number");
scanf("%c",&a[i]);
}
for(i=9;i>=0;i--)
{
printf("%c",a[i]);
}
getch();
}