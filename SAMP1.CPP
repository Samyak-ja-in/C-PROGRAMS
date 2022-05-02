#include<stdio.h>
#include<conio.h>
void main()
{
int r,c,i,j;
printf("enter r");
scanf("%d",&r);
printf("enter c");
scanf("%d",&c);
for(j=1;j<=c;j++)
{
for(i=4;1<=i<=r;i--)
printf("*");
}
getch();
}