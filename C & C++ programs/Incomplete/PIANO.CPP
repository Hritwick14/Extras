#include<stdio.h>
#include<conio.h>
#include<dos.h>
 class tune
{
 public:
  void A(int m)
  {
   if(m==0)
   {
    sound(27);
    delay(100);
    nosound();
   }
   else if(m==1)
   {
    sound(55);
    delay(100);
    nosound();
   }
   else if(m==2)
   {
    sound(110);
    delay(100);
    nosound();
   }
   else if(m==3)
   {
    sound(220);
    delay(100);
    nosound();
   }
   else if(m==4)
   {
    sound(440);
    delay(100);
    nosound();
   }
   else if(m==5)
   {
    sound(880);
    delay(100);
    nosound();
   }
   else if(m==6)
   {
    sound(1760);
    delay(100);
    nosound();
   }
   else if(m==7)
   {
    sound(3520);
    delay(100);
    nosound();
   }
   else
   {
   }
  }
  void B(int m)
  {
   if(m==0)
   {
    sound(30);
    delay(100);
    nosound();
   }
   else if(m==1)
   {
    sound(61);
    delay(100);
    nosound();
   }
   else if(m==2)
   {
    sound(123);
    delay(100);
    nosound();
   }
   else if(m==3)
   {
    sound(246);
    delay(100);
    nosound();
   }
   else if(m==4)
   {
    sound(493);
    delay(100);
    nosound();
   }
   else if(m==5)
   {
    sound(987);
    delay(100);
    nosound();
   }
   else if(m==6)
   {
    sound(1975);
    delay(100);
    nosound();
   }
   else if(m==7)
   {
    sound(3951);
    delay(100);
    nosound();
   }
   else
   {
   }
  }
  void C(int m)
  {
   if(m==1)
   {
    sound(32);
    delay(100);
    nosound();
   }
   else if(m==2)
   {
    sound(65);
    delay(100);
    nosound();
   }
   else if(m==3)
   {
    sound(130);
    delay(100);
    nosound();
   }
   else if(m==4)
   {
    sound(261);
    delay(100);
    nosound();
   }
   else if(m==5)
   {
    sound(523);
    delay(100);
    nosound();
   }
   else if(m==6)
   {
    sound(1046);
    delay(100);
    nosound();
   }
   else if(m==7)
   {
    sound(2093);
    delay(100);
    nosound();
   }
   else if(m==8)
   {
    sound(4186);
    delay(100);
    nosound();
   }
   else
   {
   }
  }
  void D(int m)
  {
   if(m==1)
   {
    sound(36);
    delay(100);
    nosound();
   }
   else if(m==2)
   {
    sound(73);
    delay(100);
    nosound();
   }
   else if(m==3)
   {
    sound(146);
    delay(100);
    nosound();
   }
   else if(m==4)
   {
    sound(293);
    delay(100);
    nosound();
   }
   else if(m==5)
   {
    sound(587);
    delay(100);
    nosound();
   }
   else if(m==6)
   {
    sound(1174);
    delay(100);
    nosound();
   }
   else if(m==7)
   {
    sound(2349);
    delay(100);
    nosound();
   }
   else
   {
   }
  }
  void E(int m)
  {
   if(m==1)
   {
    sound(41);
    delay(100);
    nosound();
   }
   else if(m==2)
   {
    sound(82);
    delay(100);
    nosound();
   }
   else if(m==3)
   {
    sound(164);
    delay(100);
    nosound();
   }
   else if(m==4)
   {
    sound(329);
    delay(100);
    nosound();
   }
   else if(m==5)
   {
    sound(659);
    delay(100);
    nosound();
   }
   else if(m==6)
   {
    sound(1318);
    delay(100);
    nosound();
   }
   else if(m==7)
   {
    sound(2637);
    delay(100);
    nosound();
   }
   else
   {
   }
  }
  void F(int m)
  {
   if(m==1)
   {
    sound(43);
    delay(100);
    nosound();
   }
   else if(m==2)
   {
    sound(87);
    delay(100);
    nosound();
   }
   else if(m==3)
   {
    sound(174);
    delay(100);
    nosound();
   }
   else if(m==4)
   {
    sound(349);
    delay(100);
    nosound();
   }
   else if(m==5)
   {
    sound(698);
    delay(100);
    nosound();
   }
   else if(m==6)
   {
    sound(1396);
    delay(100);
    nosound();
   }
   else if(m==7)
   {
    sound(2793);
    delay(100);
    nosound();
   }
   else
   {
   }
  }
  void G(int m)
  {
   if(m==1)
   {
    sound(49);
    delay(100);
    nosound();
   }
   else if(m==2)
   {
    sound(98);
    delay(100);
    nosound();
   }
   else if(m==3)
   {
    sound(196);
    delay(100);
    nosound();
   }
   else if(m==4)
   {
    sound(392);
    delay(100);
    nosound();
   }
   else if(m==5)
   {
    sound(783);
    delay(100);
    nosound();
   }
   else if(m==6)
   {
    sound(1568);
    delay(100);
    nosound();
   }
   else if(m==7)
   {
    sound(3136);
    delay(100);
    nosound();
   }
   else
   {
   }
  }
  void Sharp(int m,char var)
  {
   if(m==0)
   {
    if(var=='u')
    {
     sound(29);
     delay(100);
     nosound();
    }
    else
    {
    }
   }
   else if(m==1)
   {
    if(var=='w')
    {
     sound(34);
     delay(100);
     nosound();
    }
    else if(var=='e')
    {
     sound(38);
     delay(100);
     nosound();
    }
    else if(var=='t')
    {
     sound(46);
     delay(100);
     nosound();
    }
    else if(var=='y')
    {
     sound(51);
     delay(100);
     nosound();
    }
    else if(var=='u')
    {
     sound(58);
     delay(100);
     nosound();
    }
    else
    {
    }
   }
   else if(m==2)
   {
    if(var=='w')
    {
     sound(69);
     delay(100);
     nosound();
    }
    else if(var=='e')
    {
     sound(77);
     delay(100);
     nosound();
    }
    else if(var=='t')
    {
     sound(92);
     delay(100);
     nosound();
    }
    else if(var=='y')
    {
     sound(103);
     delay(100);
     nosound();
    }
    else if(var=='u')
    {
     sound(116);
     delay(100);
     nosound();
    }
    else
    {
    }
   }
   else if(m==3)
   {
    if(var=='w')
    {
     sound(138);
     delay(100);
     nosound();
    }
    else if(var=='e')
    {
     sound(155);
     delay(100);
     nosound();
    }
    else if(var=='t')
    {
     sound(185);
     delay(100);
     nosound();
    }
    else if(var=='y')
    {
     sound(207);
     delay(100);
     nosound();
    }
    else if(var=='u')
    {
     sound(233);
     delay(100);
     nosound();
    }
    else
    {
    }
   }
   else if(m==4)
   {
    if(var=='w')
    {
     sound(277);
     delay(100);
     nosound();
    }
    else if(var=='e')
    {
     sound(311);
     delay(100);
     nosound();
    }
    else if(var=='t')
    {
     sound(369);
     delay(100);
     nosound();
    }
    else if(var=='y')
    {
     sound(415);
     delay(100);
     nosound();
    }
    else if(var=='u')
    {
     sound(466);
     delay(100);
     nosound();
    }
    else
    {
    }
   }
   else if(m==5)
   {
    if(var=='w')
    {
     sound(554);
     delay(100);
     nosound();
    }
    else if(var=='e')
    {
     sound(622);
     delay(100);
     nosound();
    }
    else if(var=='t')
    {
     sound(739);
     delay(100);
     nosound();
    }
    else if(var=='y')
    {
     sound(830);
     delay(100);
     nosound();
    }
    else if(var=='u')
    {
     sound(932);
     delay(100);
     nosound();
    }
    else
    {
    }
   }
   else if(m==6)
   {
    if(var=='w')
    {
     sound(1108);
     delay(100);
     nosound();
    }
    else if(var=='e')
    {
     sound(1244);
     delay(100);
     nosound();
    }
    else if(var=='t')
    {
     sound(1480);
     delay(100);
     nosound();
    }
    else if(var=='y')
    {
     sound(1661);
     delay(100);
     nosound();
    }
    else if(var=='u')
    {
     sound(1864);
     delay(100);
     nosound();
    }
    else
    {
    }
   }
   else if(m==7)
   {
    if(var=='w')
    {
     sound(2217);
     delay(100);
     nosound();
    }
    else if(var=='e')
    {
     sound(2489);
     delay(100);
     nosound();
    }
    else if(var=='t')
    {
     sound(2960);
     delay(100);
     nosound();
    }
    else if(var=='y')
    {
     sound(3322);
     delay(100);
     nosound();
    }
    else if(var=='u')
    {
     sound(3729);
     delay(100);
     nosound();
    }
    else
    {
    }

   }
   else
   {
   }
  }
};
 void main()
{
 int i,j=0,m2=4;
 char var1;
 char hapb[100]={"4gz4g#"};
 clrscr();
 tune ob;

 i=0;
 j=0;
 while(i==0)
 {
  if(hapb[j]=='#')
  {
   hapb[j]=13;
  }
  else
  {
  }

  //var1=hapb[j];
  var1=getche();
  j++;

  if(var1=='a')
  {
   ob.C(m2);
  }
  else if(var1=='s')
  {
   ob.D(m2);
  }
  else if(var1=='d')
  {
   ob.E(m2);
  }
  else if(var1=='f')
  {
   ob.F(m2);
  }
  else if(var1=='g')
  {
   ob.G(m2);
  }
  else if(var1=='h')
  {
   ob.A(m2);
  }
  else if(var1=='j')
  {
   ob.B(m2);
  }
  else if((var1=='w')||(var1=='e')||(var1=='t')||(var1=='y')||(var1=='u'))
  {
   ob.Sharp(m2,var1);
  }
  else
  {
  }

  if(var1==13)
  {
  i=1;
  }
  else
  {
  }

  if(var1=='0')
  {
  m2=0;
  }
  else if(var1=='1')
  {
  m2=1;
  }
  else if(var1=='2')
  {
  m2=2;
  }
  else if(var1=='3')
  {
  m2=3;
  }
  else if(var1=='4')
  {
  m2=4;
  }
  else if(var1=='5')
  {
  m2=5;
  }
  else if(var1=='6')
  {
  m2=6;
  }
  else if(var1=='7')
  {
  m2=7;
  }
  else if(var1=='8')
  {
  m2=8;
  }
  else
  {
  }
 }

 nosound();
 getch();
}