#include <stdio.h>

void puissance(int nb, int exp){
	
	int i,p;
	
	p=1;
	
	while(i<exp){
		
		p*=nb;
		i++;
	}
	
	printf("%d",p);
}

int main(){
	
	int nb,exp;
	
	printf("entrez une valeur : ");
	scanf("%d",&nb);
	
	printf("\nEntrez un exposant : ");
	scanf("%d",&exp);
	
	puissance(nb,exp);
	
	return 0;
}
