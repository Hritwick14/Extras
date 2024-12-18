#include<iostream.h>
#include<conio.h>
 class base
{
 friend class user;
 private:
  int a;
 public:
  void geta(int m)
 {
  a=m;
 }
};
 class user
{
 public:
  void display(base &ob2)
 {
  cout<<ob2.a<<endl;
 }
};
 void main()
{
 clrscr();
 base ob;
 user uob;
 ob.geta(15);
 uob.display(ob);
 getch();
}