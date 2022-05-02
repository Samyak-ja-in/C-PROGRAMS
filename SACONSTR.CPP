#include<stdio.h>
#include<conio.h>
void main()
{
int i,j;
char a[100];
char b[100];
printf("enter elements of string a");
scanf("%s",a);
printf("enter elements of string b");
scanf("%s",b);
for(i=0;a[i]!='\0';i++)
a[i]=' ';
i++;
for(j=0;b[j]!='\0';j++,i++)
a[i]=b[j];
a[i]='\0';
printf("concatenated string is");
printf("%s",a);
getch();
}

