#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,a[100],t,j;
int p;
printf("enter number of elements ");
scanf("%d",&n);
printf("enter elemenfs of string");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("entered string is");
for(i=0;i<n;i++)
printf("%d",a[i]);
printf("\nsorting of string is");
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[j]>a[i])
break;
else
{
t=a[j];
a[j]=a[i];
a[i]=t;
}
}
}
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
printf("enter which smallest to be found");
scanf("%d",&p);
printf("required %d smallestvelements is %d",p,a[p-1]);
getch();
}
