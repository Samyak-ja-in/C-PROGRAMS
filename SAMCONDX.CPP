#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
printf("enter a,b");
scanf("%d%d",&a,&b);
c=(a>b?a:b);
printf("max among %d and %d is %d",a,b,c);
getche();
}