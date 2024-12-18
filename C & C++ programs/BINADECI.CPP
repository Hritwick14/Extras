#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<dos.h>
#include<stdio.h>
 class calculation
{
 int power,temp,check,i;
 char sign;
 long n,ntemp,a,cont;
 public:		     //binary= 110001 = 49
  void bi2deciinput()        //decimal= 1,2,3
 {
  x:cout<<"Enter a positive integer binary no.=";
  scanf("%ld",&n);    //cin>>n is not effective for numbers like 010,0110,001
  check=0;
  for(ntemp=n;ntemp>0;ntemp=ntemp/10)
  {
   if(((ntemp%10)==1)||((ntemp%10)==0))
   {
   }
   else
   {
   check=1;
   }
  }
  if(check==1)
  {
  cout<<"WRONG input!!!";
  delay(1000);
  clrscr();
  goto x;
  }
  else
  {
  }
  cout<<endl<<"Input="<<n<<endl;
 }

  void bi2deciconvert()
 {
  a=0;
  power=0;
  cout<<endl<<"ANS= ";         //Showing binary to decimal process
  for(ntemp=n,temp=power;ntemp>0;ntemp=ntemp/10,temp++)
  {
   cout<<ntemp%10<<"x2^"<<temp;
   if(ntemp>=10)
   {
   cout<<" + ";
   }
   else
   {
   }
  }
  for(n;n>0;n=n/10,power++)     //Main binary to decimal calculation
  {
   a=a+(n%10)*pow(2,power);
  }
  cout<<endl<<"The decimal number is: ANS= "<<a;
 }

  void deci2biinput()
 {
  cout<<"Enter a positive integer decimal no.=";
  scanf("%ld",&n);
  cout<<endl<<"Input="<<n<<endl;
 }

  void deci2biconvert()
 {
  a=0;
  cont=1;
				   //179,192,196
  cout<<endl;
  cout<<"ANS="<<endl;
  for(ntemp=n;ntemp>=1;ntemp=ntemp/2)  //Showing decimal to binary process
  {
   if(ntemp==1)
   {
   cout<<"        ";
   }
   else
   {
   cout<<"     2 ";
   sign=179;
   cout<<sign;
   }
   cout<<ntemp;
   if(ntemp==1)
   {
   }
   else
   {
   cout<<" ="<<ntemp%2<<endl;
   sign=192;
   cout<<"       "<<sign;
   sign=196;
   cout<<sign<<sign<<endl;
   }
  }
  for(n;n>=1;n=n/2,cont=cont*10)  //Main decimal to binary calculation
  {
   a=a+(n%2)*cont;
  }
  cout<<endl<<"The binary number is: ANS= "<<a;
 }

};
 void main()
{
 char choice,endc;
 clrscr();
 calculation ob;
 y:cout<<"      Conversion"<<endl<<"1.Binary to Decimal"<<endl<<"2.Decimal to binary"<<endl;
 cout<<endl<<"Enter choice=";
 choice=getche();
 if(choice=='1')
 {
 cout<<endl;
 ob.bi2deciinput();
 ob.bi2deciconvert();
 }
 else if(choice=='2')
 {
 cout<<endl;
 ob.deci2biinput();
 ob.deci2biconvert();
 }
 else
 {
 cout<<endl<<"Wrong choice input!!!";
 delay(1000);
 clrscr();
 goto y;
 }
 z:cout<<endl<<endl<<"Do you want to try again? (Y/N)";
 endc=getch();
 if((endc=='Y')||(endc=='y'))
 {
 clrscr();
 goto y;
 }
 else if((endc=='N')||(endc=='n'))
 {
 }
 else
 {
 clrscr();
 goto z;
 }
}
