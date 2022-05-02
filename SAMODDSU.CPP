#include<stdio.h>
#include<conio.h>
main()
{
int n,i,s=0;
clrscr();
printf("enter odd number upto which odd sum is required");
scanf("%d",&n);
for(i=1;i<=n;i=i+2)
s=s+i;
printf("%d",s);
getch();
return(0);
}