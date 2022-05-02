#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,r,k=0;
printf("enter rows");
scanf("%d",&r);
for(i=0;i<r;i++)
{
for(j=0;j<r;j++,k++)
printf("%c",k+65);
printf("\n");
}
getch();
}
