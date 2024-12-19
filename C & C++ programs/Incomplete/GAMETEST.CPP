#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
 class gametest
{
 int x,y,i,j,var1,var2;
 public:
  void initialise()
  {
   x=getmaxx()/2;
   y=getmaxy()/2;
  }
  void character_movement()
  {
   for(i=1;i>=0;i++)
   {
    circle(x,y,50);
    var1=getch();
    if(var1==0)
    {
     var2=getch();
     if(var2=='H')
     {
     y=y-5;
     }
     else if(var2=='P')
     {
     y=y+5;
     }
     else if(var2=='K')
     {
     x=x-5;
     }
     else if(var2=='M')
     {
     x=x+5;
     }
     else
     {
     }
    }
    else
    {
    break;
    }
    cleardevice();
   }
  }
  void keyhit_or_input()
  {
   for(j=1;j<=20;j++)
   {
    printf("%d ",kbhit());
    if(kbhit()!=0)
    {
    getch();
    }
    else
    {
    }
    delay(500);
   }
   printf("END");
   delay(1000);
  }
  void double_buffering()
  {
   settextjustify(1,1);
   outtextxy(x,y,"Not Yet");
   delay(1000);
  }
};
 void main()
{
 int gd=DETECT,gm;
 int a,b;
 char ch,msg[20];
 gametest ob;
 initgraph(&gd,&gm,"C:\\TC\\bgi");
 a=getmaxx()/2;
 b=getmaxy()/2;
 ob.initialise();

 z:settextjustify(0,1);
 outtextxy(a-260,b-200,"GAME CONCEPT DEMOS");
 outtextxy(a-260,b-180,"Q. Enter your choice =");
 outtextxy(a-260,b-165,"1. Character Movement");
 outtextxy(a-260,b-155,"2. Keyhit or Input while a loop");
 outtextxy(a-260,b-145,"3. Doule Buffering");
 ch=getch();
 sprintf(msg,"%c",ch);
 outtextxy(a-80,b-180,msg);
 if(ch=='1')
 {
  delay(1000);
  cleardevice();
  ob.character_movement();
 }
 else if(ch=='2')
 {
  delay(1000);
  closegraph();
  ob.keyhit_or_input();
 }
 else if(ch=='3')
 {
  delay(500);
  cleardevice();
  ob.double_buffering();
 }
 else
 {
 cleardevice();
 goto z;
 }
 closegraph();
}
