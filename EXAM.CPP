#include<stdio.h>
#include<conio.h>
int f(int n)
void main()
{
printf("%d",f(5));
getch();
}
int f(int n)
{
if (n==0)
return 0;
if(n==1)
return 1;
else
return f(n-1)+f(n-2);
}