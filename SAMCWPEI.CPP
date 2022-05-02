#include<stdio.h>
#include<conio.h>
void main()
{
int s[100]
int i,p;
for(i=0;i<5;i++)
{
printf("enter element%d",i);
scanf("%d",&s[i]);
}
printf("enter value of p");
scanf("%d",&p);
for(i=0;i<5;i++)
if(s[i]=p)
r=1;
else
r=0;
if(r=1)
printf("element found%d",p);
else
printf("element nof found%d",p);
getch();
}