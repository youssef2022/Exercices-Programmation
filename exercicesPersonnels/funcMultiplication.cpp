#include <stdio.h>

void multiplication(int nb){
	
	int i,mult;
	
	for(i=1;i<11;i++){
		
		mult = nb * i;
		printf("%d * %d = %d\n",i,nb,mult);
	}
}

int main(){
	
	int nb;
	printf("Entrez une valeur : ");
	scanf("%d",&nb);
	
	multiplication(nb);
	
	return 0;
}
