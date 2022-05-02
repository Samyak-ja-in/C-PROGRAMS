#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
 double fact(double);
 int i,j;
 double n,x,sum=0;
 //Take input n,x;
 printf("Enter value of x");
 scanf("%lf",&x);
 printf("Enter number of terms to be summed");
 scanf("%lf",&n);
 for(i=0;i<n;i++)
 {
  sum=sum+pow(-1,i)*pow(x,((2*i)+1))/fact((2*i)+1);
 }
 printf("sum is%lf",sum);
 getch();
 }
 double fact(double p)
 {
 int i,f=1;
 for(i=1;i<=p;i++)
 f=f*i;
 return(f);
 }
