#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a[3][3];
int i,j,sum=0;
printf("enter elements of matrix");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("elements of matrix are");
printf("\n");
{
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("\t%d\t",a[i][j]);
}
printf("\n");
}
}
printf("transpose of a matrix is");
printf("%\n");
for(i=0;i<3;i++)
{
{
for(j=0;j<3;j++)
printf("%d\t",a[j][i]);
}
printf("\n");
}
printf("sum of all diagonal elements of matrix is");
for(i=0;i<3;i++)
{
sum=sum+a[i][i];
}
printf("%d",sum);
getch();
}
