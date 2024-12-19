#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
#include<stdio.h>
#include<stdlib.h>
 class snake                             //getmaxx()=639 getmaxy()=479
{                                 //up = H  down = P  left = K   right = M
 int x,y,i,j,k,a,b,end,dir,cur,exitc,instc,scbc,score,life,fx,fy,bx,by,hx,hy;
 int check1,check2,check3,check4,check5,snkbdcou,snkbx[500],snkby[500],btime;
 int foodc;
 char msg1[20],var1,var2,msg2[20];
 public:
 int instructions()
 {
  cleardevice();

  setcolor(2);
  settextjustify(1,1);
  settextstyle(TRIPLEX_FONT,0,4);
  outtextxy(x-50,y-170,"INSTRUCTIONS");

  setcolor(6);
  settextjustify(0,1);
  settextstyle(DEFAULT_FONT,0,1);
  outtextxy(x-200,y-100,"Use the arrow keys on your keyboard to");
  outtextxy(x-200,y-90,"direct the snake around the screen and eat");
  outtextxy(x-200,y-80,"the red dots.");
  outtextxy(x-200,y-60,"The more red dots the snake eats, the longer");
  outtextxy(x-200,y-50,"it will become and the more points you will");
  outtextxy(x-200,y-40,"get.");
  outtextxy(x-200,y-20,"Becareful not to direct the snake into its own");
  outtextxy(x-200,y-10,"tail!");

  setcolor(10);
  settextjustify(1,1);
  settextstyle(DEFAULT_FONT,0,1);
  outtextxy(x+150,y+100,"Press ENTER to go back");
  z4:instc=getch();
  if(instc==13)
  {
  return 1;
  }
  else
  {
  goto z4;
  }
 }

 int scoreboard()
 {
  cleardevice();

  setcolor(11);
  settextjustify(1,1);
  settextstyle(TRIPLEX_FONT,0,4);
  outtextxy(x,y-170,"SCOREBOARD");

  setcolor(8);
  rectangle(x-204,y-124,x+204,y+104);
  rectangle(x-202,y-122,x+202,y+102);
  rectangle(x-200,y-120,x+200,y+100);



  setcolor(10);
  settextjustify(1,1);
  settextstyle(DEFAULT_FONT,0,1);
  outtextxy(x+150,y+150,"Press ENTER to go back");
  z5:scbc=getch();
  if(scbc==13)
  {
  return 1;
  }
  else
  {
  goto z5;
  }
 }

 int intro()
 {
  score=0;
  life=3;
  snkbdcou=4;
  check1=1;
  check2=1;
  check3=1;
  check4=1;
  foodc=0;
  check5=11;
  btime=0;

  for(i=499-snkbdcou;i<500;i++)
  {
  snkbx[i]=500;
  snkby[i]=500;
  }

  x=getmaxx()/2;
  y=getmaxy()/2;
  cleardevice();
  setbkcolor(15);

  setcolor(14);
  settextjustify(1,1);
  settextstyle(TRIPLEX_FONT,0,9);
  outtextxy(x,y-200,"SNAKE");
  setcolor(12);
  outtextxy(x+2,y-199,"SNAKE");
  setcolor(4);
  outtextxy(x+4,y-198,"SNAKE");

  setcolor(3);
  settextjustify(0,1);
  settextstyle(TRIPLEX_FONT,0,4);
  outtextxy(x-80,y-20,"START");
  outtextxy(x-80,y+15,"SCOREBOARD");
  outtextxy(x-80,y+50,"INSTRUCTIONS");
  outtextxy(x-80,y+85,"EXIT");

  cur=-20;
  settextjustify(1,1);
  settextstyle(TRIPLEX_FONT,0,3);
  z1:setcolor(1);
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
    if(cur<=-20)
    {
    cur=-20;
    }
    else
    {
    }
    goto z1;
   }
   else if(var2=='P')
   {
    setcolor(15);
    outtextxy(x-100,y+cur,"->");
    cur=cur+35;
    if(cur>=85)
    {
    cur=85;
    }
    else
    {
    }
    goto z1;
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
   goto z1;
  }

