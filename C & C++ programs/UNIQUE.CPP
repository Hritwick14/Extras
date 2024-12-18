#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<stdio.h>
 template <class T>
 class calculation
{
 int n,temp;
 T i,s;
 public:
  void input();
  void unique();
}
 template <class T> void calculation<T>::input()
 {
  cout<<"Enter an integer=";
  /*cin>>n;*/             scanf("%d",&n);  //is more efficient
 }
 template <class T> void calculation<T>::unique()
 {
  temp=n;
  for(s=0;n>0;n=n/10)
  {
  //cout<<n<<" "<<s<<"    ";    delay(500);
  s=s+n%10;
  //cout<<n<<" "<<s<<"    ";    delay(500);
  //cout<<endl;
  }

  if(s==1)
  {
  cout<<endl<<temp<<" is an unique no.";
  }
  else
  {
  cout<<endl<<temp<<" is not an unique no.";
  }
 }
 void main()
{
 clrscr();
 calculation<int> ob;
 ob.input();
 ob.unique();
 getch();
}