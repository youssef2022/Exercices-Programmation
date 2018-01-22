#include <stdio.h>

void tri(int tab[],int size){
	
	int i,j,temp;
	
	for(i=1;i<size;i++){
		
		for(j=0;j<size-i;j++){
			
			if(tab[j]>tab[j+1]){
				
				temp=tab[j];
				tab[j]=tab[j+1];
				tab[j+1]=temp;
			}
		}
	}
}

int main(){
	
	int tab[10],size,i;
	
	printf("Entrez la taille du tableau : ");
	scanf("%d",&size);
	
	printf("Inserez %d valeur : \n",size);
	i=0;
	
	while(i<size){
		scanf("%d",&tab[i]);
		i++;
	}
	
	printf("Tableau avant tri \n");
	for(i=0;i<size;i++){
		
		printf("%d  ",tab[i]);
	}
	
	printf("\nTableau apres tri \n");
	
	tri(tab,size);
	
	for(i=0;i<size;i++){
		
		printf("%d  ",tab[i]);
	}
	
	return 0;
	
}

