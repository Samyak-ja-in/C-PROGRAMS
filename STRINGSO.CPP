#include<stdio.h>
#include<conio.h>
#include<iostream.h>
void main()
{
 clrscr();
 char a[100];
 int i=0,j,k,n,count=0;
 cout<<"enter the string to be arranged";
 cin>>a;
 //to find length of string
 while(!(a[i])=='\0')
 {count++;i++;}
 cout<<"length of string is"<<count;
 k=count;
//sorting elements of string
for(i=0;i<k;i++)
{
 for(j=i+1;j<k;j++)
   {
     if(a[i]>a[j])
     {
      char temp;
      temp=a[j];
      a[j]=a[i];
      a[i]=temp;
     }
   }
}
cout<<"sorted strong is"<<a;
getch();
}