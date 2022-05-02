#include<stdio.h>
#include<conio.h>
void main()
{
int num,i;
printf("enter num");
scanf("%d",&num);
int a[num];
printf("enter array");
for(i=0;i<num;i++)
scanf("%d",&a[i]);
printf("entered array");
for(i=0;i<num;i++)
printf("%d",a[i]);
getch();
}