#include<conio.h>
#include<iostream.h>
class age
{
int date,month,year;
public:
void setdata()
{
cout<<"\n enter date month year";
cin>>date>>month>>year;
}
void showdata()
{
cout<<"\n you are now"<<date<<"days"<<month<<"months"<<year<<"years old";
}
age calculate(age a2)
{
 age temp;
 temp.year=a2.year-year;
 if(a2.date>=date)
 temp.date=a2.date-date;
 else
 temp.date=date;
 if(a2.month>=month)
 temp.month=a2.month-month;
 else
 {temp.month=month;

return(temp);
}
};
void main()
{
age a1,a2,a3;
a1.setdata();
a2.setdata();
a3=a1.calculate(a2);
a3.showdata();
getch();
}
