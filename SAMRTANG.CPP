#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int a,b,c;
printf("enter sides of triangle");
scanf("%d%d%d",&a,&b,&c);
if(c==sqrt(a*a+b*b)||b==sqrt(a*a+c*c)||a==sqrt(b*b+c*c))
printf("right angled");
else
printf("not right angled");
getch();
}