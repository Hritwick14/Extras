#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
 class sliding
{
 int x,y,i,j,k,a,b,cur,instc,exitc,puzzmc,matrix[7][7],mnmax,matn,mtemp;
 int checkarr[49],mkcou,check1,layointz,end,macheckp,wcheck,demo[7][7];
 char var1,var2,msg[20];
 /*int checkpar[7][7],inver,temp;
 char tstmsg[20];*/

 public:
  int instructions()
 {
  cleardevice();
  design();

  setcolor(1);
  settextjustify(1,1);
  settextstyle(TRIPLEX_FONT,0,4);
  outtextxy(x-50,y-170,"INSTRUCTIONS");

  setcolor(6);
  settextjustify(0,1);
  settextstyle(DEFAULT_FONT,0,1);
  outtextxy(x-200,y-100,"The pieces are to be pushed around over the");
  outtextxy(x-200,y-90,"board until the picture is complete.");
  outtextxy(x-200,y-70,"The pieces are numbered so that you will");
  outtextxy(x-200,y-60,"know in which order they should be.");
  outtextxy(x-200,y-40,"You can move only one piece at a time,by");
  outtextxy(x-200,y-30,"pressing the arrows on keyboard.");
  outtextxy(x-200,y-10,"The numbers on each piece tells where in the");
  outtextxy(x-200,y,"puzzle it belongs, The piece marked 1 should be");
  outtextxy(x-200,y+10,"in the upper left corner of the slide puzzle");

  settextstyle(SANS_SERIF_FONT,0,1);
  outtextxy(x-200,y+30,"An example:");
  setcolor(12);
  rectangle(x-100,y+60,x-80,y+80);
  rectangle(x-120,y+60,x-100,y+80);
  rectangle(x-80,y+60,x-60,y+80);
  rectangle(x-100,y+80,x-80,y+100);
  rectangle(x-120,y+80,x-100,y+100);
  rectangle(x-80,y+80,x-60,y+100);
  rectangle(x-100,y+100,x-80,y+120);
  rectangle(x-120,y+100,x-100,y+120);
  setfillstyle(SOLID_FILL,12);
  bar(x-80,y+100,x-60,y+120);

  settextjustify(1,1);
  settextstyle(DEFAULT_FONT,0,1);
  outtextxy(x-110,y+70,"1");
  outtextxy(x-90,y+70,"2");
  outtextxy(x-70,y+70,"3");
  outtextxy(x-110,y+90,"4");
  outtextxy(x-90,y+90,"5");
  outtextxy(x-70,y+90,"6");
  outtextxy(x-110,y+110,"7");
  outtextxy(x-90,y+110,"8");

  setcolor(5);
  settextjustify(1,1);
  settextstyle(DEFAULT_FONT,0,1);
  outtextxy(x+150,y+100,"Press ENTER to go back");
  z3:instc=getch();
  if(instc==13)
  {
  return 1;
  }
  else
  {
  goto z3;
  }
 }
  void puzzle(int o)
 {
  check1=0;
  mkcou=0;
  randomize();

  if(o==1)
  {
   mnmax=8;
   matn=3;

   layointz=50;
  }
  else if(o==2)
  {
   mnmax=24;
   matn=5;

   layointz=100;
  }
  else if(o==3)
  {
   mnmax=48;
   matn=7;

   layointz=150;
  }
  else
  {
  }

  k=1;
  for(i=0;i<matn;i++)
  {
   for(j=0;j<matn;j++)
   {
    if((i==matn-1)&&(j==matn-1))
    {
     demo[i][j]=0;
    }
    else
    {
     demo[i][j]=k;
    }
    k++;
   }
  }

  for(k=0;k<=mnmax;k++)
  {
  checkarr[k]=0;
  }

  for(i=0;i<matn;i++)
  {
   for(j=0;j<matn;j++)
   {

    if((i==matn-1)&&(j==matn-1))
    {
    matrix[i][j]=0;
    }
    else
    {
     z6:mtemp=random(mnmax)+1;
     for(k=0;k<mnmax;k++)
     {
      if(checkarr[k]==mtemp)
      {
       check1=1;
      }
      else
      {
      }
     }

     if(check1==1)
     {
     check1=0;
     goto z6;
     }
     else
     {
     checkarr[mkcou]=mtemp;
     matrix[i][j]=mtemp;
     mkcou++;
     }
    }

   }
  }


 }

