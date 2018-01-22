#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	float x,a,b,c,d,x1,x2;
	printf("Donner la valeur de a :");
	scanf("%f",&a);
	printf("Donner la valeur de b :");
	scanf("%f",&b);
	printf("Donner la valeur de c :");
	scanf("%f",&c);
	if(a==0)
		{
		if(b==0)
			{
 	 		if(c==0)
 	 		{
  			printf("Ensemble des solutions est R");
  			}	
  		
		else 
	{
  	printf ("Equation impossible");
  	}
else
{
x=-c/b;
printf("La solutions est :%f",x);
}
}
else
{
d=b*b-4*a*c;
   if (d > 0)
	{
	x1=(-b-d^(1/2))/2*a;
	x2=(-b+d^(1/2))/2*a;
	printf("Les 2 solutions sont :%f"x1,x2);
	}
	else if (d = 0)
	{
	x=-b/2*a;
	printf("La solution est :%f",x);
	}
	else
	{
	printf("Equation impossible");
	}
	}
printf("\n");
system("Pause");
return 0;
}

