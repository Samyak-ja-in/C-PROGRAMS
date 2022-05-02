#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int n,i,f=1;
printf("enter number which factorial is to be printed");
scanf("%d",&n);
for(i=1;i<=n;i++)
f=f*i;
printf("the factorial of input is");
printf("%d",f);
getch();
}