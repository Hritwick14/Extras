#include<iostream.h>
#include<conio.h>
#include<string.h>
 class calculation
{
 int m[10],i,j,s;
 char n[10];
 public:
   void get();
   void isbn();
};
 void calculation::get()            //input of an ISBN no.
{
 cout<<"Enter an ISBN no.=";

 for(i=0;i<10;i++)
 {
  n[i]=getche();
 }
 for(i=0;i<10;i++)
 {
  switch(n[i])
  {
   case '1': m[i]=1; break;
   case '2': m[i]=2; break;
   case '3': m[i]=3; break;
   case '4': m[i]=4; break;
   case '5': m[i]=5; break;
   case '6': m[i]=6; break;
   case '7': m[i]=7; break;
   case '8': m[i]=8; break;
   case '9': m[i]=9; break;
   case '0': m[i]=0; break;
   default:;
  }
 }
}
 void calculation::isbn()
{
 s=0;
 for(i=0,j=10;i<10;i++,j--)
 {
  s=s+m[i]*j;
 }

 if(s%11==0)                      //result
 {
 cout<<endl<<"It is an ISBN no.";
 }
 else
 {
 cout<<endl<<"It is not an ISBN no.";
 }
}
 void main()
{
 clrscr();
 calculation ob;

 ob.get();
 ob.isbn();

 getch();
}