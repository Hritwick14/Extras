#include <graphics.h>
#include <stdio.h>
#include <conio.h>
 class ninja
{
 int x,y,poly[40];
 public:
  void shuriken()
 {
  x=getmaxx()/2-100;
  y=getmaxy()/2;

  setbkcolor(0);

  setcolor(10);
  circle(x,y,3);
  setcolor(15);

  arc(x-8,y-15,210,30,5);
  arc(x+8,y-15,150,330,5);
  arc(x-17,y,270,90,5);
  arc(x+17,y,90,270,5);
  arc(x-8,y+15,330,150,5);
  arc(x+8,y+15,30,210,5);

  poly[0] = x-4;
  poly[1] = y-18;

  poly[2] = x;
  poly[3] = y-30;

  poly[4] = x+4;
  poly[5] = y-18;

  drawpoly(3,poly);

  poly[0] = x-4;
  poly[1] = y+18;

  poly[2] = x;
  poly[3] = y+30;

  poly[4] = x+4;
  poly[5] = y+18;

  drawpoly(3,poly);

  poly[0] = x+13;
  poly[1] = y-13;

  poly[2] = x+25;
  poly[3] = y-15;

  poly[4] = x+17;
  poly[5] = y-5;

  drawpoly(3,poly);

  poly[0] = x+17;
  poly[1] = y+5;

  poly[2] = x+24;
  poly[3] = y+15;

  poly[4] = x+13;
  poly[5] = y+13;

  drawpoly(3,poly);

  poly[0] = x-13;
  poly[1] = y-13;

  poly[2] = x-25;
  poly[3] = y-15;

  poly[4] = x-17;
  poly[5] = y-5;

  drawpoly(3,poly);

  poly[0] = x-17;
  poly[1] = y+5;

  poly[2] = x-24;
  poly[3] = y+15;

  poly[4] = x-13;
  poly[5] = y+13;

  drawpoly(3,poly);
 }
 void kunai()
 {
  x=getmaxx()/2-50;
  y=getmaxy()/2;

  poly[0] = x-10;
  poly[1] = y;

  poly[2] = x;
  poly[3] = y-50;

  poly[4] = x+10;
  poly[5] = y;

  poly[6] = x+2;
  poly[7] = y+8;

  poly[8] = x-2;
  poly[9] = y+8;

  poly[10] = poly[0];
  poly[11] = poly[1];

  drawpoly(6, poly);

  poly[0] = x-2;
  poly[1] = y+8;

  poly[2] = x+2;
  poly[3] = y+8;

  poly[4] = x+2;
  poly[5] = y+30;

  poly[6] = x-2;
  poly[7] = y+30;

  poly[8] = poly[0];
  poly[9] = poly[1];

  drawpoly(5,poly);
  circle(x,y+35,5);
  circle(x,y+35,3);

  poly[0] = x-6;
  poly[1] = y-1;

  poly[2] = x;
  poly[3] = y-36;

  poly[4] = x+6;
  poly[5] = y-1;

  poly[6] = x+1;
  poly[7] = y+4;

  poly[8] = x-1;
  poly[9] = y+4;

  poly[10] = poly[0];
  poly[11] = poly[1];

  drawpoly(6, poly);

  line(x-10,y,x-6,y-1);
  line(x+10,y,x+6,y-1);
  line(x,y-50,x,y-36);
  line(x-2,y+10,x-1,y+4);
  line(x+2,y+10,x+1,y+4);

  setcolor(9);
  arc(x,y+10,180,0,2);
  arc(x,y+12,180,0,2);
  arc(x,y+14,180,0,2);
  arc(x,y+16,180,0,2);
  arc(x,y+18,180,0,2);
  arc(x,y+20,180,0,2);
  arc(x,y+22,180,0,2);
  arc(x,y+24,180,0,2);
  setcolor(15);
 }
  void hiraishin_kunai()
 {
  x=getmaxx()/2;
  y=getmaxy()/2;

  ellipse(x,y-10,180,0,20,15);

  ellipse(x,y-10,180,255,20,6);
  ellipse(x,y-10,285,0,20,6);

  ellipse(x,y-10,180,250,20,2);
  ellipse(x,y-10,295,0,20,2);

  poly[0] = x-7;
  poly[1] = y-8;

  poly[2] = x;
  poly[3] = y-50;

  poly[4] = x+7;
  poly[5] = y-8;

  drawpoly(3, poly);

  poly[0] = x-5;
  poly[1] = y-5;

  poly[2] = x;
  poly[3] = y-40;

  poly[4] = x+5;
  poly[5] = y-5;

  drawpoly(3, poly);

  line(x-7,y-6,x-7,y-8);
  line(x+7,y-6,x+7,y-8);
  line(x,y-40,x,y-50);

  poly[0] = x-2;
  poly[1] = y+6;

  poly[2] = x+2;
  poly[3] = y+6;

  poly[4] = x+2;
  poly[5] = y+8;

  poly[6] = x-2;
  poly[7] = y+8;

  poly[8] = poly[0];
  poly[9] = poly[1];

  drawpoly(5,poly);

  poly[0] = x-3;
  poly[1] = y+8;

  poly[2] = x+3;
  poly[3] = y+8;

  poly[4] = x+3;
  poly[5] = y+10;

  poly[6] = x-3;
  poly[7] = y+10;

  poly[8] = poly[0];
  poly[9] = poly[1];

  drawpoly(5,poly);

  setcolor(14);
  poly[0] = x-4;
  poly[1] = y+10;

  poly[2] = x+4;
  poly[3] = y+10;

  poly[4] = x+4;
  poly[5] = y+40;

  poly[6] = x-4;
  poly[7] = y+40;

  poly[8] = poly[0];
  poly[9] = poly[1];

  drawpoly(5,poly);
  setcolor(15);

  poly[0] = x-3;
  poly[1] = y+40;

  poly[2] = x+3;
  poly[3] = y+40;

  poly[4] = x+3;
  poly[5] = y+42;

  poly[6] = x-3;
  poly[7] = y+42;

  poly[8] = poly[0];
  poly[9] = poly[1];

  drawpoly(5,poly);

  poly[0] = x-2;
  poly[1] = y+42;

  poly[2] = x+2;
  poly[3] = y+42;

  poly[4] = x+2;
  poly[5] = y+44;

  poly[6] = x-2;
  poly[7] = y+44;

  poly[8] = poly[0];
  poly[9] = poly[1];

  drawpoly(5,poly);
  circle(x,y+49,5);
  circle(x,y+49,3);

 }
  void sai()
 {
  x=getmaxx()/2+50;
  y=getmaxy()/2+50;

  poly[0] = x-3;
  poly[1] = y+6;

  poly[2] = x-2;
  poly[3] = y+6;

  poly[4] = x-2;
  poly[5] = y+30;

  poly[6] = x+2;
  poly[7] = y+30;

  poly[8] = x+2;
  poly[9] = y+6;

  poly[10] = x+3;
  poly[11] = y+6;

  drawpoly(6,poly);

  poly[0] = x-3;
  poly[1] = y+30;

  poly[2] = x+3;
  poly[3] = y+30;

  poly[4] = x+3;
  poly[5] = y+36;

  poly[6] = x-3;
  poly[7] = y+36;

  poly[8] = poly[0];
  poly[9] = poly[1];

  drawpoly(5, poly);

  poly[0] = x-3;
  poly[1] = y;

  poly[2] = x-1;
  poly[3] = y;

  poly[4] = x-1;
  poly[5] = y-80;

  poly[6] = x+1;
  poly[7] = y-80;

  poly[8] = x+1;
  poly[9] = y;

  poly[10] = x+3;
  poly[11] = y;

  drawpoly(6, poly);

  ellipse(x-4,y-5,160,270,10,10);
  ellipse(x-4,y-4,150,270,7,5);
  ellipse(x+4,y-5,270,20,10,10);
  ellipse(x+4,y-4,270,20,7,5);

  ellipse(x-14,y-6,0,100,3,5);
  ellipse(x+14,y-6,80,180,3,5);
  ellipse(x+15,y-9,90,180,1,1);
  ellipse(x-15,y-9,0,90,1,1);

  setcolor(12);
  arc(x,y+8,180,0,2);
  arc(x,y+10,180,0,2);
  arc(x,y+12,180,0,2);
  arc(x,y+14,180,0,2);
  arc(x,y+16,180,0,2);
  arc(x,y+18,180,0,2);
  arc(x,y+20,180,0,2);
  arc(x,y+22,180,0,2);
  setcolor(15);

  x=getmaxx()/2+60;
  y=getmaxy()/2-50;

  poly[0] = x+3;
  poly[1] = y-6;

  poly[2] = x+2;
  poly[3] = y-6;

  poly[4] = x+2;
  poly[5] = y-30;

  poly[6] = x-2;
  poly[7] = y-30;

  poly[8] = x-2;
  poly[9] = y-6;

  poly[10] = x-3;
  poly[11] = y-6;

  drawpoly(6,poly);

  poly[0] = x+3;
  poly[1] = y-30;

  poly[2] = x-3;
  poly[3] = y-30;

  poly[4] = x-3;
  poly[5] = y-36;

  poly[6] = x+3;
  poly[7] = y-36;

  poly[8] = poly[0];
  poly[9] = poly[1];

  drawpoly(5, poly);

  poly[0] = x+3;
  poly[1] = y;

  poly[2] = x+1;
  poly[3] = y;

  poly[4] = x+1;
  poly[5] = y+80;

  poly[6] = x-1;
  poly[7] = y+80;

  poly[8] = x-1;
  poly[9] = y;

  poly[10] = x-3;
  poly[11] = y;

  drawpoly(6, poly);

  ellipse(x+4,y+5,350,90,10,10);
  ellipse(x+4,y+4,350,90,7,5);
  ellipse(x-4,y+5,90,200,10,10);
  ellipse(x-4,y+4,90,200,7,5);

  ellipse(x+14,y+6,180,280,3,5);
  ellipse(x-14,y+6,260,0,3,5);
  ellipse(x-15,y+9,270,0,1,1);
  ellipse(x+15,y+9,180,270,1,1);

  setcolor(12);
  arc(x,y-8,0,180,2);
  arc(x,y-10,0,180,2);
  arc(x,y-12,0,180,2);
  arc(x,y-14,0,180,2);
  arc(x,y-16,0,180,2);
  arc(x,y-18,0,180,2);
  arc(x,y-20,0,180,2);
  arc(x,y-22,0,180,2);
  setcolor(15);
 }
  void ninja_sword()
 {
  x=getmaxx()/2+100;
  y=getmaxy()/2+50;

  poly[0] = x-3;
  poly[1] = y+6;
  poly[2] = x-3;
  poly[3] = y-160;
  poly[4] = x+1;
  poly[5] = y-150;
  poly[6] = x+1;
  poly[7] = y+6;
  poly[8] = poly[0];
  poly[9] = poly[1];

  drawpoly(5,poly);

  poly[0] = x-3;
  poly[1] = y-160;
  poly[2] = x+3;
  poly[3] = y-150;
  poly[4] = x+3;
  poly[5] = y+6;

  drawpoly(3,poly);

  setcolor(7);
  poly[0] = x-10;
  poly[1] = y+8;
  poly[2] = x-10;
  poly[3] = y+6;
  poly[4] = x+10;
  poly[5] = y+6;
  poly[6] = x+10;
  poly[7] = y+8;
  poly[8] = poly[0];
  poly[9] = poly[1];

  drawpoly(5,poly);
  setfillstyle(SOLID_FILL,15);
  floodfill(x,y+7,7);

  setcolor(7);
  poly[0] = x-4;
  poly[1] = y+8;
  poly[2] = x+4;
  poly[3] = y+8;
  poly[4] = x+4;
  poly[5] = y+40;
  poly[6] = x-4;
  poly[7] = y+40;
  poly[8] = poly[0];
  poly[9] = poly[1];

  drawpoly(5,poly);

  setcolor(15);

  poly[0] = x-4;
  poly[1] = y+41;
  poly[2] = x+4;
  poly[3] = y+41;
  poly[4] = x+4;
  poly[5] = y+44;
  poly[6] = x-4;
  poly[7] = y+44;
  poly[8] = poly[0];
  poly[9] = poly[1];

  drawpoly(5,poly);
  setfillstyle(SOLID_FILL,15);
  floodfill(x-2,y+10,7);

  setcolor(8);
  poly[0] = x;
  poly[1] = y+9;
  poly[2] = x+3;
  poly[3] = y+12;
  poly[4] = x;
  poly[5] = y+15;
  poly[6] = x-3;
  poly[7] = y+12;
  poly[8] = poly[0];
  poly[9] = poly[1];

  drawpoly(5,poly);

  setfillstyle(SOLID_FILL,8);
  floodfill(x,y+12,8);

  poly[0] = x;
  poly[1] = y+17;
  poly[2] = x+3;
  poly[3] = y+20;
  poly[4] = x;
  poly[5] = y+23;
  poly[6] = x-3;
  poly[7] = y+20;
  poly[8] = poly[0];
  poly[9] = poly[1];

  drawpoly(5,poly);

  setfillstyle(SOLID_FILL,8);
  floodfill(x,y+20,8);

  poly[0] = x;
  poly[1] = y+25;
  poly[2] = x+3;
  poly[3] = y+28;
  poly[4] = x;
  poly[5] = y+31;
  poly[6] = x-3;
  poly[7] = y+28;
  poly[8] = poly[0];
  poly[9] = poly[1];

  drawpoly(5,poly);

  setfillstyle(SOLID_FILL,8);
  floodfill(x,y+28,8);

  poly[0] = x;
  poly[1] = y+33;
  poly[2] = x+3;
  poly[3] = y+36;

  poly[4] = x;
  poly[5] = y+39;
  poly[6] = x-3;
  poly[7] = y+36;
  poly[8] = poly[0];
  poly[9] = poly[1];

  drawpoly(5,poly);

  setfillstyle(SOLID_FILL,8);
  floodfill(x,y+36,8);
 }

};
 void main()
{
 int gd=DETECT,gm;
 int x,y,poly[18];
 initgraph(&gd, &gm, "C:\\TC\\bgi");
 ninja ob;
 ob.shuriken();
 ob.kunai();
 ob.hiraishin_kunai();
 ob.sai();
 ob.ninja_sword();
 getch();
 closegraph();
}