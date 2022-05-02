#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
float a,b,c,d,r,s;
clrscr();
printf("enter a,b,c");
scanf("%f%f%f",&a,&b,&c);
d=b*b-4*a*c;
printf("%f",d);
r=((-b+sqrt(d))/2*a);
s=((-b-sqrt(d))/2*a);
if(d>=0)
printf("\n%f\n%f",r,s);
else
printf("roots are imaginary");
getch();
}
