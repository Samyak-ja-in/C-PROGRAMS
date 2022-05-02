#include<stdio.h>
#include<conio.h>
main()
{
int i,n;
clrscr();
printf("enter number n");
scanf("%d",&n);
for(i=1;i<=n;i++)
printf("%d\n",i*i*i);
getch();
}