#include<stdio.h>
#include<conio.h>
 void main()
{
 int x,y;
 char a,b;
 clrscr();
 printf("Press ESC to close\n");
 x:a=getch();
 if(a==0)
 {
  b=getch();
  if(b=='H')
  {
  x=wherex();
  y=wherey();
  gotoxy(x,y-1);
  goto x;
  }
  else if(b=='P')
  {
  x=wherex();
  y=wherey();
  gotoxy(x,y+1);
  goto x;
  }
  else if(b=='K')
  {
  x=wherex();
  y=wherey();
  gotoxy(x-1,y);
  goto x;
  }
  else if(b=='M')
  {
  x=wherex();
  y=wherey();
  gotoxy(x+1,y);
  goto x;
  }
  else
  {
  goto x;
  }
 }
 else if(a==27)
 {
 }
 else if(a==13)
 {
 x=wherex();
 y=wherey();
 gotoxy(1,y+1);
 goto x;
 }
 else if(a==8)            // gotoxy(80,25) bottom right position
 {
 x=wherex();
 y=wherey();
  if(x==1)
  {
  gotoxy(80,y-1);
  printf(" ");
  gotoxy(80,y-1);
  goto x;
  }
  else
  {
  printf("\b \b");
  goto x;
  }
 }
 else
 {
 printf("%c",a);
 goto x;
 }
}