#include<iostream.h>
#include<conio.h>
 class base
{
 public:
  int width;

  base(int a)
  {
   width=a;
  }
  virtual void display()
  {
   cout<<"This is base class ";
  }
};
 class derived:public base
{
 public:
  derived(int a):base(a)
  {
  }
  void display()
  {
   cout<<"Hello World no.="<<width;
  }
};
 void main()
{
 clrscr();
 base *bob;
 derived dob(15);
 bob=&dob;
 bob->display();

 getch();
}