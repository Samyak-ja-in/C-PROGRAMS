#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[100];
int i=0;
printf("enter string");
do
{
scanf("%c",&a[i]);
i++;
}
while(a[i]!='\0');
printf("length of string is %d",i+1);
getch();
}
