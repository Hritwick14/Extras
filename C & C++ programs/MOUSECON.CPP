#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
 void mouinput();
 void main()                        // interrupt - 0x33
{                                   // ax = 0 // mouse status/iniitialize
 union REGS in,out;                 // ax = 1 // mouse show
				    // ax = 2 // mouse hide
 int x,y,a,b,gd=DETECT,gm;          // ax = 3 // bx = button(s) clicked
 char msg[20];                      // ax = 3 // get co-ordinates // cx = xcord // dx = ycord
				    // ax = 4 // set co-ordinates // cx = xcord // dx = ycord
 initgraph(&gd,&gm,"C:\\TC\\bgi");  // ax = 7 // set x limit // cx = xmin // dx = xmax
				    // ax = 8 // set y limit // cx = ymin / /dx = ymax
 a=getmaxx()/2;
 b=getmaxy()/2;

 in.x.ax=4;
 in.x.cx=320;
 in.x.dx=240;
 int86(0x33,&in,&out);

 in.x.ax=7;
 in.x.cx=a-100;
 in.x.dx=a+100;
 int86(0x33,&in,&out);

 in.x.ax=8;
 in.x.cx=b-100;
 in.x.dx=b+100;
 int86(0x33,&in,&out);

 while(kbhit()==0)
 {
  rectangle(a-100,b-100,a+100,b+100);

  in.x.ax=1;
  int86(0x33,&in,&out);

  in.x.ax=3;
  int86(0x33,&in,&out);
  x=out.x.cx;
  y=out.x.dx;
  sprintf(msg,"MOUSE CO-ORDINATES:: X : %d , Y : %d",x,y);
  outtextxy(10,10,msg);

  mouinput();

  delay(100);
  cleardevice();
 }

 getch();
 closegraph();
}
 void mouinput()
{
 union REGS in,out;

 in.x.ax=3;
 int86(0x33,&in,&out);

 switch(out.x.bx)
 {
  case 1:outtextxy(10,20,"LEFT BUTTON");
	 break;
  case 2:outtextxy(10,20,"RIGHT BUTTON");
	 break;
  case 3:outtextxy(10,20,"LEFT AND RIGHT BUTTON");
	 break;
  case 4:outtextxy(10,20,"MIDDLE BUTTON");
	 break;
  case 5:outtextxy(10,20,"LEFT AND MIDDLE BUTTON");
	 break;
  case 6:outtextxy(10,20,"RIGHT AND MIDDLE BUTTON");
	 break;
  case 7:outtextxy(10,20,"ALL BUTTONS");
	 break;
  default:outtextxy(10,20,"NO INPUT");
 }

}