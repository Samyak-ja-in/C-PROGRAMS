#include<conio.h>
#include<iostream.h>
void main()
{
clrscr();
int p,q,i,j,r;
cout<<"enter two number to find prime number in between\n";
cin>>p>>q;
cout<<"\n prime number in between p and q is\n";
for(i=p;i<=q;i++)
{
r=0;
  for(j=2;j<=(i/2);j++)
   {
     if(i%j==0)
     {r=1;
     break;}
   }
if(r==0)
cout<<i<<"\n";
}
getch();
}
