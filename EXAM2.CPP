#include<stdio.h>
#include<conio.h>
int n,p;
int pow(int,int);
main()
{
int i,t;
printf("enter number and power");
scanf("%d%d",&n,&p);
t=pow(n,p);
printf("%d",t);
return 0;
getch();
}
int pow(int n,int p)
{
while(p>=1)
{
pow(n,p)=n*pow(n,p);
p--;
}
return(pow(n,p));
}
