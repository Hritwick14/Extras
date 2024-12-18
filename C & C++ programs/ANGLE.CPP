#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
 void main()
{
 union REGS in,out;

 int x,y,gd=DETECT,gm;
 int mox,moy,tx,ty,bax,bay,i;
 double ang,d1,d2;
 char msg[20];
 clrscr();
 initgraph(&gd,&gm,"C:\\TC\\bgi");
 x=getmaxx()/2;
 y=getmaxy()/2;
 tx=x;
 ty=y;
 bax=x+100;
 bay=y;

 in.x.ax=4;
 in.x.cx=x+100;
 in.x.dx=y-100;
 int86(0x33,&in,&out);

 while(kbhit()==0)
 {
  in.x.ax=1;
  int86(0x33,&in,&out);

  in.x.ax=3;
  int86(0x33,&in,&out);
  mox=out.x.cx;
  moy=out.x.dx;
  bax=mox;

  circle(x-200,y,2);
  circle(x+200,y,2);

  circle(tx,ty,2);
  circle(bax,bay,2);
  circle(mox,moy,2);

  line(x-200,y,x+200,y);

  line(bax,bay,tx,ty);
  line(mox,moy,tx,ty);
  line(mox,moy,bax,bay);

  d1=(moy-ty)*-1;
  d2=mox-tx;

  ang=atan(d1/d2)*(180/M_PI);

  if((mox>=x)&&(moy<=y))
  {
  }
  else if((mox<x)&&(moy<y))
  {
  ang=180+ang;
  }
  else if((mox<x)&&(moy>=y))
  {
  ang=180+ang;
  }
  else if((mox>=x)&&(moy>y))
  {
  ang=360+ang;
  }
  else
  {
  }

  arc(x,y,0,ang,20);

  sprintf(msg,"Altitude=%lf Base=%lf",d1,d2);
  outtextxy(10,10,msg);
  sprintf(msg,"Angle(é)=%lf",ang);
  outtextxy(10,20,msg);

  delay(100);
  cleardevice();
 }
 getch();
 closegraph();
}