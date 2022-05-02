#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,t;
clrscr();
printf("enter a&b&c");
scanf("%d%d%d",&a,&b,&c);
if(a>b)
printf("%d",a);
else
{
t=a;
a=b;
b=t;
}
if(b>c)
printf("%d",b);
else
{
t=b;
b=c;
c=t;
}
if(a>c)
printf("%d",c);
else
{
t=a;
a=c;
c=t;
}
printf("%d%d%d",a,b,c);
getch();
}