#include<stdio.h>
#include<conio.h>
main()
{
int i,s,e,sum=0;
clrscr();
printf("enter s");
scanf("%d",&s);
printf("enter e");
scanf("%d",&e);
for(i=s;i<=e;i++)
sum=sum+i;
printf("%d",sum);
getch();
}
