#include<iostream.h>
#include<conio.h>
#include<math.h>
 class calculation        //(1+n^1)/1! + (2+n^2)/2! + ...(n+n^n)/n!
{
 double n,s,i,j;
 public:
  void input()
  {
   cout<<"Enter the nth term=";
   cin>>n;
  }
  void series()
  {
   s=0;
   for(i=1;i<=n;i++)
   {
   s=s+(i+pow(n,i))/factorial(i);
   }
   cout<<endl<<"ANS="<<s;
  }
  int factorial(int m)
  {
   for(j=1;m>=1;m--)
   {
    j=j*m;
   }
   return j;
  }
};
 void main()
{
 clrscr();
 calculation ob;
 ob.input();
 ob.series();
 getch();
}