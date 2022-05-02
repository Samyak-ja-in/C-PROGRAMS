#include<stdio.h>
#include<conio.h>
void main()
{
struct employee
{
int n;
char a[100];
char b[100];
char p[100];
float s;
}q[2];
int i;
for(i=0;i<2;i++)
{
printf("enter number,name,department,address,salary");
scanf("%d%s%s%s%f",&q[i].n,&q[i].a,&q[i].b,&q[i].p,&q[i].s);
}
for(i=0;i<2;i++)
{
printf("\nentered employee details is");
printf("\nemployee number=%d\nemployee name=%s\ndepartment=\s\naddress=%s\nsalary=%f",q[i].n,q[i].a,q[i].b,q[i].p,q[i].s);
printf("\n");
}
getch();
}
linkfloat()
{
float a=0,*q;
q=&a;
a=*q;
}