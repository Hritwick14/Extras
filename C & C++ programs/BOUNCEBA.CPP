#include<graphics.h>
#include<conio.h>
#include<dos.h>
 class draw
{
 public:
  void ball(int a,int b,int bally2)
  {
   setcolor(15);
   setfillstyle(SOLID_FILL,4);
   fillellipse(a,b,25,bally2);
   setcolor(15);
   setfillstyle(SOLID_FILL,14);
   fillellipse(a,b,10,bally2);
  }
};
 void main()                   //line coordinates= a-300,b+200,a+300,b+200
{                              //ball radius= x: 25  y: 25
 int gd=DETECT,gm,x,y;         //ball limit=  200-(25+1)= 174
 int i,j,a,b,check1,check2,check3,bally=25;
 float sp;
 char msg[80];
 clrscr();
 initgraph(&gd, &gm, "C:\\TC\\bgi");
 a=getmaxx()/2;
 b=getmaxy()/2;
 x=a;
 y=b;
 draw ob;
 for(j=1;j<=3;j++)
 {
  sp=20;
  check1=0;
  check2=0;
  check3=0;
  for(i=1;i<=394;i++)             //174   384
  {
   setcolor(15);
   line(a-300,b+200,a+300,b+200);

   ob.ball(x,y,bally);

   delay(sp);
   cleardevice();

   if(y==b+174)
   {
    if(check3==0)
    {
    check2=-1;
    check3=1;
    }
    else
    {
    check2=0;
    }
   }
   else if(y==b+184)
   {
   check2=1;
   check1=1;
   }
   else
   {
   }

   if(check2==-1)
   {
   bally--;
   }
   else if(check2==1)
   {
   bally++;
   }
   else
   {
   }

   if(check1==1)
   {
   y--;
   }
   else
   {
   y++;
   }
   if(check1==1)
   {
    if(sp>=20)
    {
    sp=20;
    }
    else
    {
    sp=sp+0.17;
    }
   }
   else
   {
    if(sp<=1)
    {
    sp=1;
    }
    else
    {
    sp=sp-0.17;
    }
   }
  }
 }
 delay(750);
 closegraph();
}