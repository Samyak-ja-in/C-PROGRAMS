#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class time
{
 int hour;
 int minutes;
 int seconds;
 public:
  void getdata()
  {
   cout<<"\n enter hour minutes and seconds";
   cin>>hour>>minutes>>seconds;
  }
 int operator >(time t)
 {
  if(hour>t.hour)
  return(1);
  else
  if(t.hour>hour)
  return(0);
  else
  if(hour==t.hour)
   if(minutes>t.minutes)
    return(1);
    else
    if(t.minutes>minutes)
     return(0);
    if(minutes==t.minutes)
     if(seconds>t.seconds)
      return(1);
     else
     if(t.seconds>seconds)
     return(0);
 }
void showdata()
{
cout<<"\n"<<hour<<":"<<minutes<<":"<<seconds<<" is greater";
}
};
void main()
{
 time t1,t2;
 t1.getdata();
 t2.getdata();
 if(t1>t2)
 t1.showdata();
 else
 t2.showdata();
 getch();
}







