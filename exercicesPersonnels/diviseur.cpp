#include <stdio.h>

// Compte le nombre de diviseurs d'un nombre

int main()
{
	int nb,i,cpt;
	
	printf("Entrez une valeur \n");
	scanf("%d",&nb);
	cpt=0;
	
	for(i=1;i<=nb;i++){
		
		if(nb%i==0){
			
			cpt++;
		}
	}
	
	printf("%d a %d diviseurs",nb,cpt);
	
	return 0;
}
