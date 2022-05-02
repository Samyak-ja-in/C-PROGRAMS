#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
float r,a,c;
printf("enter radius");
scanf("%f",&r);
printf("area=");
a=3.14*r*r;
printf("%f",a);
printf("circumference=");
c=6.28*r;
printf("%f",c);
getch();
}
