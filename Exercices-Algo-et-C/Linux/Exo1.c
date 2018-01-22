#include <stdio.h>

int SommeProduit(int a,int b)
{
	int somme,produit;
	somme=0;
	produit=1;

	while(a<=b)
	{
		somme=somme+a;
		produit=produit*a;
		a++;
	}
	printf("La somme est : %d",somme);
	printf("\nLe produit est : %d",produit);
	
return 0;
}

int main()
{
	int a,b;
	
	printf("Saisir une limite a :");
	scanf("%d",&a);
	printf("Saiir une limite b :");
	scanf("%d",&b);
	
	SommeProduit(a,b);
	
return 0;
}
