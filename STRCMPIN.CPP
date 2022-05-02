#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int c,d,p;
char a[100],b[100];
printf("enter number of elements in two strings");
scanf("%d%d",&c,&d);
printf("enter string 1");
scanf("%s",a);
printf("enter string 2");
scanf("%s",b);
p=strcmp(a,b);
printf("\n output=%d",p);
getch();
}