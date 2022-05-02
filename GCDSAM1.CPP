#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,t;
printf("enter a");
scanf("%d",&a);
printf("enter b");
scanf("%d",&b);
if(b>a)
{
t=a;
a=b;
b=t;
}
else
printf("a>b\n");
while(!(b==0))
{
t=a;
a=b;
b=t%a;
}
printf("t is");
printf("%d",t);
printf("gcd is");
printf("%d",a);
getch();
}