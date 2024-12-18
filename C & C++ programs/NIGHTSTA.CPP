#include<iostream.h>
#include<graphics.h>
#include<conio.h>
#include<stdlib.h>
#include<dos.h>
 class nightstar
{
 int gd,gm,i,j,k,x,y,starcox[1000],starcoy[1000],check,check2,starrad,r[500];
 public:
  void style1()
 {
  gd=DETECT;
  initgraph(&gd,&gm,"C:\\TC\\bgi");
  x=getmaxx()/2;
  y=getmaxy()/2;
  randomize();
  for(j=1;j<=1000;j++)
  {
   x=random(getmaxx()+1);
   y=random(getmaxy()+1);
   putpixel(x,y,15);
  }

 }
  void style2()
 {
  gd=DETECT;
  initgraph(&gd,&gm,"C:\\TC\\bgi");
  x=getmaxx()/2;
  y=getmaxy()/2;
  randomize();
  for(i=1;kbhit()==0;i++)
  {
   for(j=1;j<=1000;j++)
   {
    x=random(getmaxx()+1);
    y=random(getmaxy()+1);
    putpixel(x,y,15);
   }
   delay(250);
   cleardevice();
  }

 }
  void style3()
 {
  gd=DETECT;
  initgraph(&gd,&gm,"C:\\TC\\bgi");
  x=getmaxx()/2;
  y=getmaxy()/2;
  randomize();
  for(i=0;i<1000;i++)
  {
  starcox[i]=random(getmaxx()+1);
  starcoy[i]=random(getmaxy()+1);
  }
  for(i=0;i<500;i++)
  {
  r[i]=random(1000);
  }

  starrad=1;
  check=1;
  check2=1;
  for(k=1;kbhit()==0;k++)
  {

   if(k%6==0)
   {
    for(i=0;i<500;i++)
    {
     r[i]=random(1000);
    }
   }
   else
   {
   }

   for(i=0;i<=1000;i++)
   {
    for(j=0;j<500;j++)
    {
     if(r[j]==i)
     {
     circle(starcox[r[i]],starcoy[r[i]],starrad);
     check2=0;
     }
     else
     {
     }
    }

    if(check2==1)
    {
    circle(starcox[i],starcoy[i],1);
    }
    else
    {
    check2=1;
    }
   }

   if(k%3==0)
   {
    if(check==1)
    {
    check=0;
    }
    else
    {
    check=1;
    }
   }
   else
   {
   }

   if(check==1)
   {
   starrad++;
   }
   else
   {
   starrad--;
   }
   delay(500);
   cleardevice();

  }


 }
  void style4()
 {
  gd=DETECT;
  initgraph(&gd,&gm,"C:\\TC\\bgi");
  x=getmaxx()/2;
  y=getmaxy()/2;
  randomize();
  for(i=0;i<1000;i++)
  {
  starcox[i]=random(getmaxx()+1);
  starcoy[i]=random(getmaxy()+1);
  }

  for(i=0;kbhit()==0;i++)
  {
   for(j=0;j<1000;j++)
   {
   putpixel(starcox[j],starcoy[j],15);
   }

   for(j=0;j<1000;j++)
   {
    starcox[j]=starcox[j]+1;
    if(starcox[j]>=getmaxx())
    {
    starcox[j]=0;
    }
    else
    {
    }
   }
   delay(500);
   cleardevice();
  }

 }
};
 void main()
{
 int gd=DETECT,gm;
 char ch;
 clrscr();
 nightstar ob;
 z:cout<<"1.Fixed"<<endl;
 cout<<"2.Changing"<<endl;
 cout<<"3.Growing"<<endl;
 cout<<"4.Moving"<<endl;
 cout<<endl<<"Enter choice=";
 ch=getche();
  if(ch=='1')
  {
  clrscr();
  ob.style1();
  }
  else if(ch=='2')
  {
  clrscr();
  ob.style2();
  }
  else if(ch=='3')
  {
  clrscr();
  ob.style3();
  }
  else if(ch=='4')
  {
  clrscr();
  ob.style4();
  }
  else
  {
  cout<<endl;
  cout<<"WRONG CHOICE!!!";
  delay(1000);
  clrscr();
  goto z;
  }
 getch();
 closegraph();

}


