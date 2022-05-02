#include<stdio.h>
#include<conio.h>
void main()
{
int s,e,i,sum=0;
printf("enter start odd number");
scanf("%d",&s);
printf("enter end number");
scanf("%d",&e);
for(i=s;i<=e;i=i+2)
{
sum=sum+i*i;
}
printf("%d",sum);
getch();
}