#include<iostream.h>
#include<conio.h>
 class calculation
{
 int i;
 unsigned long n,s;
 public:
  void input()
  {
  cout<<"Enter an integer=";
  cin>>n;
  }
  void perfect()
  {
   s=0;
   for(i=1;i<n;i++)
   {
    if(n%i==0)
    {
    s=s+i;
    }
    else
    {
    }
   }

   if(s==n)
   {
   cout<<endl<<n<<" is a perfect no.";
   }
   else
   {
   cout<<endl<<n<<" is not a perfect no.";
   }
  }
};
 void main()
{
 clrscr();
 calculation ob;
 ob.input();
 ob.perfect();
 getch();
}