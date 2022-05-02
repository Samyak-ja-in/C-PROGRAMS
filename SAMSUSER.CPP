#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int s,i,e,sum=0;
printf("enter start and end");
scanf("%d%d",&s,&e);
for(i=s;i<=e;i++)
{
sum=sum+pow(i,i);
}
printf("%d",sum);
getch();
}

