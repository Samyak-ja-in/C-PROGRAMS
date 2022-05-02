#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
clrscr();
int i,n=0;
char a[100];
printf("enter string");
scanf("%s",&a);
for(i=0;a[i]!='\0';i++)
n=n+1;
printf("count=%d",n);
printf("\nfrom inbuilt function length of string is");
printf("%d",strlen(a));
getch();
}