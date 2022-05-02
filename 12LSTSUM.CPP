#include<conio.h>
#include<stdio.h>
void main()
{
clrscr();
 int n,a,b,sum=0;
 printf("Enter 5 digit number");
 scanf("%d",&n);
 a=n/10000;
 printf("\n First digit is %d",a);
 sum=sum+a;
 n=n/10;
 b=n%10;
 printf("\n second Last digit is %d",b);
 sum=sum+b;
 printf("\n Sum of first and second last digit of number is=%d",sum);
 getch();
}