#include<graphics.h>
#include<conio.h>
 void main()
{
 int gd= DETECT,gm,x,y;
 int i,sa=0,ea=100,r=1;
 clrscr();
 initgraph(&gd, &gm, "C:\\TC\\bgi");
 x=getmaxx()/2;
 y=getmaxy()/2;

  setcolor(4);
  for(i=1;i<=100;i++)
  {
  arc(x,y,sa,ea,r);
  sa=sa+100;
  ea=ea+100;
  r=r+1;
  }

 getch();
 closegraph();
}