#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int n,p,rem,sum=0;
int c=0;
printf("enter number");
scanf("%d",&n);
p=n;
while(n>0)
{
rem=n%10;
sum=sum+rem;
n=n/10;
}
printf("sum of digits of number%d is %d",p,sum);
n=p;
while(n>0)
{
c=c+1;
n=n/10;
}
printf("\nnumber of digits in number %d is %d",p,c);
printf("\nreverse of entered number is");
n=p;
while(n>0)
{
rem=n%10;
n=n/10;
printf("%d",rem);
}
getch();
}