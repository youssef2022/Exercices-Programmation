#include<stdio.h>
#include<stdlib.h>
int main()
{
	float TB,prix;
	int NumJr,Age;
	
	printf("Donnez votre age :");
	scanf("%d",&Age);
	printf("Donnez le tarif de base :");
	scanf("%f",&TB);
	
	printf("=== Tarif ===\n");
 	 printf("1.Lundi\n");
 	 printf("2.Mardi\n");
 	 printf("3.Mercredi\n");
 	 printf("4.Jeudi\n");
 	 printf("5.Vendredi\n");
 	 printf("6.Samedi\n"); 
 	 printf("7.Dimanche\n");
 	 printf("\n");
    scanf("%d", &NumJr);
	
	switch(NumJr)
	{ 
		case 1 : case 4 :
			if(Age >= 18 && Age <= 35)
			{	
				prix = TB * 0.75;
			}
			else
			{
				prix = TB;
			}
		break;
		case 2 :
			if(Age >= 60 || Age <= 10)
			{
				prix = TB * 0.65;
		 }
			else
			{
				prix = TB;
			}
		break;
		case 3 :
			if(Age <= 15)
			{
				prix = TB * 0.50;
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
