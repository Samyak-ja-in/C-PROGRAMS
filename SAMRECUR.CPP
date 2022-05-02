#include<stdio.h>
#include<conio.h>
int fact(int);
void main()
{
int a,b;
printf("enter number whose factorial is to be found");
scanf("%d",&a);
b=fact(a);
printf("!%dis%d",a,b);
getch();
}
int fact(int a)
{
if(a>=1)
{
return(a*fact(a-1));
}
else
{
return 1;
}
}