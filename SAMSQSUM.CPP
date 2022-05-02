#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
float i;
int sum=0,n;
float d=0;
printf("enter n upto which squares are to be addedd");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
sum=sum+i*i;
}
for(i=1;i<=n;i++)
{
d=(d+(1/i));
}
printf("%d",sum);
printf("\n%f",d);
getch();
}