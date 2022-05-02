#include<stdio.h>
#include<conio.h>
void main()
{
int i,j=0,n,k=0;
int a[100],b[100],c[100];
printf("enter number pof elements in array");
scanf("%d",&n);
printf("enter elements of array");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
if(a[i]%2==0)
{
b[j]=a[i];
j++;
}
else
{
c[k]=a[i];
k++;
}
}
printf("odd numbers are");
for(i=0;i<k;i++)
printf("%d",c[i]);
printf("even numbers are");
for(i=0;i<j;i++)
printf("%d",b[i]);
getch();
}





