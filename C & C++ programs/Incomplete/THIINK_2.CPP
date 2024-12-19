#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
 class calcasset
{
 public:
  void buttons(int a,int b,int c,int d)
  {
   rectangle(a-c/2,b-d/2,a+c/2,b+d/2);
  }
  void mou_activate()
  {
   union REGS in,out;

   in.x.ax=4;
   in.x.cx=320;
   in.x.dx=240;
   int86(0x10,&in,&out);
   in.x.ax=1;
   int86(0x10,&in,&out);
  }
  void mou_posxyinp()
  {
   int x=getmaxx()/2,y=getmaxy()/2;
   int tx,ty;
   union REGS in,out;

   while(kbhit()==0)
   {
    in.x.ax=3;
    int86(0x10,&in,&out);
    tx=out.x.cx;
    ty=out.x.dx;
    if(out.x.bx==1)
    {
    setcolor(15);
    outtextxy(x,y,"left click");
    delay(500);
    setcolor(0);
    outtextxy(x,y,"left click");
    }
    else
    {
    }
   }
  }
};
 class scicalc:public calcasset
{
 public:
  int x,y;

  void initialize()
  {
   x=getmaxx()/2;
   y=getmaxy()/2;
  }
  void body()
  {
   rectangle(x-120,y-170,x+120,y+170);
   rectangle(x-122,y-172,x+122,y+172);
   rectangle(x-115,y-160,x+115,y-110);
   line(x-120,y-100,x+120,y-100);
   line(x-120,y-99,x+120,y-99);
   buttons(x+90,y+130,40,60);
  }
};
 class tempcalc:public calcasset
{
 public:
  int x,y;

  void initialize()
  {
   x=getmaxx()/2;
   y=getmaxy()/2;
  }
  void body()
  {
   rectangle(x-120,y-170,x+120,y+170);
  }
};
 class mtablecalc:public calcasset
{
 public:
  int x,y;

  void initialize()
  {
   x=getmaxx()/2;
   y=getmaxy()/2;
  }
  void body()
  {
   rectangle(x-120,y-170,x+120,y+170);
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

 calcasset cob;

 scicalc sob;
 tempcalc tob;
 mtablecalc mob;

// cob.mou_activate();
// cob.mou_posxyinp();

 sob.initialize();
 tob.initialize();
 mob.initialize();

 sob.body();

 getch();
 closegraph();
}
// Things to do:
// 1.Enter code for buttons
// 2.Enter code for display
// 3.Enter code for mouse
// 4.Enter code for calculation
// 5.Organising and finalization of program