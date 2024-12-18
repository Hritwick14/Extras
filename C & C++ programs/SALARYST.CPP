#include<iostream.h>
#include<conio.h>
 class salary
{
 public:
  int sal[500];
};
 class employee
{
 public:
  char name[500][50];
};
 class user:public salary,public employee
{
 int id,checkid[500],i,n;
 public:
  void initialize()
 {
  for(i=0;i<500;i++)
  {
  checkid[i]=0;
  }
 }
  void detailsinput()
 {
  cout<<"Enter how many entries:";
  cin>>n;
  cout<<endl<<endl;

  for(i=1;i<=n;i++)
  {
   cout<<"Enter the ID. of the employee:";
   cin>>id;
   checkid[id]=1;
   cout<<"Enter the name of employee:";
   cin>>name[id];
   cout<<"Enter the salary:";
   cin>>sal[id];
   clrscr();
  }
 }
  void detailsoutput()
 {
  cout<<"Enter the ID. No. to see details=";
  cin>>id;
  if(checkid[id]==0)
  {
   cout<<"NO DETAILS";
  }
  else
  {
   cout<<endl;
   cout<<"Employee name:"<<name[id]<<endl;
   cout<<"Employee salary:"<<sal[id];
  }
 }
};
 void main()
{
 clrscr();
 salary sob;
 employee eob;
 user uob;

 uob.initialize();

 uob.detailsinput();
 uob.detailsoutput();

 getch();
}