  int intro()
 {
  end=0;
  x=getmaxx()/2;
  y=getmaxy()/2;

  cleardevice();
  setbkcolor(15);
  design();

  settextjustify(1,1);

  setcolor(7);
  settextstyle(TRIPLEX_FONT,0,8);
  outtextxy(x,y-200,"SLIDING");
  outtextxy(x,y-130,"PUZZLE");

  setcolor(2);
  settextstyle(TRIPLEX_FONT,0,7);
  outtextxy(x-1,y-192,"SLIDING");
  outtextxy(x+1,y-192,"SLIDING");
  outtextxy(x-1,y-122,"PUZZLE");
  outtextxy(x+1,y-122,"PUZZLE");

  setcolor(8);
  outtextxy(x,y-192,"SLIDING");
  outtextxy(x,y-122,"PUZZLE");

  setcolor(4);
  settextjustify(0,1);
  settextstyle(TRIPLEX_FONT,0,4);
  outtextxy(x-80,y,"START");
  outtextxy(x-80,y+35,"INSTRUCTIONS");
  outtextxy(x-80,y+70,"EXIT");

  cur=0;
  settextjustify(1,1);
  settextstyle(TRIPLEX_FONT,0,3);
  z5:setcolor(3);
  outtextxy(x-100,y+cur,"->");

  var1=getch();
  if(var1==0)
  {
   var2=getch();
   if(var2=='H')
   {
    setcolor(15);
    outtextxy(x-100,y+cur,"->");
    cur=cur-35;
    if(cur<=0)
    {
    cur=0;
    }
    else
    {
    }
    goto z5;
   }
   else if(var2=='P')
   {
    setcolor(15);
    outtextxy(x-100,y+cur,"->");
    cur=cur+35;
    if(cur>=70)
    {
    cur=70;
    }
    else
    {
    }
    goto z5;
   }
   else
   {
   }
  }
  else if(var1==13)
  {
  }
  else
  {
  goto z5;
  }

  if(cur==0)
  {
  return 1;
  }
  else if(cur==35)
  {
  return 2;
  }
  else if(cur==70)
  {
  return 3;
  }
  else
  {
  }

 }

  int puzzlemode()
 {
  cleardevice();
  design();

  setcolor(1);
  settextjustify(1,1);
  settextstyle(GOTHIC_FONT,0,6);
  outtextxy(x,y-120,"MODE");

  setcolor(4);
  settextjustify(0,1);
  settextstyle(TRIPLEX_FONT,0,3);
  outtextxy(x-30,y-45,"EASY");
  outtextxy(x-30,y-15,"NORMAL");
  outtextxy(x-30,y+15,"HARD");

  setcolor(5);
  settextjustify(1,1);
  settextstyle(DEFAULT_FONT,0,1);
  outtextxy(x+150,y+100,"Press ESC to go back");

  cur=-45;
  settextjustify(1,1);
  settextstyle(TRIPLEX_FONT,0,1);
  z4:setcolor(3);
  outtextxy(x-50,y+cur,"->");

  var1=getch();
  if(var1==0)
  {
   var2=getch();
   if(var2=='H')
   {
    setcolor(15);
    outtextxy(x-50,y+cur,"->");
    cur=cur-30;
    if(cur<=-45)
    {
    cur=-45;
    }
    else
    {
    }
    goto z4;
   }
   else if(var2=='P')
   {
    setcolor(15);
    outtextxy(x-50,y+cur,"->");
    cur=cur+30;
    if(cur>=15)
    {
    cur=15;
    }
    else
    {
    }
    goto z4;
   }
   else
   {
   }
  }
  else if(var1==13)
  {
  }
  else if(var1==27)
  {
  return 1;
  }
  else
  {
  goto z4;
  }

  if(cur==-45)
  {
  puzzle(1);
  }
  else if(cur==-15)
  {
  puzzle(2);
  }
  else if(cur==15)
  {
  puzzle(3);
  }
  else
  {
  }

 }

