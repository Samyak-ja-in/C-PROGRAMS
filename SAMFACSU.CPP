#include<stdio.h>
#include<conio.h>
int fac(int);
void main()
{
int n,i,x,sum=0;
printf("enter number");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
x=fac(i);
sum=sum+x;
}
printf("required sum is %d",sum);
getch();
}

int fac(int)
{
int r,p;
p=r*fac(r-1);
return p;
}
