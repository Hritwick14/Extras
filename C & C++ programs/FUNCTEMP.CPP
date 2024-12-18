#include<iostream.h>
#include<conio.h>
 template<class T>
 T add(T a,T b)
{
 return(a+b);
}
 void main()
{
 int i1,i2;
 float f1,f2;
 char c1,c2;
 clrscr();
 cout<<"Enter two integers=";
 cin>>i1>>i2;
 cout<<"Enter two floating nos.=";
 cin>>f1>>f2;
 cout<<"Enter two characters=";
 cin>>c1>>c2;
 cout<<endl;
 cout<<"Add of integers="<<add(i1,i2)<<endl;
 cout<<"Add of floating nos.="<<add(f1,f2)<<endl;
 cout<<"Add of characters(ASCII VALUES) ="<<add(c1,c2)<<endl;
 getch();
}