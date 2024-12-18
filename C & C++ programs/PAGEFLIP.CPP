#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<dos.h>
 void main()
{
 int gd=VGA,gm=VGAMED;
 int x,y,page=0,r=10;
 clrscr();
 initgraph(&gd,&gm,"C:\\TC\\bgi");
 x=getmaxx()/2;
 y=getmaxy()/2;

 setactivepage(0);
 setcolor(12);
 ellipse(x-30,y,0,360,r,r);
 setcolor(15);
 ellipse(x-30,y,0,360,r+1,r+1);
 setfillstyle(SOLID_FILL,12);
 floodfill(x-30,y,12);
 setcolor(10);
 ellipse(x,y,0,360,r,r);
 setcolor(15);
 ellipse(x,y,0,360,r+1,r+1);
 setfillstyle(SOLID_FILL,10);
 floodfill(x,y,10);
 setcolor(9);
 ellipse(x+30,y,0,360,r,r);
 setcolor(15);
 ellipse(x+30,y,0,360,r+1,r+1);
 setfillstyle(SOLID_FILL,9);
 floodfill(x+30,y,9);
 setcolor(11);
 ellipse(x,y-30,0,360,r,r);
 setcolor(15);
 ellipse(x,y-30,0,360,r+1,r+1);
 setfillstyle(SOLID_FILL,11);
 floodfill(x,y-30,11);
 setcolor(13);
 ellipse(x,y+30,0,360,r,r);
 setcolor(15);
 ellipse(x,y+30,0,360,r+1,r+1);
 setfillstyle(SOLID_FILL,13);
 floodfill(x,y+30,13);
 setcolor(7);
 ellipse(x,y+60,0,360,r,r);
 setcolor(15);
 ellipse(x,y+60,0,360,r+1,r+1);
 setfillstyle(SOLID_FILL,7);
 floodfill(x,y+60,7);

 setactivepage(1);
 setcolor(4);
 ellipse(x-30,y,0,360,r,r);
 setcolor(15);
 ellipse(x-30,y,0,360,r+1,r+1);
 setfillstyle(SOLID_FILL,4);
 floodfill(x-30,y,4);
 setcolor(2);
 ellipse(x,y,0,360,r,r);
 setcolor(15);
 ellipse(x,y,0,360,r+1,r+1);
 setfillstyle(SOLID_FILL,2);
 floodfill(x,y,2);
 setcolor(1);
 ellipse(x+30,y,0,360,r,r);
 setcolor(15);
 ellipse(x+30,y,0,360,r+1,r+1);
 setfillstyle(SOLID_FILL,1);
 floodfill(x+30,y,1);
 setcolor(3);
 ellipse(x,y-30,0,360,r,r);
 setcolor(15);
 ellipse(x,y-30,0,360,r+1,r+1);
 setfillstyle(SOLID_FILL,3);
 floodfill(x,y-30,3);
 setcolor(5);
 ellipse(x,y+30,0,360,r,r);
 setcolor(15);
 ellipse(x,y+30,0,360,r+1,r+1);
 setfillstyle(SOLID_FILL,5);
 floodfill(x,y+30,5);
 setcolor(8);
 ellipse(x,y+60,0,360,r,r);
 setcolor(15);
 ellipse(x,y+60,0,360,r+1,r+1);
 setfillstyle(SOLID_FILL,8);
 floodfill(x,y+60,8);

 while(!kbhit())
 {
  setvisualpage(page);
  delay(500);
  page=1-page;
 }
 closegraph();
 getch();
}



















