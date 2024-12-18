#include<iostream.h>
#include<conio.h>
#include<dos.h>
 class companybase
{
 public:
  void display()
 {
  cout<<"THIS IS COMPANY BASE";
 }
};

 class salarybase:public companybase
{
 friend class user;
 public:
 int salary[500];
  void salaryinp(int s1)
 {
  cout<<"Enter employee salary=";
  cin>>salary[s1];
 }
  void salaryout(int s2)
 {
  cout<<"SALARY="<<salary[s2];
 }
};

 class employeebase:public companybase
{
 friend class user;
 public:
  char name[500][50];
  void nameinp(int n1)
 {
  cout<<"Enter employee name=";
  cin>>name[n1];
 }
  void nameout(int n2)
 {
  cout<<"EMPLOYEE NAME="<<name[n2];
 }
};

 class user
{
 int i,checkid[500],id1,id2,ne;
 char exitc;
 public:
  void initialize()
 {
  for(i=0;i<500;i++)
  {
  checkid[i]=0;
  }
 }

  void empdetailsinp(salarybase &sob2,employeebase &eob2)
 {
  cout<<"No. of employee data entries=";
  cin>>ne;
  cout<<endl;

  for(i=1;i<=ne;i++)
  {
   cout<<"Input employee ID No.=";
   cin>>id1;

   eob2.nameinp(id1);
   sob2.salaryinp(id1);
   cout<<endl;
   checkid[id1]=1;
  }
 }

  void empdetailsout(salarybase &sob2,employeebase &eob2)
 {
  z1:cout<<"Enter employee ID No. to see detail=";
  cin>>id2;
  if(checkid[id2]==1)
  {
   cout<<"EMPLOYEE ID.="<<id2;
   cout<<endl;
   eob2.nameout(id2);
   cout<<endl;
   sob2.salaryout(id2);
  }
  else
  {
   cout<<"NO DETAILS";
  }
  cout<<endl<<endl<<"TRY AGAIN ?(Y/N)";
  z2:exitc=getch();
  if((exitc=='Y')||(exitc=='y'))
  {
  clrscr();
  goto z1;
  }
  else if((exitc=='N')||(exitc=='n'))
  {
  }
  else
  {
  goto z2;
  }
 }
};

 void main()
{
 clrscr();
 companybase cob;
 salarybase sob;
 employeebase eob;
 user uo;

 uo.initialize();

 uo.empdetailsinp(sob,eob);
 delay(1000);
 clrscr();
 uo.empdetailsout(sob,eob);
}