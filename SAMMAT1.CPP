#include<stdio.h>
#include<conio.h>
void main()
{
int m,n,a,e;
int r=1;
int c=1;
int t=0;
int d=0;
clrscr();
printf("enter m");
scanf("%d",&m);
printf("enter n");
scanf("%d",&n);
while(r<=m)
{
while(c<=n)
{
printf("enter a");
scanf("%d",&a);
d=d+a;
c=c+1;
}
e=d*d;
t=e;
r=r+1;
}
printf("%d",t);
getch();
}