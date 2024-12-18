#include<iostream.h>
#include<conio.h>
 template<class T>
 class base
{
 public:
  T add(T a,T b)
  {
   return(a+b);
  }
};
 void main()
{
 int i1,i2;
 float f1,f2;
 clrscr();
 base <int>obi;
 base <float>obf;
 cout<<"Enter two integers=";
 cin>>i1>>i2;
 cout<<"Enter two floating numbers=";
 cin>>f1>>f2;
 cout<<obi.add(i1,i2)<<endl;
 cout<<obf.add(f1,f2)<<endl;
 getch();
}