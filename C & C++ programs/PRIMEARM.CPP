#include<iostream.h>
#include<conio.h>
#include<math.h>
 class numeric
{
 int prime,d;
 long i,n,s,temp;
 public:
  void input();
  void primearmst();
};
 void numeric::input()
{
 cout<<"Enter an Integer of maximum 9 digits="<<endl;
 cin>>n;
}
 void numeric::primearmst()
{
 prime=1;                             //prime part
 for(i=1;i<=n;i++)
 {
  if(n%i==0)
  {
   if((i==1)||(i==n))
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
 d=1;
 for(i=9;n>i;i=i*10+9)              //digit part
 {
  d=d+1;
 }
 s=0;
 temp=n;
 for(i=1;i<=d;i++)                   //armstrong calculation
 {
  s=s+pow(temp%10,d);
  temp=temp/10;
 }
 if((s==n)&&(prime==1))
 {
  cout<<endl<<n<<" is a Prime Armstrong no.";
 }
 else if(s==n)
 {
  cout<<endl<<n<<" is an Armstrong no.";
 }
 else if(prime==1)
 {
  cout<<endl<<n<<" is a Prime no.";
 }
 else
 {
 cout<<endl<<n<<" is nor Prime nor an Armstrong no.";
 }
}
 void main()
{
 clrscr();
 numeric ob;
 ob.input();
 ob.primearmst();
 getch();
}