#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i,m;
char c,p;
printf("enter character on which loop is to be broken");
scanf("%ch",&p);
printf("enter maximum number of character to be entered");
scanf("%d",&m);
printf("enter current character value");
scanf("%ch",&c);
for(i=0;i<=m;i++)
{
if(("%ch",c)==("%ch",p))
break;
else
p=c;
printf("enter c");
scanf("%ch",&c);
}
printf("%d",&i);
getch();
}
