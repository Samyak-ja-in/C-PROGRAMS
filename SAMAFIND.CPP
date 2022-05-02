#include<stdio.h>
#include<conio.h>
void main()
{
int a[5];
int r=0,i,n;
printf("enter values of array");
for(i=0;i<5;i++)
scanf("%d",&a[i]);
printf("enter value to be found");
scanf("%d",&n);
for(i=0;i<5;i++)
{
if(a[i]==n)
r=1;
}
if(r==1)
printf("found");
else
printf("not found");
getch();
}