  if(cur==-20)
  {
  return 1;
  }
  else if(cur==15)
  {
  return 2;
  }
  else if(cur==50)
  {
  return 3;
  }
  else if(cur==85)
  {
  return 4;
  }
  else
  {
  }
 }

 void food()
 {
  if((a==fx*5)&&(b==fy*5))
  {
   check1=1;
   score+=5;
   snkbdcou++;
   foodc++;
   if(snkbdcou>=500)
   {
   snkbdcou=449;
   }
   else
   {
   }
  }
  else
  {
  }

  if(check2==1)
  {
  randomize();
  check2=0;
  }
  else
  {
  }
  if(check1==1)
  {
  fx=random((615/5)-(20/5))+(20/5);
  fy=random((445/5)-(90/5))+(90/5);
  check1=0;
  }
  else
  {
  }
  setfillstyle(SOLID_FILL,12);
  bar(fx*5,fy*5,(fx*5)+5,(fy*5)+5);
 }

 void bonus()
 {
  setcolor(4);
  settextjustify(1,1);
  settextstyle(TRIPLEX_FONT,0,3);
  outtextxy(x-10,y-200,"BONUS-");
  setcolor(13);
  settextjustify(2,1);
  sprintf(msg1,"%d",btime/1000);
  outtextxy(x+70,y-200,msg1);

  if(check3==1)
  {
   bx=random((615/5)-(20/5))+(20/5);
   by=random((445/5)-(90/5))+(90/5);
   check3=0;
  }
  else
  {
  }

  if((a==bx*5)&&(b==by*5))
  {
   score+=20;
   life++;
   check3=1;
   btime=0;
   if(life>=5)
   {
   life=5;
   }
   else
   {
   }
   goto z5;
  }
  else
  {
  }

  setfillstyle(SOLID_FILL,14);
  bar(bx*5,by*5,(bx*5)+5,(by*5)+5);
  z5: ;
 }

 void display(int m,int n)
 {
  setcolor(7);
  for(i=0;i<=4;i++)
  {
  rectangle((x-315)-i,(y-235)-i,(x+315)+i,(y+235)+i);
  }
  setcolor(9);
  rectangle(19,89,621,451);     //grid  20,90,615,445

  setcolor(4);
  settextjustify(1,1);
  settextstyle(TRIPLEX_FONT,0,3);
  outtextxy(x-250,y-200,"LIFE-");
  outtextxy(x+150,y-200,"SCORE-");

  food();

  if(foodc==0)
  {
  }
  else
  {
   if((foodc%10==0)&&(check4==1))
   {
    btime=10000;
    check4=0;
   }
   else
   {
   }
  }

  if(foodc==check5)
  {
  check4=1;
  check5+=10;
  }
  else
  {
  }

  if(btime==0)
  {
  }
  else
  {
  bonus();
   if(btime==0)
   {
   }
   else
   {
   btime-=100;
   }
  }

  setcolor(13);
  settextjustify(2,1);
  sprintf(msg1,"%d",score);
  outtextxy(x+250,y-200,msg1);
  heart(life);

  setcolor(10);
  settextjustify(1,1);
  settextstyle(DEFAULT_FONT,0,1);
  outtextxy(x+170,y+225,"Press ESC to go back to Main Menu");

  snk(m,n);

 }

 void snk(int c,int d)
 {
  snkbx[499]=c;
  snkby[499]=d;

  for(i=499-snkbdcou;i<499;i++)
  {
   snkbx[i]=snkbx[i+1];
   snkby[i]=snkby[i+1];
  }

  setcolor(15);
  setfillstyle(SOLID_FILL,9);
  for(i=499-snkbdcou;i<499;i++)
  {
   bar3d(snkbx[i],snkby[i],snkbx[i]+5,snkby[i]+5,0,0);
  }

  for(i=499-snkbdcou;i<=494;i++)
  {
   if((snkbx[498]==snkbx[i])&&(snkby[498]==snkby[i]))
   {
    delay(500);
    life--;
    snkbdcou=4;
   }
   else
   {
   }
  }

  if(life==0)
  {
  end=1;
  }
  else
  {
  }

 }

 void game()
 {
  cleardevice();
  setbkcolor(0);

  end=0;
  a=25;
  b=100;
  dir=4;
  for(k=0;end==0;k++)   //loop end control
  {

   display(a,b);

   if(kbhit()!=0)
   {
    var1=getch();
    if(var1==0)
    {
     var2=getch();
     if(var2=='H')
     {
      if(dir!=2)
      {
      dir=1;
      }
      else
      {
      }
     }
     else if(var2=='P')
     {
      if(dir!=1)
      {
      dir=2;
      }
      else
      {
      }
     }
     else if(var2=='K')
     {
      if(dir!=4)
      {
      dir=3;
      }
      else
      {
      }
     }
     else if(var2=='M')
     {
      if(dir!=3)
      {
      dir=4;
      }
      else
      {
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
   else
   {
   }

   if(dir==1)
   {
   b-=5;
   }
   else if(dir==2)
   {
   b+=5;
   }
   else if(dir==3)
   {
   a-=5;
   }
   else if(dir==4)
   {
   a+=5;
   }
   else
   {
   }

   if(a>615)
   {
   a=20;
   }
   else if(a<20)
   {
   a=615;
   }
   else
   {
   }

   if(b>445)
   {
   b=90;
   }
   else if(b<90)
   {
   b=445;
   }
   else
   {
   }

   if(end==1)
   {
   setcolor(14);
   settextjustify(1,1);
   settextstyle(TRIPLEX_FONT,0,8);
   outtextxy(x,y,"GAME OVER");
   delay(1000);
   }
   else
   {
   }

   delay(100);
   cleardevice();
  }

 }
 void heart(int o)
 {
  hx=x-200;
  hy=y-200;
  for(i=1;i<=o;i++)
  {
   line(hx-10,hy,hx,hy+10);
   line(hx,hy+10,hx+10,hy);
   arc(hx-5,hy,0,180,5);
   arc(hx+5,hy,0,180,5);
   setfillstyle(SOLID_FILL,13);
   floodfill(hx,hy+2,13);
   hx+=25;
  }
 }
 int exit()
 {
  cleardevice();
  setcolor(10);
  settextjustify(1,1);
  settextstyle(TRIPLEX_FONT,0,4);
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
};
 void main()
{
 int gd=DETECT,gm,introc;
 clrscr();
 initgraph(&gd,&gm,"C:\\TC\\bgi");
 snake ob;
 z3: introc=ob.intro();
 if(introc==1)
 {
 ob.game();
 goto z3;
 }
 else if(introc==2)
 {
  if(ob.scoreboard()==1)
  {
  goto z3;
  }
  else
  {
  }
 }
 else if(introc==3)
 {
  if(ob.instructions()==1)
  {
  goto z3;
  }
  else
  {
  }
 }
 else if(introc==4)
 {
  if(ob.exit()==0)
  {
  goto z3;
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