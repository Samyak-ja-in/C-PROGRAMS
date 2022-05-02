#include<stdio.h>
#include<conio.h>
void main()
{
int n,reversed=0,remiander;
printf("enter number upto 4 digit only");
scanf("%d",&n);
while(!(n==0))
{
remiander=(n%10);
reversed=(reversed*10+remiander);
n=(n/10);
}
printf("reversed number is%d",reversed);
getch();
}