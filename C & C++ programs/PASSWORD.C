#include<stdio.h>
#include<conio.h>
#include<dos.h>
 void main()
{
 int i,j;
 char a[10];
 y:clrscr();
     //-----------------decoration part------------
 printf("                      %c",213);
 for(i=1;i<=30;i++)
 {
 printf("%c",205);
 }
 printf("%c",184);		 //upper corner right --- 54 1
 gotoxy(54-31,2);
 printf("%c",179);
 gotoxy(54,2);
 printf("%c",179);
 gotoxy(54-31,3);
 printf("%c",212);
 for(i=1;i<=30;i++)
 {
 printf("%c",205);
 }
 printf("%c",190);
 gotoxy(55,1);
 printf("\n");
	  //---------------------------------------
 printf("Enter Password [5-10]:");
 gotoxy(54-30,2);
 j=10;
 for(i=0;i<j;i++)
 {
  x:a[i]=getch();
  if(a[i]==27)
  {
  printf(" Invalid input: ESC ");
  delay(1000);
  printf("\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b");
  printf("                    ");
  printf("\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b");
  j++;
  }
  else if(a[i]==8)
  {
  printf("\b \b");
  i--;
  a[i]=0;
  goto x;
  }
  else if(a[i]==13)
  {
  j=0;
  }
  else
  {
  printf("*");
  }
 }
 if((i==1)&&(i<=5))
 {
 printf("\n\n\t\t\tNo password");
 delay(1000);
 goto y;
 }
 else if(i<=5)
 {
 printf("\n\n\t\t\tPassword too short");
 delay(1000);
 goto y;
 }
 else
 {
 }
 printf("\n\n");
 printf("Your password is:");
 j=10;
 for(i=0;i<j;i++)
 {
  if(a[i]==27)
  {
  j++;
  }
  else if(a[i]==13)
  {
  j=0;
  }
  else
  {
  putch(a[i]);
  }
 }
 getch();
}