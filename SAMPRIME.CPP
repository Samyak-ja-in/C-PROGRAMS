#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,r=0,j;
clrscr();
printf("enter number");
scanf("%d",&n);
printf("prime numbers in between 1 and%d are",n);
for(j=2;j<=n;j++)
{
r=0;
for(i=2;i<=j-1;i++)
{
if(j%i==0)
r=1;
}
if(r==0)
printf("\n%d",j);
}
getch();
}