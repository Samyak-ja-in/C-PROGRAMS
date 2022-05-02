#include<conio.h>
#include<iostream.h>
#include<string.h>
#include<stdio.h>
void main()
{
int i,j,count;
char str[25][25],temp[25];
puts("number of names you want to enter");
scanf("%d",&count);
puts("enter string one by one");
for(i=0;i<=count;i++)
gets(str[i]);
for(i=0;i<=count;i++)
{
for(j=i+1;j<=count;j++)
{
if(strcmp(str[i],str[j])>0)
{
strcpy(temp,str[i]);
strcpy(str[i],str[j]);
strcpy(str[j],temp);
}
}
}
printf("\n sorted string is");
for(i=0;i<=count;i++)
puts(str[i]);
getch();
}
