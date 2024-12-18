#include<graphics.h>
#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<math.h>
#include<stdio.h>
#include<string.h>
 class clock
{
 int x,y,x1,y1,sx1,sy1,mx1,my1,hx1,hy1,i,ang,sec,min,hr,d,lhr,lhrcheck;
 char digital[80],form[10];
 public:
  void input()
  {
   cleardevice();
   cout<<"Enter sec:-";
   cin>>sec;
   cout<<"Enter min:-";
   cin>>min;
   cout<<"Enter hr:-";
   cin>>hr;

   lhr=hr*5;
   lhrcheck=min;
   n:if(lhrcheck>=12)
   {
    lhrcheck=lhrcheck-12;
    lhr++;
    goto n;
   }
   else
   {
   }
   if(hr>11)
   {
   strcpy(form,"pm");
   }
   else
   {
   strcpy(form,"am");
   }
   d=0;
   x=getmaxx()/2;
   y=getmaxy()/2;
  }
  int check()
  {
   if((sec>60)||(min>60)||(hr>24))
   {
   return 1;
   }
   else
   {
   }
  }
  void clock_body()
  {
   setcolor(2);
   for(i=1;i<=5;i++)
   {
   circle(x,y,i+99);
   }
   setcolor(4);
   circle(x,y,3);
  }
  void clock_points()
  {
   setcolor(14);
   setfillstyle(SOLID_FILL,4);

   for(ang=0;ang<=360;ang+=30)
   {
   x1= x+(90*cos(ang*(M_PI/180)));
   y1= y-(90*sin(ang*(M_PI/180)));
   fillellipse(x1,y1,2,2);
   }
   for(ang=0;ang<=360;ang+=6)
   {
   x1= x+(90*cos(ang*(M_PI/180)));
   y1= y-(90*sin(ang*(M_PI/180)));
   putpixel(x1,y1,15);
   }
  }
  void show()
  {
   if(sec==60)
   {
    min++;
    lhrcheck++;
    sec=sec-60;
   }
   else
   {
   }
   if(min==60)
   {
    hr++;
    min=min-60;
   }
   else
   {
   }
  m:if(hr>12)
   {
    hr=hr-12;
    goto m;
   }
   else
   {
   }
   if((hr==12)&&(min==0)&&(sec==0))
   {
    if(strcmp(form,"pm")==0)
    {
     d++;
     strcpy(form,"am");
    }
    else if(strcmp(form,"am")==0)
    {
     strcpy(form,"pm");
    }
    else
    {
    }
   }
   else
   {
   }
   if(lhrcheck==12)
   {
   lhr++;
   lhrcheck=0;
   }
   else
   {
   }
   setcolor(14);
   sx1= x+(80*cos((90-(sec*6))*(M_PI/180)));
   sy1= y-(80*sin((90-(sec*6))*(M_PI/180)));
   line(x,y,sx1,sy1);

   setcolor(15);
   mx1= x+(60*cos((90-(min*6))*(M_PI/180)));
   my1= y-(60*sin((90-(min*6))*(M_PI/180)));
   line(x,y,mx1,my1);

   setcolor(12);
   hx1= x+(50*cos((90-(lhr*6))*(M_PI/180)));
   hy1= y-(50*sin((90-(lhr*6))*(M_PI/180)));
   line(x,y,hx1,hy1);


   setcolor(15);
   settextjustify(1,1);
   sprintf(digital,"%d:%d:%d%s DAYS:%d",hr,min,sec,form,d);
   outtextxy(x,y-115,digital);
   sec++;
  }
};
 void main()
{
 int gd= DETECT,gm;
 int i,x,y;
 clrscr();
 initgraph(&gd, &gm, "C:\\TC\\bgi");
 x=getmaxx()/2;
 y=getmaxy()/2;
 clock ob;
 z:ob.input();
 if(ob.check()==1)
 {
 goto z;
 }
 else
 {
 }
 for(i=1;kbhit()==0;i++)
 {
  ob.clock_body();
  ob.clock_points();

  ob.show();
  delay(1000);
  cleardevice();
 }
 closegraph();
}