#include <stdio.h>

// Calcul du nombre Parfait
// nb est un nombre parfait si la somme de ses diviseurs sDiv SAUF lui meme
// est égale a lui meme sois nb = sDiv   

int main()
{
	int sDiv,i,nb;
	
	printf("Envoyez une valeur de test si Parfait \n");
	scanf("%d",&nb);
	sDiv=0;
	
	for(i=1;i<nb;i++) // attention sauf lui meme donc i < nb !! et pas "<="
	{
		if(nb%i==0){
			
			sDiv+=i;
		}	
	}
	
	if(sDiv==nb){
		
		printf("%d est un nombre parfait",nb);
		
	} else {
		
		printf("%d n'est pas un nombre parfait",nb);
	}
	
	return 0;
}
