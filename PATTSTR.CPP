//TOOK USE OF GETLINE FUNCTION AVAILABLE IN IOSTREAM CALLED BY IOSTREAM'S
//OBJECT CIN IT DOESNT IGNORE SPACE IN BETWEEN CHARACTERS
#include<conio.h>
#include<iostream.h>
#include<string.h>
#include<stdio.h>
void main()
{
clrscr();
int count=0,i=0,n=100,p;
char name[100];
cout<<"\n enter name";
cin.getline(name,n);
//scanf("%s",&name);
//STRING LENGTH
cout<<"\n length of string by inbuilt is"<<strlen(name);
while(name[i]!='\0')
{
count++;
i++;
}
cout<<"\nlength of entered string is"<<count;
cout<<"\n enter 1 for conventional method enter 2 for write function";
cin>>p;
//printing data of string in pattern format;
switch(p)
{
case 1:
{
for(i=0;i<count+1;i++)
{
for(int j=0;j<i;j++)
{
 cout<<name[j];
}
cout<<"\n";
}
//printing in opposite direction.
for(i=count-1;i>0;i--)
{
 for(int j=0;j<i;j++)
  {
    cout<<name[j];
  }
  cout<<"\n";
}
break;
}
//THE ABOVE CAN BE DONE WITH VERY SAMLL PIECE OF CODE USING WRITE FUNCTION
//AVAILABLE IN IOSTREAM LIBRARY AND COUT WILL BE THE OBJECT WHICH CALLS
case 2:
{
for(int i=0;i<count;i++)
{cout.write(name,i);
cout<<"\n";}
for(int j=count;j>=0;j--)
{cout.write(name,j);
cout<<"\n";}
break;
}
default:
cout<<"\n enter 1 and 2 only";
}
getch();
}



