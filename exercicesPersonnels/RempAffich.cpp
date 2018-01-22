#include <stdio.h>

int main()
{
	int tab[10],i;
	
	// Remplissage de tableau
	
	for(i=0;i<10;i++)
	{
		printf("Inserez une valeur %d\n",i+1);
		scanf("%d",&tab[i]);
	}
		printf("\n");
	// Affichage de tableau
	
	for(i=0;i<10;i++)
	{
		printf("Element %d = %d\n",i+1,tab[i]);
	}
	
	return 0;
}
