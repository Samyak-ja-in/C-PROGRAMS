#include<stdio.h>
#include<conio.h>
int sum(int,int);
int n;
void main()
{
clrscr();
int a,b,ans;
printf("enter a,b");
scanf("%d%d",&a,&b);
ans=sum(a,b);
printf("sumation of %d and %d is%d",a,b,ans);
getch();
}
int sum(int x,int y)
{
n=x+y;
return(n);
}