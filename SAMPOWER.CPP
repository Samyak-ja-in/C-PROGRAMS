#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i,a,b,p=1;
printf("whose power to be found");
scanf("%d",&a);
printf("power is");
scanf("%d",&b);
for(i=0;i<b;i++)
{
p=p*a;
}
printf("%dpow%d is%d",a,b,p);
getch();
}