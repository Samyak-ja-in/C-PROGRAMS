#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,*x,*y,temp;
printf("enter two numbers a,b");
scanf("%d%d",&a,&b);
printf("%d%d",a,b);
x=&a;
y=&b;
temp=*y;
*y=*x;
*x=temp;
printf("after swapping a=%db=%d",a,b);
getch();
}
