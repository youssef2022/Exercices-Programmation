#include <stdio.h>

void puissance(int nb,int exp)
{
	int i,p;
	p=1;
	i=1;
	
	while(i<=exp)
	{
		p=nb*p;
		i++;
	}
	printf("%d",p);
}

int main()
{
	int a,b;
	
	printf("Saisir un nombre : ");
	scanf("%d",&a);
	printf("Saisir un exposant : ");
	scanf("%d",&b);
	
	puissance(a,b);
	
return 0;
}
