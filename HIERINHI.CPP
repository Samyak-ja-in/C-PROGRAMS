#include<conio.h>
#include<iostream.h>
class staff
{                                 //              STAFF
 int id;                  //                      id,name
 char name[20];           //    TEACHER          TYPIST            OFFICER
public:                 //Subject,Salary       //Speed      //Grade,experience
void getstaff()                     // _  _  _ _ _ |_______________
{cout<<"\n enter id of staff";  //    |                           |
cin>>id;                       //REGULAR                      INTERNSHIP
cout<<"enter name of staff";     //Salary                   //daily wages
cin>>name;
}
void showstaff()
{
cout<<"Staff id="<<id<<"\n Staff name="<<name;
}
};
class teacher:public staff
{
 char subject[20];
 int salary;
 public:
 void getteacher()
 {
 cout<<"\n enter subject and salary of the teacher";
 cin>>subject>>salary;
 }
 void showteacher()
 {
 cout<<"\nTeacher 's Subject="<<subject<<"\nTeacher 's salary="<<salary<<"\n";
 }
};
class typist:public staff
{
int speed;
public:
void gettypist()
{
cout<<"\n enter the speed of typist";
cin>>speed;
}
void showtypist()
{
 cout<<"\n speed of the typist is="<<speed;
}
};
class officer:public staff
{
char grade;
int experience;
public:
void getofficer()
{
cout<<"\n Enter grade (Alphabets) and experience (Years) of officer";
cin>>grade>>experience;
}
void showofficer()
{
cout<<"\n Grade of officer is="<<grade<<"\n Experience in years of officer is="<<experience;
}
};
class regular: public typist
{
 int salary;
 public:
 void getregular()
 {
  cout<<"\n Enter the  Salary of regular typist";
  cin>>salary;
 }
 void showregular()
 {
 cout<<"\n Salary of regular typist is="<<salary;
 }
};
class internship: public typist
{
 int dailywage;
 public:
 void getinternship()
 {
 cout<<"\n Enter the Daily wages of the typist";
 cin>>dailywage;
 }
 void showinternship()
 {
 cout<<"\n Daily wages of Typist is="<<dailywage;
 }
};
void main()
{
clrscr();
 teacher t1;
 t1.getstaff();
 t1.getteacher();
  officer o1;
 o1.getstaff();
 o1.getofficer();
 regular typ1;
 typ1.getstaff();
 typ1.gettypist();
 typ1.getregular();
 internship typ2;
 typ2.getstaff();
 typ2.gettypist();
 typ2.getinternship();
 cout<<"\n Teacher data\n";
 t1.showstaff();
 t1.showteacher();
 cout<<"\n Officer data\n";
 o1.showstaff();
 o1.showofficer();
 cout<<"\n Regular typist\n";
 typ1.showstaff();
 typ1.showtypist();
 typ1.showregular();
 cout<<"\n Internship typist\n";
 typ2.showstaff();
 typ2.showtypist();
 typ2.showinternship();
 cout<<"\n Program end";
 getch();
}


























