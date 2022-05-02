#include<stdio.h>
#include<conio.h>
void main()
{
int a[100];
int i,c,j,n;
printf("enter number of elements of array");
scanf("%d",&n);
printf("enter elements of array");
for(i=0;i<=n;i++)
scanf("%d",&a[i]);
for(j=0;j<n;j++)
{
for(i=j+1;i<n;i++)
{
if(a[j]>a[i]);
{
c=a[j];
a[j]=a[i];
a[i]=c;
}
}
}
printf("sorted array is");
for(i=0;i<=n;i++)
{
printf("%d",a[i]);
}
getch();
}

