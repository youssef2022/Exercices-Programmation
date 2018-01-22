#include<stdio.h>
#include<stdlib.h>

int main()
{
	float TB,prix;
	int NumJr,Age;
	
	printf("Donnez votre age :");
	scanf("%f",&Age);
	printf("Donnez le numero du jour :");
	scanf("%d",&NumJr);
	printf("Donnez le tarif de base :");
	scanf("%f",&TB);
	
	switch(NumJr)
	{ 
		case 1 : case 4 :
			if(Age <= 18 && Age <= 35)
			{	
				prix = TB*0.75;
			}
			else
			{
				prix = TB;
			}
			
		break;
		
		case 2 :
			if(Age >= 60 || Age <= 10)
			{
				prix = TB*0.65;
			}
			else
			{
				prix = TB;
			}
			
		break;
		
		case 3 :
			if(Age <= 15)
			{
				prix = TB*0.50;
			}
			else
			{
				prix = TB;
			}
			
		break;
		
		case 5 : case 6 : case 7 :
			prix = TB;
			
		break;
		
		default :
			printf("Erreur de saisie");
			
		break;
		
	}
	
	printf("Le prix a payer est : %.2fE", prix);
	printf("\n");
	system("Pause");
	return(0);
}
