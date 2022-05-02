#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i,n,r=1;
char a[100];
printf("enter number of elements in string");
scanf("%c",&n);
if(n%2==0)
{
printf(" not possible palindrome");
goto end;
}
printf("enter elements of string");
scanf("%s",&a);
for(i=0;i<n/2;i++)
{
if(a[i]==a[n-i-1])
continue;
else
r=0;
}
if(r==1)
printf("palindrome");
else
printf("not palindrome");
end:
getch();
}
