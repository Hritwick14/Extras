#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<dos.h>

 class tictactoe
{
 int i,j,k,x,y,c,d,result,marks[3][3],inpwin,count,score[2];
 char var1,var2,msg[80];
 public:
  void structure()
  {
   setcolor(1);
   setlinestyle(DOTTED_LINE,1,1);
   line(x-120,y-39,x+120,y-39);
   line(x-120,y+39,x+120,y+39);
   line(x-39,y-120,x-39,y+120);
   line(x+39,y-120,x+39,y+120);

   line(x-120,y-41,x+120,y-41);
   line(x-120,y+41,x+120,y+41);
   line(x-41,y-120,x-41,y+120);
   line(x+41,y-120,x+41,y+120);
  }

  void game(int lc2)
  {
   x=getmaxx()/2;
   y=getmaxy()/2;

   cleardevice();
   design();
   setbkcolor(15);

   setcolor(12);
   settextjustify(1,1);
   settextstyle(TRIPLEX_FONT,0,6);
   outtextxy(x,y-200,"TIC TAC TOE");

   if(lc2==1)
   {
   score[0]=0;
   score[1]=0;
   }
   else
   {
   }
   setcolor(4);
   settextstyle(TRIPLEX_FONT,0,3);
   sprintf(msg,"Player 1: %d",score[0]);
   outtextxy(x-230,y-50,msg);
   sprintf(msg,"Player 2: %d",score[1]);
   outtextxy(x+230,y-50,msg);
   structure();

   for(i=0;i<3;i++)
   {
    for(j=0;j<3;j++)
    {
    marks[i][j]=0;
    }
   }

   c=x-80;
   d=y-80;
   inpwin=9;
   count=lc2;
   result=0;
   for(k=1;k<=inpwin;k++)
   {

    ////CURSOR MOVEMENT AND PLACEMENT PART////

   z4:for(i=1;i>=0;i++)
    {
     cursor(c,d,1);
     var1=getch();
     if(var1==0)
     {
      var2=getch();
      if(var2=='H')
      {
       cursor(c,d,0);
       d=d-80;
       if(d<y-80)
       {
       d=y-80;
       }
       else
       {
       }
      }
      else if(var2=='P')
      {
       cursor(c,d,0);
       d=d+80;
       if(d>y+80)
       {
       d=y+80;
       }
       else
       {
       }
      }
      else if(var2=='K')
      {
       cursor(c,d,0);
       c=c-80;
       if(c<x-80)
       {
       c=x-80;
       }
       else
       {
       }
      }
      else if(var2=='M')
      {
       cursor(c,d,0);
       c=c+80;
       if(c>x+80)
       {
       c=x+80;
       }
       else
       {
       }
      }
      else
      {
      }
     }
     else if(var1==13)
     {
     break;
     }
     else
     {
     }
    }

    ////INPUT PART////

    if(d==y-80)                        //////////////
    {
     if(c==x-80)
     {

      if(marks[0][0]==0)
      {
       if(count%2==0)
       {
       round(c,d);
       marks[0][0]=2;
       }
       else
       {
       cross(c,d);
       marks[0][0]=1;
       }
       count++;
      }
      else
      {
      goto z4;
      }

     }
     else if(c==x)
     {

      if(marks[0][1]==0)
      {
       if(count%2==0)
       {
       round(c,d);
       marks[0][1]=2;
       }
       else
       {
       cross(c,d);
       marks[0][1]=1;
       }
       count++;
      }
      else
      {
      goto z4;
      }

     }
     else if(c==x+80)
     {

      if(marks[0][2]==0)
      {
       if(count%2==0)
       {
       round(c,d);
       marks[0][2]=2;
       }
       else
       {
       cross(c,d);
       marks[0][2]=1;
       }
       count++;
      }
      else
      {
      goto z4;
      }

     }
    }
    else if(d==y)                   /////////////
    {
     if(c==x-80)
     {

      if(marks[1][0]==0)
      {
       if(count%2==0)
       {
       round(c,d);
       marks[1][0]=2;
       }
       else
       {
       cross(c,d);
       marks[1][0]=1;
       }
       count++;
      }
      else
      {
      goto z4;
      }

     }
     else if(c==x)
     {

      if(marks[1][1]==0)
      {
       if(count%2==0)
       {
       round(c,d);
       marks[1][1]=2;
       }
       else
       {
       cross(c,d);
       marks[1][1]=1;
       }
       count++;
      }
      else
      {
      goto z4;
      }

     }
     else if(c==x+80)
     {

      if(marks[1][2]==0)
      {
       if(count%2==0)
       {
       round(c,d);
       marks[1][2]=2;
       }
       else
       {
       cross(c,d);
       marks[1][2]=1;
       }
       count++;
      }
      else
      {
      goto z4;
      }

     }
    }
    else if(d==y+80)                  ///////////
    {
     if(c==x-80)
     {

      if(marks[2][0]==0)
      {
       if(count%2==0)
       {
       round(c,d);
       marks[2][0]=2;
       }
       else
       {
       cross(c,d);
       marks[2][0]=1;
       }
       count++;
      }
      else
      {
      goto z4;
      }

     }
     else if(c==x)
     {

      if(marks[2][1]==0)
      {
       if(count%2==0)
       {
       round(c,d);
       marks[2][1]=2;
       }
       else
       {
       cross(c,d);
       marks[2][1]=1;
       }
       count++;
      }
      else
      {
      goto z4;
      }

     }
     else if(c==x+80)
     {

      if(marks[2][2]==0)
      {
       if(count%2==0)
       {
       round(c,d);
       marks[2][2]=2;
       }
       else
       {
       cross(c,d);
       marks[2][2]=1;
       }
       count++;
      }
      else
      {
      goto z4;
      }

     }
    }

    ////CHECKING PART////

    if(marks[0][0]==marks[1][1])
    {
     if(marks[0][0]==marks[2][2])
     {
      if(marks[0][0]==0)
      {
      }
      else
      {
       inpwin=0;
       result=marks[0][0];

       setcolor(1);
       setlinestyle(SOLID_LINE,1,1);
       line(x-170,y-170,x+170,y+170);
      }
     }
     else
     {
     }
    }
    else
    {
    }

    if(marks[0][2]==marks[1][1])
    {
     if(marks[0][2]==marks[2][0])
     {
      if(marks[0][2]==0)
      {
      }
      else
      {
       inpwin=0;
       result=marks[0][2];

       setcolor(1);
       setlinestyle(SOLID_LINE,1,1);
       line(x+170,y-170,x-170,y+170);
      }
     }
     else
     {
     }
    }
    else
    {
    }

     for(j=0;j<3;j++)
     {
      if(marks[j][0]==marks[j][1])
      {
       if(marks[j][0]==marks[j][2])
       {
	if(marks[j][0]==0)
	{
	}
	else
	{
	 inpwin=0;
	 result=marks[j][0];

	 if(j==0)
	 {
	 setcolor(1);
	 setlinestyle(SOLID_LINE,1,3);
	 line(x-170,y-80,x+170,y-80);
	 }
	 else if(j==1)
	 {
	 setcolor(1);
	 setlinestyle(SOLID_LINE,1,3);
	 line(x-170,y,x+170,y);
	 }
	 else
	 {
	 setcolor(1);
	 setlinestyle(SOLID_LINE,1,3);
	 line(x-170,y+80,x+170,y+80);
	 }

	}
       }
       else
       {
       }
      }
      else
      {
      }
     }
     for(j=0;j<3;j++)
     {
      if(marks[0][j]==marks[1][j])
      {
       if(marks[0][j]==marks[2][j])
       {
	if(marks[0][j]==0)
	{
	}
	else
	{
	 inpwin=0;
	 result=marks[0][j];

	 if(j==0)
	 {
	 setcolor(1);
	 setlinestyle(SOLID_LINE,1,3);
	 line(x-80,y-170,x-80,y+170);
	 }
	 else if(j==1)
	 {
	 setcolor(1);
	 setlinestyle(SOLID_LINE,1,3);
	 line(x,y-170,x,y+170);
	 }
	 else
	 {
	 setcolor(1);
	 setlinestyle(SOLID_LINE,1,3);
	 line(x+80,y-170,x+80,y+170);
	 }

	}
       }
       else
       {
       }
      }
      else
      {
      }

     }

   }

   delay(1000);
   setcolor(15);
   settextstyle(TRIPLEX_FONT,0,3);
   sprintf(msg,"Player 1: %d",score[0]);
   outtextxy(x-230,y-50,msg);
   sprintf(msg,"Player 2: %d",score[1]);
   outtextxy(x+230,y-50,msg);

   if(result==1)
   {
   score[0]++;

   setcolor(4);
   settextstyle(TRIPLEX_FONT,0,3);
   sprintf(msg,"Player 1: %d",score[0]);
   outtextxy(x-230,y-50,msg);
   sprintf(msg,"Player 2: %d",score[1]);
   outtextxy(x+230,y-50,msg);

   setcolor(1);
   settextjustify(1,1);
   settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
   outtextxy(x,y+150,"Player 1 wins");
   }
   else if(result==2)
   {
   score[1]++;

   setcolor(4);
   settextstyle(TRIPLEX_FONT,0,3);
   sprintf(msg,"Player 1: %d",score[0]);
   outtextxy(x-230,y-50,msg);
   sprintf(msg,"Player 2: %d",score[1]);
   outtextxy(x+230,y-50,msg);

   setcolor(5);
   settextjustify(1,1);
   settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
   outtextxy(x,y+150,"Player 2 wins");
   }
   else
   {
   setcolor(8);
   settextjustify(1,1);
   settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
   outtextxy(x,y+150,"Draw");
   }
   delay(1000);
  }
  void cross(int m,int n)
  {
   setcolor(12);
   setlinestyle(SOLID_LINE,1,3);
   line(m-25,n-25,m+25,n+25);
   line(m+25,n-25,m-25,n+25);
  }
  void round(int m,int n)
  {
   setcolor(12);
   setlinestyle(SOLID_LINE,1,3);
   circle(m,n,25);
  }
  void cursor(int m,int n,int o)
  {
   if(o==1)
   {
   setcolor(5);
   }
   else
   {
   setcolor(15);
   }
   setlinestyle(SOLID_LINE,1,3);
   rectangle(m-33,n-33,m+33,n+33);
  }
  void design()
  {
   setlinestyle(DOTTED_LINE,1,3);
   setcolor(4);
   rectangle(x-310,y-230,x+310,y+230);
   setcolor(12);
   rectangle(x-309,y-229,x+309,y+229);
   setcolor(14);
   rectangle(x-308,y-228,x+308,y+228);
  }
};
 void main()
{
 int gd=DETECT,gm,a,b,lc1=1;
 char endc;
 initgraph(&gd,&gm,"C:\\TC\\bgi");
 a=getmaxx()/2;
 b=getmaxy()/2;

 tictactoe ob;

 z1:ob.game(lc1);
 cleardevice();
 ob.design();

 setcolor(7);
 settextjustify(1,1);
 settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
 outtextxy(a,b,"Play Again ?(Y/N)");
 z2:endc=getch();
 if((endc=='Y')||(endc=='y'))
 {
 lc1++;
 goto z1;
 }
 else if((endc=='N')||(endc=='n'))
 {
 }
 else
 {
 goto z2;
 }

 closegraph();
}