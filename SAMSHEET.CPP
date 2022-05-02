#include<stdio.h>
#include<conio.h>
void main()
{
char n[11];
float h,e,m,s,i,a;
float p;
printf("\nenter name");
for(i=0;i<11;i++)
{
scanf("%c",&n[i]);
}
printf("\n");
printf("hindi marks");
scanf("%f",&h);
printf("english marks");
scanf("%f",&e);
printf("maths marks");
scanf("%f",&m);
printf("science marks");
scanf("%f",&s);
printf("percentage is");
printf("%f",p=((h+e+m+s)/4));
printf("\ngrade obtained by samyak is");
if(p>=90)
printf("A");
else
if(70<=p)
printf("b");
else
if(50<=p)
printf("c");
else
if(0<=p)
printf("fail");
else
printf("samyak");
getch();
}
