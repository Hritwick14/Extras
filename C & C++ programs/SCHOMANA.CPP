#include<iostream.h>
#include<conio.h>
 class staff
{
 protected:
  int code;
  char name[50];
 public:
  void getstaff()
 {
  cout<<"\n\nEnter Code         :-";
  cin>>code;
  cout<<"Enter Name         :-";
  cin>>name;
 }
  void dispstaff()
 {
  cout<<"\nCODE          :-"<<code;
  cout<<"\nNAME          :-"<<name;
 }
};

 class teacher:public staff
{
  char sub[20];
  char pub[20];
 public:
  void create()
 {
  getstaff();
  cout<<"Enter Subject      :-";
  cin>>sub;
  cout<<"Enter Publication  :-";
  cin>>pub;
 }
  void display()
 {
  dispstaff();
  cout<<"\nSUBJECT       :-"<<sub;
  cout<<"\nPUBLICATION   :-"<<pub;
 }
};

 class officer:public staff
{
  char grade;
 public:
  void create()
 {
  getstaff();
  cout<<"Enter Grade        :-";
  cin>>grade;
 }
  void display()
 {
  dispstaff();
  cout<<"\nGRADE         :-"<<grade;
 }
};

 class typist: public staff
{
  float speed;
 public:
  void gettypist()
 {
  getstaff();
  cout<<"Enter speed(wpm)   :-";
  cin>>speed;
 }
  void distypist()
 {
  dispstaff();
  cout<<"\nSPEED         :-"<<speed;
 }
};

 class casual:public typist
{
  float dailywages;
 public:
  void create()
 {
  gettypist();
  cout<<"Enter Daily Wages  :-";
  cin>>dailywages;
 }
  void display()
 {
  distypist();
  cout<<"\nDAILY WAGES   :-"<<dailywages;
 }
};

 void main()
{
 int count;
 int choice,i;
 char test;
 clrscr();
 teacher o1t[10];
 casual o1c[10];
 officer o1o[10];

 while(1)
 {
  start:clrscr();
  cout<<"\n=====SCHOOL MANAGEMENT SYSTEM=====\n\n\n";
  cout<<"Choose Category of Information\n";
  cout<<"1) Teacher\n";
  cout<<"2) Officer\n";
  cout<<"3) Typist\n";
  cout<<"4) Exit\n";
  cout<<"Enter your choice:-";
  cin>>choice;
  switch(choice)
  {
   case 1: while(1)
	   {
	    clrscr();
	    cout<<"\n=====TEACHERS INFORMATION=====\n\n";
	    cout<<"\nChoose your choice\n";
	    cout<<"1) Create\n";
	    cout<<"2) Display\n";
	    cout<<"3) Jump to Main Menu\n";
	    cout<<"Enter your choice:-";
	    cin>>choice;
	    switch(choice)
	    {
	     case 1: for(count=0,i=0;i<10;i++)
		     {
		      cout<<endl;
		      o1t[i].create();
		      count++;
		      cout<<endl;
		      cout<<"\n\nAre you interested in entering data\n";
		      cout<<"Enter Y or N :-";
		      cin>>test;
		      if((test=='Y')||(test=='y'))
		      {
		      continue;
		      }
		      else
		      {
		       goto out1;
		      }
		     }
		     out1:break;
	     case 2: for(i=0;i<count;i++)
		     {
		      cout<<endl;
		      o1t[i].display();
		      cout<<endl;
		     }
		     getch();
		     break;
	     case 3: goto start;
	     default: cout<<"\nEntered Choice is invalid\ntry again\n\n";
	    }
	   }
   case 2: while(1)
	   {
	    clrscr();
	    cout<<"\n=====OFFICERS INFORMATION=====\n\n";
	    cout<<"\nChoose your choice\n";
	    cout<<"1) Create\n";
	    cout<<"2) Display\n";
	    cout<<"3) Jump to Main Menu\n";
	    cout<<"Enter your choice:-";
	    cin>>choice;
	    switch(choice)
	    {
	     case 1: for(count=0,i=0;i<=10;i++)
		     {
		      cout<<endl;
		      o1o[i].create();
		      count++;
		      cout<<endl;
		      cout<<"\nAre you interested in entering data\n";
		      cout<<"Enter Y or N :-";
		      cin>>test;
		      if((test=='Y')||(test=='y'))
		      {
		      continue;
		      }
		      else
		      {
		       goto out2;
		      }
		     }
		     out2:break;
	     case 2: for(i=0;i<count;i++)
		     {
		      cout<<endl;
		      o1o[i].display();
		      cout<<endl;
		     }
		     getch();
		     break;
	     case 3: goto start;
	     default: cout<<"\nEntered Choice is invalid\ntry again\n\n";
	    }
	   }
   case 3: while(1)
	   {
	    clrscr();
	    cout<<"\n=====TYPIST INFORMATION=====\n\n";
	    cout<<"\nChoose your choice\n";
	    cout<<"1) Create\n";
	    cout<<"2) Display\n";
	    cout<<"3) Jump to Main Menu\n";
	    cout<<"Enter your choice:-";
	    cin>>choice;
	    switch(choice)
	    {
	     case 1: for(count=0,i=0;i<=10;i++)
		     {
		      cout<<endl;
		      o1c[i].create();
		      count++;
		      cout<<endl;
		      cout<<"\nAre you interested in entering data\n";
		      cout<<"Enter Y or N :-";
		      cin>>test;
		      if((test=='Y')||(test=='y'))
		      {
		      continue;
		      }
		      else
		      {
		       goto out3;
		      }
		     }
		     out3:break;
	     case 2: for(i=0;i<count;i++)
		     {
		      cout<<endl;
		      o1c[i].display();
		      cout<<endl;
		     }
		     getch();
		     break;
	     case 3: goto start;
	     default: cout<<"\nEntered Choice is invalid\ntry again\n\n";
	    }
	   }
   case 4: goto end;
  }
 }
 end:;
}