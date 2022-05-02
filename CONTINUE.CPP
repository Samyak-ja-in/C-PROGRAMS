#include<stdio.h>
#include<conio.h>
void main()
{
int sum=0,n,i=1;
float average;
clrscr();
while(i<6)
{
printf("enter number");
scanf("%d",&n);
if(n<0)
{
printf("enter positive number only");
continue;
}
sum=sum+n;
i++;
}
average=sum/5;
printf("average=%f sum=%d",average,sum);
n=average=sum=0;
for(i=1;i<6;i++)
{
printf("enter number");
scanf("%d",&n);
if(n<0)
{
printf("enter positive number only");
continue;
}
sum=sum+n;
}
average=sum/5;
printf("sum=%daverage=%f",sum,average);
getch();
}