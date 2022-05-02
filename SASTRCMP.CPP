#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,c,d,r=1;
int a[100];
int b[100];
clrscr();
printf("enter number of elements in two strimgs");
scanf("%d%d",&c,&d);
if(c==d)
printf("comparison is possible");
else
{
printf("comparison isnt possible");
goto end;
}
printf("\nenter first string");
scanf("%s",&a);
printf("\nenter second string");
scanf("%s",&b);
for(i=0;i<c;i++)
{
if(a[i]==b[i])
continue;
else
r=0;
}
if(r==1)
printf("\nequal strings");
else
printf("\nnot equal strings");
end:
getch();
}