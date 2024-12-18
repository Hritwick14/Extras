#include<iostream.h>
#include<conio.h>
 class calculation
{
 int n,i,j,prime;
 unsigned long a,b,s;
 public:
  void input()
  {
   cout<<"Enter nth term value=";
   cin>>n;
  }
  void fibonacci_prime()
  {
   prime=1;
   a=0;
   b=1;
   //cout<<a<<" "<<b<<" ";
   for(i=1;n>0;i++)
   {
    s=a+b;
    a=b;
    b=s;
    for(j=1;j<=s;j++)
    {
     if(s%j==0)
     {
      if((j==1)||(j==s))
      {
      }
      else
      {
      prime=0;
      }
     }
     else
     {
     }
    }
    if(prime==0)
    {
    prime=1;
    }
    else
    {
     if(s>=3)
     {
      cout<<s;
      if(n==1)
      {
      }
      else
      {
      cout<<", ";
      }
      n--;
     }
     else
     {
     }
    }

   }
  }
};
 void main()
{
 clrscr();
 calculation ob;
 ob.input();
 ob.fibonacci_prime();
 getch();
}