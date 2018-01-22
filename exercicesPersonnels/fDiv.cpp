#include <stdio.h>

bool fDiv(int nb){
	
	int i,cpt;
	
	for(i=2;i<nb;i++){
		
		if(nb%i==0){
			
			cpt++;
		}
	}
	
	if(cpt<1){
		
		cpt = 0;
	} else {
		
		cpt = 1;
	}
	
	return(cpt);
	
}

int main()
{
	
	int nb,res;
	
	printf("Entrez un nb");
	scanf("%d",&nb);
	
	res = fDiv(nb);
	
	if(res==0){
		printf("vrai");
	}else {
		
		printf("faux");
	}
	
}
