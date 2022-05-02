#include<stdio.h>
#include<conio.h>
void main()
{
int n;
printf("enter number");
scanf("%d",&n);
if(n%2==0)
goto even;
else
goto odd;
even:
printf("%d is even",n);
goto end;
odd:
printf("%d is odd",n);
goto end;
end:
getch();
}