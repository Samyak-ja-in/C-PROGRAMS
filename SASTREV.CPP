#include<stdio.h>
#include<conio.h>
void main()
{
char a[100];
char b[100];
int i,s;
clrscr();
printf("enter size");
scanf("%d",&s);
printf("enter string");
for(i=0;i<2*s;i++)
{
scanf("%c",&a[i]);
}
printf("entered string is");
for(i=0;i<2*s;i++)
{
printf("%c",a[i]);
}
for(i=0;i<2*s;i++)
{
b[s-1-i]=a[i];
}
printf("reversed string is ");
for(i=0;i<2*s;i++)
{
printf("%c",b[i]);
}
getch();
}
