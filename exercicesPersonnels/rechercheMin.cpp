#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	int i,tab[10];
	
	//Remplissage aleatoire
	
	for(i=0;i<10;i++){
		
		tab[i]= rand();
		printf("num %d : tab[%d] = %d\n",i+1,i,tab[i]);
	}
	
	return 0;
}