  void game()
 {
  for(k=1;end==0;k++)
  {
   cleardevice();
   design();
   wcheck=1;

   setcolor(5);
   settextjustify(1,1);
   settextstyle(DEFAULT_FONT,0,1);
   outtextxy(x+150,y+200,"Press ESC to exit to Main Menu");

   a=x-layointz;
   b=y-layointz;
   for(i=0;i<matn;i++)
   {
    for(j=0;j<matn;j++)
    {
     if(matrix[i][j]==0)
     {
     setfillstyle(SOLID_FILL,9);
     bar(a-26,b-26,a+26,b+26);

     a+=50;
     }
     else
     {
     setcolor(9);
     setlinestyle(SOLID_LINE,0,3);
     rectangle(a-25,b-25,a+25,b+25);

     setcolor(12);
     settextjustify(1,1);
     settextstyle(TRIPLEX_FONT,0,3);
     sprintf(msg,"%d",matrix[i][j]);
     outtextxy(a,b,msg);

     a+=50;
     }
    }
    a=x-layointz;
    b+=50;
   }

   for(i=0;i<matn;i++)
   {
    for(j=0;j<matn;j++)
    {
     if(matrix[i][j]==demo[i][j])
     {
     }
     else
     {
      wcheck=0;
     }
    }
   }

   if(wcheck==1)
   {
    end=1;
    continue;
   }
   else
   {
   }

   macheckp=0;
   var1=getch();
   if(var1==0)
   {
    var2=getch();
    if(var2=='H')
    {

     for(i=0;i<matn;i++)
     {
      for(j=0;j<matn;j++)
      {
       if(matrix[i][j]==0)
       {
	if(macheckp==0)
	{
	 if(i<=0)
	 {
	 }
	 else
	 {
	  matrix[i][j]=matrix[i-1][j];
	  matrix[i-1][j]=0;
	 }
	}
	else
	{
	}
	macheckp++;
       }
       else
       {
       }
      }
     }

    }
    else if(var2=='P')
    {

     for(i=0;i<matn;i++)
     {
      for(j=0;j<matn;j++)
      {
       if(matrix[i][j]==0)
       {
	if(macheckp==0)
	{
	 if(i>=matn-1)
	 {
	 }
	 else
	 {
	  matrix[i][j]=matrix[i+1][j];
	  matrix[i+1][j]=0;
	 }
	}
	else
	{
	}
	macheckp++;
       }
       else
       {
       }
      }
     }

    }
    else if(var2=='K')
    {

     for(i=0;i<matn;i++)
     {
      for(j=0;j<matn;j++)
      {
       if(matrix[i][j]==0)
       {
	if(macheckp==0)
	{
	 if(j<=0)
	 {
	 }
	 else
	 {
	  matrix[i][j]=matrix[i][j-1];
	  matrix[i][j-1]=0;
	 }
	}
	else
	{
	}
	macheckp++;
       }
       else
       {
       }
      }
     }

    }
    else if(var2=='M')
    {

     for(i=0;i<matn;i++)
     {
      for(j=0;j<matn;j++)
      {
       if(matrix[i][j]==0)
       {
	if(macheckp==0)
	{
	 if(j>=matn-1)
	 {
	 }
	 else
	 {
	  matrix[i][j]=matrix[i][j+1];
	  matrix[i][j+1]=0;
	 }
	}
	else
	{
	}
	macheckp++;
       }
       else
       {
       }
      }
     }

    }
    else
    {
    }
   }
   else if(var1==27)
   {
   end=1;
   }
   else
   {
   }

  }

  ending();
  delay(1500);
 }

  void ending()
 {
  if(matn==3)
  {
   settextjustify(1,1);
   settextstyle(SCRIPT_FONT,0,8);
   setcolor(7);
   outtextxy(x,y-150,"Game Over");
   setcolor(7);
   outtextxy(x+1,y-150,"Game Over");
   setcolor(8);
   outtextxy(x+3,y-150,"Game Over");
   setcolor(8);
   outtextxy(x+4,y-150,"Game Over");
  }
  else if(matn==5)
  {
   settextjustify(1,1);
   settextstyle(SCRIPT_FONT,0,7);
   setcolor(7);
   outtextxy(x,y-180,"Game Over");
   setcolor(7);
   outtextxy(x+1,y-180,"Game Over");
   setcolor(8);
   outtextxy(x+3,y-180,"Game Over");
   setcolor(8);
   outtextxy(x+4,y-180,"Game Over");
  }
  else if(matn==7)
  {
   settextjustify(1,1);
   settextstyle(SCRIPT_FONT,0,5);
   setcolor(7);
   outtextxy(x,y-210,"Game Over");
   setcolor(7);
   outtextxy(x+1,y-210,"Game Over");
   setcolor(8);
   outtextxy(x+3,y-210,"Game Over");
   setcolor(8);
   outtextxy(x+4,y-210,"Game Over");
  }
 }

  int exit()
 {
  cleardevice();
  design();
  setcolor(5);
  settextjustify(1,1);
  settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
  outtextxy(x,y,"Are you sure ?(Y/N)");
  z2:exitc=getch();
  if((exitc=='Y')||(exitc=='y'))
  {
   return 1;
  }
  else if((exitc=='N')||(exitc=='n'))
  {
   return 0;
  }
  else
  {
   goto z2;
  }
 }

  void design()
 {
  setlinestyle(DOTTED_LINE,1,3);
  setcolor(8);
  rectangle(x-310,y-230,x+310,y+230);
  setcolor(2);
  rectangle(x-309,y-229,x+309,y+229);
  setcolor(10);
  rectangle(x-308,y-228,x+308,y+228);
  setlinestyle(SOLID_LINE,1,1);
 }
};
 void main()
{
 int gd=DETECT,gm,introc;
 clrscr();
 initgraph(&gd,&gm,"C:\\TC\\bgi");
 sliding ob;

 z1:introc=ob.intro();
 if(introc==1)
 {
  if(ob.puzzlemode()==1)
  {
  goto z1;
  }
  else
  {
  }
  ob.game();
  goto z1;
 }
 else if(introc==2)
 {
  if(ob.instructions()==1)
  {
   goto z1;
  }
  else
  {
  }
 }
 else if(introc==3)
 {
  if(ob.exit()==0)
  {
   goto z1;
  }
  else
  {
  }
 }
 else
 {
 }
 closegraph();
}