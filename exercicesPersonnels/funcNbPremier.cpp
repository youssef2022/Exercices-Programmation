#include <stdio.h>

int nbPremier(int nb){
	
	int i,c;
	c=0;
	
	for(i=1;i<=nb;i++){
		
		if(nb%i==0){			
			c++;
		}
	}	
	return(c);
}

int main(){
	
	int nb2,res;
	
	printf("Entrez un nombre :");
	scanf("%d",&nb2);
	
	res = nbPremier(nb2);
	
	if(res==2){
		
		printf("nb premier");
		
	} else {
		
		printf("pas premier");
	}	
	return 0;	
}
