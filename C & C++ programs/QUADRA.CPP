#include<stdio.h>
#include<conio.h>
#include<math.h>
 void main()
{
 float a,b,c;
 double dt,alpha,beta;
 clrscr();

 printf("Enter the co-efficiants:\n");
 printf("a=");
 scanf("%f",&a);
 printf("b=");
 scanf("%f",&b);
 printf("c=");
 scanf("%f",&c);

 dt=(b*b)-(4*a*c);
 if(dt<0)
 {
  printf("Roots are imaginary\n\n");

  printf("Roots:\nalpha= %f + %fi\nbeta= %f - %fi",-b/(2*a),sqrt(dt*-1)/(2*a),-b/(2*a),sqrt(dt*-1)/(2*a));
 }
 else
 {
  printf("Roots are real\n\n");

  alpha=(-b+sqrt(dt))/(2*a);
  beta=(-b-sqrt(dt))/(2*a);
  printf("Roots:\nalpha= %f\nbeta= %f",alpha,beta);
 }

 getch();
}