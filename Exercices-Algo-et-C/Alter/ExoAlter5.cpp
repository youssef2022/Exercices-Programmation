#include <stdio.h>
#include <stdlib.h>

int main()
{
	int j, m, a, nbf;
	printf("Donner une date : jj/mm/aaaa : ");
	scanf("%d/%d/%d", &j, &m, &a);
	
	if(a%4 ==0 && a%100 !=0 || a%400 == 0)
	{
		nbf = 29;
	}else{
		nbf = 28;
	}
	switch(m)
	{
		case 1 : case 3 : case 5 : case 7 : case 8 : case 10 : case 12 :
			if(j >= 1 && j <= 31)
			{
				printf("La date est valide");
			}else{
				printf("La date est erronee");
			}
			
		break;
			
		case 4 : case 6 : case 9 : case 11 :
			if(j >= 1 && j <= 30)
			{
				printf("La date est valide");
			}else{
				printf("La date est erronee");
			}
			
		break;
				
		case 2 :
			if(j >= 1 && j <= nbf)
			{
				printf("La date est valide");
			}else{
				printf("La date est erronee");
			}
			
			break;
			
		default : printf("Erreur de saisie");
		
		break;
		
	}
	printf("\n");
	system("Pause");
	return(0);
}
