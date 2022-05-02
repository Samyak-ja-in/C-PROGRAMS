#include<stdio.h>
#include<conio.h>
void main()
{
int i,s,e,sum=0;
clrscr();
printf("enter even number from which sum is required");
scanf("%d",&s);
printf("enter even number upto which sum is to be printed");
scanf("%d",&e);
for(i=s;i<=e;i=i+2)
sum=sum+i;
printf("%d",sum);
getch();
}

