#include<stdio.h>
#include<conio.h>
void main()
{
auto int i=1;
{
auto int i=2;
{
printf("%d",i);
}
printf("%d",i);
}
getch();
}