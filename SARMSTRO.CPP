#include<stdio.h>
#include"conio.h"
#include<math.h>
void main()
{
clrscr();
int n,rem,sum=0,count=0,p,i;
printf("enter number");
scanf("%d",&p);
n=p;
while(p>=1)
{
count++;
p=p/10;
}
i=count;
p=n;
while(n>=1)
{
rem=n%10;
sum=sum+pow(rem,i);
n=n/10;
}
if(sum==p)
printf("%darmstrong number",p);
else
printf("%dnot armstrong number",p);
getch();
}
