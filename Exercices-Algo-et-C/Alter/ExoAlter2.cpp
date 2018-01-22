#include<stdio.h>
#include<stdlib.h>
int main()
{
float x,a,b;
printf("Donner la valeur de a :");
scanf("%f",&a);
printf("Donner la valeur de b :");
scanf("%f",&b);
if(a==0)
{
if(b==0)
  { 
  printf("Ensemble des solutions est R");
  } else {
  printf ("Equation impossible");
  }
}
else
{
x=((-b)/a);
printf("solutions : %f",&x);
}
printf("\n");
system("Pause");
return 0;
}

