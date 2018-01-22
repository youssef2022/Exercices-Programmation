#include <stdio.h>

int main()
{
	int i,j,k,l,min,nb,taille,tab[3],temp;
	
	// Demande la taille du tableau
	printf("Donner la taille du tableau\n");
	scanf("%d",&taille);
	
	// Remplissage du tableau
	printf("Veuillez inserer %d elements\n",taille);
	for(k=0;k<taille;k++){
		
		printf("Element %d : ",k+1);
		scanf("%D",&tab[k]);
	}
	
	// Arbitrairement je defini la valeur minimal à la position 0
	min = tab[0];
	
	// Algorithme de tri 
	for(i=1;i<taille;i++){
		
		for(j=0;j<taille-i;j++){
			
			if(tab[j]>tab[j+1]){
				
				temp = tab[j];
				tab[j]=tab[j+1];
				tab[j+1]=temp;
			}
		}
		
	}
	
	for(l=0;l<taille;l++){
		printf("%d\n",tab[l]);
	}
	
	printf("La valeur minimale est %d\n",tab[0]);
	printf("La valeur maximale est %d",tab[taille-1]);
	
	return 0;
	
}
