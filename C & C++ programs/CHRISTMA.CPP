#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<math.h>
 class cmtree
{
 int x,y,c,d,i,dist1,dist2,stpx,stpy,std1cox[5],std1coy[5],std2cox[5],std2coy[5];
 float ang;
 char msg[20];
 public:
  void treebody()
 {
 x=getmaxx()/2;
 y=getmaxy()/2;

 x=x-150;

 setcolor(8);
 line(0,y+120,getmaxx(),y+120);

 setcolor(15);
 ellipse(x-57,y-150,270,340,50,70);
 ellipse(x+57,y-150,200,270,50,70);
 ellipse(x,y-120,110,170,10,20);
 ellipse(x,y-120,10,70,10,20);

 ellipse(x-47,y-78,160,350,10,5);
 ellipse(x+47,y-78,190,20,10,5);
 ellipse(x-18,y-78,180,270,20,10);
 ellipse(x+17,y-78,270,0,20,10);
 ellipse(x,y-69,180,0,17,10);

 ellipse(x-55,y-72,270,0,10,10);
 ellipse(x+55,y-72,180,270,10,10);
 ellipse(x-80,y-62,270,0,25,20);
 ellipse(x+80,y-62,180,270,25,20);

 ellipse(x-40,y-62,180,300,10,10);
 ellipse(x+40,y-62,240,0,10,10);
 ellipse(x-24,y-55,180,320,10,10);
 ellipse(x+24,y-55,220,0,10,10);
 ellipse(x,y-45,150,30,17,15);

 ellipse(x-65,y-41,180,360,15,10);
 ellipse(x+65,y-41,180,360,15,10);
 ellipse(x-45,y-33,160,360,7,7);
 ellipse(x+45,y-33,180,20,7,7);
 ellipse(x-28,y-22,135,340,13,15);
 ellipse(x+28,y-22,200,45,13,15);
 ellipse(x,y-15,135,45,16,18);

 ellipse(x-85,y-25,270,20,25,20);
 ellipse(x+85,y-25,160,270,25,20);
 ellipse(x-97,y-13,270,300,25,10);
 ellipse(x+97,y-13,240,270,25,10);
 ellipse(x-77,y-3,180,270,20,17);
 ellipse(x+77,y-3,270,0,20,17);
 ellipse(x-80,y+4,270,350,14,10);
 ellipse(x+80,y+4,190,270,14,10);
 ellipse(x-115,y+12,270,327,40,40);
 ellipse(x+115,y+12,213,270,40,40);
 ellipse(x-53,y+13,300,30,20,20);
 ellipse(x+53,y+13,150,240,20,20);
 ellipse(x-63,y+30,180,0,22,5);
 ellipse(x+63,y+30,180,0,22,5);
 ellipse(x-82,y+25,350,90,5,11);
 ellipse(x+82,y+25,90,190,5,11);
 ellipse(x-84,y+10,270,0,15,20);
 ellipse(x+84,y+10,180,270,15,20);
 ellipse(x-47,y-25,180,300,13,10);
 ellipse(x+47,y-25,240,0,13,10);

 ellipse(x-25,y+45,120,180,20,25);
 ellipse(x+25,y+45,0,60,20,25);
 ellipse(x-45,y+35,270,0,23,10);
 ellipse(x+45,y+35,180,270,23,10);
 ellipse(x-11,y+35,180,270,10,20);
 ellipse(x+11,y+35,270,0,10,20);
 ellipse(x-10,y+40,270,0,10,15);
 ellipse(x+10,y+40,180,270,10,15);

 ellipse(x-95,y+53,180,315,20,10);
 ellipse(x+95,y+53,235,0,20,10);
 ellipse(x-100,y+63,270,0,10,15);
 ellipse(x+100,y+63,180,270,10,15);
 ellipse(x-100,y+68,270,10,45,10);
 ellipse(x+100,y+68,170,270,45,10);

 ellipse(x-50,y+85,90,180,10,20);
 ellipse(x+50,y+85,0,90,10,20);
 ellipse(x-60,y+80,270,0,20,5);
 ellipse(x+60,y+80,180,270,20,5);

 ellipse(x-37,y+90,90,180,5,15);
 ellipse(x+37,y+90,0,90,5,15);
 ellipse(x-42,y+85,270,0,15,5);
 ellipse(x+42,y+85,180,270,15,5);
 ellipse(x-27,y+95,0,90,10,10);
 ellipse(x+27,y+95,90,180,10,10);
 ellipse(x,y+95,0,180,17,10);

 ellipse(x-40,y+87,270,0,10,10);
 ellipse(x+40,y+87,180,270,10,10);
 ellipse(x-40,y+120,0,90,30,22);
 ellipse(x+40,y+120,90,180,30,22);
 line(x-10,y+130,x-10,y+120);
 line(x+10,y+130,x+10,y+120);
 ellipse(x,y+130,180,0,10,5);

 line(x-5,y-137,x,y-142);
 line(x,y-142,x+5,y-137);


 setfillstyle(SOLID_FILL,6);
 floodfill(x,y+100,15);

 setfillstyle(SOLID_FILL,2);
 floodfill(x,y+70,15);
 floodfill(x-75,y+20,15);
 floodfill(x+75,y+20,15);
 floodfill(x-50,y-20,15);
 floodfill(x+50,y-20,15);
 floodfill(x,y-50,15);

 setfillstyle(SOLID_FILL,10);
 floodfill(x,y+30,15);
 floodfill(x,y-20,15);
 floodfill(x,y-100,15);

 setcolor(2);
 ellipse(x-57,y-150,270,340,50,70);
 ellipse(x+57,y-150,200,270,50,70);
 ellipse(x,y-120,110,170,10,20);
 ellipse(x,y-120,10,70,10,20);

 setcolor(2);
 ellipse(x-47,y-78,160,350,10,5);
 ellipse(x+47,y-78,190,20,10,5);
 ellipse(x-18,y-78,180,270,20,10);
 ellipse(x+17,y-78,270,0,20,10);
 ellipse(x,y-69,180,0,17,10);

 setcolor(10);
 ellipse(x-55,y-72,270,0,10,10);
 ellipse(x+55,y-72,180,270,10,10);
 setcolor(2);
 ellipse(x-80,y-62,270,0,25,20);
 ellipse(x+80,y-62,180,270,25,20);

 setcolor(10);
 ellipse(x-40,y-62,180,300,10,10);
 ellipse(x+40,y-62,240,0,10,10);
 ellipse(x-24,y-55,180,320,10,10);
 ellipse(x+24,y-55,220,0,10,10);
 ellipse(x,y-45,150,30,17,15);

 setcolor(2);
 ellipse(x-65,y-41,180,360,15,10);
 ellipse(x+65,y-41,180,360,15,10);
 ellipse(x-45,y-33,160,360,7,7);
 ellipse(x+45,y-33,180,20,7,7);
 ellipse(x-28,y-22,135,340,13,15);
 ellipse(x+28,y-22,200,45,13,15);
 ellipse(x,y-15,135,45,16,18);

 setcolor(2);
 ellipse(x-85,y-25,270,20,25,20);
 ellipse(x+85,y-25,160,270,25,20);
 ellipse(x-97,y-13,270,300,25,10);
 ellipse(x+97,y-13,240,270,25,10);
 ellipse(x-77,y-3,180,270,20,17);
 ellipse(x+77,y-3,270,0,20,17);
 ellipse(x-80,y+4,270,350,14,10);
 ellipse(x+80,y+4,190,270,14,10);
 setcolor(10);
 ellipse(x-115,y+12,270,327,40,40);
 ellipse(x+115,y+12,213,270,40,40);
 setcolor(2);
 ellipse(x-53,y+13,300,30,20,20);
 ellipse(x+53,y+13,150,240,20,20);
 ellipse(x-63,y+30,180,0,22,5);
 ellipse(x+63,y+30,180,0,22,5);
 setcolor(10);
 ellipse(x-82,y+25,350,90,5,11);
 ellipse(x+82,y+25,90,190,5,11);
 setcolor(2);
 ellipse(x-84,y+10,270,0,15,20);
 ellipse(x+84,y+10,180,270,15,20);
 setcolor(10);
 ellipse(x-47,y-25,180,300,13,10);
 ellipse(x+47,y-25,240,0,13,10);

 setcolor(2);
 ellipse(x-25,y+45,120,180,20,25);
 ellipse(x+25,y+45,0,60,20,25);
 ellipse(x-45,y+35,270,0,23,10);
 ellipse(x+45,y+35,180,270,23,10);
 ellipse(x-11,y+35,180,270,10,20);
 ellipse(x+11,y+35,270,0,10,20);
 ellipse(x-10,y+40,270,0,10,15);
 ellipse(x+10,y+40,180,270,10,15);

 setcolor(10);
 ellipse(x-95,y+53,180,315,20,10);
 ellipse(x+95,y+53,235,0,20,10);
 ellipse(x-100,y+63,270,0,10,15);
 ellipse(x+100,y+63,180,270,10,15);
 ellipse(x-100,y+68,270,10,45,10);
 ellipse(x+100,y+68,170,270,45,10);

 ellipse(x-50,y+85,90,180,10,20);
 ellipse(x+50,y+85,0,90,10,20);
 ellipse(x-60,y+80,270,0,20,5);
 ellipse(x+60,y+80,180,270,20,5);
 ellipse(x-37,y+90,90,180,5,15);
 ellipse(x+37,y+90,0,90,5,15);
 ellipse(x-42,y+85,270,0,15,5);
 ellipse(x+42,y+85,180,270,15,5);
 ellipse(x-27,y+95,0,90,10,10);
 ellipse(x+27,y+95,90,180,10,10);
 ellipse(x,y+95,0,180,17,10);

 setcolor(4);
 ellipse(x-40,y+87,270,0,10,10);
 ellipse(x+40,y+87,180,270,10,10);
 ellipse(x-40,y+120,0,90,30,22);
 ellipse(x+40,y+120,90,180,30,22);
 line(x-10,y+130,x-10,y+120);
 line(x+10,y+130,x+10,y+120);
 ellipse(x,y+130,180,0,10,5);

 setcolor(2);
 line(x-5,y-137,x,y-142);
 line(x,y-142,x+5,y-137);

 setcolor(8);
 line(x-10,y+130,x-10,y+120);
 line(x+10,y+130,x+10,y+120);
 ellipse(x,y+130,180,0,10,5);

 ellipse(x,y+135,135,45,50,20);

 setfillstyle(SOLID_FILL,8);
 floodfill(x,y+150,8);

 setcolor(4);
 line(x-10,y+130,x-10,y+120);
 line(x+10,y+130,x+10,y+120);
 ellipse(x,y+130,180,0,10,5);

 setfillstyle(SOLID_FILL,2);
 floodfill(x,y+180,8);
 }
  void star5p(int c,int d)
 {
  dist1=30;
  dist2=15;
  setcolor(15);

  for(i=0,ang=90;i<5;i++,ang+=72)
  {
   stpx = c+(dist1*cos(ang*(M_PI/180)));
   stpy = d-(dist1*sin(ang*(M_PI/180)));

   std1cox[i]=stpx;
   std1coy[i]=stpy;
   line(c,d,stpx,stpy);
  }

  for(i=0,ang=270-72*2;i<5;i++,ang+=72)
  {
   stpx = c+(dist2*cos(ang*(M_PI/180)));
   stpy = d-(dist2*sin(ang*(M_PI/180)));

   std2cox[i]=stpx;
   std2coy[i]=stpy;
   line(c,d,stpx,stpy);
  }

  for(i=0;i<5;i++)
  {
   line(std1cox[i],std1coy[i],std2cox[i],std2coy[i]);
  }
  for(i=0;i<5;i++)
  {
   if(i==4)
   {
   line(std2cox[i],std2coy[i],std1cox[0],std1coy[0]);
   }
   else
   {
   line(std2cox[i],std2coy[i],std1cox[i+1],std1coy[i+1]);
   }
  }
  setfillstyle(SOLID_FILL,14);
  floodfill(c-2,d-5,15);
  floodfill(c-5,d-3,15);

  floodfill(c+2,d-5,15);
  floodfill(c+5,d-3,15);

  floodfill(c-2,d+5,15);
  floodfill(c-5,d+3,15);

  floodfill(c+2,d+5,15);
  floodfill(c+5,d+3,15);

  floodfill(c-5,d,15);
  floodfill(c+5,d,15);

  setcolor(12);
  for(i=0,ang=90;i<5;i++,ang+=72)
  {
   stpx = c+(dist1*cos(ang*(M_PI/180)));
   stpy = d-(dist1*sin(ang*(M_PI/180)));

   std1cox[i]=stpx;
   std1coy[i]=stpy;
   line(c,d,stpx,stpy);
  }

  setcolor(4);
  for(i=0,ang=270-72*2;i<5;i++,ang+=72)
  {
   stpx = c+(dist2*cos(ang*(M_PI/180)));
   stpy = d-(dist2*sin(ang*(M_PI/180)));

   std2cox[i]=stpx;
   std2coy[i]=stpy;
   line(c,d,stpx,stpy);
  }

  setcolor(12);
  for(i=0;i<5;i++)
  {
   line(std1cox[i],std1coy[i],std2cox[i],std2coy[i]);
  }
  for(i=0;i<5;i++)
  {
   if(i==4)
   {
   line(std2cox[i],std2coy[i],std1cox[0],std1coy[0]);
   }
   else
   {
   line(std2cox[i],std2coy[i],std1cox[i+1],std1coy[i+1]);
   }
  }

 }
  void cballs(int m,int n,int r,int lco,int dco,int sm,int sn,int sr,int sm2,int sn2,int sr2,int lco2,int chp)
 {
  setcolor(dco);
  circle(m,n,r);
  setfillstyle(SOLID_FILL,lco);
  floodfill(m,n,dco);

  setcolor(dco);
  circle(sm,sn,sr);
  setfillstyle(SOLID_FILL,dco);
  floodfill(sm,sn,dco);

  if(chp==0)
  {
  }
  else
  {
  setcolor(lco2);
  circle(sm2,sn2,sr2);
  setfillstyle(SOLID_FILL,lco2);
  floodfill(sm2,sn2,lco2);
  }
 }
  void cballscode()
 {
  hook(x-57,y-78,x-59,y-78,x-59,y-75);
  cballs(x-57,y-70,6,4,12,x-57-1,y-70-1,4,x-57-2,y-70-2,2,15,1);

  cballs(x,y-53,5,14,15,x-1,y-53-1,2,0,0,0,0,0);

  cballs(x+50,y-30,8,5,13,x+50-1,y-30-1,6,x+50-3,y-30-3,2,15,1);

  cballs(x-40,y-5,8,1,3,x-40-1,y-5-1,6,x-40-3,y-5-3,2,15,1);

  hook(x+33,y+20,x+35,y+20,x+35,y+26);
  cballs(x+35,y+30,6,14,15,x+35-1,y+30-1,4,x+35-2,y+30-2,2,14,1);

  hook(x-78,y+74,x-80,y+74,x-80,y+80);
  cballs(x-80,y+87,8,4,12,x-80-1,y+87-1,6,x-80-3,y+87-3,2,15,1);

  hook(x+78,y+74,x+80,y+74,x+80,y+80);
  cballs(x+80,y+87,8,4,12,x+80-1,y+87-1,6,x+80-3,y+87-3,2,15,1);
 }
  void hook(int hex,int hey,int hlx1,int hly1,int hlx2,int hly2)
 {
  setcolor(8);
  ellipse(hex,hey,0,180,2,2);
  line(hlx1,hly1,hlx2,hly2);
 }
  void wish(int j,int k)
 {
  setcolor(4);
  settextjustify(1,1);
  settextstyle(TRIPLEX_FONT,0,4);
  outtextxy(j,k,"Wish You");
  outtextxy(j,k+30,"A");
  outtextxy(j-110,k+70,"MERRY");
  outtextxy(j-110,k+100,"CHRISTMAS");
  outtextxy(j,k+70,"&");
  outtextxy(j+110,k+70,"HAPPY");
  outtextxy(j+110,k+100,"NEW YEAR");
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
 setbkcolor(11);

 cmtree ob;
 ob.treebody();
 ob.cballscode();
 ob.star5p(a-149,b-158);
 ob.wish(a+125,b-200);

 getch();
 closegraph();
}