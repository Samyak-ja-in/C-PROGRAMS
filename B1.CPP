#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,r;
printf("enter rows");
scanf("%d",&r);
for(i=1;i<=r;i++)
{
for(j=i;j<=r;j++)
{
if(j>=i)
printf("%d",j);
else
printf(" ");
}
printf("\n");
}
getch();
}