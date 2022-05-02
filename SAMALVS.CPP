#include<stdio.h>
#include<conio.h>
void main()
{
char c;
printf("enter alphabet");
scanf("%c",&c);
if(c==('a')||c==('e')||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
{
printf(" is vowel");
}
else
{
printf("is consonant");
}
getch();
}