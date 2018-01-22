#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int tablemultiplication(int nbr)
{
	int res,m;
	printf("\n+===========================+");
	for(m=1;m<=10;m++)
	{
	res=nbr*m;
	printf("\n| %d x %d = %d",m,nbr,res);	
		if (res<10)
		{
			printf("                 |");
		}
		else if (res>=10 && res<100)
		{
			if (m<10)
			{
				printf("                |");
			}
			else if(m>=10)
			{
				printf("               |");
			}
		}
		else if (res>=100 && res<1000)
		{
			if(m<10)
			{
				printf("               |");
			}
			else if (m>=10)
			{
				printf("               |");
			}
		}
		else if (res>1000 && res<10000)
		{
			if(m<10)
			{
				printf("              |");
			}
			else if (m>=10)
			{
				printf("             |");
			}
		}
	}
	printf("\n+===========================+");
return 0;
}

int tablediviseur(int nbr)
{
	int d;
	int compteur=0;
	printf("\n+========================================+");
	for (d=1;d<=nbr;d++)
	{
		if(nbr%d==0)
		{
			compteur++;
			printf("\n| Le diviseur de votre nombre est :%d",d);
			if(d>=10 && d<100)
				{
					printf("    |");
				}
			else if(d>=100 && d<1000)
				{
					printf("   |");
				}
			else if(d>=1000 && d<10000)
				{
					printf("  |");
				}
			else if(d>=10000)
				{
					printf(" |");
				}
			else if(d<10)
				{
					printf("     |");
				}
		}
	}
	printf("\n+========================================+");
return compteur;
}

int nbpremier(int nbr)
{
	int d;
	int compteur=0;
	
	for (d=1;d<=nbr;d++)
	{
		if(nbr%d==0)
		{
			compteur++;
		}
	}
return compteur;
}

int nbparfait(int nbr)
{
	printf("\n+==============================================+");
	int nbrparfait,val;
	
	val=3;
	
	if(nbr%2!=0)
	{
		printf("\n| Votre nombre n'est pas parfait               |");
		printf("\n+==============================================+");
	}
	else
	{
		if(nbr==6)
		{
			printf("\n| Votre nombre est parfait                     |");  
			printf("\n+==============================================+");  //nombre parfait = 6 // 28 // 496 // 8128
		}
		
		nbrparfait=6;
		
		while(nbr>nbrparfait)
		{
				while(nbpremier(val)!=2 && nbpremier(pow(2,val)-1)!=2)
				{
					val=val+2;
				}
				nbrparfait=pow(2,val-1)*(pow(2,val)-1);
				printf("\n+==============================================+");
				printf("\n| Le nombre parfait avant et/ou apres est : %d |",nbrparfait);
				if(nbr==nbrparfait)
				{
				printf("\n| Votre nombre est parfait                     |");
				printf("\n+==============================================+");
			    }
			    if(nbr<nbrparfait)
				{
				printf("\n| Votre nombre n'est pas parfait               |");
				printf("\n+==============================================+");
			    }
			    val=val+2;
		}
	}
		
return 0;
}

int calfacto(int nbr)
{	
	double res,cpt;
	res=1;
	cpt=nbr;
	
	if(nbr==0 || nbr==1)
	{
		printf("\n+========================================+");
		printf("\n| La factorielle de %d est : %.0f            |",nbr,res);
		printf("\n+========================================+");
	}
	else
	{
		while(cpt>1)
		{
			res=res*cpt;
			cpt=cpt-1;
			
		}
		printf("\n+========================================+");
		printf("\n| La factorielle de %d est : %.0f            |", nbr,res);
		printf("\n+========================================+");
	}

return 0;
}

int calfibo(int nbr)
{
	int i,j,temp,k;
	i=0;
	j=1;
	
	for(k=0;k<nbr;k++)
	{
		temp=i+j;
		i=j;
		j=temp;
	}
	printf("\n+==========================================+");
	printf("\n| Votre nombre Fibonacci est : %d           |",i);
	printf("\n+==========================================+");
	
return 0;
}

int pascal(int nbr)
{
	double valeur,i,j;
	
	printf("\n+==============================================================+");
	printf("\n| Votre tableau de Pascal est :                                |");
	
	for(i=0;i<=nbr;i++)
	{
		valeur=1;
		printf("\n| %.0f",valeur);
		
		for(j=1;j<=i;j++)
		{
			valeur=valeur*(i-j+1)/j;
			printf("  %.0f",valeur);
		}
		printf("\n                                                               |");
	}
	
	printf("\n+==============================================================+");
	
return 0;
}

int converbinaire(int nbr)
{
	int X1, X2, X3, X4, X5, X6, X7, X8;
	int Y1, Y2, Y3, Y4, Y5, Y6, Y7, Y8;
	int Z1, Z2, Z3, Z4, Z5, Z6, Z7, Z8;
	int W1, W2, W3, W4, W5, W6, W7, W8;
	
	X1=nbr;

	
	if (X1 < 0 || X1 >= 256)
		printf("Entree erronee");
	else
		{
			if (X1 < 256)
			{
				Y1=X1/2;  //binaire = 1  //hexa = 1
				Z1=Y1*2;
				W1=X1-Z1;
		
				X2=Y1;
			
				Y2=X2/2;  //binaire = 2  //hexa = 2
				Z2=Y2*2;
				W2=X2-Z2;
		
				X3=Y2;
		
				Y3=X3/2;  //binaire = 4  //hexa = 4
				Z3=Y3*2;
				W3=X3-Z3;
		
				X4=Y3;
		
				Y4=X4/2;  //binaire = 8  //hexa = 8
				Z4=Y4*2;
				W4=X4-Z4;
		
				X5=Y4;
	
				Y5=X5/2;  //binaire = 16  //hexa = 1
				Z5=Y5*2;
				W5=X5-Z5;
		
				X6=Y5;
			
				Y6=X6/2;  //binaire = 32  //hexa = 2
				Z6=Y6*2;
				W6=X6-Z6;
		
				X7=Y6;
		
				Y7=X7/2;  //binaire = 64  //hexa = 4
				Z7=Y7*2;
				W7=X7-Z7;
			
				X8=Y7;
		
				Y8=X8/2;  //binaire = 128  //hexa = 8
				Z8=Y8*2;
				W8=X8-Z8;
				
				printf("\n+=========================================================+");
				printf("\n| Votre chiffre decimal en binaire est : %d%d%d%d%d%d%d%d |",W8, W7, W6, W5, W4, W3, W2, W1);
				printf("\n+=========================================================+");
			}
		}
return 0;
}

int main()
{
	int nbr;
	
	printf("Veuillez entrez votre nombre :");
	scanf("%d",&nbr);
	
	tablemultiplication(nbr);
	tablediviseur(nbr);
	if (nbpremier(nbr)==2)
	{
		printf("\n+==========================+");
		printf("\n| Votre nombre est premier |");
		printf("\n+==========================+");
	}
	else 
	{
		printf("\n+================================+");
		printf("\n| Votre nombre n'est pas premier |");
		printf("\n+================================+");
	}
	nbparfait(nbr);
	calfacto(nbr);
	calfibo(nbr);
	pascal(nbr);
	converbinaire(nbr);
	
return 0;	
}

