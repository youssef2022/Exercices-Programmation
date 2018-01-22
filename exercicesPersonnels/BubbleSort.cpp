#include<stdio.h>
#include<conio.h>

// Procédure Bubble (une technique de tri parmi d'autres)
void bubble(int tab[],int taille)
{
 int i,j; // variables d'incrémentation
 int temp; // Variable temporaire

 for(i=1;i<taille;i++) // 1ere Boucle 
  {
    for(j=0;j<taille-i;j++) // 
     {
      if(tab[j]>tab[j+1]) // Comparaison logique
       {
       	
       	// Changement de position de l'element j avec l'element j+1
        temp=tab[j];
        tab[j]=tab[j+1]; 
        tab[j+1]=temp;
       }
     }
   }
}


int main()
{

// J'initialise arr à 10
 int arr[10];
 int i;
 int size;

// Remplissage du tableau
 printf("\nDonnez la taille du tableau :");
 scanf("%d",&size);
 
 printf("\nEntrez %d elements\n",size);
 for(i=0;i<size;i++)
 scanf("%d",&arr[i]);

//Affichage avant le tri
 printf("\nAvant le tri\n");
 for(i=0;i<size;i++)
 printf("%d   ",arr[i]);

// Appel de notre procédure/fonction Bubble
	// Cette fonction prend en argument un tableau et sa taille
 bubble(arr,size);

//Affichage apres tri
 printf("\nApres le tri\n");
 for(i=0;i<size;i++)
 printf("%d   ",arr[i]);

return 0;
}
