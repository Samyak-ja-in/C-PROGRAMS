#include<conio.h>
#include<iostream.h>
#include<stdio.h>
int prime(int,int);
void main()
{
clrscr();
 int a,b;
 cout<<"enter range in which prime number is to be found";
 cin>>a>>b;
 prime(a,b);
getch();
}
int prime(int x,int y)
{
int i,j,k=0;
 for(i=x;i<=y;i++)
 {  int count=0;
    for(j=1;j<x;j++)
     {
      if(i%j==0)
      count=count++;
     }
  if(count==1)
  {k++;
  cout<<i;
  cout<<"\n";}
 }
 cout<<"there are "<<k<<"prime numbers in between"<<x<<"and"<<y;
 return(0);
}

