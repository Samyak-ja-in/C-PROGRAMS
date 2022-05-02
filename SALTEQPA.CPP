#include<stdio.h>
#include<conio.h>
main()
{
int i,j,r;
printf("enter rows");
scanf("%d",&r);
for(i=1;i<=r;i++)
{
for(j=r;j>=1;j--)
printf("*");
printf("\n");
}
for(i=r+1;i<=2r-1;i++)
{
for(j=r;j>=i-r+1;j--)
printf("*");
printf("\n");
}
getch();
}
