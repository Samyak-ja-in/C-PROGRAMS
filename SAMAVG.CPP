#include<stdio.h>
#include<conio.h>
void main()
{
int i,sum=0;
float a;
int m[5];
clrscr();
for(i=0;i<5;i++)
{
printf("enter marks");
scanf("%d",&m[i]);
}
for(i=0;i<5;i++)
{
sum=sum+m[i];
}
a=sum/5;
printf("%f",a);
getch();
}

