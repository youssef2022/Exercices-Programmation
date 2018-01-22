#include <stdio.h>

// Table de multiplication

int main()
{
	int nb,i,lim;
	
	printf("Veuillez inserez une valeur \n");
	scanf("%d",&nb);
	
	printf("Veuillez inserez une valeur de multiplication limite\n");
	scanf("%d",&lim);
	
	if(lim==0 || lim<0){
		
		printf("\nVotre valeur de multiplication doit etre au moins  egale a 1 \n VALEUR INCORRECT!\n");
		
	} else {
		
		for(i=1;i<=lim;i++){
			
			
			// Manière simplifiée
			printf("\n%d * %d = %d \n",nb,i,nb*i);
		}
	}
	
	return 0;
	 
}
