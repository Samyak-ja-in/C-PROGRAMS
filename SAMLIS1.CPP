#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int p,c,l;
printf("enter p");
scanf("%d",&p);
printf("enter c");
scanf("%d",&c);
while(!(c==1))
{
if(p<c)
l=l+1;
else
l=1;
p=c;
printf("enter c");
scanf("%d",&c);
}
printf("%d",l);
getch();
}
