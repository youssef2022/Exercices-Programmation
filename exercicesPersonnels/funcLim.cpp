#include <stdio.h>

void lim(int a, int b){
	
	int s,p,i;
	
	// On considère que a est plus petit que b 		
		s=0;
		p=1;
		for(i=a;i<=b;i++){
			
			s+=i;
			p*=i;			
		}
		
	printf("La somme est %d\n",s);
	printf("Le produit est %d",p);
}

int main(){
	
	int a,b;
	
	printf("Inserez limite 1 : ");
	scanf("%d",&a);
	
	printf("\nInserez limite 2 : ");
	scanf("%d",&b);
	
	lim(a,b);
	
	return 0;
	
	
}
