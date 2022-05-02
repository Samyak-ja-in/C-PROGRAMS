#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i,a[13*2];
for(i=0;i<=25;i++)
{
a[i]='A'+i;
printf("\n%d%c",a[i],a[i]);
}
getch();
}
