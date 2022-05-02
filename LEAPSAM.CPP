#include<stdio.h>
#include<conio.h>
void main()
{
int y1,y2,y;
clrscr();
printf("enter year and other year");
scanf("%d %d",&y1,&y2);
for(y=y1;y<=y2;y++)
{
if((y%4==0)&&(!(y%100==0))||(y%400==0))
printf("\n %d is a leap year",y);
/*else
printf("%d is not a leap year",y);*/
}
getch();
}