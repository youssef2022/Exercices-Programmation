#include <stdio.h>

int nbParfait(int nb){
	
	int i,sDiv;
	sDiv=0;
	
	for(i=1;i<nb;i++){
		
		if(nb%i==0){
			
			sDiv+=i;
		}
	}
	
	return(sDiv);
	
	
}

int main(){
	
	int nb,res;
	printf("Inserez une valeur : ");
	scanf("%d",&nb);
	
	res = nbParfait(nb);
	
	if(res == nb){
		
		printf("%d est un nombre parfait",nb);
	} else {
		
		printf("%d n'est pas un nombre parfait",nb);
	}
	
	
	
	return 0;
}
