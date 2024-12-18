#include<iostream.h>
#include<conio.h>
#include<dos.h>
 class calculation
{
 long n,i,j,prime,temp,palen;
 public:
   void get();
   void primepalen();
};
 void calculation::get()            //input of an integer
{
 cout<<"Enter an integer=";
 cin>>n;
}
 void calculation::primepalen()
{
 prime=1;                 //prime part
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

 temp=n;                  //paliendrome part
 palen=0;
 for(j=1;n>0;j++)
 {
  palen=palen+(n%10);
  if(n<10)                //condition required to stop at last part
  {
  }
  else
  {
  palen=palen*10;
  }
  n=n/10;
 }

 if((palen==temp)&&(prime==1))        //result
 {
 cout<<endl<<"It is a PRIME-PALIENDROME no.";
 }
 else if(prime==1)
 {
 cout<<endl<<"It is a prime no.";
 }
 else if(palen==temp)
 {
 cout<<endl<<"It is a paliendrome no.";
 }
 else
 {
 cout<<endl<<"It is not prime nor paliendrome";
 }
}
 void main()
{
 clrscr();
 calculation ob;
 ob.get();
 ob.primepalen();
 getch();
}