#include<stdio.h>
#include<conio.h>
int fact(int);
void main()
{
int n,i,sum=0,rem,p;
clrscr();
printf("enter number");
scanf("%d",&n);
p=n;
while(n>=1)
{
rem=n%10;
n=n/10;
i=fact(rem);
sum=sum+i;
}
n=p;
if(sum==n)
printf("%dstrong number",n);
else
printf("%d isnt strong number",n);
getch();
}
int fact(int rem)
{
if(rem>0)
return(rem*fact(rem-1));
else
return(1);
}