#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i,j,n,c=0,k;
int a[100],b[100];
printf("enter size of array");
scanf("%d",&n);
printf("enter elements of array");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
c=1;
for(j=i+1;j<n;j++)
{
if(a[i]==a[j])
c=c+1;
}
b[i]=c;
}
for(i=0;i<n;i++)
{
if(b[i]!=1)
printf("\n%d is repeated %d times",a[i],b[i]);
}
getch();
}