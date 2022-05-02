#include<stdio.h>
#include<conio.h>
main()
{
int i,t;
clrscr();
printf("table of");
scanf("%d",&t);
for(i=t;i<=t*10;i=i+t)
printf("%d\n",i);
getch();
}