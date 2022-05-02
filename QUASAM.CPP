#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int a,b,c,d,r,s;
clrscr();
printf("enter a,b,c");
scanf("%d%d%d",&a,&b,&c);
d=b*b-4*a*c;
printf("%d",d);
r=((-b+sqrt(d))/2*a);
s=((-b+sqrt(d))/2*a);
if(d>=0)
printf("%d%d",r,s);
else
printf("roots are imaginary");
getch();
}
