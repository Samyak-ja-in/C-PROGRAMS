#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
double x,y;
printf("enter x and y");
scanf("%.21f%.21f",&x,&y);
printf("%.21f",pow(x,y));
getch();
}