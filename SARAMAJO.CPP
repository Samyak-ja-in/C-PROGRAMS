#include<stdio.h>
#include<conio.h>
void main()
{
int a[100];
int i,count=0,n,p;
printf("enter number of elements of array");
scanf("%d",&n);
printf("enter elements of array");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("enter element to be checked for majority element");
scanf("%d",&p);
for(i=0;i<n;i++)
{
if(a[i]==p)
count=count+1;
}
if(count> (0.5*n))
printf("majority");
else
printf("minority");
getch();
}