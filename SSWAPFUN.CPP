#include<stdio.h>
#include<conio.h>
void swap(int& x,int& y)
{
int temp;
temp=x;
x=y;
y=temp;
}
int main()
{clrscr();
int a,b;
printf("enter a and b");
scanf("%d%d",&a,&b);
swap(a,b);
printf("after swapping a,b is %d\n%d",a,b);
getch();
return (0);
}

