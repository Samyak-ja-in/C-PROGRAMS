//kya ye operator overloading h Sourabh shukla sir ne alaga bataya h
//Overloading of parenthesis operator.
#include<conio.h>
#include<iostream.h>

class matrix
{
int a[3][3];
public:
int i,j;
int &operator()(int i,int j)
{
   cin>>a[i][j];
}
int getdata()
{
 cout<<"\n enter values";
 for(i=0;i<3;i++)
  for(j=0;j<3;j++)
    operator()(i,j);
}
void showdata()
{
 cout<<"\n matrix is\n";
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
   {cout<<a[i][j];
   cout<<"\t";}
   cout<<"\n";
 }
}
};


void main()
{
 clrscr();
 matrix m1;
 m1.getdata();
 m1.showdata();
 getch();
 }

