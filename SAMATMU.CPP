 #include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a[3][3];
int b[3][3];
int c[3][3];
int i,j,k,sum=0;
printf("enter first matrix");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("entered 1st matrix is");
printf("\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("\t%d",a[i][j]);
}
printf("\n");
}
printf("enter second matrix");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&b[i][j]);
}
}
printf("entered 2nd matrix is");
printf("\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("\t%d",b[i][j]);
}
printf("\n");
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
for(k=0;k<3;k++)
{
sum=sum+(a[i][k]*b[k][j]);
}
c[i][j]=sum;
sum=0;
}
}
printf("final multiplied matrix is given by");
printf("\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("\t%d",c[i][j]);
}
printf("\n");
}
printf("addition of matrix is given by\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
c[i][j]=a[i][j]+b[i][j];
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("\t%d",c[i][j]);
}
printf("\n");
}
printf("subtraction of matrix is given by\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
c[i][j]=a[i][j]-b[i][j];
}
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("\t%d",c[i][j]);
}
printf("\n");
}

getch();
}