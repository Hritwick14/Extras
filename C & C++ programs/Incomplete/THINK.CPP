#include<stdio.h>
#include<conio.h>
#include<graphics.h>
 class calc                           // Things to do:
{                                     // 1.Enter code for buttons
 int x,y;                             // 2.Enter code for display
 public:                              // 3.Enter code for mouse
  void initialize()                   // 4.Enter code for calculation
  {                                   // 5.Organising and finalization of program
   x=getmaxx()/2;
   y=getmaxy()/2;
  }
  void body()
  {
   rectangle(x-120,y-170,x+120,y+170);
   rectangle(x-115,y-160,x+115,y-110);
   line(x-120,y-100,x+120,y-100);
   line(x-120,y-99,x+120,y-99);
  }
  void buttons()
  {     // take inbuilt calculator buttons as reference
   rectangle(x+70,y+100,x+110,y+160);  // just copy and change values
					// <-- Enter the code for other buttons from here
  }
	     // <-- add new functions here
};
 void main()
{
 int gd=DETECT,gm;
 int a,b;
 clrscr();
 initgraph(&gd,&gm,"C:\\TC\\bgi");
 a=getmaxx()/2;   //  <-- We don't need this two but keep it
 b=getmaxy()/2;   //  <--
 calc ob;
 ob.initialize();
 ob.body();
 ob.buttons();
		  //  <-- call new added functions from here


 getch();
 closegraph();
}