#include<stdio.h>
#include<conio.h>
 void main()
{
 FILE *fp;      //   C:\Users\ADMIN\Desktop
 clrscr();

 fp=fopen("12345678.txt","a+");
 fprintf(fp,"%s %d","\nWE ARE IN",2017);

 fclose(fp);

 getch();
}