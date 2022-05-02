#include<stdio.h>
#include<conio.h>
int fact(int);
int a,b=1;
void main()
{
clrscr();
fact(a);
printf("desired factorial is %d",b);
getche();
}
int fact(int a)
{
int i;
printf("enter number whose factorial to be found");
scanf("%d",&a);
for(i=1;i<=a;i++)
{
b=b*i;
}
return(b);
}
