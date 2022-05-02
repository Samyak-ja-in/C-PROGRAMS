#include<conio.h>
#include<iostream.h>
class time
{
 int hour,min,sec;
 public:
 void gettime()
 {
  cout<<"\n enter time";
  cin>>hour>>min>>sec;
 }
 void showtime()
 {
  cout<<"\n addition of two times is=";
  cout<<hour<<":"<<min<<":"<<sec;
 }
 time operator +(time a)
 {
  time temp;
  temp.sec=sec+a.sec;
  temp.min=((temp.sec)/(60))+min+(a.min);
  temp.sec=(temp.sec)%60;
  temp.hour=((temp.min)/(60))+hour+a.hour;
  temp.min=(temp.min)%(60);
  return temp;
 }
};
void main()
{
time t1,t2,t3;
t1.gettime();
t2.gettime();
t3=t1+t2;
(t3).showtime();
getch();
}