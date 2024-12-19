#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
class kbc
{
 int x,y;
 char msg[20];
 public:
  void initialize()
  {
   x=getmaxx()/2;
   y=getmaxy()/2;
  }
  void design()
  {
   setcolor(15);
   rectangle(x-315,y-239,x+315,y+239);
   rectangle(x-313,y-237,x+313,y+237);
   rectangle(x-311,y-235,x+311,y+235);
  }
  void kbcicon()
  {
   design();

   setcolor(1);
   circle(x,y,151);
   circle(x,y,148);
   circle(x,y,145);
   setcolor(3);
   circle(x,y,150);
   circle(x,y,147);
   circle(x,y,144);
   setcolor(9);
   circle(x,y,149);
   circle(x,y,146);
   circle(x,y,143);

   setcolor(9);
   ellipse(x,y,0,360,140,20);
   ellipse(x,y,0,360,20,140);
   ellipse(x+259,y+259,115,155,390,390);
   ellipse(x-259,y-259,295,335,390,390);
   ellipse(x+259,y-259,205,245,390,390);
   ellipse(x-259,y+259,25,65,390,390);

   setcolor(11);
   settextjustify(1,1);
   settextstyle(TRIPLEX_FONT,0,10);
   outtextxy(x+1,y-18,"KBC");
   setcolor(1);
   outtextxy(x+2,y-18,"KBC");
   setcolor(11);
   outtextxy(x+3,y-18,"KBC");

  }
  void opbox(int m,int n,int l)
  {
   setcolor(15);

   line(m-(l/2+45),n,m-(l/2+20),n);

   line(m-(l/2+20),n,m-(l/2),n-30);
   line(m-(l/2),n-30,m+(l/2),n-30);
   line(m+(l/2+20),n,m+(l/2),n-30);
   line(m+(l/2+20),n,m+(l/2),n+30);
   line(m-(l/2),n+30,m+(l/2),n+30);
   line(m-(l/2+20),n,m-(l/2),n+30);

   line(m+(l/2+20),n,m+(l/2+45),n);

   line(m-(l/2+15),n,m-(l/2),n-25);
   line(m-(l/2),n-25,m+(l/2),n-25);
   line(m+(l/2+15),n,m+(l/2),n-25);
   line(m+(l/2+15),n,m+(l/2),n+25);
   line(m-(l/2),n+25,m+(l/2),n+25);
   line(m-(l/2+15),n,m-(l/2),n+25);

   setfillstyle(SOLID_FILL,1);
   floodfill(m,n-27,15);

   setcolor(9);
   line(m-(l/2+20),n,m-(l/2),n-30);
   line(m-(l/2),n-30,m+(l/2),n-30);
   line(m+(l/2+20),n,m+(l/2),n-30);
   line(m+(l/2+20),n,m+(l/2),n+30);
   line(m-(l/2),n+30,m+(l/2),n+30);
   line(m-(l/2+20),n,m-(l/2),n+30);
  }
  void adpol(int x1,int y1,int r1)
  {
   setcolor(14);
   circle(x1,y1,r1);
   circle(x1,y1,r1+3);

   circle(x1,y1,r1/6);
   ellipse(x1,y1+((r1/6)*5)+2,0,180,(r1/6)*2,((r1/6)*4)+2);

   circle(x1-(r1/6)*3,y1-(r1/6)*2,r1/6);
   ellipse(x1-(r1/6)*3,y1+((r1/6)*3)+2,20,180,(r1/6)*2,((r1/6)*4)+2);

   circle(x1+(r1/6)*3,y1-(r1/6)*2,r1/6);
   ellipse(x1+(r1/6)*3,y1+((r1/6)*3)+2,0,160,(r1/6)*2,((r1/6)*4)+2);

   setfillstyle(SOLID_FILL,5);
   floodfill(x1,y1+(r1+1),14);
  }
  void ftft(int x2,int y2,int r2)
  {
   setcolor(14);
   circle(x2,y2,r2);
   circle(x2,y2,r2+3);

   settextjustify(1,1);
   if(r2==12)
   {
   settextstyle(SMALL_FONT,0,2);
   }
   else
   {
   settextstyle(SMALL_FONT,0,6);
   }
   outtextxy(x2,y2,"50/50");

   setfillstyle(SOLID_FILL,9);
   floodfill(x2,y2+(r2+1),14);
  }
  void schan(int x3,int y3,int r3)
  {
   setcolor(14);
   circle(x3,y3,r3);
   circle(x3,y3,r3+3);

   settextjustify(1,1);
   if(r3==12)
   {
   settextstyle(SMALL_FONT,0,4);
   outtextxy(x3,y3,"x2");
   }
   else
   {
   settextstyle(TRIPLEX_FONT,0,4);
   outtextxy(x3+2,y3-5,"x2");
   }

   setfillstyle(SOLID_FILL,2);
   floodfill(x3,y3+(r3+1),14);
  }
  void qchange(int x4,int y4,int r4)
  {
   setcolor(14);
   circle(x4,y4,r4);
   circle(x4,y4,r4+3);

   if(r4==12)
   {
    ellipse(x4,y4-3,10,170,7,3);
    ellipse(x4,y4-2,10,170,7,3);

    line(x4-7,y4-2,x4-7,y4-6);
    line(x4-7,y4-2,x4-3,y4-2);

    ellipse(x4,y4+3,190,350,7,3);
    ellipse(x4,y4+2,190,350,7,3);

    line(x4+7,y4+2,x4+7,y4+6);
    line(x4+7,y4+2,x4+3,y4+2);
   }
   else
   {
    ellipse(x4,y4-2,10,170,20,15);
    ellipse(x4,y4-1,10,170,20,15);

    line(x4-20,y4-2,x4-22,y4-9);
    line(x4-21,y4-2,x4-15,y4-6);

    ellipse(x4,y4+2,190,350,20,15);
    ellipse(x4,y4+1,190,350,20,15);

    line(x4+20,y4+2,x4+22,y4+9);
    line(x4+21,y4+2,x4+15,y4+6);
   }

   setfillstyle(SOLID_FILL,4);
   floodfill(x4,y4+(r4+1),14);
  }
  void kbcbody()
  {
   design();

   line(x+180,y-235,x+180,y+235);
   line(x+181,y-235,x+181,y+235);
   line(x+180,y-185,x+310,y-185);
   line(x+180,y-186,x+310,y-186);
   line(x+180,y+30,x+310,y+30);
   line(x+180,y+31,x+310,y+31);

   kbclist();

   //ellipse(x+250,y+30,0,360,50,10);
   //setfillstyle(SOLID_FILL,14);
   //floodfill(x+250,y+30,15);

   opbox(x-65,y+20,400);
   opbox(x-185,y+110,160);
   opbox(x-185,y+180,160);
   opbox(x+55,y+110,160);
   opbox(x+55,y+180,160);

   adpol(x+198,y-210,12);
   ftft(x+230,y-210,12);
   schan(x+262,y-210,12);
   qchange(x+294,y-210,12);

   setcolor(15);
   settextjustify(1,1);
   settextstyle(DEFAULT_FONT,0,1);
   outtextxy(x-265,y+20,"Q:");
   outtextxy(x-265,y+110,"A:");
   outtextxy(x-25,y+110,"B:");
   outtextxy(x-265,y+180,"C:");
   outtextxy(x-25,y+180,"D:");
  }
  void kbclist()
  {
   settextjustify(1,1);
   settextstyle(SMALL_FONT,0,4);

   outtextxy(x+250,y+10,"5,000");
   outtextxy(x+250,y-5,"10,000");
   outtextxy(x+250,y-20,"20,000");
   outtextxy(x+250,y-35,"40,000");
   outtextxy(x+250,y-50,"80,000");
   outtextxy(x+250,y-65,"1,60,000");
   outtextxy(x+250,y-80,"3,20,000");
   outtextxy(x+250,y-95,"6,40,000");
   outtextxy(x+250,y-110,"12,50,000");
   outtextxy(x+250,y-125,"25,00,000");
   outtextxy(x+250,y-140,"50,00,000");
   outtextxy(x+250,y-155,"1,00,00,000");
   outtextxy(x+250,y-170,"5,00,00,000");
  }
};
 void main()
{
 int gd=DETECT,gm;
 int a,b;
 clrscr();
 initgraph(&gd,&gm,"C:\\TC\\bgi");
 a=getmaxx()/2;
 b=getmaxy()/2;

 kbc ob;
 ob.initialize();

 ob.kbcicon();

 delay(5000);
 cleardevice();

 ob.kbcbody();


 getch();
 closegraph();
}
