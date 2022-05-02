#include<stdio.h>
#include<conio.h>
void main()
{
struct book
{
char name[6];
int pages;
float price;
};
struct book p[2];
int i;
for(i=0;i<2;i++)
{
printf("enter book name,pages,price");
scanf("%s%d%f",&p[i].name,&p[i].pages,&p[i].price);
printf("\n");
}
printf("entered data is");
for(i=0;i<2;i++)
{
printf("\nbook data is");
printf("name=%s\n page=%d\n price=%f",p[i].name,p[i].pages,p[i].price);
printf("\n");
}
getch();
}
linkfloat()
{
float a=0,*p;
p=&a;
a=*p;
}



